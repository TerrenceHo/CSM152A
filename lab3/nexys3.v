`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:01 05/08/2018 
// Design Name: 
// Module Name:    nexys3 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module nexys3(
	// Outputs
	led, seg, an,
	
	// inputs
	sel, adj, num, btnS, btnR, clk
    );
	// Automatic Input/Output
	input [1:0] sel;
	input adj;
	input [3:0] num;
	input btnS;
	input btnR;
	input clk;
	 
	output [7:0] seg;
	output [3:0] an;
	output [7:0] led;
	
	// Custom variables
	wire rst;
	wire arst_i;
	wire [17:0] clk_dv_inc;

	reg [1:0] arst_ff;
	reg [16:0] clk_dv;
	reg clk_en;
	reg clk_en_d;

	reg [7:0] inst_wd;
	reg inst_pause;
	reg is_paused = 0;
	reg [2:0] step_d;

	reg [7:0] inst_cnt;
	
	wire [3:0] counter1;
	wire [2:0] counter2;
	wire [3:0] counter3;
	wire [2:0] counter4;
	
	wire clk1Hz;
	wire clk2Hz;
	wire clk400Hz;
	wire clk1ishHz;
		
//	wire [7:0] segs_second0;
//	wire [7:0] segs_second1;
//	wire [7:0] segs_minute0;
//	wire [7:0] segs_minute1;
//	wire [7:0] blank_digit;
	
	/////////////////
	// Async Reset //
	/////////////////
	assign arst_i = btnR;
	assign rst = arst_ff[0];

	always @ (posedge clk or posedge arst_i)
		if (arst_i) 
			arst_ff <= 2'b11;
		else
			arst_ff <= {1'b0, arst_ff[1]};
			
	///////////////////////////////////
	////////// Timing Signal //////////
	///////////////////////////////////
			
	assign clk_dv_inc = clk_dv + 1;
	always @ (posedge clk)
		if (rst)
			begin
				clk_dv <= 0;
				clk_en <= 1'b0;
				clk_en_d <= 1'b0;
			end
		else
			begin
				clk_dv <= clk_dv_inc[16:0];
				clk_en <= clk_dv_inc[17];
				clk_en_d <= clk_en;
			end
	
	///////////////////////////////////////////////		
	// Instruction Stepping Control / Debouncing //
	///////////////////////////////////////////////
	always @ (posedge clk) 
		if (rst)
			begin
				step_d[2:0] <= 0;
			end
		else if (clk_en)
			begin
				step_d[2:0] <= {btnS, step_d[2:1]};
			end
	
	wire is_btnS_posedge;
	assign is_btnS_posedge = ~step_d[0] & step_d[1];
	always @ (posedge clk)
		if(rst)
			inst_pause <= 1'b0;
		else if (clk_en_d)
			inst_pause <= is_btnS_posedge;
		else
			inst_pause <= 0;
			
	//////////////////////
	///// Pause Reg //////
	//////////////////////
	always @ (posedge clk)
		if (rst) 
			is_paused <= 1'b0;
		else if (clk_en_d && (is_btnS_posedge == 1) && adj == 0)
			if (is_paused == 1'b1)
				is_paused <= 1'b0;
			else
				is_paused <= 1'b1;
			
	/////////////////////////////////////////		
	////////// Instruction Counter //////////
	/////////////////////////////////////////

	always @ (posedge clk)
		if (rst)
			inst_cnt <= 0;
		else if (inst_pause)
			inst_cnt <= inst_cnt + 1;
			
	///////////////////
	///// Modules /////
	///////////////////
	
	counter counter_ (
		// inputs
		.clk(clk1Hz), .rst(rst), .send(inst_pause), .pause(is_paused),
		.num(num), .sel(sel), .adj(adj),
		
		// outputs
		.cur1stCnt_W(counter1), .cur2ndCnt_W(counter2), 
		.cur3rdCnt_W(counter3), .cur4thCnt_W(counter4)
	);

	clock clock_ (
		// inputs
		.clk(clk), .rst(rst),
		// outputs
		.clk1Hz_W(clk1Hz), .clk2Hz_W(clk2Hz),
		.clk400Hz_W(clk400Hz), .clk1ishHz_W(clk1ishHz)
	);
	
	wire [7:0] temp_seg;
	wire [3:0] temp_an;
	Display display_ (
		// inputs
		.sec0(counter1),
		.sec1(counter2),
		.min0(counter3),
		.min1(counter4),
		
		.faster_clk(clk400Hz),
		.refresh_clk(clk1ishHz),
		
		// outputs
		.seg(temp_seg),
		.an(temp_an)
	);
	
	assign seg[7:0] = temp_seg;
	assign an[3:0] = temp_an;
	assign led[7:0] = inst_cnt[7:0];
endmodule
