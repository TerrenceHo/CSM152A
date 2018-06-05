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
input carX;
input carY;
input carOrient;
input carIndex;
output reg collision;

reg [9:0] carArrX [11:0];
reg [9:0] carArrY [11:0];
reg [1:0] carArrOrient [11:0];

always @ (carX or carY or carOrient or carIndex)
begin
	carArrX[carIndex] = carX;
	carArrY[carIndex] = carY;
	carArrOrient[carIndex] = carOrient;
end

integer i;
integer j;
always @ (posedge clk)
begin
	for(i=0; i < 12; i=i+1)
	begin
		for(j=0; j < 12; j=j+1)
		begin
			if(carArrOrient[i] != carArrOrient[j])
			begin
				if(carArrOrient[i] == 1)
				begin
					if((carArrX[i] <= carArrX[j] + 60 && carArrX[i] >= carArrX[j]) || 
					(carArrX[i] + 30 <= carArrX[j] + 60 || carArrX[i] + 30 >=  carArrX[j]))
					begin
						if((carArrY[i] >= carArrY[j] && carArrY[i] <= carArrY[j] + 30) || 
						(carArrY[i] + 60 >= carArrY[j] && carArrY[i] + 60 <= carArrY[j] + 30))
							collision <= 1'b1;
						else
							collision <= 1'b0;
					end
					else
						collision <= 1'b0;
				end
			end
		end
	end
end

endmodule
