// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__pc_4_id),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__readData1_ex),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__readData2_ex),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__imm_ex),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__readData2_mem),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__pc_if),32);
        bufp->chgIData(oldp+38,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)),32);
        bufp->chgIData(oldp+39,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_if)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__pc_if)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
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
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__pc_id),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__inst_id),32);
        bufp->chgCData(oldp+42,((0x7fU & vlSelf->PipelineCPU__DOT__inst_id)),7);
        bufp->chgCData(oldp+43,((7U & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+44,((vlSelf->PipelineCPU__DOT__inst_id 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 7U))),5);
        bufp->chgBit(oldp+48,((IData)((3U == (0x7fU 
                                              & vlSelf->PipelineCPU__DOT__inst_id)))));
        bufp->chgBit(oldp+49,((IData)((0x23U == (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_id)))));
        bufp->chgBit(oldp+50,(vlSelf->PipelineCPU__DOT__ALUSrc_id));
        bufp->chgBit(oldp+51,(vlSelf->PipelineCPU__DOT__regWrite_id));
        bufp->chgCData(oldp+52,(((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
                                  ? ((0x20U & vlSelf->PipelineCPU__DOT__inst_id)
                                      ? ((0x10U & vlSelf->PipelineCPU__DOT__inst_id)
                                          ? 0U : ((8U 
                                                   & vlSelf->PipelineCPU__DOT__inst_id)
                                                   ? 
                                                  ((4U 
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
                                                   : 
                                                  ((4U 
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
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    & vlSelf->PipelineCPU__DOT__inst_id)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__inst_id)
                                                     ? 0U
                                                     : 
                                                    ((4U 
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
        bufp->chgCData(oldp+53,(vlSelf->PipelineCPU__DOT__ALUOp_id),2);
        bufp->chgIData(oldp+54,(((0U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                  ? vlSelf->PipelineCPU__DOT__ALUOut_wb
                                  : ((1U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                      ? vlSelf->PipelineCPU__DOT__memRdata_wb
                                      : ((2U == (3U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                          ? vlSelf->PipelineCPU__DOT__pc_wb
                                          : 0U)))),32);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__imm_id),32);
        bufp->chgIData(oldp+56,((vlSelf->PipelineCPU__DOT__imm_id 
                                 << 1U)),32);
        bufp->chgIData(oldp+57,(vlSelf->PipelineCPU__DOT__pc_ex),32);
        bufp->chgBit(oldp+58,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xeU))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xdU))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xcU))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0x11U))));
        bufp->chgCData(oldp+62,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 7U))),3);
        bufp->chgCData(oldp+63,((0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)),7);
        bufp->chgCData(oldp+64,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 0xfU))),2);
        bufp->chgCData(oldp+65,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+66,(vlSelf->PipelineCPU__DOT__rs_WB_ex),5);
        bufp->chgIData(oldp+67,(vlSelf->PipelineCPU__DOT__mux_ALU_input),32);
        bufp->chgCData(oldp+68,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__pc_mem),32);
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                     >> 4U))));
        bufp->chgCData(oldp+72,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+73,(vlSelf->PipelineCPU__DOT__rs_WB_mem),5);
        bufp->chgIData(oldp+74,(vlSelf->PipelineCPU__DOT__pc_wb),32);
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o) 
                                     >> 2U))));
        bufp->chgCData(oldp+76,((3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o))),2);
        bufp->chgCData(oldp+77,(vlSelf->PipelineCPU__DOT__rd),5);
        bufp->chgIData(oldp+78,(vlSelf->PipelineCPU__DOT__ALUOut_wb),32);
        bufp->chgIData(oldp+79,(vlSelf->PipelineCPU__DOT__memRdata_wb),32);
        bufp->chgIData(oldp+80,((vlSelf->PipelineCPU__DOT__imm_id 
                                 + vlSelf->PipelineCPU__DOT__pc_id)),32);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                          >> 0xdU))),5);
        bufp->chgCData(oldp+82,(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o),5);
        bufp->chgIData(oldp+83,(vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i),18);
        bufp->chgIData(oldp+84,(vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o),18);
        bufp->chgCData(oldp+85,(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode),7);
        bufp->chgCData(oldp+86,((7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+87,(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+88,(vlSelf->PipelineCPU__DOT__PCSel_id),2);
        bufp->chgIData(oldp+89,(vlSelf->PipelineCPU__DOT__readData1),32);
        bufp->chgIData(oldp+90,(vlSelf->PipelineCPU__DOT__readData2),32);
        bufp->chgBit(oldp+91,(vlSelf->PipelineCPU__DOT__BrEq));
        bufp->chgBit(oldp+92,(vlSelf->PipelineCPU__DOT__BrLT));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+93,(vlSelf->PipelineCPU__DOT__ALUOut_ex),32);
        bufp->chgBit(oldp+94,((0U == vlSelf->PipelineCPU__DOT__ALUOut_ex)));
        bufp->chgBit(oldp+95,(vlSelf->PipelineCPU__DOT__memRead_mem));
        bufp->chgIData(oldp+96,(vlSelf->PipelineCPU__DOT__ALUOut_mem),32);
    }
    bufp->chgBit(oldp+97,(vlSelf->clk));
    bufp->chgBit(oldp+98,(vlSelf->start));
    bufp->chgIData(oldp+99,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+131,(((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                               ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                   ? (vlSelf->PipelineCPU__DOT__imm_id 
                                      + vlSelf->PipelineCPU__DOT__pc_id)
                                   : ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                       ? vlSelf->PipelineCPU__DOT__ALUOut_ex
                                       : 0U)))),32);
    bufp->chgIData(oldp+132,(vlSelf->PipelineCPU__DOT__readData_mem),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
