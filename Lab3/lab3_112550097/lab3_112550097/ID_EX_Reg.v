module ID_EX_Reg(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_i,
    input wire [31:0] dataR1_i,
    input wire [31:0] dataR2_i,
    input wire [31:0] imm_i,
    input wire [4:0] rs_WB_i,
    input wire [17:0] WB_M_EX_control_i,
    /*
    WB                 / M         / EX
    regW/memToReg[1:0] / memR/memW / ALUsrc/ALUOp[1:0]/funct3/func7
    */
    output reg [31:0] pc_o,
    output reg [31:0] dataR1_o,
    output reg [31:0] dataR2_o,
    output reg [31:0] imm_o,
    output reg [4:0] rs_WB_o,
    output reg [17:0] WB_M_EX_control_o
);

always @(posedge clk, negedge rst) begin
        if (~rst) begin
            pc_o <= 32'b0;
            dataR1_o <= 32'b0;
            dataR2_o <= 32'b0;
            imm_o <= 32'b0;
            rs_WB_o <= 5'b0;
            WB_M_EX_control_o <= 18'b0;
        end else begin
            pc_o <= pc_i;
            dataR1_o <= dataR1_i;
            dataR2_o <= dataR2_i;
            imm_o <= imm_i;
            rs_WB_o <= rs_WB_i;
            WB_M_EX_control_o <= WB_M_EX_control_i;
        end
end

endmodule
