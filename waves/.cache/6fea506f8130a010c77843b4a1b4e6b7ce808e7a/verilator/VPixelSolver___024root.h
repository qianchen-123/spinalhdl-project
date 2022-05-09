// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolver.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVER___024ROOT_H_
#define VERILATED_VPIXELSOLVER___024ROOT_H_  // guard

#include "verilated.h"

class VPixelSolver__Syms;
VL_MODULE(VPixelSolver___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_OUT8(io_cmd_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_OUT8(io_rsp_payload_iteration,3,0);
    CData/*0:0*/ PixelSolver__DOT__Inserter_loopBack_valid;
    CData/*0:0*/ PixelSolver__DOT__Inserter_taskId_willIncrement;
    CData/*2:0*/ PixelSolver__DOT__Inserter_taskId_valueNext;
    CData/*2:0*/ PixelSolver__DOT__Inserter_taskId_value;
    CData/*0:0*/ PixelSolver__DOT__Mulstage_input_valid;
    CData/*2:0*/ PixelSolver__DOT__Mulstage_input_payload_id;
    CData/*3:0*/ PixelSolver__DOT__Mulstage_input_payload_iteration;
    CData/*0:0*/ PixelSolver__DOT__Mulstage_input_payload_done;
    CData/*0:0*/ PixelSolver__DOT__AddStage_input_valid;
    CData/*2:0*/ PixelSolver__DOT__AddStage_input_payload_id;
    CData/*3:0*/ PixelSolver__DOT__AddStage_input_payload_iteration;
    CData/*0:0*/ PixelSolver__DOT__AddStage_input_payload_done;
    CData/*0:0*/ PixelSolver__DOT__AddStage_output_payload_done;
    CData/*0:0*/ PixelSolver__DOT__Rounter_input_valid;
    CData/*2:0*/ PixelSolver__DOT__Rounter_input_payload_id;
    CData/*3:0*/ PixelSolver__DOT__Rounter_input_payload_iteration;
    CData/*0:0*/ PixelSolver__DOT__Rounter_input_payload_done;
    CData/*0:0*/ PixelSolver__DOT__Rounter_taskId_willIncrement;
    CData/*2:0*/ PixelSolver__DOT__Rounter_taskId_valueNext;
    CData/*2:0*/ PixelSolver__DOT__Rounter_taskId_value;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_cmd_payload_x,27,0);
    VL_IN(io_cmd_payload_y,27,0);
    IData/*27:0*/ PixelSolver__DOT__Mulstage_input_payload_x0;
    IData/*27:0*/ PixelSolver__DOT__Mulstage_input_payload_y0;
    IData/*27:0*/ PixelSolver__DOT__Mulstage_input_payload_x;
    IData/*27:0*/ PixelSolver__DOT__Mulstage_input_payload_y;
    IData/*27:0*/ PixelSolver__DOT__AddStage_input_payload_x0;
    IData/*27:0*/ PixelSolver__DOT__AddStage_input_payload_y0;
    IData/*27:0*/ PixelSolver__DOT__AddStage_input_payload_xx;
    IData/*27:0*/ PixelSolver__DOT__AddStage_input_payload_yy;
    IData/*27:0*/ PixelSolver__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ PixelSolver__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ PixelSolver__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ PixelSolver__DOT__Rounter_input_payload_x;
    IData/*27:0*/ PixelSolver__DOT__Rounter_input_payload_y;
    IData/*27:0*/ __Vdly__PixelSolver__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolver__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolver__DOT__Rounter_input_payload_x;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPixelSolver__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPixelSolver___024root(const char* name);
    ~VPixelSolver___024root();
    VL_UNCOPYABLE(VPixelSolver___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPixelSolver__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
