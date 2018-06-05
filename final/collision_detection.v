`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:55:04 06/01/2018 
// Design Name: 
// Module Name:    collision_detection 
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
module collision_detection( clk, carX, carY, carOrient, carIndex, collision
    );
input clk;
input [9:0] carX;
input [9:0] carY;
input [1:0] carOrient;
input [3:0] carIndex;
output collision;

reg collision_reg;
reg [9:0] carArrX [7:0] ;
reg [9:0] carArrY [7:0];
reg [1:0] carArrOrient [7:0];

initial begin
	for (i=0; i<7; i=i+1)
	begin
		carArrX[i] = 0;
		carArrY[i] = 0;
		carArrOrient[i] = 0;
	end
end

always @ (posedge clk)
begin
	carArrX[carIndex] = carX;
	carArrY[carIndex] = carY;
	carArrOrient[carIndex] = carOrient;
end

integer i;
integer j;
always @ (posedge clk)
begin
	for(i=0; i < 8; i=i+1)
	begin
		for(j=0; j < 8; j=j+1)
		begin
			if(carArrOrient[i] != carArrOrient[j])
			begin
				if(carArrOrient[i] == 1)
				begin
					if((carArrX[i] >= carArrX[j] && carArrX[i] <= (carArrX[j] + 60)) || 
					((carArrX[i] + 30) >= carArrX[j] && (carArrX[i] + 30) <=  (carArrX[j] + 60)))
					begin
						if((carArrY[i] >= carArrY[j] && carArrY[i] <= carArrY[j] + 30) || 
						(carArrY[i] + 60 >= carArrY[j] && carArrY[i] + 60 <= carArrY[j] + 30))
							collision_reg <= 1'b1;
						else
							collision_reg <= 1'b0;
					end
					if((carArrX[i] >= carArrX[j] && carArrX[i] + 30 <= carArrX[j] + 60) && 
					(carArrY[i] <= carArrY[j] && carArrY[i] + 60 >= carArrY[j] + 30))
						collision_reg <= 1'b1;
					else
						collision_reg <= 1'b0;
				end
			end
		end
	end
end

assign collision = collision_reg;
endmodule
