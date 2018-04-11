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
module round(input leading_zeros, input sign_rep[11:0], input F[3:0]);
s
	integer 5th_position, 5th_bit;
	
	//find the 5th bit which decides the rounding
	5th_position = (12 - leading_zeros - 5);
	5th_bit = sign_rep[5th_position];
	
	if (5th_bit)
	begin
		//check for overflow
		if(F[3:0] == 4'b1111)
			begin
				//check to see if there will be an overflow, and if that's possible
				if(E[2:0] == 3'b111)
					begin
					end
				else
					begin
					//process the overflow
					F = {1'b0, F[2:0]}
					F = F + 1;
					E = E + 1;
					end
			end
		else
			begin
				F = F + 1;
			end
	end

endmodule
