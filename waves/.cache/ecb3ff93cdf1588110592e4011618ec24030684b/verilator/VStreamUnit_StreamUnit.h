// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStreamUnit.h for the primary calling header

#ifndef _VSTREAMUNIT_STREAMUNIT_H_
#define _VSTREAMUNIT_STREAMUNIT_H_  // guard

#include "verilated.h"
#include "VStreamUnit__Dpi.h"

//==========

class VStreamUnit__Syms;
class VStreamUnit_VerilatedVcd;


//----------

VL_MODULE(VStreamUnit_StreamUnit) {
  public:
    
    // PORTS
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
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT___zz_memReadStream_valid;
    CData/*0:0*/ __PVT__memReadStream_isFree;
    CData/*0:0*/ __PVT___zz_io_cmdB_ready;
    CData/*0:0*/ __PVT___zz_io_cmdB_ready_1;
    IData/*31:0*/ __PVT___zz_mem_port1;
    IData/*31:0*/ mem[256];
    
    // INTERNAL VARIABLES
  private:
    VStreamUnit__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStreamUnit_StreamUnit);  ///< Copying not allowed
  public:
    VStreamUnit_StreamUnit(const char* name = "TOP");
    ~VStreamUnit_StreamUnit();
    
    // INTERNAL METHODS
    void __Vconfigure(VStreamUnit__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__StreamUnit__1(VStreamUnit__Syms* __restrict vlSymsp);
    static void _sequent__TOP__StreamUnit__2(VStreamUnit__Syms* __restrict vlSymsp);
    static void _settle__TOP__StreamUnit__3(VStreamUnit__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
