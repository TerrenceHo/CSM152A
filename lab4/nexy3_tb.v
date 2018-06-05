`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:13:56 06/04/2018
// Design Name:   nexys3
// Module Name:   /home/ise/SharedFolderVM/CSM152A/lab4/nexy3_tb.v
// Project Name:  lab4
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

module nexy3_tb;

	// Inputs
	reg [7:0] sw;
	reg btnS;
	reg btnR;
	reg btn1;
	reg clk;

	// Outputs
	wire [7:0] led;
	wire [7:0] seg;
	wire [3:0] an;
	wire dp;
	wire hsync;
	wire vsync;
	wire [2:0] vgaRed;
	wire [2:0] vgaGreen;
	wire [2:0] vgaBlue;

	// Instantiate the Unit Under Test (UUT)
	nexys3 uut (
		.led(led), 
		.seg(seg), 
		.an(an), 
		.dp(dp), 
		.hsync(hsync), 
		.vsync(vsync), 
		.vgaRed(vgaRed), 
		.vgaGreen(vgaGreen), 
		.vgaBlue(vgaBlue), 
		.sw(sw), 
		.btnS(btnS), 
		.btnR(btnR), 
		.btn1(btn1), 
		.clk(clk)
	);
	
	always begin
//		 #1000000 clk = ~clk;
		#5 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		sw = 0;
		btnS = 0;
		btnR = 1;
		btn1 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		btnR = 0;
      btnS = 1;  
		
		// Add stimulus here

	end
      
endmodule

