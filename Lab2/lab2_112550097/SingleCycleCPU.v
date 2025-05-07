module SingleCycleCPU (
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
wire [31:0] pc_i, pc_o;

PC m_PC(
    .clk(clk),
    .rst(rst_n), // active low
    .pc_i(pc_i),
    .pc_o(pc_o)
);

wire [31:0] pc_4_out;
Adder m_Adder_1(
    .a(4),
    .b(pc_o),
    .sum(pc_4_out)
);

wire [31:0] inst;
InstructionMemory m_InstMem(
    .readAddr(pc_o),
    .inst(inst)
);

wire [6:0] opcode = inst[6:0];
wire [2:0] funct3 = inst[14:12];
wire [6:0] funct7 = inst[31:25];
wire [4:0] rs1 = inst[19:15];
wire [4:0] rs2 = inst[24:20];
wire [4:0] rd  = inst[11:7];
wire memRead, memWrite, ALUSrc, regWrite;
wire [1:0] memtoReg, PCSel, ALUOp;

Control m_Control(
    .opcode(opcode),
    .funct3(funct3),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel)
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

wire [31:0] imm;
ImmGen m_ImmGen(
    .inst(inst),
    .imm(imm)
);

wire [31:0] imm_shifted;
ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(imm_shifted)
);

wire [31:0] pc_j_to;
wire [31:0] pc_branch;
Adder m_Adder_2(
    .a(pc_o),
    .b(imm),
    .sum(pc_branch)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(pc_4_out),
    .s1(pc_branch),
    .s2(ALUOut),
    .out(pc_i)
);

wire [31:0] mux_ALU_input;
Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(imm),
    .out(mux_ALU_input)
);

wire [3:0] ALUCtl;
ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(ALUCtl)
);

wire [31:0] ALUOut;
wire zero;
ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(mux_ALU_input),
    .ALUOut(ALUOut),
    .zero(zero)
);

wire [31:0] readData_mem;
DataMemory m_DataMemory(
    .rst(rst_n),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(readData_mem)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(readData_mem),
    .s2(pc_4_out),
    .out(writeData)
);

endmodule
