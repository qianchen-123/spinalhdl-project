// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VApbPwm.h for the primary calling header

#ifndef VERILATED_VAPBPWM___024ROOT_H_
#define VERILATED_VAPBPWM___024ROOT_H_  // guard

#include "verilated.h"

class VApbPwm__Syms;
VL_MODULE(VApbPwm___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_apb_PSEL,0,0);
    VL_IN8(io_apb_PENABLE,0,0);
    VL_IN8(io_apb_PWRITE,0,0);
    VL_IN8(io_apb_PADDR,7,0);
    VL_OUT8(io_apb_PREADY,0,0);
    VL_OUT8(io_pwm,0,0);
    CData/*0:0*/ ApbPwm__DOT__logic_enable;
    CData/*7:0*/ ApbPwm__DOT__logic_timer;
    CData/*7:0*/ ApbPwm__DOT__logic_dutyCycle;
    CData/*0:0*/ ApbPwm__DOT__logic_output;
    CData/*0:0*/ ApbPwm__DOT__control_doWrite;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_apb_PWDATA,31,0);
    VL_OUT(io_apb_PRDATA,31,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VApbPwm__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VApbPwm___024root(const char* name);
    ~VApbPwm___024root();
    VL_UNCOPYABLE(VApbPwm___024root);

    // INTERNAL METHODS
    void __Vconfigure(VApbPwm__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
