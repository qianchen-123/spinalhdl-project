// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->Apb3Decoder__DOT__io_input_PADDR = vlSelf->io_input_PADDR;
    vlSelf->Apb3Decoder__DOT__io_input_PSEL = vlSelf->io_input_PSEL;
    vlSelf->Apb3Decoder__DOT__io_input_PENABLE = vlSelf->io_input_PENABLE;
    vlSelf->Apb3Decoder__DOT__io_input_PWRITE = vlSelf->io_input_PWRITE;
    vlSelf->Apb3Decoder__DOT__io_input_PWDATA = vlSelf->io_input_PWDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PREADY = vlSelf->io_outputs_0_PREADY;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PRDATA = vlSelf->io_outputs_0_PRDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PSLVERROR 
        = vlSelf->io_outputs_0_PSLVERROR;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PREADY = vlSelf->io_outputs_1_PREADY;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PRDATA = vlSelf->io_outputs_1_PRDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PSLVERROR 
        = vlSelf->io_outputs_1_PSLVERROR;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PREADY = vlSelf->io_outputs_2_PREADY;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PRDATA = vlSelf->io_outputs_2_PRDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PSLVERROR 
        = vlSelf->io_outputs_2_PSLVERROR;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PREADY = vlSelf->io_outputs_3_PREADY;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PRDATA = vlSelf->io_outputs_3_PRDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PSLVERROR 
        = vlSelf->io_outputs_3_PSLVERROR;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PADDR = vlSelf->io_input_PADDR;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PENABLE 
        = vlSelf->io_input_PENABLE;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PWRITE = vlSelf->io_input_PWRITE;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PWDATA = vlSelf->io_input_PWDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PADDR = vlSelf->io_input_PADDR;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PENABLE 
        = vlSelf->io_input_PENABLE;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PWRITE = vlSelf->io_input_PWRITE;
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PWDATA = vlSelf->io_input_PWDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PADDR = vlSelf->io_input_PADDR;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PENABLE 
        = vlSelf->io_input_PENABLE;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PWRITE = vlSelf->io_input_PWRITE;
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PWDATA = vlSelf->io_input_PWDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PADDR = vlSelf->io_input_PADDR;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PENABLE 
        = vlSelf->io_input_PENABLE;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PWRITE = vlSelf->io_input_PWRITE;
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PWDATA = vlSelf->io_input_PWDATA;
    vlSelf->Apb3Decoder__DOT__mappingHits_0 = (0x1000U 
                                               > (IData)(vlSelf->io_input_PADDR));
    vlSelf->Apb3Decoder__DOT__mappingHits_1 = ((0x1000U 
                                                <= (IData)(vlSelf->io_input_PADDR)) 
                                               & (0x2000U 
                                                  > (IData)(vlSelf->io_input_PADDR)));
    vlSelf->Apb3Decoder__DOT__mappingHits_2 = ((0x4000U 
                                                <= (IData)(vlSelf->io_input_PADDR)) 
                                               & (0x6000U 
                                                  > (IData)(vlSelf->io_input_PADDR)));
    vlSelf->Apb3Decoder__DOT__mappingHits_3 = ((0x6000U 
                                                <= (IData)(vlSelf->io_input_PADDR)) 
                                               & (0x9000U 
                                                  > (IData)(vlSelf->io_input_PADDR)));
    vlSelf->io_outputs_0_PADDR = vlSelf->Apb3Decoder__DOT__io_outputs_0_PADDR;
    vlSelf->io_outputs_0_PENABLE = vlSelf->Apb3Decoder__DOT__io_outputs_0_PENABLE;
    vlSelf->io_outputs_0_PWRITE = vlSelf->Apb3Decoder__DOT__io_outputs_0_PWRITE;
    vlSelf->io_outputs_0_PWDATA = vlSelf->Apb3Decoder__DOT__io_outputs_0_PWDATA;
    vlSelf->io_outputs_1_PADDR = vlSelf->Apb3Decoder__DOT__io_outputs_1_PADDR;
    vlSelf->io_outputs_1_PENABLE = vlSelf->Apb3Decoder__DOT__io_outputs_1_PENABLE;
    vlSelf->io_outputs_1_PWRITE = vlSelf->Apb3Decoder__DOT__io_outputs_1_PWRITE;
    vlSelf->io_outputs_1_PWDATA = vlSelf->Apb3Decoder__DOT__io_outputs_1_PWDATA;
    vlSelf->io_outputs_2_PADDR = vlSelf->Apb3Decoder__DOT__io_outputs_2_PADDR;
    vlSelf->io_outputs_2_PENABLE = vlSelf->Apb3Decoder__DOT__io_outputs_2_PENABLE;
    vlSelf->io_outputs_2_PWRITE = vlSelf->Apb3Decoder__DOT__io_outputs_2_PWRITE;
    vlSelf->io_outputs_2_PWDATA = vlSelf->Apb3Decoder__DOT__io_outputs_2_PWDATA;
    vlSelf->io_outputs_3_PADDR = vlSelf->Apb3Decoder__DOT__io_outputs_3_PADDR;
    vlSelf->io_outputs_3_PENABLE = vlSelf->Apb3Decoder__DOT__io_outputs_3_PENABLE;
    vlSelf->io_outputs_3_PWRITE = vlSelf->Apb3Decoder__DOT__io_outputs_3_PWRITE;
    vlSelf->io_outputs_3_PWDATA = vlSelf->Apb3Decoder__DOT__io_outputs_3_PWDATA;
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PSEL = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_0) 
                                                   & (IData)(vlSelf->io_input_PSEL));
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PSEL = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_1) 
                                                   & (IData)(vlSelf->io_input_PSEL));
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PSEL = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_2) 
                                                   & (IData)(vlSelf->io_input_PSEL));
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PSEL = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_3) 
                                                   & (IData)(vlSelf->io_input_PSEL));
    vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex 
        = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_1) 
           | (IData)(vlSelf->Apb3Decoder__DOT__mappingHits_3));
    vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex_1 
        = ((IData)(vlSelf->Apb3Decoder__DOT__mappingHits_2) 
           | (IData)(vlSelf->Apb3Decoder__DOT__mappingHits_3));
    vlSelf->io_outputs_0_PSEL = vlSelf->Apb3Decoder__DOT__io_outputs_0_PSEL;
    vlSelf->io_outputs_1_PSEL = vlSelf->Apb3Decoder__DOT__io_outputs_1_PSEL;
    vlSelf->io_outputs_2_PSEL = vlSelf->Apb3Decoder__DOT__io_outputs_2_PSEL;
    vlSelf->io_outputs_3_PSEL = vlSelf->Apb3Decoder__DOT__io_outputs_3_PSEL;
    vlSelf->Apb3Decoder__DOT__mappingHitsIndex = (((IData)(vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex));
    if ((0U == (IData)(vlSelf->Apb3Decoder__DOT__mappingHitsIndex))) {
        vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR 
            = vlSelf->io_outputs_0_PSLVERROR;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA 
            = vlSelf->io_outputs_0_PRDATA;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY 
            = vlSelf->io_outputs_0_PREADY;
    } else if ((1U == (IData)(vlSelf->Apb3Decoder__DOT__mappingHitsIndex))) {
        vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR 
            = vlSelf->io_outputs_1_PSLVERROR;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA 
            = vlSelf->io_outputs_1_PRDATA;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY 
            = vlSelf->io_outputs_1_PREADY;
    } else if ((2U == (IData)(vlSelf->Apb3Decoder__DOT__mappingHitsIndex))) {
        vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR 
            = vlSelf->io_outputs_2_PSLVERROR;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA 
            = vlSelf->io_outputs_2_PRDATA;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY 
            = vlSelf->io_outputs_2_PREADY;
    } else {
        vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR 
            = vlSelf->io_outputs_3_PSLVERROR;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA 
            = vlSelf->io_outputs_3_PRDATA;
        vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY 
            = vlSelf->io_outputs_3_PREADY;
    }
    vlSelf->Apb3Decoder__DOT__io_input_PSLVERROR = vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR;
    vlSelf->Apb3Decoder__DOT__io_input_PRDATA = vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA;
    vlSelf->Apb3Decoder__DOT__io_input_PREADY = vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY;
    vlSelf->io_input_PSLVERROR = vlSelf->Apb3Decoder__DOT__io_input_PSLVERROR;
    vlSelf->io_input_PRDATA = vlSelf->Apb3Decoder__DOT__io_input_PRDATA;
    vlSelf->io_input_PREADY = vlSelf->Apb3Decoder__DOT__io_input_PREADY;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_input_PSEL & 0xfeU))) {
        Verilated::overWidthError("io_input_PSEL");}
    if (VL_UNLIKELY((vlSelf->io_input_PENABLE & 0xfeU))) {
        Verilated::overWidthError("io_input_PENABLE");}
    if (VL_UNLIKELY((vlSelf->io_input_PWRITE & 0xfeU))) {
        Verilated::overWidthError("io_input_PWRITE");}
    if (VL_UNLIKELY((vlSelf->io_outputs_0_PREADY & 0xfeU))) {
        Verilated::overWidthError("io_outputs_0_PREADY");}
    if (VL_UNLIKELY((vlSelf->io_outputs_0_PSLVERROR 
                     & 0xfeU))) {
        Verilated::overWidthError("io_outputs_0_PSLVERROR");}
    if (VL_UNLIKELY((vlSelf->io_outputs_1_PREADY & 0xfeU))) {
        Verilated::overWidthError("io_outputs_1_PREADY");}
    if (VL_UNLIKELY((vlSelf->io_outputs_1_PSLVERROR 
                     & 0xfeU))) {
        Verilated::overWidthError("io_outputs_1_PSLVERROR");}
    if (VL_UNLIKELY((vlSelf->io_outputs_2_PREADY & 0xfeU))) {
        Verilated::overWidthError("io_outputs_2_PREADY");}
    if (VL_UNLIKELY((vlSelf->io_outputs_2_PSLVERROR 
                     & 0xfeU))) {
        Verilated::overWidthError("io_outputs_2_PSLVERROR");}
    if (VL_UNLIKELY((vlSelf->io_outputs_3_PREADY & 0xfeU))) {
        Verilated::overWidthError("io_outputs_3_PREADY");}
    if (VL_UNLIKELY((vlSelf->io_outputs_3_PSLVERROR 
                     & 0xfeU))) {
        Verilated::overWidthError("io_outputs_3_PSLVERROR");}
}
#endif  // VL_DEBUG
