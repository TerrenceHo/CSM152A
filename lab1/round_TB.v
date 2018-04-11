`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:59:50 04/11/2018
// Design Name:   round
// Module Name:   /home/ise/lab1/round_TB.v
// Project Name:  lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: round
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module round_TB;

	// Inputs
	reg leading_zeros;
	reg [11:0] sign_rep;
	reg [3:0] F;
	reg [2:0] E;

	// Outputs
	wire [3:0] FO;
	wire [2:0] EO;

	// Instantiate the Unit Under Test (UUT)
	round uut (
		.leading_zeros(leading_zeros), 
		.sign_rep(sign_rep), 
		.F(F), 
		.E(E), 
		.FO(FO), 
		.EO(EO)
	);

	initial begin
		// Initialize Inputs
		leading_zeros = 0;
		sign_rep = 0;
		F = 0;
		E = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		leading_zeros = 6;
		sign_rep = 12'b000000101100;
		F = 4'b1011;
		E = 3'b010;
		
		#100;
		
		leading_zeros = 6;
		sign_rep = 12'b000000101101;
		F = 4'b1011;
		E = 3'b010;
		
		#100;
		
		leading_zeros = 6;
		sign_rep = 12'b000000101110;
		F = 4'b1011;
		E = 3'b010;
	
		
		#100;
		
		leading_zeros = 6;
		sign_rep = 12'b000000101111;
		F = 4'b1011;
		E = 3'b010;
		
		#100;
		
		leading_zeros = 5;
		sign_rep = 12'b000001111101;
		F = 4'b1111;
		E = 3'b011;
        
		// Add stimulus here

	end
      
endmodule

