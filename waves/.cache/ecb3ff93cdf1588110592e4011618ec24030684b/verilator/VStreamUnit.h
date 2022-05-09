// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSTREAMUNIT_H_
#define _VSTREAMUNIT_H_  // guard

#include "verilated.h"
#include "VStreamUnit__Dpi.h"

//==========

class VStreamUnit__Syms;
class VStreamUnit_VerilatedVcd;
class VStreamUnit_StreamUnit;


//----------

VL_MODULE(VStreamUnit) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VStreamUnit_StreamUnit* StreamUnit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_memWrite_valid,0,0);
    VL_IN8(io_memWrite_payload_address,7,0);
    VL_IN8(io_cmdA_valid,0,0);
    VL_OUT8(io_cmdA_ready,0,0);
    VL_IN8(io_cmdA_payload,7,0);
    VL_IN8(io_cmdB_valid,0,0);
    VL_OUT8(io_cmdB_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_IN(io_memWrite_payload_data,31,0);
    VL_IN(io_cmdB_payload,31,0);
    VL_OUT(io_rsp_payload,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStreamUnit__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStreamUnit);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VStreamUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStreamUnit();
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
    static void _eval_initial_loop(VStreamUnit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStreamUnit__Syms* symsp, bool first);
  private:
    static QData _change_request(VStreamUnit__Syms* __restrict vlSymsp);
    static QData _change_request_1(VStreamUnit__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VStreamUnit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VStreamUnit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VStreamUnit__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VStreamUnit__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VStreamUnit__Syms* __restrict vlSymsp);
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
