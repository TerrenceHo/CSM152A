`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:31:04 05/20/2018
// Design Name:   counter
// Module Name:   /home/ise/SharedFolderVM/CSM152A/lab3/counter_tb.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg clk;
	reg clk1Hz;
	reg rst;
	reg pause;
	reg [3:0] num;
	reg [1:0] sel;
	reg send;
	reg adj;

	// Outputs
	wire [3:0] cur1stCnt_W;
	wire [2:0] cur2ndCnt_W;
	wire [3:0] cur3rdCnt_W;
	wire [2:0] cur4thCnt_W;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.clk1Hz(clk), 
		.rst(rst), 
		.pause(pause), 
		.num(num), 
		.sel(sel), 
		.send(send), 
		.adj(adj), 
		.cur1stCnt_W(cur1stCnt_W), 
		.cur2ndCnt_W(cur2ndCnt_W), 
		.cur3rdCnt_W(cur3rdCnt_W), 
		.cur4thCnt_W(cur4thCnt_W)
	);
	
	always begin
		#5 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		clk1Hz = 0;
		rst = 1;
		pause = 0;
		num = 0;
		sel = 0;
		send = 0;
		adj = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
        
		// Add stimulus here
		
	end
      
endmodule

