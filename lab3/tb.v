`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:34:09 05/12/2018
// Design Name:   nexys3
// Module Name:   /home/ise/SharedFolderVM/CSM152A/lab3/tb.v
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

module tb;

	// Inputs
	reg [1:0] sel;
	reg adj;
	reg [3:0] num;
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
		.sel(sel), 
		.adj(adj), 
		.num(num), 
		.btnS(btnS), 
		.btnR(btnR), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		sel = 2'b00;
		adj = 0;
		num = 0;
		btnS = 0;
		btnR = 1;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		btnR = 0;
		
//		 Add stimulus here
		#100
		sel = 2'b00;
		adj = 1'b1;
		num = 4'b1000;
		
		#500
		btnS = 1;
		
		#100
		btnS = 0;
		adj = 0;
	end
	
	always begin
		#5 clk = ~clk;
	end
      
endmodule

