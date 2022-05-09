// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB3TIMER_H_
#define _VAPB3TIMER_H_  // guard

#include "verilated.h"

//==========

class VApb3Timer__Syms;
class VApb3Timer_VerilatedVcd;


//----------

VL_MODULE(VApb3Timer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
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
    VL_IN(io_apb_PWDATA,31,0);
    VL_OUT(io_apb_PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Apb3Timer__DOT__timerA_io_full;
    CData/*0:0*/ Apb3Timer__DOT__timerB_io_full;
    CData/*3:0*/ Apb3Timer__DOT__clockDivider_counter;
    CData/*0:0*/ Apb3Timer__DOT__apbCtrl_doWrite;
    CData/*2:0*/ Apb3Timer__DOT__bridgeA_ticksEnable;
    CData/*1:0*/ Apb3Timer__DOT__bridgeA_clearEnable;
    CData/*0:0*/ Apb3Timer__DOT__bridgeA_busClearing;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l63;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l68;
    CData/*2:0*/ Apb3Timer__DOT__bridgeB_ticksEnable;
    CData/*1:0*/ Apb3Timer__DOT__bridgeB_clearEnable;
    CData/*0:0*/ Apb3Timer__DOT__bridgeB_busClearing;
    CData/*7:0*/ Apb3Timer__DOT__timerB_io_limit_driver;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l63_1;
    CData/*0:0*/ Apb3Timer__DOT__when_Timer_l68_1;
    CData/*7:0*/ Apb3Timer__DOT__timerB__DOT__counter;
    SData/*15:0*/ Apb3Timer__DOT__timerA_io_limit_driver;
    SData/*15:0*/ Apb3Timer__DOT__timerA__DOT__counter;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vdly__Apb3Timer__DOT__clockDivider_counter;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VApb3Timer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VApb3Timer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VApb3Timer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VApb3Timer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VApb3Timer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VApb3Timer__Syms* symsp, bool first);
  private:
    static QData _change_request(VApb3Timer__Syms* __restrict vlSymsp);
    static QData _change_request_1(VApb3Timer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(VApb3Timer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VApb3Timer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VApb3Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VApb3Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VApb3Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VApb3Timer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VApb3Timer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VApb3Timer__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VApb3Timer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
