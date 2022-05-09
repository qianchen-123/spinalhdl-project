// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSTREAMUNIT_H_
#define VERILATED_VSTREAMUNIT_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VStreamUnit__Syms;
class VStreamUnit___024root;
class VerilatedVcdC;
class VStreamUnit_StreamUnit;


// This class is the main interface to the Verilated model
class VStreamUnit VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VStreamUnit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_memWrite_valid,0,0);
    VL_IN8(&io_memWrite_payload_address,7,0);
    VL_IN8(&io_cmdA_valid,0,0);
    VL_OUT8(&io_cmdA_ready,0,0);
    VL_IN8(&io_cmdA_payload,7,0);
    VL_IN8(&io_cmdB_valid,0,0);
    VL_OUT8(&io_cmdB_ready,0,0);
    VL_OUT8(&io_rsp_valid,0,0);
    VL_IN8(&io_rsp_ready,0,0);
    VL_IN(&io_memWrite_payload_data,31,0);
    VL_IN(&io_cmdB_payload,31,0);
    VL_OUT(&io_rsp_payload,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VStreamUnit_StreamUnit* const StreamUnit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VStreamUnit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VStreamUnit(VerilatedContext* contextp, const char* name = "TOP");
    explicit VStreamUnit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VStreamUnit();
  private:
    VL_UNCOPYABLE(VStreamUnit);  ///< Copying not allowed

  public:
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
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
