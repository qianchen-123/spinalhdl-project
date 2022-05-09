// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(io_input_PSEL,0,0);
        VL_IN8(io_input_PENABLE,0,0);
        VL_OUT8(io_input_PREADY,0,0);
        VL_IN8(io_input_PWRITE,0,0);
        VL_OUT8(io_input_PSLVERROR,0,0);
        VL_OUT8(io_outputs_0_PSEL,0,0);
        VL_OUT8(io_outputs_0_PENABLE,0,0);
        VL_IN8(io_outputs_0_PREADY,0,0);
        VL_OUT8(io_outputs_0_PWRITE,0,0);
        VL_IN8(io_outputs_0_PSLVERROR,0,0);
        VL_OUT8(io_outputs_1_PSEL,0,0);
        VL_OUT8(io_outputs_1_PENABLE,0,0);
        VL_IN8(io_outputs_1_PREADY,0,0);
        VL_OUT8(io_outputs_1_PWRITE,0,0);
        VL_IN8(io_outputs_1_PSLVERROR,0,0);
        VL_OUT8(io_outputs_2_PSEL,0,0);
        VL_OUT8(io_outputs_2_PENABLE,0,0);
        VL_IN8(io_outputs_2_PREADY,0,0);
        VL_OUT8(io_outputs_2_PWRITE,0,0);
        VL_IN8(io_outputs_2_PSLVERROR,0,0);
        VL_OUT8(io_outputs_3_PSEL,0,0);
        VL_OUT8(io_outputs_3_PENABLE,0,0);
        VL_IN8(io_outputs_3_PREADY,0,0);
        VL_OUT8(io_outputs_3_PWRITE,0,0);
        VL_IN8(io_outputs_3_PSLVERROR,0,0);
        CData/*0:0*/ Apb3Decoder__DOT__io_input_PSEL;
        CData/*0:0*/ Apb3Decoder__DOT__io_input_PENABLE;
        CData/*0:0*/ Apb3Decoder__DOT__io_input_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT__io_input_PWRITE;
        CData/*0:0*/ Apb3Decoder__DOT__io_input_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_0_PSEL;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_0_PENABLE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_0_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_0_PWRITE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_0_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_1_PSEL;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_1_PENABLE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_1_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_1_PWRITE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_1_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_2_PSEL;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_2_PENABLE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_2_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_2_PWRITE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_2_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_3_PSEL;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_3_PENABLE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_3_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_3_PWRITE;
        CData/*0:0*/ Apb3Decoder__DOT__io_outputs_3_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT___zz_io_input_PREADY;
        CData/*0:0*/ Apb3Decoder__DOT___zz_io_input_PSLVERROR;
        CData/*0:0*/ Apb3Decoder__DOT__mappingHits_0;
        CData/*0:0*/ Apb3Decoder__DOT__mappingHits_1;
        CData/*0:0*/ Apb3Decoder__DOT__mappingHits_2;
        CData/*0:0*/ Apb3Decoder__DOT__mappingHits_3;
        CData/*0:0*/ Apb3Decoder__DOT___zz_mappingHitsIndex;
        CData/*0:0*/ Apb3Decoder__DOT___zz_mappingHitsIndex_1;
        CData/*1:0*/ Apb3Decoder__DOT__mappingHitsIndex;
        VL_IN16(io_input_PADDR,15,0);
        VL_OUT16(io_outputs_0_PADDR,15,0);
        VL_OUT16(io_outputs_1_PADDR,15,0);
        VL_OUT16(io_outputs_2_PADDR,15,0);
        VL_OUT16(io_outputs_3_PADDR,15,0);
    };
    struct {
        SData/*15:0*/ Apb3Decoder__DOT__io_input_PADDR;
        SData/*15:0*/ Apb3Decoder__DOT__io_outputs_0_PADDR;
        SData/*15:0*/ Apb3Decoder__DOT__io_outputs_1_PADDR;
        SData/*15:0*/ Apb3Decoder__DOT__io_outputs_2_PADDR;
        SData/*15:0*/ Apb3Decoder__DOT__io_outputs_3_PADDR;
        VL_IN(io_input_PWDATA,31,0);
        VL_OUT(io_input_PRDATA,31,0);
        VL_OUT(io_outputs_0_PWDATA,31,0);
        VL_IN(io_outputs_0_PRDATA,31,0);
        VL_OUT(io_outputs_1_PWDATA,31,0);
        VL_IN(io_outputs_1_PRDATA,31,0);
        VL_OUT(io_outputs_2_PWDATA,31,0);
        VL_IN(io_outputs_2_PRDATA,31,0);
        VL_OUT(io_outputs_3_PWDATA,31,0);
        VL_IN(io_outputs_3_PRDATA,31,0);
        IData/*31:0*/ Apb3Decoder__DOT__io_input_PWDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_input_PRDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_0_PWDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_0_PRDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_1_PWDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_1_PRDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_2_PWDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_2_PRDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_3_PWDATA;
        IData/*31:0*/ Apb3Decoder__DOT__io_outputs_3_PRDATA;
        IData/*31:0*/ Apb3Decoder__DOT___zz_io_input_PRDATA;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
