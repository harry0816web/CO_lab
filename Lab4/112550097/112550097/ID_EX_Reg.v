module ID_EX_Reg(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_i,
    input wire [31:0] dataR1_i,
    input wire [31:0] dataR2_i,
    input wire [31:0] imm_i,
    input wire [1:0] Flush_HD,
    input wire [31:0] instruction_id_i,
    input wire [17:0] WB_M_EX_control_i,
    // input wire [31:0] pc_if_after_flush,
    /*
    WB                 / M         / EX
    regW/memToReg[1:0] / memR/memW / ALUsrc/ALUOp[1:0]/funct3/func7
    */
    output reg [31:0] pc_o,
    output reg [31:0] dataR1_o,
    output reg [31:0] dataR2_o,
    output reg [31:0] imm_o,
    output reg [17:0] WB_M_EX_control_o,
    // output reg [31:0] pc_if_after_flush_o,
    output reg [4:0] rs1_ex_o,
    output reg [4:0] rs2_ex_o,
    output reg [4:0] rs_WB_o,
    output reg is_jump_flag,
    output reg is_jalr_flag,
    output reg [1:0] jump_PC_Sel,
    output reg [1:0] jalr_PC_Sel
);

always @(posedge clk, negedge rst) begin
        jump_PC_Sel <= 2'b11;
        jalr_PC_Sel <= 2'b10;
        if (~rst) begin
            pc_o <= 32'b0;
            dataR1_o <= 32'b0;
            dataR2_o <= 32'b0;
            imm_o <= 32'b0;
            WB_M_EX_control_o <= 18'b0;
            // pc_if_after_flush_o <= 32'b0;
            rs1_ex_o <= 5'b0;
            rs2_ex_o <= 5'b0;
            rs_WB_o <= 5'b0;
            is_jump_flag <= 1'b0;
            is_jalr_flag <= 1'b0;
        end else if (Flush_HD == 2'b01 || Flush_HD == 2'b11) begin
            pc_o <= 32'b0;
            dataR1_o <= 32'b0;
            dataR2_o <= 32'b0;
            imm_o <= 32'b0;
            WB_M_EX_control_o <= 18'b0;
            // pc_if_after_flush_o <= pc_if_after_flush;
            rs1_ex_o <= 5'b0;
            rs2_ex_o <= 5'b0;
            rs_WB_o <= 5'b0;
            is_jump_flag <= 1'b0;
            is_jalr_flag <= 1'b0;
        end else begin
            pc_o <= pc_i;
            dataR1_o <= dataR1_i;
            dataR2_o <= dataR2_i;
            imm_o <= imm_i;
            WB_M_EX_control_o <= WB_M_EX_control_i;
            // pc_if_after_flush_o <= pc_if_after_flush;
            rs1_ex_o <= instruction_id_i[19:15];
            rs2_ex_o <= instruction_id_i[24:20];
            rs_WB_o <= instruction_id_i[11:7];
            if (instruction_id_i[6:0] == 7'b1101111)
                is_jump_flag <= 1'b1;
            else
                is_jump_flag <= 1'b0;
            if (instruction_id_i[6:0] == 7'b1100111)
                is_jalr_flag <= 1'b1;
            else 
                is_jalr_flag <= 1'b0;
            
        end
end

endmodule
