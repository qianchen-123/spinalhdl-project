// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPIXELSOLVER_H_
#define _VPIXELSOLVER_H_  // guard

#include "verilated.h"

//==========

class VPixelSolver__Syms;
class VPixelSolver_VerilatedVcd;


//----------

VL_MODULE(VPixelSolver) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_OUT8(io_cmd_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_OUT8(io_rsp_payload_iteration,3,0);
    VL_IN(io_cmd_payload_x,27,0);
    VL_IN(io_cmd_payload_y,27,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ PixelSolver__DOT__iteration;
    CData/*0:0*/ PixelSolver__DOT__when_PixelSolver_l51;
    IData/*27:0*/ PixelSolver__DOT__x;
    IData/*27:0*/ PixelSolver__DOT__y;
    QData/*55:0*/ PixelSolver__DOT__xx;
    QData/*55:0*/ PixelSolver__DOT__yy;
    QData/*55:0*/ PixelSolver__DOT__xy;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPixelSolver__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPixelSolver);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPixelSolver(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPixelSolver();
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
    static void _eval_initial_loop(VPixelSolver__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPixelSolver__Syms* symsp, bool first);
  private:
    static QData _change_request(VPixelSolver__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPixelSolver__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VPixelSolver__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPixelSolver__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPixelSolver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPixelSolver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VPixelSolver__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPixelSolver__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
