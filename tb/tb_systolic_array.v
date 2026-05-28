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

    initial clk = 0;
    always #(CLKPERIOD/2) clk = ~clk;

    initial begin
        $dumpfile("sim/waveform.vcd");
        $dumpvars(0, tb_systolic_array);
    end

    // Matrix A and B
    reg signed [7:0] A [0:N-1][0:N-1];
    reg signed [7:0] B [0:N-1][0:N-1];
    reg signed [31:0] expected [0:N-1][0:N-1];

    // Skewed input buffers
    reg signed [7:0] a_skew [0:N-1][0:2*N-1];
    reg signed [7:0] b_skew [0:N-1][0:2*N-1];

    integer i, j, k, t;
    integer pass, fail;

    initial begin
        // Fill A[i][j] = i+1, B[i][j] = j+1
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) begin
                A[i][j] = 8'(i + 1);
                B[i][j] = 8'(j + 1);
            end

        // Compute expected = A x B
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) begin
                expected[i][j] = 0;
                for (k = 0; k < N; k++)
                    expected[i][j] = expected[i][j] + A[i][k] * B[k][j];
            end

        // Build skewed input arrays
        // Row i of A is delayed by i cycles
        // Col j of B is delayed by j cycles
        for (i = 0; i < N; i++)
            for (t = 0; t < 2*N; t++) begin
                if (t >= i && t - i < N)
                    a_skew[i][t] = A[i][t-i];
                else
                    a_skew[i][t] = 0;
            end

        for (j = 0; j < N; j++)
            for (t = 0; t < 2*N; t++) begin
                if (t >= j && t - j < N)
                    b_skew[j][t] = B[t-j][j];
                else
                    b_skew[j][t] = 0;
            end

        // Reset
        rst = 1;
        for (i = 0; i < N; i++) begin
            a_row[i] = 0;
            b_col[i] = 0;
        end
        @(posedge clk); #1;
        rst = 0;

        // Feed skewed inputs over 2*N cycles
        for (t = 0; t < 2*N; t++) begin
            for (i = 0; i < N; i++) a_row[i] = a_skew[i][t];
            for (j = 0; j < N; j++) b_col[j] = b_skew[j][t];
            @(posedge clk); #1;
        end

        // Drain pipeline
        for (i = 0; i < N; i++) begin
            a_row[i] = 0;
            b_col[i] = 0;
        end
        repeat(N) @(posedge clk);

        // Verify all 64 outputs
        pass = 0; fail = 0;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) begin
                if (result[i][j] == expected[i][j]) begin
                    $display("PASS result[%0d][%0d] = %0d", i, j, result[i][j]);
                    pass = pass + 1;
                end else begin
                    $display("FAIL result[%0d][%0d] = %0d (expected %0d)",
                             i, j, result[i][j], expected[i][j]);
                    fail = fail + 1;
                end
            end

        $display("---------------------------");
        $display("Total: %0d PASS, %0d FAIL", pass, fail);
        $finish;
    end
endmodule
