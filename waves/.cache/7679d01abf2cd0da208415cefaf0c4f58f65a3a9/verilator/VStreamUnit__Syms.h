// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTREAMUNIT__SYMS_H_
#define VERILATED_VSTREAMUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VStreamUnit.h"

// INCLUDE MODULE CLASSES
#include "VStreamUnit___024root.h"
#include "VStreamUnit_StreamUnit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VStreamUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VStreamUnit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VStreamUnit___024root          TOP;
    VStreamUnit_StreamUnit         TOP__StreamUnit;

    // SCOPE NAMES
    VerilatedScope __Vscope_StreamUnit;

    // CONSTRUCTORS
    VStreamUnit__Syms(VerilatedContext* contextp, const char* namep, VStreamUnit* modelp);
    ~VStreamUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
