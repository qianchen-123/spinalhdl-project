// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimCounterDut.h for the primary calling header

#ifndef VERILATED_VSIMCOUNTERDUT___024ROOT_H_
#define VERILATED_VSIMCOUNTERDUT___024ROOT_H_  // guard

#include "verilated.h"

class VSimCounterDut__Syms;
VL_MODULE(VSimCounterDut___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_enable,0,0);
    VL_OUT8(io_value,7,0);
    CData/*7:0*/ SimCounterDut__DOT___zz_reg_1;
    CData/*7:0*/ SimCounterDut__DOT__reg_1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    VSimCounterDut__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimCounterDut___024root(const char* name);
    ~VSimCounterDut___024root();
    VL_UNCOPYABLE(VSimCounterDut___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimCounterDut__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
