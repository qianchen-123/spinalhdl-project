// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_input_PADDR = VL_RAND_RESET_I(16);
    vlSelf->io_input_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_input_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_input_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_input_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_input_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_input_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_input_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_0_PADDR = VL_RAND_RESET_I(16);
    vlSelf->io_outputs_0_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_0_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_0_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_0_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_0_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_0_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_0_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_1_PADDR = VL_RAND_RESET_I(16);
    vlSelf->io_outputs_1_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_1_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_1_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_1_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_1_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_1_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_1_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_2_PADDR = VL_RAND_RESET_I(16);
    vlSelf->io_outputs_2_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_2_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_2_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_2_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_2_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_2_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_2_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_3_PADDR = VL_RAND_RESET_I(16);
    vlSelf->io_outputs_3_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_3_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_3_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_3_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_outputs_3_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_3_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_outputs_3_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_input_PADDR = VL_RAND_RESET_I(16);
    vlSelf->Apb3Decoder__DOT__io_input_PSEL = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_input_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_input_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_input_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_input_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_input_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_input_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PADDR = VL_RAND_RESET_I(16);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PSEL = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_0_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PADDR = VL_RAND_RESET_I(16);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PSEL = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_1_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PADDR = VL_RAND_RESET_I(16);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PSEL = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_2_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PADDR = VL_RAND_RESET_I(16);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PSEL = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT__io_outputs_3_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT___zz_io_input_PREADY = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT___zz_io_input_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->Apb3Decoder__DOT___zz_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__mappingHits_0 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__mappingHits_1 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__mappingHits_2 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__mappingHits_3 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT___zz_mappingHitsIndex_1 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Decoder__DOT__mappingHitsIndex = VL_RAND_RESET_I(2);
}
