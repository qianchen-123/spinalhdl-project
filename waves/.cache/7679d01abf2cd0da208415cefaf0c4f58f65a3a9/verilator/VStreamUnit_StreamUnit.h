// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStreamUnit.h for the primary calling header

#ifndef VERILATED_VSTREAMUNIT_STREAMUNIT_H_
#define VERILATED_VSTREAMUNIT_STREAMUNIT_H_  // guard

#include "verilated.h"

class VStreamUnit__Syms;
VL_MODULE(VStreamUnit_StreamUnit) {
  public:

    // DESIGN SPECIFIC STATE
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
    CData/*0:0*/ __PVT___zz_memReadStream_valid;
    CData/*0:0*/ __PVT__memReadStream_isFree;
    CData/*0:0*/ __PVT___zz_io_cmdB_ready;
    CData/*0:0*/ __PVT___zz_io_cmdB_ready_1;
    VL_IN(io_memWrite_payload_data,31,0);
    VL_IN(io_cmdB_payload,31,0);
    VL_OUT(io_rsp_payload,31,0);
    IData/*31:0*/ __PVT___zz_mem_port1;
    VlUnpacked<IData/*31:0*/, 256> mem;

    // INTERNAL VARIABLES
    VStreamUnit__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStreamUnit_StreamUnit(const char* name);
    ~VStreamUnit_StreamUnit();
    VL_UNCOPYABLE(VStreamUnit_StreamUnit);

    // INTERNAL METHODS
    void __Vconfigure(VStreamUnit__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
