// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemorySumming.h for the primary calling header

#ifndef VERILATED_VMEMORYSUMMING___024ROOT_H_
#define VERILATED_VMEMORYSUMMING___024ROOT_H_  // guard

#include "verilated.h"

class VMemorySumming__Syms;
VL_MODULE(VMemorySumming___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_wr_clk,0,0);
    VL_IN8(io_sum_clk,0,0);
    VL_IN8(io_sum_reset,0,0);
    VL_IN8(io_wr_en,0,0);
    VL_IN8(io_wr_addr,7,0);
    VL_IN8(io_sum_start,0,0);
    VL_OUT8(io_sum_done,0,0);
    CData/*7:0*/ MemorySumming__DOT__sumArea_counter;
    CData/*0:0*/ MemorySumming__DOT__sumArea_active;
    CData/*0:0*/ MemorySumming__DOT__when_MemorySumming_l69;
    CData/*0:0*/ MemorySumming__DOT__sumArea_readDataValid;
    CData/*0:0*/ MemorySumming__DOT__sumArea_readDataValid_regNext;
    CData/*7:0*/ __Vdly__MemorySumming__DOT__sumArea_counter;
    CData/*7:0*/ __Vdlyvdim0__MemorySumming__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MemorySumming__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vclklast__TOP__io_wr_clk;
    CData/*0:0*/ __Vclklast__TOP__io_sum_clk;
    CData/*0:0*/ __Vclklast__TOP__io_sum_reset;
    VL_IN16(io_wr_data,15,0);
    VL_OUT16(io_sum_value,15,0);
    SData/*15:0*/ MemorySumming__DOT__ram_io_rd_data;
    SData/*15:0*/ MemorySumming__DOT__sumArea_sum;
    IData/*16:0*/ __Vdlyvval__MemorySumming__DOT__ram__DOT__mem__v0;
    VlUnpacked<IData/*16:0*/, 256> MemorySumming__DOT__ram__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMemorySumming__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMemorySumming___024root(const char* name);
    ~VMemorySumming___024root();
    VL_UNCOPYABLE(VMemorySumming___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMemorySumming__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
