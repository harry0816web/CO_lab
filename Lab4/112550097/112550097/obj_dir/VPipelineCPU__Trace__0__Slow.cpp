// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+119+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+119+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBit(c+118,"rst_n", false,-1);
    tracep->declBus(c+151,"pc_muxed", false,-1, 31,0);
    tracep->declBus(c+152,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_if", false,-1, 31,0);
    tracep->declBus(c+2,"pc_4_if", false,-1, 31,0);
    tracep->declBus(c+3,"inst_if", false,-1, 31,0);
    tracep->declBus(c+160,"inst", false,-1, 31,0);
    tracep->declBus(c+4,"pc_id", false,-1, 31,0);
    tracep->declBus(c+5,"pc_4_id", false,-1, 31,0);
    tracep->declBus(c+54,"inst_id", false,-1, 31,0);
    tracep->declBit(c+153,"RePC", false,-1);
    tracep->declBus(c+108,"Flush_HD", false,-1, 1,0);
    tracep->declBit(c+109,"stall_if", false,-1);
    tracep->declBus(c+55,"opcode_id", false,-1, 6,0);
    tracep->declBus(c+56,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+57,"funct7_id", false,-1, 6,0);
    tracep->declBus(c+58,"rs1", false,-1, 4,0);
    tracep->declBus(c+59,"rs2", false,-1, 4,0);
    tracep->declBus(c+60,"rs_WB_id", false,-1, 4,0);
    tracep->declBit(c+61,"memRead_id", false,-1);
    tracep->declBit(c+62,"memWrite_id", false,-1);
    tracep->declBit(c+63,"ALUSrc_id", false,-1);
    tracep->declBit(c+64,"regWrite_id", false,-1);
    tracep->declBus(c+65,"memtoReg_id", false,-1, 1,0);
    tracep->declBus(c+110,"PCSel_id", false,-1, 1,0);
    tracep->declBus(c+66,"ALUOp_id", false,-1, 1,0);
    tracep->declBit(c+67,"PCorR1", false,-1);
    tracep->declBus(c+68,"Br_J_Sel", false,-1, 1,0);
    tracep->declBus(c+111,"readData1_muxed", false,-1, 31,0);
    tracep->declBus(c+112,"readData2_muxed", false,-1, 31,0);
    tracep->declBus(c+113,"readData1", false,-1, 31,0);
    tracep->declBus(c+154,"readData2", false,-1, 31,0);
    tracep->declBus(c+69,"writeData", false,-1, 31,0);
    tracep->declBit(c+114,"BrEq", false,-1);
    tracep->declBit(c+115,"BrLT", false,-1);
    tracep->declBus(c+70,"imm_id", false,-1, 31,0);
    tracep->declBus(c+71,"imm_shifted", false,-1, 31,0);
    tracep->declBus(c+6,"pc_ex", false,-1, 31,0);
    tracep->declBit(c+72,"memRead_ex", false,-1);
    tracep->declBit(c+73,"memWrite_ex", false,-1);
    tracep->declBit(c+74,"ALUSrc_ex", false,-1);
    tracep->declBit(c+75,"regWrite_ex", false,-1);
    tracep->declBus(c+76,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+77,"funct7_ex", false,-1, 6,0);
    tracep->declBus(c+78,"memtoReg_ex", false,-1, 1,0);
    tracep->declBus(c+79,"ALUOp_ex", false,-1, 1,0);
    tracep->declBus(c+7,"readData1_ex", false,-1, 31,0);
    tracep->declBus(c+8,"readData2_ex", false,-1, 31,0);
    tracep->declBus(c+9,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+80,"rs_WB_ex", false,-1, 4,0);
    tracep->declBus(c+10,"rs1_ex", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_ex", false,-1, 4,0);
    tracep->declBus(c+161,"instruction_ex", false,-1, 31,0);
    tracep->declBit(c+12,"is_jump_flag", false,-1);
    tracep->declBus(c+13,"jump_PC_Sel", false,-1, 1,0);
    tracep->declBit(c+14,"is_jalr_flag", false,-1);
    tracep->declBus(c+15,"jalr_PC_Sel", false,-1, 1,0);
    tracep->declBus(c+81,"RS1E_data", false,-1, 31,0);
    tracep->declBus(c+82,"RS2E_data", false,-1, 31,0);
    tracep->declBus(c+83,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+84,"ex_ForwardB", false,-1, 1,0);
    tracep->declBus(c+85,"id_ForwardA", false,-1, 1,0);
    tracep->declBus(c+86,"id_ForwardB", false,-1, 1,0);
    tracep->declBit(c+87,"is_branch_id", false,-1);
    tracep->declBus(c+88,"mux_ALU_input", false,-1, 31,0);
    tracep->declBus(c+89,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+90,"ALUOut_ex", false,-1, 31,0);
    tracep->declBit(c+91,"zero", false,-1);
    tracep->declBus(c+16,"pc_mem", false,-1, 31,0);
    tracep->declBit(c+92,"memRead_mem", false,-1);
    tracep->declBit(c+93,"memWrite_mem", false,-1);
    tracep->declBit(c+94,"regWrite_mem", false,-1);
    tracep->declBus(c+95,"memtoReg_mem", false,-1, 1,0);
    tracep->declBus(c+96,"rs_WB_mem", false,-1, 4,0);
    tracep->declBus(c+97,"ALUOut_mem", false,-1, 31,0);
    tracep->declBus(c+17,"readData2_mem", false,-1, 31,0);
    tracep->declBus(c+155,"pc_jump", false,-1, 31,0);
    tracep->declBus(c+156,"readData_mem", false,-1, 31,0);
    tracep->declBus(c+18,"pc_wb", false,-1, 31,0);
    tracep->declBit(c+98,"regWrite", false,-1);
    tracep->declBus(c+99,"memtoReg_wb", false,-1, 1,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+19,"ALUOut_wb", false,-1, 31,0);
    tracep->declBus(c+20,"memRdata_wb", false,-1, 31,0);
    tracep->declBus(c+21,"pc_4_wb", false,-1, 31,0);
    tracep->declBus(c+162,"pc_j_to", false,-1, 31,0);
    tracep->declBus(c+157,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+158,"adder_2_src", false,-1, 31,0);
    tracep->declBus(c+159,"PC_sel_temp", false,-1, 1,0);
    tracep->declBus(c+116,"PC_sel_final", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+89,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+81,"A", false,-1, 31,0);
    tracep->declBus(c+88,"B", false,-1, 31,0);
    tracep->declBus(c+90,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+91,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+79,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+77,"funct7", false,-1, 6,0);
    tracep->declBus(c+76,"funct3", false,-1, 2,0);
    tracep->declBus(c+89,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+163,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+158,"a", false,-1, 31,0);
    tracep->declBus(c+70,"b", false,-1, 31,0);
    tracep->declBus(c+157,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_pc_jump ");
    tracep->declBus(c+6,"a", false,-1, 31,0);
    tracep->declBus(c+88,"b", false,-1, 31,0);
    tracep->declBus(c+155,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_pc_wb ");
    tracep->declBus(c+163,"a", false,-1, 31,0);
    tracep->declBus(c+18,"b", false,-1, 31,0);
    tracep->declBus(c+21,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+111,"A", false,-1, 31,0);
    tracep->declBus(c+112,"B", false,-1, 31,0);
    tracep->declBit(c+114,"BrEq", false,-1);
    tracep->declBit(c+115,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+93,"memWrite", false,-1);
    tracep->declBit(c+92,"memRead", false,-1);
    tracep->declBus(c+97,"address", false,-1, 31,0);
    tracep->declBus(c+17,"writeData", false,-1, 31,0);
    tracep->declBus(c+156,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBus(c+6,"pc_i", false,-1, 31,0);
    tracep->declBus(c+90,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+82,"data_to_mem_i", false,-1, 31,0);
    tracep->declBus(c+80,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+101,"WB_M_control_i", false,-1, 4,0);
    tracep->declBus(c+16,"pc_o", false,-1, 31,0);
    tracep->declBus(c+97,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+17,"data_to_mem_o", false,-1, 31,0);
    tracep->declBus(c+96,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+102,"WB_M_control_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardingUnit ");
    tracep->declBus(c+58,"id_R1", false,-1, 4,0);
    tracep->declBus(c+59,"id_R2", false,-1, 4,0);
    tracep->declBus(c+10,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+11,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+96,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+100,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+94,"mem_RegWrite", false,-1);
    tracep->declBit(c+92,"mem_MemRead", false,-1);
    tracep->declBit(c+98,"wb_RegWrite", false,-1);
    tracep->declBit(c+87,"is_branch_id", false,-1);
    tracep->declBit(c+75,"ex_RegWrite", false,-1);
    tracep->declBus(c+80,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+85,"id_ForwardA", false,-1, 1,0);
    tracep->declBus(c+86,"id_ForwardB", false,-1, 1,0);
    tracep->declBus(c+83,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+84,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetection ");
    tracep->declBus(c+58,"id_R1", false,-1, 4,0);
    tracep->declBus(c+59,"id_R2", false,-1, 4,0);
    tracep->declBus(c+80,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+100,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+72,"mem_MemRead", false,-1);
    tracep->declBus(c+110,"PCSel", false,-1, 1,0);
    tracep->declBus(c+68,"Br_J_Sel", false,-1, 1,0);
    tracep->declBit(c+12,"is_jump_flag", false,-1);
    tracep->declBit(c+14,"is_jalr_flag", false,-1);
    tracep->declBit(c+153,"RePC", false,-1);
    tracep->declBus(c+108,"Flush_HD", false,-1, 1,0);
    tracep->declBit(c+109,"stall_if", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBus(c+4,"pc_i", false,-1, 31,0);
    tracep->declBus(c+111,"dataR1_i", false,-1, 31,0);
    tracep->declBus(c+112,"dataR2_i", false,-1, 31,0);
    tracep->declBus(c+70,"imm_i", false,-1, 31,0);
    tracep->declBus(c+108,"Flush_HD", false,-1, 1,0);
    tracep->declBus(c+54,"instruction_id_i", false,-1, 31,0);
    tracep->declBus(c+103,"WB_M_EX_control_i", false,-1, 17,0);
    tracep->declBus(c+6,"pc_o", false,-1, 31,0);
    tracep->declBus(c+7,"dataR1_o", false,-1, 31,0);
    tracep->declBus(c+8,"dataR2_o", false,-1, 31,0);
    tracep->declBus(c+9,"imm_o", false,-1, 31,0);
    tracep->declBus(c+104,"WB_M_EX_control_o", false,-1, 17,0);
    tracep->declBus(c+10,"rs1_ex_o", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_ex_o", false,-1, 4,0);
    tracep->declBus(c+80,"rs_WB_o", false,-1, 4,0);
    tracep->declBit(c+12,"is_jump_flag", false,-1);
    tracep->declBit(c+14,"is_jalr_flag", false,-1);
    tracep->declBus(c+13,"jump_PC_Sel", false,-1, 1,0);
    tracep->declBus(c+15,"jalr_PC_Sel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBus(c+1,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_i", false,-1, 31,0);
    tracep->declBus(c+108,"Flush_HD", false,-1, 1,0);
    tracep->declBit(c+109,"stall_if", false,-1);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+5,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+54,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+54,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+105,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBus(c+16,"pc_i", false,-1, 31,0);
    tracep->declBus(c+97,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+156,"data_R_i", false,-1, 31,0);
    tracep->declBus(c+96,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+106,"control_i", false,-1, 2,0);
    tracep->declBus(c+18,"pc_o", false,-1, 31,0);
    tracep->declBus(c+19,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+20,"data_R_o", false,-1, 31,0);
    tracep->declBus(c+100,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+107,"control_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBit(c+74,"sel", false,-1);
    tracep->declBus(c+82,"s0", false,-1, 31,0);
    tracep->declBus(c+9,"s1", false,-1, 31,0);
    tracep->declBus(c+88,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_Adder_src ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBit(c+67,"sel", false,-1);
    tracep->declBus(c+4,"s0", false,-1, 31,0);
    tracep->declBus(c+113,"s1", false,-1, 31,0);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+116,"sel", false,-1, 1,0);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+157,"s1", false,-1, 31,0);
    tracep->declBus(c+90,"s2", false,-1, 31,0);
    tracep->declBus(c+155,"s3", false,-1, 31,0);
    tracep->declBus(c+152,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Sel ");
    tracep->declBus(c+165,"size", false,-1, 31,0);
    tracep->declBit(c+12,"sel", false,-1);
    tracep->declBus(c+110,"s0", false,-1, 1,0);
    tracep->declBus(c+13,"s1", false,-1, 1,0);
    tracep->declBus(c+159,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Sel_final ");
    tracep->declBus(c+165,"size", false,-1, 31,0);
    tracep->declBit(c+14,"sel", false,-1);
    tracep->declBus(c+159,"s0", false,-1, 1,0);
    tracep->declBus(c+15,"s1", false,-1, 1,0);
    tracep->declBus(c+116,"out", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Stall ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBit(c+153,"sel", false,-1);
    tracep->declBus(c+152,"s0", false,-1, 31,0);
    tracep->declBus(c+1,"s1", false,-1, 31,0);
    tracep->declBus(c+151,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_RF_EX_ForwardA ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+85,"sel", false,-1, 1,0);
    tracep->declBus(c+113,"s0", false,-1, 31,0);
    tracep->declBus(c+90,"s1", false,-1, 31,0);
    tracep->declBus(c+97,"s2", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_RF_EX_ForwardB ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+86,"sel", false,-1, 1,0);
    tracep->declBus(c+154,"s0", false,-1, 31,0);
    tracep->declBus(c+90,"s1", false,-1, 31,0);
    tracep->declBus(c+97,"s2", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_RS1E ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+83,"sel", false,-1, 1,0);
    tracep->declBus(c+7,"s0", false,-1, 31,0);
    tracep->declBus(c+69,"s1", false,-1, 31,0);
    tracep->declBus(c+97,"s2", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_RS2E ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+84,"sel", false,-1, 1,0);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+69,"s1", false,-1, 31,0);
    tracep->declBus(c+97,"s2", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+164,"size", false,-1, 31,0);
    tracep->declBus(c+99,"sel", false,-1, 1,0);
    tracep->declBus(c+19,"s0", false,-1, 31,0);
    tracep->declBus(c+20,"s1", false,-1, 31,0);
    tracep->declBus(c+21,"s2", false,-1, 31,0);
    tracep->declBus(c+69,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBus(c+151,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+117,"clk", false,-1);
    tracep->declBit(c+118,"rst", false,-1);
    tracep->declBit(c+98,"regWrite", false,-1);
    tracep->declBus(c+58,"readReg1", false,-1, 4,0);
    tracep->declBus(c+59,"readReg2", false,-1, 4,0);
    tracep->declBus(c+100,"writeReg", false,-1, 4,0);
    tracep->declBus(c+69,"writeData", false,-1, 31,0);
    tracep->declBus(c+113,"readData1", false,-1, 31,0);
    tracep->declBus(c+154,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->declBus(c+71,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+56,"funct3", false,-1, 2,0);
    tracep->declBit(c+114,"BrEq", false,-1);
    tracep->declBit(c+115,"BrLT", false,-1);
    tracep->declBit(c+61,"memRead", false,-1);
    tracep->declBus(c+65,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+66,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+62,"memWrite", false,-1);
    tracep->declBit(c+63,"ALUSrc", false,-1);
    tracep->declBit(c+64,"regWrite", false,-1);
    tracep->declBus(c+110,"PCSel", false,-1, 1,0);
    tracep->declBit(c+67,"PCorR1", false,-1);
    tracep->declBus(c+68,"Br_J_Sel", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_if),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)),32);
    bufp->fullIData(oldp+3,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_if)
                              ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->PipelineCPU__DOT__pc_if)] 
                                       << 0x18U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_if))] 
                                        << 0x10U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->PipelineCPU__DOT__pc_if))] 
                                         << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_if))]))))),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__pc_id),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__pc_4_id),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__pc_ex),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__readData1_ex),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__readData2_ex),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__imm_ex),32);
    bufp->fullCData(oldp+10,(vlSelf->PipelineCPU__DOT__rs1_ex),5);
    bufp->fullCData(oldp+11,(vlSelf->PipelineCPU__DOT__rs2_ex),5);
    bufp->fullBit(oldp+12,(vlSelf->PipelineCPU__DOT__is_jump_flag));
    bufp->fullCData(oldp+13,(vlSelf->PipelineCPU__DOT__jump_PC_Sel),2);
    bufp->fullBit(oldp+14,(vlSelf->PipelineCPU__DOT__is_jalr_flag));
    bufp->fullCData(oldp+15,(vlSelf->PipelineCPU__DOT__jalr_PC_Sel),2);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__pc_mem),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__readData2_mem),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__pc_wb),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__ALUOut_wb),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__memRdata_wb),32);
    bufp->fullIData(oldp+21,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_wb)),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__inst_id),32);
    bufp->fullCData(oldp+55,((0x7fU & vlSelf->PipelineCPU__DOT__inst_id)),7);
    bufp->fullCData(oldp+56,((7U & (vlSelf->PipelineCPU__DOT__inst_id 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+57,((vlSelf->PipelineCPU__DOT__inst_id 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 7U))),5);
    bufp->fullBit(oldp+61,((IData)((3U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_id)))));
    bufp->fullBit(oldp+62,((IData)((0x23U == (0x7fU 
                                              & vlSelf->PipelineCPU__DOT__inst_id)))));
    bufp->fullBit(oldp+63,(vlSelf->PipelineCPU__DOT__ALUSrc_id));
    bufp->fullBit(oldp+64,(vlSelf->PipelineCPU__DOT__regWrite_id));
    bufp->fullCData(oldp+65,(((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
                               ? ((0x20U & vlSelf->PipelineCPU__DOT__inst_id)
                                   ? ((0x10U & vlSelf->PipelineCPU__DOT__inst_id)
                                       ? 0U : ((8U 
                                                & vlSelf->PipelineCPU__DOT__inst_id)
                                                ? (
                                                   (4U 
                                                    & vlSelf->PipelineCPU__DOT__inst_id)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->PipelineCPU__DOT__inst_id)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->PipelineCPU__DOT__inst_id)
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & vlSelf->PipelineCPU__DOT__inst_id)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->PipelineCPU__DOT__inst_id)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->PipelineCPU__DOT__inst_id)
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                   : 0U) : ((0x20U 
                                             & vlSelf->PipelineCPU__DOT__inst_id)
                                             ? 0U : 
                                            ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__inst_id)
                                              ? 0U : 
                                             ((8U & vlSelf->PipelineCPU__DOT__inst_id)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__inst_id)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__inst_id)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__inst_id)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))))))),2);
    bufp->fullCData(oldp+66,(vlSelf->PipelineCPU__DOT__ALUOp_id),2);
    bufp->fullBit(oldp+67,((IData)((0x67U == (0x7fU 
                                              & vlSelf->PipelineCPU__DOT__inst_id)))));
    bufp->fullCData(oldp+68,(vlSelf->PipelineCPU__DOT__Br_J_Sel),2);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__writeData),32);
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__imm_id),32);
    bufp->fullIData(oldp+71,((vlSelf->PipelineCPU__DOT__imm_id 
                              << 1U)),32);
    bufp->fullBit(oldp+72,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xeU))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xdU))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xcU))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0x11U))));
    bufp->fullCData(oldp+76,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 7U))),3);
    bufp->fullCData(oldp+77,((0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)),7);
    bufp->fullCData(oldp+78,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+79,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+80,(vlSelf->PipelineCPU__DOT__rs_WB_ex),5);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__RS1E_data),32);
    bufp->fullIData(oldp+82,(vlSelf->PipelineCPU__DOT__RS2E_data),32);
    bufp->fullCData(oldp+83,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
    bufp->fullCData(oldp+84,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
    bufp->fullCData(oldp+85,(vlSelf->PipelineCPU__DOT__id_ForwardA),2);
    bufp->fullCData(oldp+86,(vlSelf->PipelineCPU__DOT__id_ForwardB),2);
    bufp->fullBit(oldp+87,((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_id))));
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__mux_ALU_input),32);
    bufp->fullCData(oldp+89,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullIData(oldp+90,(vlSelf->PipelineCPU__DOT__ALUOut_ex),32);
    bufp->fullBit(oldp+91,((0U == vlSelf->PipelineCPU__DOT__ALUOut_ex)));
    bufp->fullBit(oldp+92,(vlSelf->PipelineCPU__DOT__memRead_mem));
    bufp->fullBit(oldp+93,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                  >> 4U))));
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+96,(vlSelf->PipelineCPU__DOT__rs_WB_mem),5);
    bufp->fullIData(oldp+97,(vlSelf->PipelineCPU__DOT__ALUOut_mem),32);
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o) 
                                  >> 2U))));
    bufp->fullCData(oldp+99,((3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o))),2);
    bufp->fullCData(oldp+100,(vlSelf->PipelineCPU__DOT__rd),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                        >> 0xdU))),5);
    bufp->fullCData(oldp+102,(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o),5);
    bufp->fullIData(oldp+103,(vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i),18);
    bufp->fullIData(oldp+104,(vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o),18);
    bufp->fullCData(oldp+105,(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode),7);
    bufp->fullCData(oldp+106,((7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                     >> 2U))),3);
    bufp->fullCData(oldp+107,(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o),3);
    bufp->fullCData(oldp+108,(vlSelf->PipelineCPU__DOT__Flush_HD),2);
    bufp->fullBit(oldp+109,(vlSelf->PipelineCPU__DOT__stall_if));
    bufp->fullCData(oldp+110,(vlSelf->PipelineCPU__DOT__PCSel_id),2);
    bufp->fullIData(oldp+111,(vlSelf->PipelineCPU__DOT__readData1_muxed),32);
    bufp->fullIData(oldp+112,(vlSelf->PipelineCPU__DOT__readData2_muxed),32);
    bufp->fullIData(oldp+113,(vlSelf->PipelineCPU__DOT__readData1),32);
    bufp->fullBit(oldp+114,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+115,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullCData(oldp+116,(vlSelf->PipelineCPU__DOT__PC_sel_final),2);
    bufp->fullBit(oldp+117,(vlSelf->clk));
    bufp->fullBit(oldp+118,(vlSelf->start));
    bufp->fullIData(oldp+119,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+141,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+142,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+143,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+144,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+145,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+146,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+147,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+148,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+149,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+150,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+151,((((((vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                   >> 0xeU) & (0U != (IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex))) 
                                 & (((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                     == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                                  >> 0xfU))) 
                                    | ((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                       == (0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_id 
                                            >> 0x14U))))) 
                                | ((((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id)) 
                                     & (1U == (IData)(vlSelf->PipelineCPU__DOT__Br_J_Sel))) 
                                    & (0U != (IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex))) 
                                   & (((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                       == (0x1fU & 
                                           (vlSelf->PipelineCPU__DOT__inst_id 
                                            >> 0xfU))) 
                                      | ((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                         == (0x1fU 
                                             & (vlSelf->PipelineCPU__DOT__inst_id 
                                                >> 0x14U))))))
                                ? vlSelf->PipelineCPU__DOT__pc_if
                                : ((2U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                    ? ((1U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                        ? (vlSelf->PipelineCPU__DOT__pc_ex 
                                           + vlSelf->PipelineCPU__DOT__mux_ALU_input)
                                        : vlSelf->PipelineCPU__DOT__ALUOut_ex)
                                    : ((1U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                        ? (((IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->PipelineCPU__DOT__inst_id)))
                                             ? vlSelf->PipelineCPU__DOT__readData1
                                             : vlSelf->PipelineCPU__DOT__pc_id) 
                                           + vlSelf->PipelineCPU__DOT__imm_id)
                                        : ((IData)(4U) 
                                           + vlSelf->PipelineCPU__DOT__pc_if))))),32);
    bufp->fullIData(oldp+152,(((2U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                ? ((1U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                    ? (vlSelf->PipelineCPU__DOT__pc_ex 
                                       + vlSelf->PipelineCPU__DOT__mux_ALU_input)
                                    : vlSelf->PipelineCPU__DOT__ALUOut_ex)
                                : ((1U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
                                    ? (((IData)((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_id)))
                                         ? vlSelf->PipelineCPU__DOT__readData1
                                         : vlSelf->PipelineCPU__DOT__pc_id) 
                                       + vlSelf->PipelineCPU__DOT__imm_id)
                                    : ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_if)))),32);
    bufp->fullBit(oldp+153,(((((vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                >> 0xeU) & (0U != (IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex))) 
                              & (((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                  == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                               >> 0xfU))) 
                                 | ((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                    == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                                 >> 0x14U))))) 
                             | ((((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id)) 
                                  & (1U == (IData)(vlSelf->PipelineCPU__DOT__Br_J_Sel))) 
                                 & (0U != (IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex))) 
                                & (((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                    == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                                 >> 0xfU))) 
                                   | ((IData)(vlSelf->PipelineCPU__DOT__rs_WB_ex) 
                                      == (0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                                   >> 0x14U))))))));
    bufp->fullIData(oldp+154,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+155,((vlSelf->PipelineCPU__DOT__pc_ex 
                               + vlSelf->PipelineCPU__DOT__mux_ALU_input)),32);
    bufp->fullIData(oldp+156,(vlSelf->PipelineCPU__DOT__readData_mem),32);
    bufp->fullIData(oldp+157,((((IData)((0x67U == (0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__inst_id)))
                                 ? vlSelf->PipelineCPU__DOT__readData1
                                 : vlSelf->PipelineCPU__DOT__pc_id) 
                               + vlSelf->PipelineCPU__DOT__imm_id)),32);
    bufp->fullIData(oldp+158,(((IData)((0x67U == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_id)))
                                ? vlSelf->PipelineCPU__DOT__readData1
                                : vlSelf->PipelineCPU__DOT__pc_id)),32);
    bufp->fullCData(oldp+159,(((IData)(vlSelf->PipelineCPU__DOT__is_jump_flag)
                                ? (IData)(vlSelf->PipelineCPU__DOT__jump_PC_Sel)
                                : (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))),2);
    bufp->fullIData(oldp+160,(vlSelf->PipelineCPU__DOT__inst),32);
    bufp->fullIData(oldp+161,(vlSelf->PipelineCPU__DOT__instruction_ex),32);
    bufp->fullIData(oldp+162,(vlSelf->PipelineCPU__DOT__pc_j_to),32);
    bufp->fullIData(oldp+163,(4U),32);
    bufp->fullIData(oldp+164,(0x20U),32);
    bufp->fullIData(oldp+165,(2U),32);
}
