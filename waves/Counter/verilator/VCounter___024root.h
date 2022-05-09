// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"

class VCounter__Syms;
VL_MODULE(VCounter___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_clear,0,0);
    VL_OUT8(io_value,3,0);
    VL_OUT8(io_full,0,0);
    CData/*3:0*/ Counter__DOT__counter_1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    VCounter__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VCounter___024root(const char* name);
    ~VCounter___024root();
    VL_UNCOPYABLE(VCounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(VCounter__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
