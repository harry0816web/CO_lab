module PC (
    input clk,
    input rst,
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @(posedge clk) begin
        if (rst) begin
            pc_o <= 32'b0; // Reset the program counter to 0
        end else begin
            pc_o <= pc_i; // Update the program counter with the input value
        end
    end
endmodule




