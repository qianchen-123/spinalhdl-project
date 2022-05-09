// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VApb3Timer.h for the primary calling header

#ifndef VERILATED_VAPB3TIMER___024ROOT_H_
#define VERILATED_VAPB3TIMER___024ROOT_H_  // guard

#include "verilated.h"

class VApb3Timer__Syms;
VL_MODULE(VApb3Timer___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_apb_PADDR,7,0);
    VL_IN8(io_apb_PSEL,0,0);
    VL_IN8(io_apb_PENABLE,0,0);
    VL_OUT8(io_apb_PREADY,0,0);
    VL_IN8(io_apb_PWRITE,0,0);
    VL_OUT8(io_apb_PSLVERROR,0,0);
    VL_OUT8(io_fullA,0,0);
    VL_OUT8(io_fullB,0,0);
    VL_IN8(io_external_tick,0,0);
    VL_IN8(io_external_clear,0,0);
    CData/*0:0*/ Apb3Timer__DOT__timerA_io_full;
    CData/*0:0*/ Apb3Timer__DOT__timerB_io_full;
    CData/*3:0*/ Apb3Timer__DOT__clockDivider_counter;
    CData/*0:0*/ Apb3Timer__DOT__apbCtrl_doWrite;
    CData/*2:0*/ Apb3Timer__DOT__bridgeA_ticksEnable;
    CData/*1:0*/ Apb3Timer__DOT__bridgeA_clearEnable;
    CData/*0:0*/ Apb3Timer__DOT__bridgeA_busClearing;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l67;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l72;
    CData/*2:0*/ Apb3Timer__DOT__bridgeB_ticksEnable;
    CData/*1:0*/ Apb3Timer__DOT__bridgeB_clearEnable;
    CData/*0:0*/ Apb3Timer__DOT__bridgeB_busClearing;
    CData/*7:0*/ Apb3Timer__DOT__timerB_io_limit_driver;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l67_1;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l72_1;
    CData/*7:0*/ Apb3Timer__DOT__timerB__DOT__counter;
    CData/*3:0*/ __Vdly__Apb3Timer__DOT__clockDivider_counter;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    SData/*15:0*/ Apb3Timer__DOT__timerA_io_limit_driver;
    SData/*15:0*/ Apb3Timer__DOT__timerA__DOT__counter;
    VL_IN(io_apb_PWDATA,31,0);
    VL_OUT(io_apb_PRDATA,31,0);
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VApb3Timer__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VApb3Timer___024root(const char* name);
    ~VApb3Timer___024root();
    VL_UNCOPYABLE(VApb3Timer___024root);

    // INTERNAL METHODS
    void __Vconfigure(VApb3Timer__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
