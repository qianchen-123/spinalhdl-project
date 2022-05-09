// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPrimeUsage.h for the primary calling header

#ifndef VERILATED_VPRIMEUSAGE___024ROOT_H_
#define VERILATED_VPRIMEUSAGE___024ROOT_H_  // guard

#include "verilated.h"

class VPrimeUsage__Syms;
VL_MODULE(VPrimeUsage___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_value,4,0);
    VL_OUT8(io_isPrime,0,0);

    // INTERNAL VARIABLES
    VPrimeUsage__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPrimeUsage___024root(const char* name);
    ~VPrimeUsage___024root();
    VL_UNCOPYABLE(VPrimeUsage___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPrimeUsage__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
