`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:38 03/19/2013 
// Design Name: 
// Module Name:    vga640x480 
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
module vga640x480(
	input wire animateClk,
	input wire dclk,			//pixel clock: 25MHz
	input wire clr,			//asynchronous reset
	input wire traffic0_color,
	input wire traffic1_color,
	input wire traffic2_color,
	input wire traffic3_color,
	output wire hsync,		//horizontal sync out
	output wire vsync,		//vertical sync out
	output reg [2:0] red,	//red vga output
	output reg [2:0] green, //green vga output
	output reg [1:0] blue	//blue vga output
	);

// video structure constants
parameter hpixels = 800;// horizontal pixels per line
parameter vlines = 521; // vertical lines per frame
parameter hpulse = 96; 	// hsync pulse length
parameter vpulse = 2; 	// vsync pulse length
parameter hbp = 144; 	// end of horizontal back porch
parameter hfp = 784; 	// beginning of horizontal front porch
parameter vbp = 31; 		// end of vertical back porch
parameter vfp = 511; 	// beginning of vertical front porch
// active horizontal video is therefore: 784 - 144 = 640
// active vertical video is therefore: 511 - 31 = 480

// registers for storing the horizontal & vertical counters
reg [9:0] hc;
reg [9:0] vc;

// Horizontal & vertical counters --
// this is how we keep track of where we are on the screen.
// ------------------------
// Sequential "always block", which is a block that is
// only triggered on signal transitions or "edges".
// posedge = rising edge  &  negedge = falling edge
// Assignment statements can only be used on type "reg" and need to be of the "non-blocking" type: <=
always @(posedge dclk or posedge clr)
begin
	// reset condition
	if (clr == 1)
	begin
		hc <= 0;
		vc <= 0;
	end
	else
	begin
		// keep counting until the end of the line
		if (hc < hpixels - 1)
			hc <= hc + 1;
		else
		// When we hit the end of the line, reset the horizontal
		// counter and increment the vertical counter.
		// If vertical counter is at the end of the frame, then
		// reset that one too.
		begin
			hc <= 0;
			if (vc < vlines - 1)
				vc <= vc + 1;
			else
				vc <= 0;
		end
		
	end
end

// generate sync pulses (active low)
// ----------------
// "assign" statements are a quick way to
// give values to variables of type: wire
assign hsync = (hc < hpulse) ? 0:1;
assign vsync = (vc < vpulse) ? 0:1;

//registers for colors
//we merge the colors into rgb, and then split it again for output at the end of the the block
reg[7:0] rgb;
reg[7:0] color_black = 8'b00000000;
reg[7:0] color_white = 8'b11111111;
reg[7:0] color_yellow = 8'b11111100;
reg[7:0] color_cyan = 8'b00011111;
reg[7:0] color_green = 8'b00011100;
reg[7:0] color_magenta = 8'b11100011;
reg[7:0] color_red = 8'b11100000;
reg[7:0] color_blue = 8'b00000011;

//cars
reg[9:0] car_width = 60;
reg[9:0] car_height = 30;

//functions
//1) hbrange takes the lower and upper bound wrt to the beginning
//2) hbsize takes the lower bound and the size wrt to the beginning

//hb(and vb) refer to the beginning
//hf (and vf) refer to the end and subtract instead of adding for bounds and size

//HORIZONTAL FUNCTIONS
function hbrange;
	input[9:0] lowerBound, upperBound;
	begin
		hbrange = (hc >= (hbp + lowerBound) && hc < (hbp + upperBound));
	end
endfunction

function hbsize;
	input[9:0] lowerBound, size;
	begin
		hbsize = (hc >= (hbp + lowerBound) && hc < (hbp + lowerBound + size));
	end
endfunction

function hfrange;
	input[9:0] lowerBound, upperBound;
	begin
		hfrange = (hc >= (hfp - upperBound) && hc < (hfp - lowerBound));
	end
endfunction

function hfsize;
	input[9:0] lowerBound, size;
	begin
		hfsize = (hc >= (hfp - lowerBound - size) && hc < (hfp - lowerBound));
	end
endfunction

//VERTICAL FUNCTIONS
function vbrange;
	input[9:0] lowerBound, upperBound;
	begin
		vbrange = (vc >= (vbp + lowerBound) && vc < (vbp + upperBound));
	end
endfunction

function vbsize;
	input[9:0] lowerBound, size;
	begin
		vbsize = (vc >= (vbp + lowerBound) && vc < (vbp + lowerBound + size));
	end
endfunction

function vfrange;
	input[9:0] lowerBound, upperBound;
	begin
		vfrange = (vc >= (hfp - upperBound) && hc < (hfp - lowerBound));
	end
endfunction

function vfsize;
	input[9:0] lowerBound, size;
	begin
		vfsize = (hc >= (hfp - lowerBound - size) && hc < (hfp - lowerBound));
	end
endfunction

//SHAPES
//RECTANGLE
function rectangle_coords;
	input[9:0] x, y, x1, y1;
	begin
		rectangle_coords = (vbrange(y,y1) && hbrange(x,x1));
	end
endfunction

function rectangle_coords_reverse;
	input[9:0] x, y, x1, y1;
	begin
		rectangle_coords_reverse = (vfrange(y,y1) && hfrange(x,x1));
	end
endfunction

function rectangle_size;
	input[9:0] x, y, width, height;
	begin
		rectangle_size = rectangle_coords(x,y, x + width, y + height);
	end
endfunction

function rectangle_size_reverse;
	input[9:0] x, y, width, height;
	begin
		rectangle_size_reverse = rectangle_coords_reverse(x,y, x + width, y + height);
	end
endfunction

//REUSABLE LIBRARY COMPONENTS
function horizontal_dbline;
	input[9:0] x,y;
	begin
		horizontal_dbline = (rectangle_size(x, y, 200, 5) || rectangle_size(x, y + 11, 200, 5));
	end
endfunction

function vertical_dbline;
	input[9:0] x,y;
	begin
		vertical_dbline = (rectangle_size(x, y, 5, 120) || rectangle_size(x + 11, y, 5, 120));
	end
endfunction

function horizontal_dotline;
	input[9:0] x,y;
	begin
		horizontal_dotline = (rectangle_size(x, y, 20, 5) || rectangle_size(x + 35, y, 20, 5) ||
			rectangle_size(x + 70, y, 20, 5) || rectangle_size(x + 105, y, 20, 5) || 
			rectangle_size(x + 140, y, 20, 5) || rectangle_size(x + 175, y, 20, 5));
	end
endfunction

function vertical_dotline;
	input[9:0] x,y;
	begin
		vertical_dotline = (rectangle_size(x, y, 5, 20) || rectangle_size(x, y + 35, 5, 20) ||
			rectangle_size(x, y + 70, 5, 20) || rectangle_size(x, y + 105, 5, 20));
	end
endfunction

function vert_traffic_light_box;
	input[9:0] x,y;
	begin
		vert_traffic_light_box = rectangle_size(x, y, 25, 40);
	end
endfunction

function horiz_traffic_light_box;
	input[9:0] x,y;
	begin
		horiz_traffic_light_box = rectangle_size(x, y, 40, 25);
	end
endfunction

function red_light;
	input[9:0] x,y;
	begin
		red_light = rectangle_size(x, y, 15, 15);
	end
endfunction

function green_light;
	input[9:0] x,y;
	begin
		green_light = rectangle_size(x, y, 15, 15);
	end
endfunction

//Directions: 0 is top, 1 is right, 2 is down, and 3 is left
//Orientation (computed from direction): 0 is vertical and 1 is horizontal
//Speed: 1 is increment_speed1 and 2 is increment speed2
function car;
	input[4:0] car_number;
	input[9:0] x, y;
	input[7:0] color;
	input[2:0] speed;
	input[2:0] direction;
	input[1:0] isMoving;
	
	reg[1:0] orientation;
	reg[9:0] increment_counter;
	begin
		case (direction)
			1:
				begin
					orientation = 1;
					if (speed == 1)
						increment_counter = x_increment_speed1;
					else if (speed == 2)
						increment_counter = x_increment_speed2;
						
					if (rectangle_size(x + increment_counter, y, car_width, car_height))
					begin
						rgb = color;
						car = 1;
					end
					else
						car = 0;
				end
			2:
				begin
					orientation = 0;
					if (speed == 1)
						increment_counter = y_increment_speed1;
					else if (speed == 2)
						increment_counter = y_increment_speed2;
						
					if (rectangle_size(x, y + increment_counter, car_height, car_width))
					begin
						rgb = color;
						car = 1;
					end
					else
						car = 0;
				end
		endcase
	end
endfunction

reg[1:0] flag = 1'b0;

//ANIMATIONS
reg[9:0] x_increment_speed1 = 10'b0000000000;
reg[9:0] x_increment_speed2 = 10'b0000000000;

reg[9:0] x_increment_speed1_reverse = 10'b0000000000;
reg[9:0] x_increment_speed2_reverse = 10'b0000000000;

reg[9:0] y_increment_speed1 = 10'b0000000000;
reg[9:0] y_increment_speed2 = 10'b0000000000;

reg[9:0] y_increment_speed1_reverse = 10'b0000000000;
reg[9:0] y_increment_speed2_reverse = 10'b0000000000;

//always @ (posedge clk)
//	if animateClk
//		dfj
// Assignment statements can only be used on type "reg" and should be of the "blocking" type: =
always @(posedge dclk)
begin
    if (animateClk == 1'b1 && flag == 1'b0)
    begin
		
		  if (traffic1_color)
		  begin
		  	   x_increment_speed1 = x_increment_speed1 + 1;
				x_increment_speed2 = x_increment_speed2 + 2;
		  end
		  else
		  begin
				if (x_increment_speed1 < 140 || x_increment_speed1 > 140)
					x_increment_speed1 = x_increment_speed1 + 1;
				if (x_increment_speed2 < 140 || x_increment_speed2 > 140)
					x_increment_speed2 = x_increment_speed2 + 2;
		  end
		  
		  if (traffic2_color)
		  begin
		  	   y_increment_speed1 = y_increment_speed1 + 1;
				y_increment_speed2 = y_increment_speed2 + 2;
		  end
		  else
		  begin
				if (y_increment_speed1 < 60 || y_increment_speed1 > 140)
					y_increment_speed1 = y_increment_speed1 + 1;
				if (y_increment_speed2 < 60 || y_increment_speed2 > 140)
					y_increment_speed2 = y_increment_speed2 + 2;
		  end
		  
        flag = 1'b1;
    end
    else if (animateClk == 1'b0)
    begin
        flag = 1'b0;
    end
	//NOTE
	//We always draw in the hierarchy of the smallest elements on the screen to the larger onesa
	// first check if we're within vertical active video range
	if (vc >= vbp && vc < vfp)
	begin
	
		//draw the traffic lights
		if (red_light(5, 182))
			rgb = (traffic0_color ? color_black : color_red);
		else if (red_light(615, 283)) 
			rgb = traffic1_color ? color_black : color_red;
		else if (red_light(363, 5))
			rgb = traffic2_color ? color_black : color_red;
		else if (red_light(262,460))
			rgb = traffic3_color ? color_black : color_red;
		else if (green_light(5, 163))
			rgb = (traffic0_color ? color_green : color_black);
		else if (green_light(615, 302))
			rgb = traffic1_color ? color_green : color_black; 
		else if (green_light(382, 5))
			rgb = traffic2_color ? color_green : color_black;
		else if (green_light(243, 460))
			rgb = traffic3_color ? color_green : color_black;
		
		//draw the traffic light boxes
		else if (vert_traffic_light_box(0, 160) || vert_traffic_light_box(610,280))
		begin
			rgb = color_yellow;
		end
		else if (horiz_traffic_light_box(360,0) || horiz_traffic_light_box(240,455))
		begin
			rgb = color_yellow;
		end
		
		//draw the cars
		//car(car_numner, x, y, color, speed, direction, isMoving);
		
		//Cars to the east
		else if (car(1, 0, 315, color_blue, 1, 1, 1));
		else if (car(1, 0, 255, color_cyan, 2, 1, 1));
		
		//Cars to the south
		else if (car(1, 275, 0, color_yellow, 1, 2, 2));
		else if (car(1, 215, 0, color_green, 2, 2, 2));
		
		
		//draw the black square in the center
		else if (rectangle_coords(200, 120, 440, 360))
			rgb = color_black;
			
		
		//draw the double yellow lines
		else if (horizontal_dbline(0,232) || horizontal_dbline(440,232) || vertical_dbline(312,0) || vertical_dbline(312,360))
		begin
			rgb = color_yellow;
		end
		//draw white dotted lines 
		else if (horizontal_dotline(3, 177) || horizontal_dotline(3, 298) || horizontal_dotline(440, 177) || horizontal_dotline(440, 298) ||
			vertical_dotline(257, 0) || vertical_dotline(378, 0) || vertical_dotline(257, 360) || vertical_dotline(378, 360)) 
		begin
			rgb = color_white;
		end
		else if (vbrange(120,360)) //horizontal road - 240px wide
		begin
			rgb = color_black;
		end
		else if (hbrange(200,440)) //vertical road - 240 px wide
		begin
			rgb = color_black;
		end
		else if (hbsize(0,640))		//make the entire screen green
		begin
			rgb = color_green;
		end
		// we're outside active horizontal range so display black
		else
		begin
			rgb = color_black;
		end
	end
	// we're outside active vertical range so display black
	else
	begin
		rgb = color_black;
	end
	
	//splits the colors into red, green, and blue
	red = rgb[7:5];
	green = rgb[4:2];
	blue = rgb[1:0];

end

endmodule
