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
	led,
	
	// inputs
	sw, btnS, btnR, clk,
    );
	// Automatic Input/Output
	input [7:0] sw;
	input btnS;
	input btnR;
	input clk;

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
		
	wire [7:0] segs_second0;
	wire [7:0] segs_second1;
	wire [7:0] segs_minute0;
	wire [7:0] segs_minute1;
	
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
				inst_wd[7:0] <= 0;
				step_d[2:0] <= 0;
			end
		else if (clk_en)
			begin
				inst_wd[7:0] <= sw[7:0];
				step_d[2:0] <= {btnS, step_d[2:1]};
			end
	
	wire is_btnS_posedge;
	assign is_btnS_postedge = ~step_d[0] & step_d[1];
	always @ (posedge clk)
		if(rst)
			inst_pause <= 1'b0;
		else if (clk_en_d)
			inst_pause <= is_btnS_posedge;
		else
			inst_pause <= 0;

	/////////////////////////////////////////		
	////////// Instruction Counter //////////
	/////////////////////////////////////////

	always @ (posedge clk)
		if (rst)
			inst_cnt <= 0;
		else if (inst_pause)
			inst_cnt <= inst_cnt + 1;
			
	assign led[7:0] = inst_cnt[7:0];
	
	counter counter_ (
		// inputs
		.clk(clk), .rst(rst),
		
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

	display_single display_1 (.digit(counter1), .segs(segs_second0));
	display_single display_2 (.digit(counter2), .segs(segs_second1));
	display_single display_3 (.digit(counter3), .segs(segs_minute0));
	display_single display_4 (.digit(counter4), .segs(segs_minute1));
	
	

endmodule
