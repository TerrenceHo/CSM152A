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
	led, seg, an, dp, hsync, vsync, vgaRed, vgaGreen, vgaBlue,
	
	// inputs
	sw, btnS, btnR, btn1, clk
    );
	// Automatic Input/Output
	input [7:0] sw;
	input btnS;
	input btnR;
	input btn1;
	input clk;
	output [7:0] seg;
	output [3:0] an;
	output [7:0] led;
	output dp;
	output [2:0] vgaRed;
	output [2:0] vgaGreen;
	output [2:0] vgaBlue;
	output hsync;
	output vsync;

	// Custom variables
	wire rst;
	wire arst_i;
	wire [17:0] clk_dv_inc;

	reg [1:0] arst_ff;
	reg [16:0] clk_dv;
	reg clk_en;
	reg clk_en_d;

	reg inst_pause;
	reg inst_send;
	reg [2:0] step_d;
	reg [2:0] step_e;
	reg [7:0] inst_cnt;
	reg is_running = 1'b0;
	reg is_game_over = 1'b0;
	
	wire[1:0] sel = sw[1:0];
	wire color_sel = sw[2];
	wire start_color = sw[3];
	wire [4:0] num = sw[7:4];
	wire traffic0_color;
	wire traffic1_color;
	wire traffic2_color;
	wire traffic3_color;
	
	wire dclk;
	wire animateClk;
	
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
				step_e[2:0] <= 0;
			end
		else if (clk_en)
			begin
				step_d[2:0] <= {btnS, step_d[2:1]};
				step_e[2:0] <= {btn1, step_e[2:1]};
			end
	
	wire is_btnS_posedge;
	wire is_btn1_posedge;
	assign is_btnS_posedge = ~step_d[0] & step_d[1];
	assign is_btn1_posedge = ~step_e[0] & step_e[1];
	always @ (posedge clk)
		if(rst)
			inst_pause <= 1'b0;
		else if (clk_en_d)
			inst_pause <= is_btnS_posedge;
		else
			inst_pause <= 0;
			
	always @ (posedge clk)
		if (rst)
			is_running <= 1'b0;
		else if (is_btnS_posedge)
			is_running <= 1; //~is_running;
			
	/////////////////////////////////////////		
	////////// Instruction Counter //////////
	/////////////////////////////////////////
	always @ (posedge clk)
		if (rst)
			inst_cnt <= 0;
		else if (inst_pause)
			inst_cnt <= inst_cnt + 1;
	assign led[7:0] = inst_cnt[7:0];

	/////////////////////////////
	////////// Modules //////////
	/////////////////////////////
	stopwatch stopwatch_(
		// outputs
		.seg(seg), .an(an),
		// inputs
		.rst(rst), .clk(clk), .clk_en_d(clk_en_d), .inst_pause(is_btnS_posedge),
		.is_game_over(is_game_over)
	);
	
	traffic_light light0 ( //inputs
		.clk(clk), .rst(rst), .inst_send(is_btn1_posedge), .is_running(is_running),
		.traffic_sel(sel), .color_sel(color_sel), .start_color(start_color), 
		.input_time(num), .traffic_num(2'b00),
		// outputs
		.traffic_color(traffic0_color)
	);
	traffic_light light1 ( //inputs
		.clk(clk), .rst(rst), .inst_send(is_btn1_posedge), .is_running(is_running),
		.traffic_sel(sel), .color_sel(color_sel), .start_color(start_color), 
		.input_time(num), .traffic_num(2'b01),
		// outputs
		.traffic_color(traffic1_color)
	);
	traffic_light light2 ( //inputs
		.clk(clk), .rst(rst), .inst_send(is_btn1_posedge), .is_running(is_running),
		.traffic_sel(sel), .color_sel(color_sel), .start_color(start_color), 
		.input_time(num), .traffic_num(2'b10),
		// outputs
		.traffic_color(traffic2_color)
	);
	traffic_light light3 ( //inputs
		.clk(clk), .rst(rst), .inst_send(is_btn1_posedge), .is_running(is_running),
		.traffic_sel(sel), .color_sel(color_sel), .start_color(start_color), 
		.input_time(num), .traffic_num(2'b11),
		// outputs
		.traffic_color(traffic3_color)
	);
	
	// VGA controller
	// generate 7-segment clock & display clock

	clockdiv U1(
		.clk(clk),
		.clr(rst),
		// .segclk(segclk),
		.animateClk(animateClk),
		.dclk(dclk)
	);

	vga640x480 U3(
		.animateClk(animateClk),
		.dclk(dclk),
		.clr(rst),
		.traffic0_color(traffic0_color),
		.traffic1_color(traffic1_color),
		.traffic2_color(traffic2_color),
		.traffic3_color(traffic3_color),
		.hsync(hsync),
		.vsync(vsync),
		.red(vgaRed),
		.green(vgaGreen),
		.blue(vgaBlue),
		.is_game_over(is_game_over)
	);


endmodule 