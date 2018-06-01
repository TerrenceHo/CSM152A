`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:39 05/08/2018 
// Design Name: 
// Module Name:    Display 
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
module seven_seg_display(min0, min1, sec0, sec1,
		faster_clk, blink_clk, blink, seg, an);

	input[3:0] sec0;
	input[2:0] sec1;
	input[3:0] min0;
	input[2:0] min1;

	input faster_clk;

	output [3:0] an;
	output [7:0] seg;
	
	wire[3:0] mins_tens;
	wire[3:0] mins_ones;
	wire[3:0] secs_tens;
	wire[3:0] secs_ones;
	
	reg[3:0] current_digit;
	reg[1:0] counter = 0;
	reg[3:0] an_temp;
	reg[7:0] seg_temp;
	
	reg [3:0] isDisplaying = 4'b0000;
	
	always @ (posedge blink_clk) begin
		if (blink)
			isDisplaying = ~isDisplaying;
		else
			isDisplaying = 4'b0000;
	end
	
	always @ (posedge faster_clk) begin
		case(counter)
			2'b00:
				begin
					current_digit <= sec0;
					an_temp <= 4'b0111;
					counter <= counter + 1;
				end
			2'b01:
				begin
					current_digit <= sec1;
					an_temp <= 4'b1110;
					counter <= counter + 1;
				end
			2'b10:
				begin
					current_digit <= min0;
					an_temp <= 4'b1101;
					counter <= counter + 1;
				end
			2'b11:
				begin
					current_digit <= min1;
					an_temp <= 4'b1011;
					counter <= counter + 1;
				end
		endcase
			
		case(current_digit)
			4'b0000: seg_temp = 8'b11000000;
			4'b0001: seg_temp = 8'b11111001;
			4'b0010: seg_temp = 8'b10100100;
			4'b0011: seg_temp = 8'b10110000;
			4'b0100: seg_temp = 8'b10011001;
			4'b0101: seg_temp = 8'b10010010;
			4'b0110: seg_temp = 8'b10000010;
			4'b0111: seg_temp = 8'b11111000;
			4'b1000: seg_temp = 8'b10000000;
			4'b1001: seg_temp = 8'b10010000;
			default: seg_temp = 8'b11111111;
		endcase
		
	end
		
	assign seg = seg_temp;
	assign an = an_temp;
endmodule
