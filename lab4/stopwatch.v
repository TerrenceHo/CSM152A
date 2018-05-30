`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:30:06 05/25/2018 
// Design Name: 
// Module Name:    stopwatch 
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
module stopwatch(
	// outputs
	seg, an,
	
	// inputs
	rst, clk, clk_en_d, inst_pause
    );
	input rst;
	input clk;
	input clk_en_d;
	input inst_pause;
	output [3:0] an;
	output [7:0] seg;
	
	reg is_paused = 1;
	wire [3:0] counter1;
	wire [2:0] counter2;
	wire [3:0] counter3;
	wire [2:0] counter4;
	wire [7:0] temp_seg;
	wire [3:0] temp_an;
	wire clk1Hz;
	wire clk2Hz;
	wire clk400Hz;
	wire clk1ishHz;

	 
	//////////////////////
	///// Pause Reg //////
	//////////////////////
	always @ (posedge clk)
		if (rst) 
			is_paused <= 1'b0;
		else if (clk_en_d && (inst_pause == 1) )
			is_paused <= ~is_paused;


	///////////////////
	///// Modules /////
	///////////////////
	counter counter_ (
		// inputs
		.clk(clk), .clk1Hz(clk1Hz), .rst(rst), .pause(is_paused),
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
	
	seven_seg_display seven_seg_display_ (
		// inputs
		.sec0(counter1), .sec1(counter2),
		.min0(counter3), .min1(counter4), .faster_clk(clk400Hz),
		// outputs
		.seg(temp_seg), .an(temp_an)
	);
	
	assign seg[7:0] = temp_seg;
	assign an[3:0] = temp_an;
	
endmodule
