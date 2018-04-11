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
	 
	 input wire[11:0] D;
	 output wire S;s
	 output wire[2:0] E;
	 output wire[3:0] F;
	 
	 // temp wires
	 wire[11:0] temp_abs;
	 
	 // Modules that are executed sequentially
	 tc_to_sm block1(.in(D), .out(temp_abs), .sign(S));
	 count_extract block2(.s_m_in(temp_abs), .exp(E), .significand(F));
	 //round block3();


endmodule
