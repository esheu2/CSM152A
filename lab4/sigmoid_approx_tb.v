`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:49:59 03/11/2019
// Design Name:   sigmoid_approx
// Module Name:   /home/ise/Desktop/CS-M152-A/lab4/sigmoid_approx_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sigmoid_approx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sigmoid_approx_tb;

	// Inputs
	reg clk;
	reg [31:0] x;

	// Outputs
	wire [31:0] y;

	// Instantiate the Unit Under Test (UUT)
	sigmoid_approx uut (
		.clk(clk), 
		.x(x), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		x = 32'b11000000101000000000000000000000;
		#100;
		x = 32'b00000000000000000000000000000000;
		#100;
		x = 32'b01000000101000000000000000000000;
	end
   always
	#1 clk = ~clk;
endmodule

