`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:52:12 05/07/2018
// Design Name:   counter
// Module Name:   C:/Users/152/Desktop/lab3/countertb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module countertb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [3:0] cur1stCnt;
	wire [2:0] cur2ndCnt;
	wire [3:0] cur3rdCnt;
	wire [2:0] cur4thCnt;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.rst(rst), 
		.cur1stCnt(cur1stCnt), 
		.cur2ndCnt(cur2ndCnt), 
		.cur3rdCnt(cur3rdCnt),
		.cur4thCnt(cur4thCnt)
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

