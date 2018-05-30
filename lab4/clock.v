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
module clock(input clk, input rst, output wire clk2Hz_W, 
	output wire clk1Hz_W, output wire clk400Hz_W, output wire clk1ishHz_W
    );

reg [31:0] count1;
reg [31:0] count2;
reg [31:0] count3;
reg [31:0] count4;

reg clk1Hz;
reg clk2Hz;
reg clk400Hz;
reg clk1ishHz;

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        count1 <= 32'b0;
    else if (count1 == 100000000 - 1)
        count1 <= 32'b0;
    else
        count1 <= count1 + 1;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        clk1Hz <= 1'b0;
    else if (count1 == 100000000 - 1)
        //clk1Hz <= ~clk1Hz;
		  clk1Hz <= 1;
    else
        //clk1Hz <= clk1Hz;
		  clk1Hz <= 0;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        count2 <= 32'b0;
    else if (count1 == 25000000 - 1)
        count2 <= 32'b0;
    else
        count2 <= count2 + 1;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        clk2Hz <= 1'b0;
    else if (count2 == 25000000 - 1)
        clk2Hz <= ~clk2Hz;
    else
        clk2Hz <= clk2Hz;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        count3 <= 32'b0;
    else if (count3 == 125000 - 1)
        count3 <= 32'b0;
    else
        count3 <= count3 + 1;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        clk400Hz <= 1'b0;
    else if (count3 == 125000 - 1)
        clk400Hz <= ~clk400Hz;
    else
        clk400Hz <= clk400Hz;
end


always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        count4 <= 32'b0;
    else if (count4 == 30000000 - 1)
        count4 <= 32'b0;
    else
        count4 <= count4 + 1;
end

always @ (posedge(clk), posedge(rst))
begin
    if (rst == 1'b1)
        clk1ishHz <= 1'b0;
    else if (count4 == 30000000 - 1)
        clk1ishHz <= ~clk1ishHz;
    else
        clk1ishHz <= clk1ishHz;
end


assign clk1Hz_W = clk1Hz;
assign clk2Hz_W = clk2Hz;
assign clk400Hz_W = clk400Hz;
assign clk1ishHz_W = clk1ishHz;

endmodule
