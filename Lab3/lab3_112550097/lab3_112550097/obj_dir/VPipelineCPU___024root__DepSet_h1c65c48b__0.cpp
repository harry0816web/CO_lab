// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if ((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__readData2_mem 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__ALUOut_mem));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__readData2_mem 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__ALUOut_mem));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__readData2_mem 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__ALUOut_mem));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__readData2_mem);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__ALUOut_mem);
        }
        vlSelf->PipelineCPU__DOT__imm_ex = vlSelf->PipelineCPU__DOT__imm_id;
        vlSelf->PipelineCPU__DOT__readData1_ex = vlSelf->PipelineCPU__DOT__readData1;
        vlSelf->PipelineCPU__DOT__pc_4_id = ((IData)(4U) 
                                             + vlSelf->PipelineCPU__DOT__pc_if);
        vlSelf->PipelineCPU__DOT__readData2_mem = vlSelf->PipelineCPU__DOT__readData2_ex;
        vlSelf->PipelineCPU__DOT__readData2_ex = vlSelf->PipelineCPU__DOT__readData2;
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->PipelineCPU__DOT__imm_ex = 0U;
        vlSelf->PipelineCPU__DOT__readData1_ex = 0U;
        vlSelf->PipelineCPU__DOT__pc_4_id = 0U;
        vlSelf->PipelineCPU__DOT__readData2_mem = 0U;
        vlSelf->PipelineCPU__DOT__readData2_ex = 0U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if ((4U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o))) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->PipelineCPU__DOT__rd))
                    ? 0U : ((0U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                             ? vlSelf->PipelineCPU__DOT__ALUOut_wb
                             : ((1U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                 ? vlSelf->PipelineCPU__DOT__memRdata_wb
                                 : ((2U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o)))
                                     ? vlSelf->PipelineCPU__DOT__pc_wb
                                     : 0U))));
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->PipelineCPU__DOT__rd;
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__ALUOut_wb = vlSelf->PipelineCPU__DOT__ALUOut_mem;
        vlSelf->PipelineCPU__DOT__memRdata_wb = vlSelf->PipelineCPU__DOT__readData_mem;
        vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o 
            = (7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                     >> 2U));
        vlSelf->PipelineCPU__DOT__pc_wb = vlSelf->PipelineCPU__DOT__pc_mem;
        vlSelf->PipelineCPU__DOT__rd = vlSelf->PipelineCPU__DOT__rs_WB_mem;
        vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o 
            = (0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                        >> 0xdU));
        vlSelf->PipelineCPU__DOT__pc_mem = vlSelf->PipelineCPU__DOT__pc_ex;
        vlSelf->PipelineCPU__DOT__rs_WB_mem = vlSelf->PipelineCPU__DOT__rs_WB_ex;
        vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
            = vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i;
        vlSelf->PipelineCPU__DOT__pc_ex = vlSelf->PipelineCPU__DOT__pc_id;
        vlSelf->PipelineCPU__DOT__rs_WB_ex = (0x1fU 
                                              & (vlSelf->PipelineCPU__DOT__inst_id 
                                                 >> 7U));
        vlSelf->PipelineCPU__DOT__pc_id = vlSelf->PipelineCPU__DOT__pc_if;
        vlSelf->PipelineCPU__DOT__inst_id = ((0x80U 
                                              <= vlSelf->PipelineCPU__DOT__pc_if)
                                              ? 0U : 
                                             ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__pc_if)] 
                                               << 0x18U) 
                                              | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_if))] 
                                                  << 0x10U) 
                                                 | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->PipelineCPU__DOT__pc_if))] 
                                                     << 8U) 
                                                    | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->PipelineCPU__DOT__pc_if))]))));
        vlSelf->PipelineCPU__DOT__pc_if = vlSelf->PipelineCPU__DOT__pc_i;
    } else {
        vlSelf->PipelineCPU__DOT__ALUOut_wb = 0U;
        vlSelf->PipelineCPU__DOT__memRdata_wb = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o = 0U;
        vlSelf->PipelineCPU__DOT__pc_wb = 0U;
        vlSelf->PipelineCPU__DOT__rd = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o = 0U;
        vlSelf->PipelineCPU__DOT__pc_mem = 0U;
        vlSelf->PipelineCPU__DOT__rs_WB_mem = 0U;
        vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o = 0U;
        vlSelf->PipelineCPU__DOT__pc_ex = 0U;
        vlSelf->PipelineCPU__DOT__rs_WB_ex = 0U;
        vlSelf->PipelineCPU__DOT__pc_id = 0U;
        vlSelf->PipelineCPU__DOT__inst_id = 0U;
        vlSelf->PipelineCPU__DOT__pc_if = 0U;
    }
    vlSelf->PipelineCPU__DOT__ALUCtl = ((0U == (3U 
                                                & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                                   >> 0xaU)))
                                         ? 2U : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                                      >> 0xaU)))
                                                  ? 6U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o 
                                                       >> 0xaU)))
                                                   ? 
                                                  ((0x200U 
                                                    & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                      ? 0U
                                                      : 1U)
                                                     : 0U)
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                      ? 0U
                                                      : 7U)
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o))
                                                       ? 2U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o))
                                                        ? 6U
                                                        : 2U)))))
                                                   : 0U)));
    vlSelf->PipelineCPU__DOT__mux_ALU_input = ((0x1000U 
                                                & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o)
                                                ? vlSelf->PipelineCPU__DOT__imm_ex
                                                : vlSelf->PipelineCPU__DOT__readData2_ex);
    if ((0x40U & vlSelf->PipelineCPU__DOT__inst_id)) {
        vlSelf->PipelineCPU__DOT__regWrite_id = (1U 
                                                 & (IData)(
                                                           ((0x20U 
                                                             == 
                                                             (0x30U 
                                                              & vlSelf->PipelineCPU__DOT__inst_id)) 
                                                            & ((8U 
                                                                & vlSelf->PipelineCPU__DOT__inst_id)
                                                                ? (IData)(
                                                                          (7U 
                                                                           == 
                                                                           (7U 
                                                                            & vlSelf->PipelineCPU__DOT__inst_id)))
                                                                : (IData)(
                                                                          (7U 
                                                                           == 
                                                                           (7U 
                                                                            & vlSelf->PipelineCPU__DOT__inst_id)))))));
        vlSelf->PipelineCPU__DOT__ALUOp_id = ((0x20U 
                                               & vlSelf->PipelineCPU__DOT__inst_id)
                                               ? ((0x10U 
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
                                                      : 0U))))
                                               : 0U);
        vlSelf->PipelineCPU__DOT__ALUSrc_id = (1U & (IData)(
                                                            (0x27U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSelf->PipelineCPU__DOT__inst_id))));
    } else if ((0x20U & vlSelf->PipelineCPU__DOT__inst_id)) {
        vlSelf->PipelineCPU__DOT__regWrite_id = (1U 
                                                 & (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->PipelineCPU__DOT__inst_id))));
        vlSelf->PipelineCPU__DOT__ALUOp_id = ((0x10U 
                                               & vlSelf->PipelineCPU__DOT__inst_id)
                                               ? ((8U 
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
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)))
                                               : 0U);
        vlSelf->PipelineCPU__DOT__ALUSrc_id = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & vlSelf->PipelineCPU__DOT__inst_id))));
    } else if ((0x10U & vlSelf->PipelineCPU__DOT__inst_id)) {
        vlSelf->PipelineCPU__DOT__regWrite_id = (1U 
                                                 & (IData)(
                                                           (3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->PipelineCPU__DOT__inst_id))));
        vlSelf->PipelineCPU__DOT__ALUOp_id = ((8U & vlSelf->PipelineCPU__DOT__inst_id)
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
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)));
        vlSelf->PipelineCPU__DOT__ALUSrc_id = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->PipelineCPU__DOT__inst_id))));
    } else {
        vlSelf->PipelineCPU__DOT__regWrite_id = (1U 
                                                 & (IData)(
                                                           (3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->PipelineCPU__DOT__inst_id))));
        vlSelf->PipelineCPU__DOT__ALUOp_id = 0U;
        vlSelf->PipelineCPU__DOT__ALUSrc_id = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->PipelineCPU__DOT__inst_id))));
    }
    vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode 
        = (0x7fU & vlSelf->PipelineCPU__DOT__inst_id);
    vlSelf->PipelineCPU__DOT__imm_id = ((0x40U & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                         ? ((0x20U 
                                             & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->PipelineCPU__DOT__inst_id 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->PipelineCPU__DOT__inst_id) 
                                                           | ((0x800U 
                                                               & (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->PipelineCPU__DOT__inst_id 
                                                                    >> 0x14U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__inst_id 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->PipelineCPU__DOT__inst_id 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->PipelineCPU__DOT__inst_id 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->PipelineCPU__DOT__inst_id 
                                                                    >> 7U))))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                          ? ((0x10U 
                                              & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->PipelineCPU__DOT__inst_id 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->PipelineCPU__DOT__inst_id 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                              ? ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__inst_id 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__inst_id 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__inst_id 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i 
        = (((IData)(vlSelf->PipelineCPU__DOT__regWrite_id) 
            << 0x11U) | ((((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
                            ? ((0x20U & vlSelf->PipelineCPU__DOT__inst_id)
                                ? ((0x10U & vlSelf->PipelineCPU__DOT__inst_id)
                                    ? 0U : ((8U & vlSelf->PipelineCPU__DOT__inst_id)
                                             ? ((4U 
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
                                             : ((4U 
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
                                : 0U) : ((0x20U & vlSelf->PipelineCPU__DOT__inst_id)
                                          ? 0U : ((0x10U 
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
                                                      : 0U)))))) 
                          << 0xfU) | (((IData)((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__inst_id))) 
                                       << 0xeU) | (
                                                   ((IData)(
                                                            (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->PipelineCPU__DOT__inst_id))) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PipelineCPU__DOT__ALUSrc_id) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PipelineCPU__DOT__ALUOp_id) 
                                                          << 0xaU) 
                                                         | ((0x380U 
                                                             & (vlSelf->PipelineCPU__DOT__inst_id 
                                                                >> 5U)) 
                                                            | (vlSelf->PipelineCPU__DOT__inst_id 
                                                               >> 0x19U))))))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__memRead_mem) {
        vlSelf->PipelineCPU__DOT__readData_mem = ((0xffffffU 
                                                   & vlSelf->PipelineCPU__DOT__readData_mem) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_mem))] 
                                                     << 0x18U));
        vlSelf->PipelineCPU__DOT__readData_mem = ((0xff00ffffU 
                                                   & vlSelf->PipelineCPU__DOT__readData_mem) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_mem))] 
                                                     << 0x10U));
        vlSelf->PipelineCPU__DOT__readData_mem = ((0xffff00ffU 
                                                   & vlSelf->PipelineCPU__DOT__readData_mem) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_mem))] 
                                                     << 8U));
        vlSelf->PipelineCPU__DOT__readData_mem = ((0xffffff00U 
                                                   & vlSelf->PipelineCPU__DOT__readData_mem) 
                                                  | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__ALUOut_mem)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__readData1 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__readData2 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_id 
                   >> 0x14U))];
    vlSelf->PipelineCPU__DOT__BrEq = ((vlSelf->PipelineCPU__DOT__readData1 
                                       == vlSelf->PipelineCPU__DOT__readData2)
                                       ? 1U : 0U);
    vlSelf->PipelineCPU__DOT__BrLT = (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__readData1, vlSelf->PipelineCPU__DOT__readData2)
                                       ? 1U : 0U);
    vlSelf->PipelineCPU__DOT__PCSel_id = ((0x40U & vlSelf->PipelineCPU__DOT__inst_id)
                                           ? ((0x20U 
                                               & vlSelf->PipelineCPU__DOT__inst_id)
                                               ? ((0x10U 
                                                   & vlSelf->PipelineCPU__DOT__inst_id)
                                                   ? 0U
                                                   : 
                                                  ((8U 
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
                                                       ? 1U
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
                                                     : 
                                                    ((2U 
                                                      & vlSelf->PipelineCPU__DOT__inst_id)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->PipelineCPU__DOT__inst_id)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->PipelineCPU__DOT__inst_id)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->PipelineCPU__DOT__inst_id)
                                                         ? 0U
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->PipelineCPU__DOT__inst_id)
                                                          ? 
                                                         ((1U 
                                                           & ((~ (IData)(vlSelf->PipelineCPU__DOT__BrLT)) 
                                                              | (IData)(vlSelf->PipelineCPU__DOT__BrEq)))
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlSelf->PipelineCPU__DOT__BrLT)
                                                           ? 1U
                                                           : 0U)))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->PipelineCPU__DOT__inst_id)
                                                         ? 0U
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->PipelineCPU__DOT__inst_id)
                                                          ? 
                                                         ((IData)(vlSelf->PipelineCPU__DOT__BrEq)
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((IData)(vlSelf->PipelineCPU__DOT__BrEq)
                                                           ? 1U
                                                           : 0U))))
                                                       : 0U)
                                                      : 0U))))
                                               : 0U)
                                           : 0U);
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->PipelineCPU__DOT__memRead_mem = (1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                                   >> 1U));
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->PipelineCPU__DOT__ALUOut_mem = ((IData)(vlSelf->start)
                                             ? vlSelf->PipelineCPU__DOT__ALUOut_ex
                                             : 0U);
    vlSelf->PipelineCPU__DOT__ALUOut_ex = ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__readData1_ex, vlSelf->PipelineCPU__DOT__mux_ALU_input)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__readData1_ex 
                                                  - vlSelf->PipelineCPU__DOT__mux_ALU_input))
                                                 : 0U)
                                             : ((2U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__readData1_ex 
                                                  + vlSelf->PipelineCPU__DOT__mux_ALU_input))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                  ? 
                                                 (vlSelf->PipelineCPU__DOT__readData1_ex 
                                                  | vlSelf->PipelineCPU__DOT__mux_ALU_input)
                                                  : 
                                                 (vlSelf->PipelineCPU__DOT__readData1_ex 
                                                  & vlSelf->PipelineCPU__DOT__mux_ALU_input)))));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__pc_i = ((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                       ? ((IData)(4U) 
                                          + vlSelf->PipelineCPU__DOT__pc_if)
                                       : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                           ? (vlSelf->PipelineCPU__DOT__imm_id 
                                              + vlSelf->PipelineCPU__DOT__pc_id)
                                           : ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_id))
                                               ? vlSelf->PipelineCPU__DOT__ALUOut_ex
                                               : 0U)));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__1(vlSelf);
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
