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
//	sel, adj, num,  
	sw, btnS, btnR, clk
    );
	// Automatic Input/Output
	input [7:0] sw;

	input btnS;
	input btnR;
	input clk;
	
	wire[1:0] sel = sw[1:0];
	wire adj = sw[2];
	wire [3:0] num = sw[7:4];
	
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

	reg inst_pause;
	reg [2:0] step_d;

	reg [7:0] inst_cnt;
			
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
			
	/////////////////////////////////////////		
	////////// Instruction Counter //////////
	/////////////////////////////////////////
	always @ (posedge clk)
		if (rst)
			inst_cnt <= 0;
		else if (inst_pause)
			inst_cnt <= inst_cnt + 1;
	assign led = inst_cnt;
	
	stopwatch stopwatch_(
		// outputs
		
		// inputs
		.clk(clk), .clk_en_d(clk_en_d), 
	);
endmodule
