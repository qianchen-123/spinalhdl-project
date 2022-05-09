// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h49c6dfe9_0;

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h49c6dfe9_0));
    VL_PRINTF_MT("-Info: /home/zqc/桌面/etn5_internship/SpinalWorkshop/src/test/python/workshop/common/../../../../../rtl/Apb3Decoder.v:119: $dumpvar ignored, as Verilated without --trace\n");
}
