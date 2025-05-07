module EX_MEM_Reg(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_i,
    input wire [31:0] ALUOut_i,
    input wire [31:0] data_to_mem_i,
    input wire [4:0] rs_WB_i,
    input wire [4:0] WB_M_control_i,  
    /*
    WB           / M        
    regW/memToReg/ memR/memW
    */
    output reg  [31:0] pc_o,
    output reg  [31:0] ALUOut_o,
    output reg  [31:0] data_to_mem_o,
    output reg  [4:0] rs_WB_o,
    output reg  [4:0] WB_M_control_o
);

always @(posedge clk, negedge rst) begin
        if (~rst) begin
            pc_o <= 32'b0;
            ALUOut_o <= 32'b0;
            data_to_mem_o <= 32'b0;
            rs_WB_o <= 5'b0;
            WB_M_control_o <= 5'b0;
        end else begin
            pc_o <= pc_i;
            ALUOut_o <= ALUOut_i;
            data_to_mem_o <= data_to_mem_i;
            rs_WB_o <= rs_WB_i;
            WB_M_control_o <= WB_M_control_i;
        end
end

endmodule
