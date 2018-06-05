`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:40:42 06/05/2018
// Design Name:   collision_detection
// Module Name:   /home/ise/SharedFolderVM/CSM152A/final/collision_detectiontb.v
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
	reg [9:0] carX;
	reg [9:0] carY;
	reg [1:0] carOrient;
	reg [3:0] carIndex;

	// Outputs
	wire collision;

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
//		collision = 0;
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
		
		#100
		carX = 10;
		carY = 130;
		carOrient = 0;
		carIndex = 1;

	end
   always #5 clk = ~clk;
      
endmodule

