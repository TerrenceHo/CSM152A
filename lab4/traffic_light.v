`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:58 05/30/2018 
// Design Name: 
// Module Name:    traffic_light 
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
module traffic_light(
		// inputs
		clk, rst, inst_send, inst_go, 
		traffic_sel, color, start_color, input_time, traffic_num,
		// outputs
		traffic_color
    );
	input clk;
	input rst;
	input inst_send;  // set traffic times
	input inst_go; // start counter, starting simluation
	input [1:0] traffic_num; // signifies which traffic light this is
	input [1:0] traffic_sel; // signifies if this traffic light was selected.
	input color_sel; // 1 = green, 0 = red
	input start_color; // selects which color to start with, by flipping cur_color.
	input [3:0] input_time; // time for red or green
	output traffic_color; // output of the traffic light color
	
	wire clk1Hz;
	reg is_running = 1'b0; // tells if traffic should count up
	reg cur_color; //red = 0, green = 1
	reg [4:0] red_time;
	reg [4:0] green_time;
	reg [4:0] red_count = 4'b0000;
	reg [4:0] green_count = 4'b0000;
	
	clock clock_(
		.clk(clk), .rst(rst),
		.clk1Hz_W(clk1Hz)
	);
	
	always @ (posedge clk) 
		if (rst) begin
			red_time <= 4'b1010;
			green_time <= 4'b1010;
			red_count <= 4'b0000;
			green_count <= 4'b0000;
		end
		else if (inst_go) begin
			is_running <= ~is_running;
		end
		else if (inst_send) begin
			if (traffic_sel == traffic_num) begin
				if (color_sel) begin
					green_time <= input_time;
				end
				else begin
					red_time <= input_time;
				end
				cur_color <= start_color;
			end
		end
		
	always @ (posedge clk1Hz)
		if (is_running)
			if (cur_color) begin
				green_count <= green_count + 1'b1;
				if (green_count == red_time) begin
					green_count <= 4'b0000;
					cur_color <= ~cur_color;
				end
			end
			else begin
				red_count <= red_count + 1'b1;
				if (red_count == red_time) begin
					reg_count <= 4'b0000;
					cur_color <= ~cur_color;
				end
			end

	assign traffic_color = cur_color;
endmodule
