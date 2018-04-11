`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:10:17 04/11/2018
// Design Name:   tc_to_sm
// Module Name:   /home/ise/Xilinx_host/CSM152A/tc_to_smTB.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: tc_to_sm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tc_to_smTB;

	// Inputs
	reg [11:0] in;

	// Outputs
	wire [11:0] out;
	wire sign;

	// Instantiate the Unit Under Test (UUT)
	tc_to_sm uut (
		.in(in), 
		.out(out), 
		.sign(sign)
	);

	initial begin
		// Initialize Inputs
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      in = 12'b000000000001;

		#100
		in = 12'b111111111111;
		// Add stimulus here

	end
      
endmodule

