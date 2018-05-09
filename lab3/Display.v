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
module Display(mins, secs, seg, an, blink_clk, faster_clk, refresh_clk);

	input[5:0] mins;
	input[5:0] secs;
	input faster_clk;
	input blink_clk;

	wire[3:0] an;
	wire[7:0] seg;
	
	wire[3:0] mins_tens;
	wire[3:0] mins_ones;
	wire[3:0] secs_tens;
	wire[3:0] secs_ones;
	
	reg[3:0] current_digit;
	reg[1:0] counter;
	reg[3:0] an_temp;
	
	assign mins_tens = mins/10;
	assign mins_ones = mins%10;
	assign secs_tens = secs/10;
	assign secs_ones = secs%10;
	
	assign counter = 2'b11; //so that it gets resetted at the start
	always @ (posedge refresh_clk) begin
	//reset if already at the end
		if(counter == 2'b11) begin
			counter = 2'b00;
		end
		else begin
			counter = counter + 1;
		end
	end
	
	always @ (posedge faster_clk) begin
		case(counter)
			2'b00:
				begin
					current_digit = secs_ones;
					an = 4'b0001;
				end
			2'b01:
				begin
					current_digit = secs_tens;
					an = 4'b0010;
				end
			2'b10:
				begin
					current_digit = mins_ones;
					an = 4'b0100;
				end
			2'b11:
				begin
					current_digit = mins_tens;
					an = 4'b1000;
				end
		endcase
		
		case(current_digit)
			0: seg = 7'b0000001;
			1: seg = 7'b1001111;
			2: seg = 7'b0010010;
			3: seg = 7'b0000110;
			4: seg = 7'b1001100;
			5: seg = 7'b0100100;
			6: seg = 7'b0100000;
			7: seg = 7'b0001111;
			8: seg = 7'b0000000;
			9: seg = 7'b0001100;
        default: seg = 7'b1001000;
		endcase
	end
endmodule
		
		
		
		
		
		
		
		
		
		
		
		
		
		

endmodule
