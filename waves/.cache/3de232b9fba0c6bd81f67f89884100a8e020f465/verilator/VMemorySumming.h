// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMEMORYSUMMING_H_
#define _VMEMORYSUMMING_H_  // guard

#include "verilated.h"

//==========

class VMemorySumming__Syms;
class VMemorySumming_VerilatedVcd;


//----------

VL_MODULE(VMemorySumming) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(io_wr_clk,0,0);
    VL_IN8(io_sum_clk,0,0);
    VL_IN8(io_sum_reset,0,0);
    VL_IN8(io_wr_en,0,0);
    VL_IN8(io_wr_addr,7,0);
    VL_IN8(io_sum_start,0,0);
    VL_OUT8(io_sum_done,0,0);
    VL_IN16(io_wr_data,15,0);
    VL_OUT16(io_sum_value,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ MemorySumming__DOT__sumArea_counter;
    CData/*0:0*/ MemorySumming__DOT__sumArea_active;
    CData/*0:0*/ MemorySumming__DOT__when_MemorySumming_l69;
    CData/*0:0*/ MemorySumming__DOT__sumArea_readDataValid;
    CData/*0:0*/ MemorySumming__DOT__sumArea_readDataValid_regNext;
    SData/*15:0*/ MemorySumming__DOT__ram_io_rd_data;
    SData/*15:0*/ MemorySumming__DOT__sumArea_sum;
    IData/*16:0*/ MemorySumming__DOT__ram__DOT__mem[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vdly__MemorySumming__DOT__sumArea_counter;
    CData/*7:0*/ __Vdlyvdim0__MemorySumming__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MemorySumming__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vclklast__TOP__io_wr_clk;
    CData/*0:0*/ __Vclklast__TOP__io_sum_clk;
    CData/*0:0*/ __Vclklast__TOP__io_sum_reset;
    IData/*16:0*/ __Vdlyvval__MemorySumming__DOT__ram__DOT__mem__v0;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMemorySumming__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMemorySumming);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMemorySumming(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMemorySumming();
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
    static void _eval_initial_loop(VMemorySumming__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMemorySumming__Syms* symsp, bool first);
  private:
    static QData _change_request(VMemorySumming__Syms* __restrict vlSymsp);
    static QData _change_request_1(VMemorySumming__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMemorySumming__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMemorySumming__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMemorySumming__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VMemorySumming__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VMemorySumming__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VMemorySumming__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VMemorySumming__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VMemorySumming__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VMemorySumming__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VMemorySumming__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
