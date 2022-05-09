// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;

// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&io_input_PSEL,0,0);
    VL_IN8(&io_input_PENABLE,0,0);
    VL_OUT8(&io_input_PREADY,0,0);
    VL_IN8(&io_input_PWRITE,0,0);
    VL_OUT8(&io_input_PSLVERROR,0,0);
    VL_OUT8(&io_outputs_0_PSEL,0,0);
    VL_OUT8(&io_outputs_0_PENABLE,0,0);
    VL_IN8(&io_outputs_0_PREADY,0,0);
    VL_OUT8(&io_outputs_0_PWRITE,0,0);
    VL_IN8(&io_outputs_0_PSLVERROR,0,0);
    VL_OUT8(&io_outputs_1_PSEL,0,0);
    VL_OUT8(&io_outputs_1_PENABLE,0,0);
    VL_IN8(&io_outputs_1_PREADY,0,0);
    VL_OUT8(&io_outputs_1_PWRITE,0,0);
    VL_IN8(&io_outputs_1_PSLVERROR,0,0);
    VL_OUT8(&io_outputs_2_PSEL,0,0);
    VL_OUT8(&io_outputs_2_PENABLE,0,0);
    VL_IN8(&io_outputs_2_PREADY,0,0);
    VL_OUT8(&io_outputs_2_PWRITE,0,0);
    VL_IN8(&io_outputs_2_PSLVERROR,0,0);
    VL_OUT8(&io_outputs_3_PSEL,0,0);
    VL_OUT8(&io_outputs_3_PENABLE,0,0);
    VL_IN8(&io_outputs_3_PREADY,0,0);
    VL_OUT8(&io_outputs_3_PWRITE,0,0);
    VL_IN8(&io_outputs_3_PSLVERROR,0,0);
    VL_IN16(&io_input_PADDR,15,0);
    VL_OUT16(&io_outputs_0_PADDR,15,0);
    VL_OUT16(&io_outputs_1_PADDR,15,0);
    VL_OUT16(&io_outputs_2_PADDR,15,0);
    VL_OUT16(&io_outputs_3_PADDR,15,0);
    VL_IN(&io_input_PWDATA,31,0);
    VL_OUT(&io_input_PRDATA,31,0);
    VL_OUT(&io_outputs_0_PWDATA,31,0);
    VL_IN(&io_outputs_0_PRDATA,31,0);
    VL_OUT(&io_outputs_1_PWDATA,31,0);
    VL_IN(&io_outputs_1_PRDATA,31,0);
    VL_OUT(&io_outputs_2_PWDATA,31,0);
    VL_IN(&io_outputs_2_PRDATA,31,0);
    VL_OUT(&io_outputs_3_PWDATA,31,0);
    VL_IN(&io_outputs_3_PRDATA,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

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
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
