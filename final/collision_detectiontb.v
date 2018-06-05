`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:09:07 06/01/2018
// Design Name:   collision_detection
// Module Name:   /home/ise/Xilinx_host/CSM152A/lab4/collision_detectiontb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: collision_detection
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module collision_detectiontb;

	// Inputs
	reg clk;
	reg carX;
	reg carY;
	reg carOrient;
	reg carIndex;
	reg collision;

	// Instantiate the Unit Under Test (UUT)
	collision_detection uut (
		.clk(clk), 
		.carX(carX), 
		.carY(carY), 
		.carOrient(carOrient), 
		.carIndex(carIndex), 
		.collision(collision)
	);

	initial begin
		// Initialize Inputs
		carX = 0;
		carY = 0;
		carOrient = 0;
		carIndex = 0;
		collision = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		carX = 10;
		carY = 10;
		carOrient = 1;
		carIndex = 0;
		
		#100
		carX = 10;
		carY = 20;
		carOrient = 0;
		carIndex = 1;
		// Add stimulus here

	end
   always #5 clk = ~clk;
	
endmodule

