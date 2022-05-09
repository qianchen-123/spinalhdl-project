// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h527fd1a7_0;
extern const VlUnpacked<VlWide<4>/*127:0*/, 4> Vtop__ConstPool__TABLE_h6cc93a72_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_h2fd703a2_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtableidx2;
    CData/*1:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    // Body
    vlSelf->UdpApp__DOT__io_rx_cmd_valid = vlSelf->io_rx_cmd_valid;
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_ip = vlSelf->io_rx_cmd_payload_ip;
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_srcPort 
        = vlSelf->io_rx_cmd_payload_srcPort;
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_dstPort 
        = vlSelf->io_rx_cmd_payload_dstPort;
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_length = vlSelf->io_rx_cmd_payload_length;
    vlSelf->UdpApp__DOT__io_rx_data_valid = vlSelf->io_rx_data_valid;
    vlSelf->UdpApp__DOT__io_rx_data_payload_last = vlSelf->io_rx_data_payload_last;
    vlSelf->UdpApp__DOT__io_rx_data_payload_fragment 
        = vlSelf->io_rx_data_payload_fragment;
    vlSelf->UdpApp__DOT__io_tx_cmd_ready = vlSelf->io_tx_cmd_ready;
    vlSelf->UdpApp__DOT__io_tx_data_ready = vlSelf->io_tx_data_ready;
    vlSelf->UdpApp__DOT__clk = vlSelf->clk;
    vlSelf->UdpApp__DOT__reset = vlSelf->reset;
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_ip = vlSelf->io_rx_cmd_payload_ip;
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_srcPort 
        = vlSelf->io_rx_cmd_payload_dstPort;
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_dstPort 
        = vlSelf->io_rx_cmd_payload_srcPort;
    vlSelf->UdpApp__DOT__when_UdpApp_l55 = ((IData)(vlSelf->io_rx_data_valid) 
                                            & (IData)(vlSelf->io_rx_data_payload_last));
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg_string 
        = ((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg)
            ? ((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg)
                ? 0x73656e64436d64ULL : 0x3f3f3f3f3f3f3fULL)
            : 0x424f4f54202020ULL);
    vlSelf->UdpApp__DOT__io_rx_data_ready = 0U;
    if (vlSelf->UdpApp__DOT__flushRx_active) {
        vlSelf->UdpApp__DOT__io_rx_data_ready = 1U;
    }
    vlSelf->UdpApp__DOT__io_tx_cmd_valid = 0U;
    if (vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg) {
        vlSelf->UdpApp__DOT__io_tx_cmd_valid = 1U;
    }
    __Vtableidx1 = vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_sendMessage_counter;
    vlSelf->UdpApp__DOT___zz_io_tx_data_payload_fragment 
        = Vtop__ConstPool__TABLE_h527fd1a7_0[__Vtableidx1];
    vlSelf->UdpApp__DOT__when_UdpApp_l67 = ((IData)(vlSelf->io_rx_cmd_valid) 
                                            & (~ (IData)(vlSelf->UdpApp__DOT__flushRx_active)));
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantExit = 0U;
    if (vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg) {
        if (vlSelf->io_tx_cmd_ready) {
            vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantExit = 1U;
        }
    }
    if ((0U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[0U] = 0x20202020U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[1U] = 0x54202020U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[2U] = 0x424f4fU;
    } else if ((1U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[0U] = 0x64657220U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[1U] = 0x64486561U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[2U] = 0x73656eU;
    } else if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[0U] = 0x73616765U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[1U] = 0x644d6573U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[2U] = 0x73656eU;
    } else {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[0U] = 0x3f3f3f3fU;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[1U] = 0x3f3f3f3fU;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string[2U] = 0x3f3f3fU;
    }
    __Vtableidx2 = vlSelf->UdpApp__DOT__fsm_stateReg;
    vlSelf->UdpApp__DOT__fsm_stateReg_string[0U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx2][0U];
    vlSelf->UdpApp__DOT__fsm_stateReg_string[1U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx2][1U];
    vlSelf->UdpApp__DOT__fsm_stateReg_string[2U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx2][2U];
    vlSelf->UdpApp__DOT__fsm_stateReg_string[3U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx2][3U];
    vlSelf->UdpApp__DOT__io_tx_data_valid = 0U;
    if ((1U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__io_tx_data_valid = 1U;
    } else if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__io_tx_data_valid = 1U;
    }
    vlSelf->UdpApp__DOT__fsm_wantStart = 0U;
    if ((1U != (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
        if ((2U != (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
            if ((3U != (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
                vlSelf->UdpApp__DOT__fsm_wantStart = 1U;
            }
        }
    }
    vlSelf->UdpApp__DOT__io_tx_data_payload_last = 0U;
    if ((1U != (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
            vlSelf->UdpApp__DOT__io_tx_data_payload_last 
                = (7U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_sendMessage_counter));
        }
    }
    vlSelf->io_tx_cmd_payload_length = vlSelf->UdpApp__DOT__io_tx_cmd_payload_length;
    vlSelf->io_tx_cmd_payload_ip = vlSelf->UdpApp__DOT__io_tx_cmd_payload_ip;
    vlSelf->io_tx_cmd_payload_srcPort = vlSelf->UdpApp__DOT__io_tx_cmd_payload_srcPort;
    vlSelf->io_tx_cmd_payload_dstPort = vlSelf->UdpApp__DOT__io_tx_cmd_payload_dstPort;
    vlSelf->UdpApp__DOT__io_rx_cmd_ready = 0U;
    if (vlSelf->UdpApp__DOT__flushRx_active) {
        if (vlSelf->UdpApp__DOT__when_UdpApp_l55) {
            vlSelf->UdpApp__DOT__io_rx_cmd_ready = 1U;
        }
    }
    vlSelf->io_rx_data_ready = vlSelf->UdpApp__DOT__io_rx_data_ready;
    vlSelf->io_tx_cmd_valid = vlSelf->UdpApp__DOT__io_tx_cmd_valid;
    vlSelf->UdpApp__DOT__io_tx_data_payload_fragment = 0U;
    if ((1U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__io_tx_data_payload_fragment = 0x22U;
    } else if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        vlSelf->UdpApp__DOT__io_tx_data_payload_fragment 
            = vlSelf->UdpApp__DOT___zz_io_tx_data_payload_fragment;
    }
    vlSelf->io_tx_data_valid = vlSelf->UdpApp__DOT__io_tx_data_valid;
    vlSelf->io_tx_data_payload_last = vlSelf->UdpApp__DOT__io_tx_data_payload_last;
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantExit = 0U;
    if ((1U != (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
        if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg))) {
            if (vlSelf->io_tx_data_ready) {
                if (vlSelf->UdpApp__DOT__io_tx_data_payload_last) {
                    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantExit = 1U;
                }
            }
        }
    }
    vlSelf->io_rx_cmd_ready = vlSelf->UdpApp__DOT__io_rx_cmd_ready;
    vlSelf->io_tx_data_payload_fragment = vlSelf->UdpApp__DOT__io_tx_data_payload_fragment;
    vlSelf->UdpApp__DOT__when_State_l179 = (((~ (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg)) 
                                             | (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantExit)) 
                                            & ((0U 
                                                == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg)) 
                                               | (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantExit)));
    vlSelf->UdpApp__DOT__fsm_stateNext = vlSelf->UdpApp__DOT__fsm_stateReg;
    if ((1U == (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
        if (vlSelf->UdpApp__DOT__when_UdpApp_l67) {
            if ((0x9460U == (IData)(vlSelf->io_rx_cmd_payload_dstPort))) {
                vlSelf->UdpApp__DOT__fsm_stateNext = 2U;
            }
        }
    } else if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
        if (vlSelf->io_rx_data_valid) {
            vlSelf->UdpApp__DOT__fsm_stateNext = ((0x11U 
                                                   == (IData)(vlSelf->io_rx_data_payload_fragment))
                                                   ? 3U
                                                   : 1U);
        }
    } else if ((3U == (IData)(vlSelf->UdpApp__DOT__fsm_stateReg))) {
        if (vlSelf->UdpApp__DOT__when_State_l179) {
            vlSelf->UdpApp__DOT__fsm_stateNext = 1U;
        }
    }
    if (vlSelf->UdpApp__DOT__fsm_wantStart) {
        vlSelf->UdpApp__DOT__fsm_stateNext = 1U;
    }
    if (vlSelf->UdpApp__DOT__fsm_wantKill) {
        vlSelf->UdpApp__DOT__fsm_stateNext = 0U;
    }
    __Vtableidx3 = vlSelf->UdpApp__DOT__fsm_stateNext;
    vlSelf->UdpApp__DOT__fsm_stateNext_string[0U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx3][0U];
    vlSelf->UdpApp__DOT__fsm_stateNext_string[1U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx3][1U];
    vlSelf->UdpApp__DOT__fsm_stateNext_string[2U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx3][2U];
    vlSelf->UdpApp__DOT__fsm_stateNext_string[3U] = 
        Vtop__ConstPool__TABLE_h6cc93a72_0[__Vtableidx3][3U];
    vlSelf->UdpApp__DOT__when_StateMachine_l238_1 = 
        ((3U != (IData)(vlSelf->UdpApp__DOT__fsm_stateReg)) 
         & (3U == (IData)(vlSelf->UdpApp__DOT__fsm_stateNext)));
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantStart = 0U;
    if (vlSelf->UdpApp__DOT__when_StateMachine_l238_1) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantStart = 1U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart = 0U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart = 1U;
    } else {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart = 0U;
    }
    if (vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = 1U;
        if (vlSelf->io_tx_cmd_ready) {
            vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = 0U;
        }
    } else {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = 0U;
    }
    if (vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantStart) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = 1U;
    }
    if (vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantKill) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = 0U;
    }
    __Vtableidx4 = (((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantKill) 
                     << 5U) | (((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart) 
                                << 4U) | (((IData)(vlSelf->UdpApp__DOT__io_tx_data_payload_last) 
                                           << 3U) | 
                                          (((IData)(vlSelf->io_tx_data_ready) 
                                            << 2U) 
                                           | (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg)))));
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext 
        = Vtop__ConstPool__TABLE_h2fd703a2_0[__Vtableidx4];
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext_string 
        = ((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext)
            ? ((IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext)
                ? 0x73656e64436d64ULL : 0x3f3f3f3f3f3f3fULL)
            : 0x424f4f54202020ULL);
    if ((0U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[0U] = 0x20202020U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[1U] = 0x54202020U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[2U] = 0x424f4fU;
    } else if ((1U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[0U] = 0x64657220U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[1U] = 0x64486561U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[2U] = 0x73656eU;
    } else if ((2U == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext))) {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[0U] = 0x73616765U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[1U] = 0x644d6573U;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[2U] = 0x73656eU;
    } else {
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[0U] = 0x3f3f3f3fU;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[1U] = 0x3f3f3f3fU;
        vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string[2U] = 0x3f3f3fU;
    }
    vlSelf->UdpApp__DOT__when_StateMachine_l238 = (
                                                   (2U 
                                                    != (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext)));
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->io_rx_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rx_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rx_cmd_payload_ip = VL_RAND_RESET_I(32);
    vlSelf->io_rx_cmd_payload_srcPort = VL_RAND_RESET_I(16);
    vlSelf->io_rx_cmd_payload_dstPort = VL_RAND_RESET_I(16);
    vlSelf->io_rx_cmd_payload_length = VL_RAND_RESET_I(16);
    vlSelf->io_rx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rx_data_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rx_data_payload_last = VL_RAND_RESET_I(1);
    vlSelf->io_rx_data_payload_fragment = VL_RAND_RESET_I(8);
    vlSelf->io_tx_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_tx_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->io_tx_cmd_payload_ip = VL_RAND_RESET_I(32);
    vlSelf->io_tx_cmd_payload_srcPort = VL_RAND_RESET_I(16);
    vlSelf->io_tx_cmd_payload_dstPort = VL_RAND_RESET_I(16);
    vlSelf->io_tx_cmd_payload_length = VL_RAND_RESET_I(16);
    vlSelf->io_tx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->io_tx_data_ready = VL_RAND_RESET_I(1);
    vlSelf->io_tx_data_payload_last = VL_RAND_RESET_I(1);
    vlSelf->io_tx_data_payload_fragment = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_ip = VL_RAND_RESET_I(32);
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_srcPort = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_dstPort = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_rx_cmd_payload_length = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_rx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_data_ready = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_data_payload_last = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_rx_data_payload_fragment = VL_RAND_RESET_I(8);
    vlSelf->UdpApp__DOT__io_tx_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_tx_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_ip = VL_RAND_RESET_I(32);
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_srcPort = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_dstPort = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_tx_cmd_payload_length = VL_RAND_RESET_I(16);
    vlSelf->UdpApp__DOT__io_tx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_tx_data_ready = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_tx_data_payload_last = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__io_tx_data_payload_fragment = VL_RAND_RESET_I(8);
    vlSelf->UdpApp__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT___zz_io_tx_data_payload_fragment = VL_RAND_RESET_I(8);
    vlSelf->UdpApp__DOT__flushRx_active = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__when_UdpApp_l55 = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_wantExit = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_wantStart = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_wantKill = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantExit = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantStart = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_wantKill = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantExit = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantStart = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_wantKill = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_sendMessage_counter = VL_RAND_RESET_I(3);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg = VL_RAND_RESET_I(2);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext = VL_RAND_RESET_I(2);
    vlSelf->UdpApp__DOT__when_StateMachine_l238 = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_stateReg = VL_RAND_RESET_I(2);
    vlSelf->UdpApp__DOT__fsm_stateNext = VL_RAND_RESET_I(2);
    vlSelf->UdpApp__DOT__when_UdpApp_l67 = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__when_State_l179 = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__when_StateMachine_l238_1 = VL_RAND_RESET_I(1);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateReg_string = VL_RAND_RESET_Q(56);
    vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_0_stateNext_string = VL_RAND_RESET_Q(56);
    VL_RAND_RESET_W(88, vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateReg_string);
    VL_RAND_RESET_W(88, vlSelf->UdpApp__DOT__fsm_discoveringRspTx_fsms_1_stateNext_string);
    VL_RAND_RESET_W(128, vlSelf->UdpApp__DOT__fsm_stateReg_string);
    VL_RAND_RESET_W(128, vlSelf->UdpApp__DOT__fsm_stateNext_string);
}
