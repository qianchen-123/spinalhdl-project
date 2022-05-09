// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTimer.h for the primary calling header

#ifndef VERILATED_VTIMER___024ROOT_H_
#define VERILATED_VTIMER___024ROOT_H_  // guard

#include "verilated.h"

class VTimer__Syms;
VL_MODULE(VTimer___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(io_tick,0,0);
    VL_IN8(io_clear,0,0);
    VL_IN8(io_limit,7,0);
    VL_OUT8(io_full,0,0);
    VL_OUT8(io_value,7,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ Timer__DOT__counter;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VTimer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTimer___024root(const char* name);
    ~VTimer___024root();
    VL_UNCOPYABLE(VTimer___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTimer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
