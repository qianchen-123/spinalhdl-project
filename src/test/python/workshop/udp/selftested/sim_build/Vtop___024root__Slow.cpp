// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::UdpApp__DOT__fsm_discoveringRspTx_fsms_0_enumDef_BOOT;
constexpr CData/*0:0*/ Vtop___024root::UdpApp__DOT__fsm_discoveringRspTx_fsms_0_enumDef_sendCmd;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_BOOT;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_sendHeader;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_sendMessage;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_enumDef_BOOT;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_enumDef_idle;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_enumDef_helloHeader;
constexpr CData/*1:0*/ Vtop___024root::UdpApp__DOT__fsm_enumDef_discoveringRspTx;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}
