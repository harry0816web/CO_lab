module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire rst_n = start; // start=0 時 reset，start=1 時執行

// =============change here=============
// add a mux to stall the pipeline
wire [31:0] pc_muxed;
Mux2to1 #(.size(32)) m_Mux_PC_Stall(
    .sel(RePC),
    .s0(pc_i),      // 正常的下一個 PC
    .s1(pc_if),     // 當前 PC（stall/refetch）
    .out(pc_muxed)
);
// =============change here=============

//-------------------IF stage-----------------------//
wire [31:0] pc_i;
wire [31:0] pc_if, pc_4_if, inst_if;
PC m_PC(
    .clk(clk),
    .rst(rst_n), // active low
    .pc_i(pc_muxed),
    .pc_o(pc_if)
);
Adder m_Adder_1(
    .a(4),
    .b(pc_if),
    .sum(pc_4_if)
);

wire [31:0] inst;
InstructionMemory m_InstMem(
    .readAddr(pc_if),
    .inst(inst_if)
); 
// IF/ID Pipeline Register
  wire [31:0] pc_id, pc_4_id, inst_id;
  IF_ID_Reg m_IF_ID_Reg (
    .clk   (clk),
    .rst   (rst_n),
    .pc_i  (pc_if),
    .pc_4_i (pc_4_if),
    .inst_i(inst_if),
    .stall_if(stall_if),
    .Flush_HD(Flush_HD),
    .pc_o  (pc_id),
    .pc_4_o (pc_4_id),
    .inst_o(inst_id)
  );
//-------------------IF stage-----------------------//

// IF -> ID

// =============change here===================
// ==============Hazard Detection=============
wire RePC;
wire [1:0] Flush_HD;
wire stall_if;
HazardDetection m_HazardDetection(
    .mem_MemRead(memRead_ex),
    .ex_Rd(rs_WB_ex),
    .mem_Rd(rd),
    .id_R1(rs1),
    .id_R2(rs2),
    .PCSel(PCSel_id),
    .Br_J_Sel(Br_J_Sel),
    .is_jump_flag(is_jump_flag),
    .is_jalr_flag(is_jalr_flag),
    .RePC(RePC),
    .Flush_HD(Flush_HD),
    .stall_if(stall_if)
);
// ==============Hazard Detection=============
// ==============change here==================

//-------------------ID stage-----------------------//
wire [6:0] opcode_id = inst_id[6:0];
wire [2:0] funct3_id = inst_id[14:12];
wire [6:0] funct7_id = inst_id[31:25];
wire [4:0] rs1 = inst_id[19:15];
wire [4:0] rs2 = inst_id[24:20];
wire [4:0] rs_WB_id  = inst_id[11:7];
wire memRead_id, memWrite_id, ALUSrc_id, regWrite_id;
wire [1:0]  memtoReg_id, PCSel_id, ALUOp_id;
wire PCorR1;
wire [1:0] Br_J_Sel;
Control u_ctrl(
    .opcode   (opcode_id),
    .funct3   (funct3_id),
    .BrEq     (BrEq),
    .BrLT     (BrLT),
    .memRead  (memRead_id),
    .memtoReg (memtoReg_id),
    .ALUOp    (ALUOp_id),
    .memWrite (memWrite_id),
    .ALUSrc   (ALUSrc_id),
    .regWrite (regWrite_id),
    .PCSel    (PCSel_id),
    .PCorR1   (PCorR1),
    .Br_J_Sel (Br_J_Sel)
);   


// ================change here====================
// add mux after readData1 to decide use data from "RF" or "EX Forwarding"
wire [31:0] readData1_muxed;
wire [31:0] readData2_muxed;
Mux3to1 #(.size(32)) m_Mux_RF_EX_ForwardA(
    .sel(id_ForwardA),
    .s0(readData1),
    .s1(ALUOut_ex),
    .s2(ALUOut_mem),
    .out(readData1_muxed)        // readData1 after selected by muxed
);

// add mux after readData2 to decide use data from "RF" or "EX Forwarding"
Mux3to1 #(.size(32)) m_Mux_RF_EX_ForwardB(
    // use 2 bit to respectively handle from mem
    .sel(id_ForwardB),
    .s0(readData2),
    .s1(ALUOut_ex),
    .s2(ALUOut_mem),
    .out(readData2_muxed)        // readData2 after selected by muxed
);
// ==================================================

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.
wire [31:0] readData1, readData2, writeData;

Register m_Register(
    .clk(clk),
    .rst(rst_n), // active low
    .regWrite(regWrite),
    .readReg1(rs1),
    .readReg2(rs2),
    .writeReg(rd),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

wire BrEq, BrLT;
BranchComp m_BranchComp(
    .A(readData1_muxed),
    .B(readData2_muxed),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

wire [31:0] imm_id;
ImmGen m_ImmGen(
    .inst(inst_id),
    .imm(imm_id)
);

wire [31:0] imm_shifted;
ShiftLeftOne m_ShiftLeftOne(
    .i(imm_id),
    .o(imm_shifted)
);

 // ID/EX Pipeline Register
wire [31:0] pc_ex;
wire memRead_ex, memWrite_ex, ALUSrc_ex, regWrite_ex;
wire [2:0] funct3_ex;
wire [6:0] funct7_ex;
wire [1:0] memtoReg_ex, ALUOp_ex;
wire [31:0] readData1_ex, readData2_ex, imm_ex;
wire [4:0] rs_WB_ex;
// wire [31:0] pc_if_after_flush_o;
wire [4:0] rs1_ex, rs2_ex;
wire [31:0] instruction_ex;
wire is_jump_flag;
wire [1:0] jump_PC_Sel;
wire is_jalr_flag;
wire [1:0] jalr_PC_Sel;
ID_EX_Reg m_ID_EX_Reg(
   .clk(clk),
   .rst(rst_n),
   // pc
   .pc_i(pc_id),
   // data
   .dataR1_i(readData1_muxed), .dataR2_i(readData2_muxed),
   .imm_i (imm_id),
   // ctrl
   .WB_M_EX_control_i({regWrite_id, memtoReg_id, memRead_id, memWrite_id, ALUSrc_id, ALUOp_id, funct3_id, funct7_id}),
   .Flush_HD(Flush_HD),
//    .pc_if_after_flush(pc_if),
   .instruction_id_i(inst_id),
   // outputs
   .pc_o(pc_ex),
   .dataR1_o(readData1_ex), .dataR2_o(readData2_ex),
   .imm_o(imm_ex),
   .rs_WB_o(rs_WB_ex),
   .WB_M_EX_control_o({regWrite_ex, memtoReg_ex, memRead_ex, memWrite_ex, ALUSrc_ex, ALUOp_ex, funct3_ex, funct7_ex}),
//    .pc_if_after_flush_o(pc_if_after_flush_o),
   .rs1_ex_o(rs1_ex),
   .rs2_ex_o(rs2_ex),
   .is_jump_flag(is_jump_flag),
   .jump_PC_Sel(jump_PC_Sel),
   .is_jalr_flag(is_jalr_flag),
   .jalr_PC_Sel(jalr_PC_Sel)
 );
//-------------------ID stage-----------------------//

// ID -> EX

// ===================change here=============================
// add mux for RS1E
wire [31:0] RS1E_data;
wire [31:0] RS2E_data;
Mux3to1 #(.size(32)) m_Mux_RS1E(
    .sel(ex_ForwardA),
    .s0(readData1_ex),
    .s1(writeData),
    .s2(ALUOut_mem),
    .out(RS1E_data)
);
Mux3to1 #(.size(32)) m_Mux_RS2E(
    .sel(ex_ForwardB),
    .s0(readData2_ex),
    .s1(writeData),
    .s2(ALUOut_mem),
    .out(RS2E_data)
);
// ===================change here=============================

// ===================change here=============================
// forwarding unit
wire [1:0] ex_ForwardA, ex_ForwardB;
wire [1:0] id_ForwardA, id_ForwardB;
wire is_branch_id = (opcode_id == 7'b1100011); // Check if current instruction is a branch
Forwarding_Unit m_ForwardingUnit(
    .is_branch_id(is_branch_id),
    .id_R1(rs1),
    .id_R2(rs2),
    .ex_R1(rs1_ex),
    .ex_R2(rs2_ex),
    .mem_Rd(rs_WB_mem),
    .wb_Rd(rd),
    .mem_MemRead(memRead_mem),
    .mem_RegWrite(regWrite_mem),
    .wb_RegWrite(regWrite),
    .ex_RegWrite(regWrite_ex),
    .ex_Rd(rs_WB_ex),
    .id_ForwardA(id_ForwardA),
    .id_ForwardB(id_ForwardB),
    .ex_ForwardA(ex_ForwardA),
    .ex_ForwardB(ex_ForwardB)
);

// ===================change here=============================


//-------------------EX stage-----------------------//

wire [31:0] mux_ALU_input;
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_ex),
    .s0(RS2E_data),
    .s1(imm_ex),
    .out(mux_ALU_input)
);

wire [3:0] ALUCtl;
ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_ex),
    .funct7(funct7_ex),
    .funct3(funct3_ex),
    .ALUCtl(ALUCtl)
);

wire [31:0] ALUOut_ex;
wire zero;
ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(RS1E_data),           // change source
    .B(mux_ALU_input),
    .ALUOut(ALUOut_ex),
    .zero(zero)
);

 // EX/MEM Pipeline Register
wire [31:0] pc_mem;
wire memRead_mem, memWrite_mem, regWrite_mem;
wire [1:0]  memtoReg_mem;
wire [4:0]  rs_WB_mem;
wire [31:0] ALUOut_mem, readData2_mem;
wire [31:0] pc_jump;

Adder m_Adder_pc_jump(
    .a(pc_ex),
    .b(mux_ALU_input),
    .sum(pc_jump)
);

EX_MEM_Reg m_EX_MEM_Reg(
  .clk(clk), .rst(rst_n),
  // data
  .pc_i (pc_ex),
  .ALUOut_i (ALUOut_ex),
  .data_to_mem_i(RS2E_data),
  .rs_WB_i      (rs_WB_ex),
  // ctrl
  .WB_M_control_i({regWrite_ex, memtoReg_ex, memRead_ex, memWrite_ex}),
  // outputs
  .pc_o (pc_mem),
  .ALUOut_o  (ALUOut_mem),
  .data_to_mem_o(readData2_mem),
    .rs_WB_o      (rs_WB_mem),
    .WB_M_control_o({regWrite_mem, memtoReg_mem, memRead_mem, memWrite_mem})
);
//-------------------EX stage-----------------------//

// EX -> MEM

//-------------------MEM stage-----------------------//
wire [31:0] readData_mem;
DataMemory m_DataMemory(
    .rst(rst_n),
    .clk(clk),
    .memWrite(memWrite_mem),
    .memRead(memRead_mem),
    .address(ALUOut_mem),                   // RS1E???
    .writeData(readData2_mem),
    .readData(readData_mem)
);

 // MEM/WB Pipeline Register
wire [31:0] pc_wb;
wire regWrite;
wire [1:0]  memtoReg_wb;

// rd here
wire [4:0]  rd;
// 

wire [31:0] ALUOut_wb, memRdata_wb;
MEM_WB_Reg m_MEM_WB_Reg(
  .clk(clk), .rst(rst_n),
  // data
  .pc_i (pc_mem),
  .ALUOut_i  (ALUOut_mem),
  .data_R_i(readData_mem),
  .rs_WB_i (rs_WB_mem),
  // ctrl
  .control_i({regWrite_mem, memtoReg_mem}),
  // outputs
  .pc_o (pc_wb),
  .ALUOut_o  (ALUOut_wb),
  .data_R_o (memRdata_wb),
  .rs_WB_o (rd),
  .control_o({regWrite, memtoReg_wb})
);  

//-------------------MEM stage-----------------------//

// MEM -> WB

// ================= WB Stage =================
wire [31:0] pc_4_wb;
Adder m_Adder_pc_wb(
    .a(4),
    .b(pc_wb),
    .sum(pc_4_wb)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_wb),
    .s0(ALUOut_wb),
    .s1(memRdata_wb),
    .s2(pc_4_wb),
    .out(writeData)
);

wire [31:0] pc_j_to;
wire [31:0] pc_branch;

// add an control signal "PCorR1", must add on control.v too!!!!!!!!!!!!!!
wire [31:0] adder_2_src;
Mux2to1 #(.size(32)) m_Mux_Adder_src(
    .sel(PCorR1),
    .s0(pc_id),
    .s1(readData1),
    .out(adder_2_src)
);

Adder m_Adder_2(
    .a(adder_2_src),
    .b(imm_id),
    .sum(pc_branch)
);

wire [1:0] PC_sel_temp;
Mux2to1 #(.size(2)) m_Mux_PC_Sel(
    .sel(is_jump_flag),
    .s0(PCSel_id),
    .s1(jump_PC_Sel),
    .out(PC_sel_temp)
);

wire [1:0] PC_sel_final;
Mux2to1 #(.size(2)) m_Mux_PC_Sel_final(
    .sel(is_jalr_flag),
    .s0(PC_sel_temp),
    .s1(jalr_PC_Sel),
    .out(PC_sel_final)
);



// ================change mux===================
Mux4to1 #(.size(32)) m_Mux_PC(
    .sel(PC_sel_final),
    .s0(pc_4_if),
    .s1(pc_branch),
    .s2(ALUOut_ex),
    .s3(pc_jump),
    .out(pc_i)
);
// ================================================


endmodule

