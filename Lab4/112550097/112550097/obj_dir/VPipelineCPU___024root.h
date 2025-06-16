// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__memRead_mem;
        CData/*1:0*/ PipelineCPU__DOT__Flush_HD;
        CData/*0:0*/ PipelineCPU__DOT__stall_if;
        CData/*0:0*/ PipelineCPU__DOT__ALUSrc_id;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_id;
        CData/*1:0*/ PipelineCPU__DOT__PCSel_id;
        CData/*1:0*/ PipelineCPU__DOT__ALUOp_id;
        CData/*1:0*/ PipelineCPU__DOT__Br_J_Sel;
        CData/*0:0*/ PipelineCPU__DOT__BrEq;
        CData/*0:0*/ PipelineCPU__DOT__BrLT;
        CData/*4:0*/ PipelineCPU__DOT__rs_WB_ex;
        CData/*4:0*/ PipelineCPU__DOT__rs1_ex;
        CData/*4:0*/ PipelineCPU__DOT__rs2_ex;
        CData/*0:0*/ PipelineCPU__DOT__is_jump_flag;
        CData/*1:0*/ PipelineCPU__DOT__jump_PC_Sel;
        CData/*0:0*/ PipelineCPU__DOT__is_jalr_flag;
        CData/*1:0*/ PipelineCPU__DOT__jalr_PC_Sel;
        CData/*1:0*/ PipelineCPU__DOT__ex_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__ex_ForwardB;
        CData/*1:0*/ PipelineCPU__DOT__id_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__id_ForwardB;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*4:0*/ PipelineCPU__DOT__rs_WB_mem;
        CData/*4:0*/ PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o;
        CData/*4:0*/ PipelineCPU__DOT__rd;
        CData/*2:0*/ PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__control_o;
        CData/*1:0*/ PipelineCPU__DOT__PC_sel_final;
        CData/*6:0*/ PipelineCPU__DOT__m_ImmGen__DOT__unnamedblk1__DOT__opcode;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__memRead_mem;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ PipelineCPU__DOT__pc_muxed;
        IData/*31:0*/ PipelineCPU__DOT__pc_if;
        IData/*31:0*/ PipelineCPU__DOT__inst;
        IData/*31:0*/ PipelineCPU__DOT__pc_id;
        IData/*31:0*/ PipelineCPU__DOT__pc_4_id;
        IData/*31:0*/ PipelineCPU__DOT__inst_id;
        IData/*31:0*/ PipelineCPU__DOT__readData1_muxed;
        IData/*31:0*/ PipelineCPU__DOT__readData2_muxed;
        IData/*31:0*/ PipelineCPU__DOT__readData1;
        IData/*31:0*/ PipelineCPU__DOT__writeData;
        IData/*31:0*/ PipelineCPU__DOT__imm_id;
        IData/*31:0*/ PipelineCPU__DOT__pc_ex;
        IData/*31:0*/ PipelineCPU__DOT__readData1_ex;
        IData/*31:0*/ PipelineCPU__DOT__readData2_ex;
        IData/*31:0*/ PipelineCPU__DOT__imm_ex;
        IData/*31:0*/ PipelineCPU__DOT__instruction_ex;
        IData/*17:0*/ PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__WB_M_EX_control_o;
        IData/*17:0*/ PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__WB_M_EX_control_i;
        IData/*31:0*/ PipelineCPU__DOT__RS1E_data;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__RS2E_data;
        IData/*31:0*/ PipelineCPU__DOT__mux_ALU_input;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut_ex;
        IData/*31:0*/ PipelineCPU__DOT__pc_mem;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut_mem;
        IData/*31:0*/ PipelineCPU__DOT__readData2_mem;
        IData/*31:0*/ PipelineCPU__DOT__readData_mem;
        IData/*31:0*/ PipelineCPU__DOT__pc_wb;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut_wb;
        IData/*31:0*/ PipelineCPU__DOT__memRdata_wb;
        IData/*31:0*/ PipelineCPU__DOT__pc_j_to;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__inst_id;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ALUOut_mem;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
