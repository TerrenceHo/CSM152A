`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:09:44 04/10/2018 
// Design Name: 
// Module Name:    floating_point_converter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module floating_point_converter(
		D, S, E, F
    );
	 
	 input wire[0:11] D;
	 output wire S;
	 output wire[0:2] E;
	 output wire[0:3] F;
	 
	 // Modules that are executed sequentially
	 tc_to_sm block1();
	 count_extract block2();
	 round block3();


endmodule
