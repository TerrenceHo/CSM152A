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
module counter(input clk, input clk1Hz, input rst, input pause, input [3:0] num, 
	input [1:0] sel, input send, input adj,
	output wire [3:0] cur1stCnt_W, output wire [2:0] cur2ndCnt_W, 
	output wire [3:0] cur3rdCnt_W, output wire [2:0] cur4thCnt_W
    );

reg [3:0] cur1stCnt = 0;
reg [2:0] cur2ndCnt = 0;
reg [3:0] cur3rdCnt = 0;
reg [2:0] cur4thCnt = 0;

reg [3:0] cur1stCntNew = 0;
reg [2:0] cur2ndCntNew = 0;
reg [3:0] cur3rdCntNew = 0;
reg [2:0] cur4thCntNew = 0;

always @(posedge clk) begin
if (rst)
begin
	cur1stCnt <= 0;
	cur2ndCnt <= 0;
	cur3rdCnt <= 0;
	cur4thCnt <= 0;
end
else if (adj == 1'b1 && send == 1'b1)
	begin
		case(sel)
			0: cur1stCnt <= (num > 4'b1001) ? cur1stCnt : num;
			1: cur2ndCnt <= (num > 3'b101) ? cur2ndCnt : num;
			2: cur3rdCnt <= (num > 4'b1001) ? cur3rdCnt : num;
			3: cur4thCnt <= (num > 3'b101) ? cur4thCnt: num;
		endcase
	end

if (clk1Hz) begin
	if (adj == 1'b0 && pause == 1'b0)
	begin
		if (cur1stCnt == 4'b1001)
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
end
end
//always @(posedge clk) begin
//	if (rst)
//	begin
//		cur1stCntNew <= 0;
//		cur2ndCntNew <= 0;
//		cur3rdCntNew <= 0;
//		cur4thCntNew <= 0;
//	end
//	else if (adj == 1'b1 && send == 1'b1)
//	begin
//		case(sel)
//			0: cur1stCntNew <= num;
//			1: cur2ndCntNew <= num;
//			2: cur3rdCntNew <= num;
//			3: cur4thCntNew <= num;
//		endcase
//	end
//	else
//		cur1stCntNew <= 4'b1111;
//		cur2ndCntNew <= 3'b111;
//		cur3rdCntNew <= 4'b1111;
//		cur4thCntNew <= 3'b111;
//end
//
//always @(posedge clk1Hz)
//if (adj == 1'b0 && pause == 1'b0)
//begin
////	if (rst)
////	begin
////		cur1stCnt <= 4'b0000;
////		cur2ndCnt <= 3'b000;
////		cur3rdCnt <= 4'b0000;
////		cur4thCnt <= 3'b000;
////	end
//	if (cur1stCnt == 4'b1001)
//	begin
//		cur1stCnt <= 4'b0000;
//		cur2ndCnt <= cur2ndCnt + 1'b1;
//		if (cur2ndCnt == 3'b101)
//		begin
//			cur2ndCnt <= 3'b000;
//			cur3rdCnt <= cur3rdCnt + 1'b1;
//			if (cur3rdCnt == 4'b1001)
//			begin                                                                                                             
//				cur3rdCnt <= 4'b0000;
//				cur4thCnt <= cur4thCnt + 1'b1;
//				if (cur4thCnt == 3'b101)
//					cur4thCnt <= 3'b000;
//			end
//		end
//	end
//	else if (cur1stCnt < 4'b1001)
//		cur1stCnt <= cur1stCnt + 1'b1;
//end

assign cur1stCnt_W = cur1stCnt;//send ? ( (sel == 2'b00) ? cur1stCntNew : cur1stCnt ) : cur1stCnt & cur1stCntNew;
assign cur2ndCnt_W = cur2ndCnt;//send ? ( (sel == 2'b01) ? cur2ndCntNew : cur2ndCnt ) : cur2ndCnt & cur2ndCntNew;
assign cur3rdCnt_W = cur3rdCnt;//send ? ( (sel == 2'b10) ? cur3rdCntNew : cur3rdCnt ) : cur3rdCnt & cur3rdCntNew;
assign cur4thCnt_W = cur4thCnt;//send ? ( (sel == 2'b11) ? cur4thCntNew : cur4thCnt ) : cur4thCnt & cur4thCntNew;

endmodule
