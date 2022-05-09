// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUARTCTRLRX_H_
#define _VUARTCTRLRX_H_  // guard

#include "verilated.h"

//==========

class VUartCtrlRx__Syms;
class VUartCtrlRx_VerilatedVcd;


//----------

VL_MODULE(VUartCtrlRx) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_rxd,0,0);
    VL_IN8(io_samplingTick,0,0);
    VL_OUT8(io_read_valid,0,0);
    VL_OUT8(io_read_payload,7,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
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
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ __Vdly__UartCtrlRx__DOT__stateMachine_state;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUartCtrlRx__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VUartCtrlRx);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VUartCtrlRx(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUartCtrlRx();
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
    static void _eval_initial_loop(VUartCtrlRx__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUartCtrlRx__Syms* symsp, bool first);
  private:
    static QData _change_request(VUartCtrlRx__Syms* __restrict vlSymsp);
    static QData _change_request_1(VUartCtrlRx__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VUartCtrlRx__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VUartCtrlRx__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VUartCtrlRx__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VUartCtrlRx__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VUartCtrlRx__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VUartCtrlRx__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VUartCtrlRx__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
