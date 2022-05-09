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
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_rx_cmd_valid,0,0);
        VL_OUT8(io_rx_cmd_ready,0,0);
        VL_IN8(io_rx_data_valid,0,0);
        VL_OUT8(io_rx_data_ready,0,0);
        VL_IN8(io_rx_data_payload_last,0,0);
        VL_IN8(io_rx_data_payload_fragment,7,0);
        VL_OUT8(io_tx_cmd_valid,0,0);
        VL_IN8(io_tx_cmd_ready,0,0);
        VL_OUT8(io_tx_data_valid,0,0);
        VL_IN8(io_tx_data_ready,0,0);
        VL_OUT8(io_tx_data_payload_last,0,0);
        VL_OUT8(io_tx_data_payload_fragment,7,0);
        CData/*0:0*/ UdpApp__DOT__io_rx_cmd_valid;
        CData/*0:0*/ UdpApp__DOT__io_rx_cmd_ready;
        CData/*0:0*/ UdpApp__DOT__io_rx_data_valid;
        CData/*0:0*/ UdpApp__DOT__io_rx_data_ready;
        CData/*0:0*/ UdpApp__DOT__io_rx_data_payload_last;
        CData/*7:0*/ UdpApp__DOT__io_rx_data_payload_fragment;
        CData/*0:0*/ UdpApp__DOT__io_tx_cmd_valid;
        CData/*0:0*/ UdpApp__DOT__io_tx_cmd_ready;
        CData/*0:0*/ UdpApp__DOT__io_tx_data_valid;
        CData/*0:0*/ UdpApp__DOT__io_tx_data_ready;
        CData/*0:0*/ UdpApp__DOT__io_tx_data_payload_last;
        CData/*7:0*/ UdpApp__DOT__io_tx_data_payload_fragment;
        CData/*0:0*/ UdpApp__DOT__clk;
        CData/*0:0*/ UdpApp__DOT__reset;
        CData/*7:0*/ UdpApp__DOT___zz_io_tx_data_payload_fragment;
        CData/*0:0*/ UdpApp__DOT__flushRx_active;
        CData/*0:0*/ UdpApp__DOT__when_UdpApp_l55;
        CData/*0:0*/ UdpApp__DOT__fsm_wantExit;
        CData/*0:0*/ UdpApp__DOT__fsm_wantStart;
        CData/*0:0*/ UdpApp__DOT__fsm_wantKill;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantExit;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantStart;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantKill;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantExit;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantKill;
        CData/*2:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_sendMessage_counter;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg;
        CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext;
        CData/*1:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg;
        CData/*1:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext;
        CData/*0:0*/ UdpApp__DOT__when_StateMachine_l238;
        CData/*1:0*/ UdpApp__DOT__fsm_stateReg;
        CData/*1:0*/ UdpApp__DOT__fsm_stateNext;
        CData/*0:0*/ UdpApp__DOT__when_UdpApp_l67;
        CData/*0:0*/ UdpApp__DOT__when_State_l179;
        CData/*0:0*/ UdpApp__DOT__when_StateMachine_l238_1;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        VL_IN16(io_rx_cmd_payload_srcPort,15,0);
        VL_IN16(io_rx_cmd_payload_dstPort,15,0);
        VL_IN16(io_rx_cmd_payload_length,15,0);
        VL_OUT16(io_tx_cmd_payload_srcPort,15,0);
        VL_OUT16(io_tx_cmd_payload_dstPort,15,0);
        VL_OUT16(io_tx_cmd_payload_length,15,0);
        SData/*15:0*/ UdpApp__DOT__io_rx_cmd_payload_srcPort;
        SData/*15:0*/ UdpApp__DOT__io_rx_cmd_payload_dstPort;
        SData/*15:0*/ UdpApp__DOT__io_rx_cmd_payload_length;
        SData/*15:0*/ UdpApp__DOT__io_tx_cmd_payload_srcPort;
        SData/*15:0*/ UdpApp__DOT__io_tx_cmd_payload_dstPort;
    };
    struct {
        SData/*15:0*/ UdpApp__DOT__io_tx_cmd_payload_length;
        VL_IN(io_rx_cmd_payload_ip,31,0);
        VL_OUT(io_tx_cmd_payload_ip,31,0);
        IData/*31:0*/ UdpApp__DOT__io_rx_cmd_payload_ip;
        IData/*31:0*/ UdpApp__DOT__io_tx_cmd_payload_ip;
        VlWide<3>/*87:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string;
        VlWide<3>/*87:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string;
        VlWide<4>/*127:0*/ UdpApp__DOT__fsm_stateReg_string;
        VlWide<4>/*127:0*/ UdpApp__DOT__fsm_stateNext_string;
        QData/*55:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg_string;
        QData/*55:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext_string;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_enumDef_BOOT = 0U;
    static constexpr CData/*0:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_0_enumDef_sendCmd = 1U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_BOOT = 0U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_sendHeader = 1U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_discoveringRspTx_fsms_1_enumDef_sendMessage = 2U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_enumDef_BOOT = 0U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_enumDef_idle = 1U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_enumDef_helloHeader = 2U;
    static constexpr CData/*1:0*/ UdpApp__DOT__fsm_enumDef_discoveringRspTx = 3U;

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
