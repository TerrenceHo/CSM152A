`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:07 04/11/2018 
// Design Name: 
// Module Name:    round 
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
module round(leading_zeros, sign_rep, F, E, FO, EO);

	input leading_zeros;
	input[11:0] sign_rep;
	input wire[3:0] F;
	input wire[2:0] E;
	output reg[3:0] FO;
	output reg[2:0] EO;

	reg fifth_position;
	reg fifth_bit;
	
	always @* begin
	//find the 5th bit which decides the rounding
	fifth_position = (12 - leading_zeros) - 5;
	fifth_bit = sign_rep[fifth_position];
	
	FO = F;
	EO = E;
	
	if (fifth_bit == 1'b1)
	begin
		//check for overflow
		if(F[3:0] == 4'b1111)
			begin
				//check to see if there will be an overflow, and if that's possible
				if(E[2:0] != 3'b111)
					begin
					//process the overflow
					FO = 4'b1000;
					EO = E + 1;
					end
			end
		else
			begin
				FO = F + 1;
				EO = E;
			end
	end
	end

endmodule
