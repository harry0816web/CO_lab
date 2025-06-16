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
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+100+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBit(c+99,"rst_n", false,-1);
    tracep->declBus(c+132,"pc_i", false,-1, 31,0);
    tracep->declBus(c+38,"pc_if", false,-1, 31,0);
    tracep->declBus(c+39,"pc_4_if", false,-1, 31,0);
    tracep->declBus(c+40,"inst_if", false,-1, 31,0);
    tracep->declBus(c+134,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"pc_id", false,-1, 31,0);
    tracep->declBus(c+1,"pc_4_id", false,-1, 31,0);
    tracep->declBus(c+42,"inst_id", false,-1, 31,0);
    tracep->declBus(c+43,"opcode_id", false,-1, 6,0);
    tracep->declBus(c+44,"funct3_id", false,-1, 2,0);
    tracep->declBus(c+45,"funct7_id", false,-1, 6,0);
    tracep->declBus(c+46,"rs1", false,-1, 4,0);
    tracep->declBus(c+47,"rs2", false,-1, 4,0);
    tracep->declBus(c+48,"rs_WB_id", false,-1, 4,0);
    tracep->declBit(c+49,"memRead_id", false,-1);
    tracep->declBit(c+50,"memWrite_id", false,-1);
    tracep->declBit(c+51,"ALUSrc_id", false,-1);
    tracep->declBit(c+52,"regWrite_id", false,-1);
    tracep->declBus(c+53,"memtoReg_id", false,-1, 1,0);
    tracep->declBus(c+89,"PCSel_id", false,-1, 1,0);
    tracep->declBus(c+54,"ALUOp_id", false,-1, 1,0);
    tracep->declBus(c+90,"readData1", false,-1, 31,0);
    tracep->declBus(c+91,"readData2", false,-1, 31,0);
    tracep->declBus(c+55,"writeData", false,-1, 31,0);
    tracep->declBit(c+92,"BrEq", false,-1);
    tracep->declBit(c+93,"BrLT", false,-1);
    tracep->declBus(c+56,"imm_id", false,-1, 31,0);
    tracep->declBus(c+57,"imm_shifted", false,-1, 31,0);
    tracep->declBus(c+58,"pc_ex", false,-1, 31,0);
    tracep->declBit(c+59,"memRead_ex", false,-1);
    tracep->declBit(c+60,"memWrite_ex", false,-1);
    tracep->declBit(c+61,"ALUSrc_ex", false,-1);
    tracep->declBit(c+62,"regWrite_ex", false,-1);
    tracep->declBus(c+63,"funct3_ex", false,-1, 2,0);
    tracep->declBus(c+64,"funct7_ex", false,-1, 6,0);
    tracep->declBus(c+65,"memtoReg_ex", false,-1, 1,0);
    tracep->declBus(c+66,"ALUOp_ex", false,-1, 1,0);
    tracep->declBus(c+2,"readData1_ex", false,-1, 31,0);
    tracep->declBus(c+3,"readData2_ex", false,-1, 31,0);
    tracep->declBus(c+4,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+67,"rs_WB_ex", false,-1, 4,0);
    tracep->declBus(c+68,"mux_ALU_input", false,-1, 31,0);
    tracep->declBus(c+69,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+94,"ALUOut_ex", false,-1, 31,0);
    tracep->declBit(c+95,"zero", false,-1);
    tracep->declBus(c+70,"pc_mem", false,-1, 31,0);
    tracep->declBit(c+96,"memRead_mem", false,-1);
    tracep->declBit(c+71,"memWrite_mem", false,-1);
    tracep->declBit(c+72,"regWrite_mem", false,-1);
    tracep->declBus(c+73,"memtoReg_mem", false,-1, 1,0);
    tracep->declBus(c+74,"rs_WB_mem", false,-1, 4,0);
    tracep->declBus(c+97,"ALUOut_mem", false,-1, 31,0);
    tracep->declBus(c+5,"readData2_mem", false,-1, 31,0);
    tracep->declBus(c+133,"readData_mem", false,-1, 31,0);
    tracep->declBus(c+75,"pc_wb", false,-1, 31,0);
    tracep->declBit(c+76,"regWrite", false,-1);
    tracep->declBus(c+77,"memtoReg_wb", false,-1, 1,0);
    tracep->declBus(c+78,"rd", false,-1, 4,0);
    tracep->declBus(c+79,"ALUOut_wb", false,-1, 31,0);
    tracep->declBus(c+80,"memRdata_wb", false,-1, 31,0);
    tracep->declBus(c+135,"pc_j_to", false,-1, 31,0);
    tracep->declBus(c+81,"pc_branch", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+69,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+2,"A", false,-1, 31,0);
    tracep->declBus(c+68,"B", false,-1, 31,0);
    tracep->declBus(c+94,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+95,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+66,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+64,"funct7", false,-1, 6,0);
    tracep->declBus(c+63,"funct3", false,-1, 2,0);
    tracep->declBus(c+69,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+136,"a", false,-1, 31,0);
    tracep->declBus(c+38,"b", false,-1, 31,0);
    tracep->declBus(c+39,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+41,"a", false,-1, 31,0);
    tracep->declBus(c+56,"b", false,-1, 31,0);
    tracep->declBus(c+81,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+90,"A", false,-1, 31,0);
    tracep->declBus(c+91,"B", false,-1, 31,0);
    tracep->declBit(c+92,"BrEq", false,-1);
    tracep->declBit(c+93,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+71,"memWrite", false,-1);
    tracep->declBit(c+96,"memRead", false,-1);
    tracep->declBus(c+97,"address", false,-1, 31,0);
    tracep->declBus(c+5,"writeData", false,-1, 31,0);
    tracep->declBus(c+133,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+58,"pc_i", false,-1, 31,0);
    tracep->declBus(c+94,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+3,"data_to_mem_i", false,-1, 31,0);
    tracep->declBus(c+67,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+82,"WB_M_control_i", false,-1, 4,0);
    tracep->declBus(c+70,"pc_o", false,-1, 31,0);
    tracep->declBus(c+97,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+5,"data_to_mem_o", false,-1, 31,0);
    tracep->declBus(c+74,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+83,"WB_M_control_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+41,"pc_i", false,-1, 31,0);
    tracep->declBus(c+90,"dataR1_i", false,-1, 31,0);
    tracep->declBus(c+91,"dataR2_i", false,-1, 31,0);
    tracep->declBus(c+56,"imm_i", false,-1, 31,0);
    tracep->declBus(c+48,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+84,"WB_M_EX_control_i", false,-1, 17,0);
    tracep->declBus(c+58,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"dataR1_o", false,-1, 31,0);
    tracep->declBus(c+3,"dataR2_o", false,-1, 31,0);
    tracep->declBus(c+4,"imm_o", false,-1, 31,0);
    tracep->declBus(c+67,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+85,"WB_M_EX_control_o", false,-1, 17,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+38,"pc_i", false,-1, 31,0);
    tracep->declBus(c+39,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+40,"inst_i", false,-1, 31,0);
    tracep->declBus(c+41,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+42,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+42,"inst", false,-1, 31,0);
    tracep->declBus(c+56,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+86,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+38,"readAddr", false,-1, 31,0);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+70,"pc_i", false,-1, 31,0);
    tracep->declBus(c+97,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+133,"data_R_i", false,-1, 31,0);
    tracep->declBus(c+74,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+87,"control_i", false,-1, 2,0);
    tracep->declBus(c+75,"pc_o", false,-1, 31,0);
    tracep->declBus(c+79,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+80,"data_R_o", false,-1, 31,0);
    tracep->declBus(c+78,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+88,"control_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+137,"size", false,-1, 31,0);
    tracep->declBit(c+61,"sel", false,-1);
    tracep->declBus(c+3,"s0", false,-1, 31,0);
    tracep->declBus(c+4,"s1", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+137,"size", false,-1, 31,0);
    tracep->declBus(c+89,"sel", false,-1, 1,0);
    tracep->declBus(c+39,"s0", false,-1, 31,0);
    tracep->declBus(c+81,"s1", false,-1, 31,0);
    tracep->declBus(c+94,"s2", false,-1, 31,0);
    tracep->declBus(c+132,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+137,"size", false,-1, 31,0);
    tracep->declBus(c+77,"sel", false,-1, 1,0);
    tracep->declBus(c+79,"s0", false,-1, 31,0);
    tracep->declBus(c+80,"s1", false,-1, 31,0);
    tracep->declBus(c+75,"s2", false,-1, 31,0);
    tracep->declBus(c+55,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBus(c+132,"pc_i", false,-1, 31,0);
    tracep->declBus(c+38,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+98,"clk", false,-1);
    tracep->declBit(c+99,"rst", false,-1);
    tracep->declBit(c+76,"regWrite", false,-1);
    tracep->declBus(c+46,"readReg1", false,-1, 4,0);
    tracep->declBus(c+47,"readReg2", false,-1, 4,0);
    tracep->declBus(c+78,"writeReg", false,-1, 4,0);
    tracep->declBus(c+55,"writeData", false,-1, 31,0);
    tracep->declBus(c+90,"readData1", false,-1, 31,0);
    tracep->declBus(c+91,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+56,"i", false,-1, 31,0);
    tracep->declBus(c+57,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+92,"BrEq", false,-1);
    tracep->declBit(c+93,"BrLT", false,-1);
    tracep->declBit(c+49,"memRead", false,-1);
    tracep->declBus(c+53,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+54,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+50,"memWrite", false,-1);
    tracep->declBit(c+51,"ALUSrc", false,-1);
    tracep->declBit(c+52,"regWrite", false,-1);
    tracep->declBus(c+89,"PCSel", false,-1, 1,0);
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
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_4_id),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__readData1_ex),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__readData2_ex),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__imm_ex),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__readData2_mem),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__pc_if),32);
    bufp->fullIData(oldp+39,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)),32);
    bufp->fullIData(oldp+40,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_if)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_if)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->PipelineCPU__DOT__pc_if))] 
                                         << 0x10U) 
                                        | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__pc_if))] 
                                            << 8U) 
                                           | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->PipelineCPU__DOT__pc_if))]))))),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__pc_id),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__inst_id),32);
    bufp->fullCData(oldp+43,((0x7fU & vlSelf->PipelineCPU__DOT__inst_id)),7);
    bufp->fullCData(oldp+44,((7U & (vlSelf->PipelineCPU__DOT__inst_id 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+45,((vlSelf->PipelineCPU__DOT__inst_id 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 7U))),5);
    bufp->fullBit(oldp+49,((IData)((3U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_id)))));
    bufp->fullBit(oldp+50,((IData)((0x23U == (0x7fU 
                                              & vlSelf->PipelineCPU__DOT__inst_id)))));
    bufp->fullBit(oldp+51,(vlSelf->PipelineCPU__DOT__ALUSrc_id));
    bufp->fullBit(oldp+52,(vlSelf->PipelineCPU__DOT__regWrite_id));
    bufp->fullCData(oldp+53,(((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
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
    bufp->fullCData(oldp+54,(vlSelf->PipelineCPU__DOT__ALUOp_id),2);
    bufp->fullIData(oldp+55,(((0U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                               ? vlSelf->PipelineCPU__DOT__ALUOut_wb
                               : ((1U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                   ? vlSelf->PipelineCPU__DOT__memRdata_wb
                                   : ((2U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                       ? vlSelf->PipelineCPU__DOT__pc_wb
                                       : 0U)))),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__imm_id),32);
    bufp->fullIData(oldp+57,((vlSelf->PipelineCPU__DOT__imm_id 
                              << 1U)),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__pc_ex),32);
    bufp->fullBit(oldp+59,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xeU))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xdU))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0xcU))));
    bufp->fullBit(oldp+62,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                  >> 0x11U))));
    bufp->fullCData(oldp+63,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 7U))),3);
    bufp->fullCData(oldp+64,((0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)),7);
    bufp->fullCData(oldp+65,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+66,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+67,(vlSelf->PipelineCPU__DOT__rs_WB_ex),5);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__mux_ALU_input),32);
    bufp->fullCData(oldp+69,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__pc_mem),32);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))));
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                  >> 4U))));
    bufp->fullCData(oldp+73,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+74,(vlSelf->PipelineCPU__DOT__rs_WB_mem),5);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__pc_wb),32);
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o) 
                                  >> 2U))));
    bufp->fullCData(oldp+77,((3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o))),2);
    bufp->fullCData(oldp+78,(vlSelf->PipelineCPU__DOT__rd),5);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__ALUOut_wb),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__memRdata_wb),32);
    bufp->fullIData(oldp+81,((vlSelf->PipelineCPU__DOT__imm_id 
                              + vlSelf->PipelineCPU__DOT__pc_id)),32);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 0xdU))),5);
    bufp->fullCData(oldp+83,(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o),5);
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i),18);
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o),18);
    bufp->fullCData(oldp+86,(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode),7);
    bufp->fullCData(oldp+87,((7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+88,(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o),3);
    bufp->fullCData(oldp+89,(vlSelf->PipelineCPU__DOT__PCSel_id),2);
    bufp->fullIData(oldp+90,(vlSelf->PipelineCPU__DOT__readData1),32);
    bufp->fullIData(oldp+91,(vlSelf->PipelineCPU__DOT__readData2),32);
    bufp->fullBit(oldp+92,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+93,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullIData(oldp+94,(vlSelf->PipelineCPU__DOT__ALUOut_ex),32);
    bufp->fullBit(oldp+95,((0U == vlSelf->PipelineCPU__DOT__ALUOut_ex)));
    bufp->fullBit(oldp+96,(vlSelf->PipelineCPU__DOT__memRead_mem));
    bufp->fullIData(oldp+97,(vlSelf->PipelineCPU__DOT__ALUOut_mem),32);
    bufp->fullBit(oldp+98,(vlSelf->clk));
    bufp->fullBit(oldp+99,(vlSelf->start));
    bufp->fullIData(oldp+100,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+132,(((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                    ? (vlSelf->PipelineCPU__DOT__imm_id 
                                       + vlSelf->PipelineCPU__DOT__pc_id)
                                    : ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                        ? vlSelf->PipelineCPU__DOT__ALUOut_ex
                                        : 0U)))),32);
    bufp->fullIData(oldp+133,(vlSelf->PipelineCPU__DOT__readData_mem),32);
    bufp->fullIData(oldp+134,(vlSelf->PipelineCPU__DOT__inst),32);
    bufp->fullIData(oldp+135,(vlSelf->PipelineCPU__DOT__pc_j_to),32);
    bufp->fullIData(oldp+136,(4U),32);
    bufp->fullIData(oldp+137,(0x20U),32);
}
