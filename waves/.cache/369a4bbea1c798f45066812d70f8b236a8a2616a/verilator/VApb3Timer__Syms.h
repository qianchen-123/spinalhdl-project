// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAPB3TIMER__SYMS_H_
#define VERILATED_VAPB3TIMER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VApb3Timer.h"

// INCLUDE MODULE CLASSES
#include "VApb3Timer___024root.h"

// SYMS CLASS (contains all model state)
class VApb3Timer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VApb3Timer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VApb3Timer___024root           TOP;

    // CONSTRUCTORS
    VApb3Timer__Syms(VerilatedContext* contextp, const char* namep, VApb3Timer* modelp);
    ~VApb3Timer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
