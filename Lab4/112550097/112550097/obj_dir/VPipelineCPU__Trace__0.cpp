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
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__pc_if),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)),32);
        bufp->chgIData(oldp+2,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_if)
                                 ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                          [(0x7fU & vlSelf->PipelineCPU__DOT__pc_if)] 
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
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__pc_id),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__pc_4_id),32);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__pc_ex),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__readData1_ex),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__readData2_ex),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__imm_ex),32);
        bufp->chgCData(oldp+9,(vlSelf->PipelineCPU__DOT__rs1_ex),5);
        bufp->chgCData(oldp+10,(vlSelf->PipelineCPU__DOT__rs2_ex),5);
        bufp->chgBit(oldp+11,(vlSelf->PipelineCPU__DOT__is_jump_flag));
        bufp->chgCData(oldp+12,(vlSelf->PipelineCPU__DOT__jump_PC_Sel),2);
        bufp->chgBit(oldp+13,(vlSelf->PipelineCPU__DOT__is_jalr_flag));
        bufp->chgCData(oldp+14,(vlSelf->PipelineCPU__DOT__jalr_PC_Sel),2);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__pc_mem),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__readData2_mem),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__pc_wb),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__ALUOut_wb),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__memRdata_wb),32);
        bufp->chgIData(oldp+20,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_wb)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__inst_id),32);
        bufp->chgCData(oldp+54,((0x7fU & vlSelf->PipelineCPU__DOT__inst_id)),7);
        bufp->chgCData(oldp+55,((7U & (vlSelf->PipelineCPU__DOT__inst_id 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+56,((vlSelf->PipelineCPU__DOT__inst_id 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+57,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                          >> 7U))),5);
        bufp->chgBit(oldp+60,((IData)((3U == (0x7fU 
                                              & vlSelf->PipelineCPU__DOT__inst_id)))));
        bufp->chgBit(oldp+61,((IData)((0x23U == (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_id)))));
        bufp->chgBit(oldp+62,(vlSelf->PipelineCPU__DOT__ALUSrc_id));
        bufp->chgBit(oldp+63,(vlSelf->PipelineCPU__DOT__regWrite_id));
        bufp->chgCData(oldp+64,(((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
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
        bufp->chgCData(oldp+65,(vlSelf->PipelineCPU__DOT__ALUOp_id),2);
        bufp->chgBit(oldp+66,((IData)((0x67U == (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_id)))));
        bufp->chgCData(oldp+67,(vlSelf->PipelineCPU__DOT__Br_J_Sel),2);
        bufp->chgIData(oldp+68,(vlSelf->PipelineCPU__DOT__writeData),32);
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__imm_id),32);
        bufp->chgIData(oldp+70,((vlSelf->PipelineCPU__DOT__imm_id 
                                 << 1U)),32);
        bufp->chgBit(oldp+71,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xeU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xdU))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0xcU))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                     >> 0x11U))));
        bufp->chgCData(oldp+75,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 7U))),3);
        bufp->chgCData(oldp+76,((0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)),7);
        bufp->chgCData(oldp+77,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 0xfU))),2);
        bufp->chgCData(oldp+78,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+79,(vlSelf->PipelineCPU__DOT__rs_WB_ex),5);
        bufp->chgIData(oldp+80,(vlSelf->PipelineCPU__DOT__RS1E_data),32);
        bufp->chgIData(oldp+81,(vlSelf->PipelineCPU__DOT__RS2E_data),32);
        bufp->chgCData(oldp+82,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
        bufp->chgCData(oldp+83,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
        bufp->chgCData(oldp+84,(vlSelf->PipelineCPU__DOT__id_ForwardA),2);
        bufp->chgCData(oldp+85,(vlSelf->PipelineCPU__DOT__id_ForwardB),2);
        bufp->chgBit(oldp+86,((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_id))));
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__mux_ALU_input),32);
        bufp->chgCData(oldp+88,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgIData(oldp+89,(vlSelf->PipelineCPU__DOT__ALUOut_ex),32);
        bufp->chgBit(oldp+90,((0U == vlSelf->PipelineCPU__DOT__ALUOut_ex)));
        bufp->chgBit(oldp+91,(vlSelf->PipelineCPU__DOT__memRead_mem));
        bufp->chgBit(oldp+92,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                     >> 4U))));
        bufp->chgCData(oldp+94,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+95,(vlSelf->PipelineCPU__DOT__rs_WB_mem),5);
        bufp->chgIData(oldp+96,(vlSelf->PipelineCPU__DOT__ALUOut_mem),32);
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o) 
                                     >> 2U))));
        bufp->chgCData(oldp+98,((3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o))),2);
        bufp->chgCData(oldp+99,(vlSelf->PipelineCPU__DOT__rd),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                           >> 0xdU))),5);
        bufp->chgCData(oldp+101,(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o),5);
        bufp->chgIData(oldp+102,(vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i),18);
        bufp->chgIData(oldp+103,(vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o),18);
        bufp->chgCData(oldp+104,(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode),7);
        bufp->chgCData(oldp+105,((7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                        >> 2U))),3);
        bufp->chgCData(oldp+106,(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+107,(vlSelf->PipelineCPU__DOT__Flush_HD),2);
        bufp->chgBit(oldp+108,(vlSelf->PipelineCPU__DOT__stall_if));
        bufp->chgCData(oldp+109,(vlSelf->PipelineCPU__DOT__PCSel_id),2);
        bufp->chgIData(oldp+110,(vlSelf->PipelineCPU__DOT__readData1_muxed),32);
        bufp->chgIData(oldp+111,(vlSelf->PipelineCPU__DOT__readData2_muxed),32);
        bufp->chgIData(oldp+112,(vlSelf->PipelineCPU__DOT__readData1),32);
        bufp->chgBit(oldp+113,(vlSelf->PipelineCPU__DOT__BrEq));
        bufp->chgBit(oldp+114,(vlSelf->PipelineCPU__DOT__BrLT));
        bufp->chgCData(oldp+115,(vlSelf->PipelineCPU__DOT__PC_sel_final),2);
    }
    bufp->chgBit(oldp+116,(vlSelf->clk));
    bufp->chgBit(oldp+117,(vlSelf->start));
    bufp->chgIData(oldp+118,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+138,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+139,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+140,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+141,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+142,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+143,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+144,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+145,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+146,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+147,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+148,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+149,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+150,((((((vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
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
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__inst_id 
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
    bufp->chgIData(oldp+151,(((2U & (IData)(vlSelf->PipelineCPU__DOT__PC_sel_final))
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
                                   : ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_if)))),32);
    bufp->chgBit(oldp+152,(((((vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
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
    bufp->chgIData(oldp+153,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+154,((vlSelf->PipelineCPU__DOT__pc_ex 
                              + vlSelf->PipelineCPU__DOT__mux_ALU_input)),32);
    bufp->chgIData(oldp+155,(vlSelf->PipelineCPU__DOT__readData_mem),32);
    bufp->chgIData(oldp+156,((((IData)((0x67U == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_id)))
                                ? vlSelf->PipelineCPU__DOT__readData1
                                : vlSelf->PipelineCPU__DOT__pc_id) 
                              + vlSelf->PipelineCPU__DOT__imm_id)),32);
    bufp->chgIData(oldp+157,(((IData)((0x67U == (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_id)))
                               ? vlSelf->PipelineCPU__DOT__readData1
                               : vlSelf->PipelineCPU__DOT__pc_id)),32);
    bufp->chgCData(oldp+158,(((IData)(vlSelf->PipelineCPU__DOT__is_jump_flag)
                               ? (IData)(vlSelf->PipelineCPU__DOT__jump_PC_Sel)
                               : (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))),2);
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
}
