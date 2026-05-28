`timescale 1ns/1ps

module tb_systolic_array;
    parameter N = 8;
    parameter CLKPERIOD = 10;

    reg clk, rst;
    reg signed [7:0] a_row [0:N-1];
    reg signed [7:0] b_col [0:N-1];
    wire signed [31:0] result [0:N-1][0:N-1];

    systolic_array #(N) dut (
        .clk(clk), .rst(rst),
        .a_row(a_row),
        .b_col(b_col),
        .result(result)
    );

    // Clock generation
    initial clk = 0;
    always #(CLKPERIOD/2) clk = ~clk;

    // Dump waveforms
    initial begin
        $dumpfile("sim/waveform.vcd");
        $dumpvars(0, tb_systolic_array);
    end

    integer i;
    initial begin
        // Reset
        rst = 1;
        for (i = 0; i < N; i++) begin
            a_row[i] = 0;
            b_col[i] = 0;
        end
        @(posedge clk); #1;
        rst = 0;

        // Feed simple inputs: a=1,2..8, b=1,2..8
        for (i = 0; i < N; i++) begin
            a_row[i] = 8'(i + 1);
            b_col[i] = 8'(i + 1);
        end

        // Run for enough cycles for data to propagate
        repeat(20) @(posedge clk);

        // Print results
        $display("Result [0][0] = %0d", result[0][0]);
        $display("Result [0][1] = %0d", result[0][1]);
        $display("Result [7][7] = %0d", result[7][7]);

        $finish;
    end
endmodule
