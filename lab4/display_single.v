`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:26 05/09/2018 
// Design Name: 
// Module Name:    display 
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
module display_single(
		// input
		digit, 

		//output
		segs,
	);
	 
	input [3:0] digit;
	output wire [7:0] segs;
	
	reg [7:0] temp_segments;
	always @ (*) begin
		case(digit)
			4'b0000: temp_segments = 8'b11000000;
			4'b0001: temp_segments = 8'b11111001;
			4'b0010: temp_segments = 8'b10100100;
			4'b0011: temp_segments = 8'b10110000;
			4'b0100: temp_segments = 8'b10011001;
			4'b0101: temp_segments = 8'b10010010;
			4'b0110: temp_segments = 8'b10000010;
			4'b0111: temp_segments = 8'b11111000;
			4'b1000: temp_segments = 8'b10000000;
			4'b1001: temp_segments = 8'b10010000;
			default: temp_segments = 8'b11111111;
		endcase
	end
	
	assign segs = temp_segments;
endmodule
