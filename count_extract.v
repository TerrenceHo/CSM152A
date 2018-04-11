`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:18:15 04/11/2018 
// Design Name: 
// Module Name:    count_extract 
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
module count_extract(s_m_in, exp, significand 
    );
output [2:0] exp;
output [3:0] significand;
input [11:0] s_m_in;

reg [2:0] exp;
reg [3:0] significand;

always @ (s_m_in)
begin
	if (s_m_in[10] == 1)
	begin
		exp = 7;
		significand = s_m_in[10:7];
	end
	else if (s_m_in[9] == 1)
	begin
		exp = 6;
		significand = s_m_in[9:6];
	end
	else if (s_m_in[8] == 1)
	begin
		exp = 5;
		significand = s_m_in[8:5];
	end
	else if (s_m_in[7] == 1)
	begin
		exp = 4;
		significand = s_m_in[7:4];
	end
	else if (s_m_in[6] == 1)
	begin
		exp = 3;
		significand = s_m_in[6:3];
	end
	else if (s_m_in[5] == 1)
	begin
		exp = 2;
		significand = s_m_in[5:2];
	end	
	else if (s_m_in[4] == 1)
	begin
		exp = 1;
		significand = s_m_in[4:1];
	end
	else
	begin
		exp = 0;
		significand = s_m_in[3:0];
	end
end


endmodule
