`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:52:36 06/01/2018
// Design Name:   traffic_light
// Module Name:   /home/ise/SharedFolderVM/CSM152A/lab4/traffic_light_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: traffic_light
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module traffic_light_tb;

	// Inputs
	reg clk;
	reg rst;
	reg inst_send;
	reg inst_go;
	reg [1:0] traffic_sel;
	reg color_sel;
	reg start_color;
	reg [3:0] input_time;
	reg [1:0] traffic_num;

	// Outputs
	wire traffic_color;

	// Instantiate the Unit Under Test (UUT)
	traffic_light uut (
		.clk(clk), 
		.rst(rst), 
		.inst_send(inst_send), 
		.inst_go(inst_go), 
		.traffic_sel(traffic_sel), 
		.color_sel(color_sel), 
		.start_color(start_color), 
		.input_time(input_time), 
		.traffic_num(traffic_num), 
		.traffic_color(traffic_color)
	);
	
	always begin
		#1000000 clk = ~clk;
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		inst_send = 0;
		inst_go = 0;
		traffic_sel = 0;
		color_sel = 0;
		start_color = 0;
		input_time = 4'b0011;
		traffic_num = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 0;
		// Add stimulus here
		
		inst_send = 1;
	end
      
endmodule

