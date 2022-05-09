// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStreamUnit.h for the primary calling header

#ifndef VERILATED_VSTREAMUNIT___024ROOT_H_
#define VERILATED_VSTREAMUNIT___024ROOT_H_  // guard

#include "verilated.h"

class VStreamUnit__Syms;
class VStreamUnit_StreamUnit;

VL_MODULE(VStreamUnit___024root) {
  public:
    // CELLS
    VStreamUnit_StreamUnit* StreamUnit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_memWrite_valid,0,0);
    VL_IN8(io_memWrite_payload_address,7,0);
    VL_IN8(io_cmdA_valid,0,0);
    VL_OUT8(io_cmdA_ready,0,0);
    VL_IN8(io_cmdA_payload,7,0);
    VL_IN8(io_cmdB_valid,0,0);
    VL_OUT8(io_cmdB_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_memWrite_payload_data,31,0);
    VL_IN(io_cmdB_payload,31,0);
    VL_OUT(io_rsp_payload,31,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VStreamUnit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStreamUnit___024root(const char* name);
    ~VStreamUnit___024root();
    VL_UNCOPYABLE(VStreamUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(VStreamUnit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
