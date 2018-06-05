`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:41:25 05/20/2018
// Design Name:   clock
// Module Name:   /home/ise/Xilinx_host/CSM152A/lab3/clktb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clktb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire clk2Hz_W;
	wire clk1Hz_W;
	wire clk400Hz_W;
	wire clk1ishHz_W;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.clk(clk), 
		.rst(rst), 
		.clk2Hz_W(clk2Hz_W), 
		.clk1Hz_W(clk1Hz_W), 
		.clk400Hz_W(clk400Hz_W), 
		.clk1ishHz_W(clk1ishHz_W)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 0;  
		// Add stimulus here

	end
    
	always #5 clk = ~clk;
endmodule

