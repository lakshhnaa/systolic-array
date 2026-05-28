`timescale 1ns/1ps

// 8x8 Systolic Array for Matrix Multiplication
// Each PE computes: acc += a * b

module pe (
    input clk, rst,
    input signed [7:0] a_in, b_in,
    output reg signed [7:0] a_out, b_out,
    output reg signed [31:0] acc
);
    always @(posedge clk) begin
        if (rst) begin
            acc   <= 0;
            a_out <= 0;
            b_out <= 0;
        end else begin
            acc   <= acc + (a_in * b_in);
            a_out <= a_in;
            b_out <= b_in;
        end
    end
endmodule

module systolic_array #(parameter N = 8) (
    input clk, rst,
    input signed [7:0] a_row [0:N-1],
    input signed [7:0] b_col [0:N-1],
    output signed [31:0] result [0:N-1][0:N-1]
);
    wire signed [7:0] a_wire [0:N-1][0:N];
    wire signed [7:0] b_wire [0:N][0:N-1];
    wire signed [31:0] acc_wire [0:N-1][0:N-1];

    genvar i, j;
    generate
        for (i = 0; i < N; i++) begin : row
            assign a_wire[i][0] = a_row[i];
        end
        for (j = 0; j < N; j++) begin : col
            assign b_wire[0][j] = b_col[j];
        end
        for (i = 0; i < N; i++) begin : gen_row
            for (j = 0; j < N; j++) begin : gen_col
                pe pe_inst (
                    .clk(clk), .rst(rst),
                    .a_in(a_wire[i][j]),
                    .b_in(b_wire[i][j]),
                    .a_out(a_wire[i][j+1]),
                    .b_out(b_wire[i+1][j]),
                    .acc(acc_wire[i][j])
                );
            end
        end
    endgenerate

    assign result = acc_wire;
endmodule
