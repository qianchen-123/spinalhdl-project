// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUartCtrlRx.h for the primary calling header

#ifndef VERILATED_VUARTCTRLRX___024ROOT_H_
#define VERILATED_VUARTCTRLRX___024ROOT_H_  // guard

#include "verilated.h"

class VUartCtrlRx__Syms;
VL_MODULE(VUartCtrlRx___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_rxd,0,0);
    VL_IN8(io_samplingTick,0,0);
    VL_OUT8(io_read_valid,0,0);
    VL_OUT8(io_read_payload,7,0);
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_0;
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_0_1;
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_1;
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_2;
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_3;
    CData/*0:0*/ UartCtrlRx__DOT___zz_sampler_samples_4;
    CData/*0:0*/ UartCtrlRx__DOT__sampler_value;
    CData/*0:0*/ UartCtrlRx__DOT__sampler_tick;
    CData/*2:0*/ UartCtrlRx__DOT__bitTimer_counter;
    CData/*0:0*/ UartCtrlRx__DOT__bitTimer_recenter;
    CData/*0:0*/ UartCtrlRx__DOT__bitTimer_tick;
    CData/*2:0*/ UartCtrlRx__DOT__bitCounter_value;
    CData/*0:0*/ UartCtrlRx__DOT__bitCounter_clear;
    CData/*1:0*/ UartCtrlRx__DOT__stateMachine_state;
    CData/*7:0*/ UartCtrlRx__DOT__stateMachine_buffer;
    CData/*0:0*/ UartCtrlRx__DOT__when_UartCtrlRx_l84;
    CData/*1:0*/ __Vdly__UartCtrlRx__DOT__stateMachine_state;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VUartCtrlRx__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VUartCtrlRx___024root(const char* name);
    ~VUartCtrlRx___024root();
    VL_UNCOPYABLE(VUartCtrlRx___024root);

    // INTERNAL METHODS
    void __Vconfigure(VUartCtrlRx__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
