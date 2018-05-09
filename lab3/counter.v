`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:33:42 05/07/2018 
// Design Name: 
// Module Name:    counter 
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
/////////// ///////////////////////////////////////////////////////////////////////
module counter(input clk, input rst,
	output reg [3:0] cur1stCnt, output reg [2:0] cur2ndCnt, 
	output reg [3:0] cur3rdCnt, output reg [2:0] cur4thCnt
    );

always @(posedge clk)
begin
if (rst)
begin
	cur1stCnt <= 4'b0000;
	cur2ndCnt <= 3'b000;
	cur3rdCnt <= 4'b0000;
	cur4thCnt <= 3'b000;
end
else if (cur1stCnt == 4'b1001)
begin
	cur1stCnt <= 4'b0000;
	cur2ndCnt <= cur2ndCnt + 1'b1;
	if (cur2ndCnt == 3'b101)
	begin
		cur2ndCnt <= 3'b000;
		cur3rdCnt <= cur3rdCnt + 1'b1;
		if (cur3rdCnt == 4'b1001)
		begin                                                                                                             
			cur3rdCnt <= 4'b0000;
			cur4thCnt <= cur4thCnt + 1'b1;
			if (cur4thCnt == 3'b101)
				cur4thCnt <= 3'b000;
		end
	end
end
else if (cur1stCnt < 4'b1001)
	cur1stCnt <= cur1stCnt + 1'b1;
end

endmodule
