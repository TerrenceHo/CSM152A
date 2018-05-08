`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:30 05/07/2018 
// Design Name: 
// Module Name:    clock 
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
module clock(input clk, input rst, output reg clk2Hz, 
	output reg clk1Hz, output reg clk400Hz, output reg clk1ishHz
    );

reg [31:0] count1;
reg [31:0] count2;
reg [31:0] count3;
reg [31:0] count4;

always @(posedge clk)
begin
	if (rst)
	begin
		count1 <= 0;
		clk1Hz <= 0;
	end
	if (count1 == 50000000)
	begin
		clk1Hz <= ~clk1Hz;
		count1 <= 0;
	end
	count1 <= count1 + 1;
end

always @(posedge clk)
begin
	if (rst)
	begin
		count2 <= 0;
		clk2Hz <= 0;
	end
	if (count2 == 25000000)
	begin
		clk2Hz <= ~clk2Hz;
		count2 <= 0;
	end
	count2 <= count2 + 1;
end

always @(posedge clk)
begin
	if (rst)
	begin
		count3 <= 0;
		clk400Hz <= 0;
	end
	if (count3 == 125000)
	begin
		clk400Hz <= ~clk400Hz;
		count3 <= 0;
	end
	count3 <= count3 + 1;
end

always @(posedge clk)
begin
	if (rst)
	begin
		count4 <= 0;
		clk1ishHz <= 0;
	end
	if (count4 == 30000000)
	begin
		clk1ishHz <= ~clk1ishHz;
		count4 <= 0;
	end
	count4 <= count4 + 1;
end


endmodule
