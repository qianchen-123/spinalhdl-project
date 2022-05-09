// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFunctionUnit.h for the primary calling header

#ifndef VERILATED_VFUNCTIONUNIT___024ROOT_H_
#define VERILATED_VFUNCTIONUNIT___024ROOT_H_  // guard

#include "verilated.h"

class VFunctionUnit__Syms;
VL_MODULE(VFunctionUnit___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_IN8(io_cmd_payload,7,0);
    VL_OUT8(io_valueA,7,0);
    CData/*0:0*/ FunctionUnit__DOT___zz_when_FunctionUnit_l25_7;
    CData/*0:0*/ FunctionUnit__DOT___zz_when_FunctionUnit_l25_1_1;
    CData/*0:0*/ FunctionUnit__DOT___zz_when_FunctionUnit_l25_2_1;
    CData/*0:0*/ FunctionUnit__DOT__setA_hit;
    CData/*3:0*/ FunctionUnit__DOT__setA_counter;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l26;
    CData/*0:0*/ FunctionUnit__DOT__loadA_active;
    CData/*0:0*/ FunctionUnit__DOT__loadA_counter_willIncrement;
    CData/*7:0*/ FunctionUnit__DOT__loadA_buffer;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l46;
    CData/*0:0*/ FunctionUnit__DOT__setB_hit;
    CData/*3:0*/ FunctionUnit__DOT__setB_counter;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l26_1;
    CData/*0:0*/ FunctionUnit__DOT__loadB_active;
    CData/*0:0*/ FunctionUnit__DOT__loadB_counter_willIncrement;
    CData/*1:0*/ FunctionUnit__DOT__loadB_counter_valueNext;
    CData/*1:0*/ FunctionUnit__DOT__loadB_counter_value;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l46_1;
    CData/*0:0*/ FunctionUnit__DOT__setC_hit;
    CData/*3:0*/ FunctionUnit__DOT__setC_counter;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l26_2;
    CData/*0:0*/ FunctionUnit__DOT__loadC_active;
    CData/*0:0*/ FunctionUnit__DOT__loadC_counter_willIncrement;
    CData/*2:0*/ FunctionUnit__DOT__loadC_counter_valueNext;
    CData/*2:0*/ FunctionUnit__DOT__loadC_counter_value;
    CData/*0:0*/ FunctionUnit__DOT__when_FunctionUnit_l46_2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_OUT(io_valueB,31,0);
    IData/*31:0*/ FunctionUnit__DOT__loadB_buffer;
    VL_OUT64(io_valueC,47,0);
    QData/*47:0*/ FunctionUnit__DOT__loadC_buffer;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VFunctionUnit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFunctionUnit___024root(const char* name);
    ~VFunctionUnit___024root();
    VL_UNCOPYABLE(VFunctionUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFunctionUnit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
