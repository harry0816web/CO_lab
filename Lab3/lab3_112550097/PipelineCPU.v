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


//-------------------IF stage-----------------------//
wire [31:0] pc_i;
wire [31:0] pc_if, pc_4_if, inst_if;
PC m_PC(
    .clk(clk),
    .rst(rst_n), // active low
    .pc_i(pc_i),
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
    .pc_o  (pc_id),
    .pc_4_o (pc_4_id),
    .inst_o(inst_id)
  );
//-------------------IF stage-----------------------//

// IF -> ID

//-------------------ID stage-----------------------//
wire [6:0] opcode_id = inst_id[6:0];
wire [2:0] funct3_id = inst_id[14:12];
wire [6:0] funct7_id = inst_id[31:25];
wire [4:0] rs1 = inst_id[19:15];
wire [4:0] rs2 = inst_id[24:20];
wire [4:0] rs_WB_id  = inst_id[11:7];
wire memRead_id, memWrite_id, ALUSrc_id, regWrite_id;
wire [1:0]  memtoReg_id, PCSel_id, ALUOp_id;
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
    .PCSel    (PCSel_id)
);   

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
    .A(readData1),
    .B(readData2),
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
ID_EX_Reg m_ID_EX_Reg(
   .clk(clk),
   .rst(rst_n),
   // pc
   .pc_i(pc_id),
   // data
   .dataR1_i(readData1), .dataR2_i(readData2),
   .imm_i (imm_id),
   // rs_WB
    .rs_WB_i(rs_WB_id),
   // ctrl
   .WB_M_EX_control_i({regWrite_id, memtoReg_id, memRead_id, memWrite_id, ALUSrc_id, ALUOp_id, funct3_id, funct7_id}),
   // outputs
   .pc_o(pc_ex),
   .dataR1_o(readData1_ex), .dataR2_o(readData2_ex),
   .imm_o(imm_ex),
   .rs_WB_o(rs_WB_ex),
   .WB_M_EX_control_o({regWrite_ex, memtoReg_ex, memRead_ex, memWrite_ex, ALUSrc_ex, ALUOp_ex, funct3_ex, funct7_ex})
 );
//-------------------ID stage-----------------------//

// ID -> EX

//-------------------EX stage-----------------------//

wire [31:0] mux_ALU_input;
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_ex),
    .s0(readData2_ex),
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
    .A(readData1_ex),
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
EX_MEM_Reg m_EX_MEM_Reg(
  .clk(clk), .rst(rst_n),
  // data
  .pc_i (pc_ex),
  .ALUOut_i (ALUOut_ex),
  .data_to_mem_i(readData2_ex),
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
    .address(ALUOut_mem),
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
Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_wb),
    .s0(ALUOut_wb),
    .s1(memRdata_wb),
    .s2(pc_wb),
    .out(writeData)
);

wire [31:0] pc_j_to;
wire [31:0] pc_branch;
Adder m_Adder_2(
    .a(pc_id),
    .b(imm_id),
    .sum(pc_branch)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel_id),
    .s0(pc_4_if),
    .s1(pc_branch),
    .s2(ALUOut_ex),
    .out(pc_i)
);



endmodule
