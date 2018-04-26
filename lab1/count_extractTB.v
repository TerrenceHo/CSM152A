`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:48:09 04/11/2018
// Design Name:   count_extract
// Module Name:   /home/ise/Xilinx_host/CSM152A/count_extractTB.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: count_extract
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module count_extractTB;

	// Inputs
	reg [11:0] s_m_in;

	// Outputs
	wire [2:0] exp;
	wire [3:0] significand;

	// Instantiate the Unit Under Test (UUT)
	count_extract uut (
		.s_m_in(s_m_in), 
		.exp(exp), 
		.significand(significand)
	);

	initial begin
		// Initialize Inputs
		s_m_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      s_m_in = 12'b001000000000;  
		// Add stimulus here

	end
      
endmodule

