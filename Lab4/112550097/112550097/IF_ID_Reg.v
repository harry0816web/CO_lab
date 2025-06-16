module IF_ID_Reg(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_i,
    input wire [31:0] pc_4_i,
    input wire [31:0] inst_i,
    input wire [1:0] Flush_HD,
    input wire stall_if,
    output reg  [31:0] pc_o,
    output reg  [31:0] pc_4_o,
    output reg  [31:0] inst_o
);

always @(posedge clk, negedge rst) begin
        if (~rst) begin
            pc_o <= 32'b0;
            pc_4_o <= 32'b0;
            inst_o <= 32'b0;
        end else if (Flush_HD == 2'b01 || stall_if) begin
            // stall, no change
            pc_o <= pc_o;
            pc_4_o <= pc_4_o;
            inst_o <= inst_o;
        end else if(Flush_HD == 2'b10) begin
            pc_o <= 32'b0;
            pc_4_o <= 32'b0;
            inst_o <= 32'b0;
        end
        else if(Flush_HD == 2'b11) begin
            pc_o <= 32'b0;
            pc_4_o <= 32'b0;
            inst_o <= 32'b0;
        end
        else begin
            pc_o <= pc_i;
            pc_4_o <= pc_4_i;
            inst_o <= inst_i;
        end
    end

endmodule
