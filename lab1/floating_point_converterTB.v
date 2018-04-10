`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:16:38 04/10/2018
// Design Name:   floating_point_converter
// Module Name:   /home/ise/SharedFolderVM/CSM152A/lab1/floating_point_converterTB.v
// Project Name:  intro
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: floating_point_converter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module floating_point_converterTB;

	// Inputs
	reg [0:11] D;

	// Outputs
	wire S;
	wire [0:2] E;
	wire [0:3] F;

	// Instantiate the Unit Under Test (UUT)
	floating_point_converter uut (
		.D(D), 
		.S(S), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

