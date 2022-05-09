// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimStreamJoinForkDut.h for the primary calling header

#ifndef VERILATED_VSIMSTREAMJOINFORKDUT___024ROOT_H_
#define VERILATED_VSIMSTREAMJOINFORKDUT___024ROOT_H_  // guard

#include "verilated.h"

class VSimStreamJoinForkDut__Syms;
VL_MODULE(VSimStreamJoinForkDut___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmdA_valid,0,0);
    VL_OUT8(io_cmdA_ready,0,0);
    VL_IN8(io_cmdB_valid,0,0);
    VL_OUT8(io_cmdB_ready,0,0);
    VL_OUT8(io_rspMul_valid,0,0);
    VL_IN8(io_rspMul_ready,0,0);
    VL_OUT8(io_rspXor_valid,0,0);
    VL_IN8(io_rspXor_ready,0,0);
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_input_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_valid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_1_valid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__io_cmdA_m2sPipe_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__io_cmdA_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__io_cmdA_m2sPipe_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__io_cmdB_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT___zz_cmdABuffer_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT___zz_cmdABuffer_ready_1;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork__DOT___zz_io_outputs_0_valid;
    CData/*0:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork__DOT___zz_io_outputs_1_valid;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_cmdA_payload,31,0);
    VL_IN(io_cmdB_payload,31,0);
    VL_OUT(io_rspXor_payload,31,0);
    IData/*31:0*/ SimStreamJoinForkDut__DOT__io_cmdA_rData;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__io_cmdA_m2sPipe_rData;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__io_cmdB_rData;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__cmdJoin_rData_a;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__cmdJoin_rData_b;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_1_translated_payload;
    IData/*31:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_1_translated_rData;
    VL_OUT64(io_rspMul_payload,63,0);
    QData/*63:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_rData;
    QData/*63:0*/ SimStreamJoinForkDut__DOT__cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rData;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimStreamJoinForkDut__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimStreamJoinForkDut___024root(const char* name);
    ~VSimStreamJoinForkDut___024root();
    VL_UNCOPYABLE(VSimStreamJoinForkDut___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimStreamJoinForkDut__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
