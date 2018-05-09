`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:42:21 05/07/2018
// Design Name:   clock
// Module Name:   C:/Users/152/Desktop/lab3/clocktb.v
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

module clocktb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire clk2Hz;
	wire clk1Hz;
	wire clk400Hz;
	wire clk1ishHz;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.clk(clk),
		.rst(rst),
		.clk2Hz(clk2Hz), 
		.clk1Hz(clk1Hz), 
		.clk400Hz(clk400Hz),
		.clk1ishHz(clk1ishHz)
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
   always #10 clk = ~clk;  
endmodule

