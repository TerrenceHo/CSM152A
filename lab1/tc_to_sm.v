`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:53:19 04/10/2018 
// Design Name: 
// Module Name:    tc_to_sm 
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
module tc_to_sm( input, output, sign );
input [11:0] in;
output [11:] out;
output sign;

assign sign = in[11];

assign output = (sign == 0) ? in : *~in + 1b1);

endmodule
