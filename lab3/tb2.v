`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:40:11 05/20/2018
// Design Name:   nexys3
// Module Name:   /home/ise/Xilinx_host/CSM152A/lab3/tb2.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: nexys3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb2;

	// Inputs
	reg [7:0] sw;
	reg btnS;
	reg btnR;
	reg clk;

	// Outputs
	wire [7:0] led;
	wire [7:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	nexys3 uut (
		.led(led), 
		.seg(seg), 
		.an(an), 
		.sw(sw), 
		.btnS(btnS), 
		.btnR(btnR), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		sw = 0;
		btnS = 0;
		btnR = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

