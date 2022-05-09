// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_Apb3Decoder);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep,Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Apb3Decoder.configure(this, name(), "Apb3Decoder", "Apb3Decoder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_Apb3Decoder);

    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"_zz_io_input_PRDATA", &(TOP.Apb3Decoder__DOT___zz_io_input_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"_zz_io_input_PREADY", &(TOP.Apb3Decoder__DOT___zz_io_input_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"_zz_io_input_PSLVERROR", &(TOP.Apb3Decoder__DOT___zz_io_input_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"_zz_mappingHitsIndex", &(TOP.Apb3Decoder__DOT___zz_mappingHitsIndex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"_zz_mappingHitsIndex_1", &(TOP.Apb3Decoder__DOT___zz_mappingHitsIndex_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PADDR", &(TOP.Apb3Decoder__DOT__io_input_PADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PENABLE", &(TOP.Apb3Decoder__DOT__io_input_PENABLE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PRDATA", &(TOP.Apb3Decoder__DOT__io_input_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PREADY", &(TOP.Apb3Decoder__DOT__io_input_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PSEL", &(TOP.Apb3Decoder__DOT__io_input_PSEL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PSLVERROR", &(TOP.Apb3Decoder__DOT__io_input_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PWDATA", &(TOP.Apb3Decoder__DOT__io_input_PWDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_input_PWRITE", &(TOP.Apb3Decoder__DOT__io_input_PWRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PADDR", &(TOP.Apb3Decoder__DOT__io_outputs_0_PADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PENABLE", &(TOP.Apb3Decoder__DOT__io_outputs_0_PENABLE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PRDATA", &(TOP.Apb3Decoder__DOT__io_outputs_0_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PREADY", &(TOP.Apb3Decoder__DOT__io_outputs_0_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PSEL", &(TOP.Apb3Decoder__DOT__io_outputs_0_PSEL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PSLVERROR", &(TOP.Apb3Decoder__DOT__io_outputs_0_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PWDATA", &(TOP.Apb3Decoder__DOT__io_outputs_0_PWDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_0_PWRITE", &(TOP.Apb3Decoder__DOT__io_outputs_0_PWRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PADDR", &(TOP.Apb3Decoder__DOT__io_outputs_1_PADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PENABLE", &(TOP.Apb3Decoder__DOT__io_outputs_1_PENABLE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PRDATA", &(TOP.Apb3Decoder__DOT__io_outputs_1_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PREADY", &(TOP.Apb3Decoder__DOT__io_outputs_1_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PSEL", &(TOP.Apb3Decoder__DOT__io_outputs_1_PSEL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PSLVERROR", &(TOP.Apb3Decoder__DOT__io_outputs_1_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PWDATA", &(TOP.Apb3Decoder__DOT__io_outputs_1_PWDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_1_PWRITE", &(TOP.Apb3Decoder__DOT__io_outputs_1_PWRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PADDR", &(TOP.Apb3Decoder__DOT__io_outputs_2_PADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PENABLE", &(TOP.Apb3Decoder__DOT__io_outputs_2_PENABLE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PRDATA", &(TOP.Apb3Decoder__DOT__io_outputs_2_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PREADY", &(TOP.Apb3Decoder__DOT__io_outputs_2_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PSEL", &(TOP.Apb3Decoder__DOT__io_outputs_2_PSEL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PSLVERROR", &(TOP.Apb3Decoder__DOT__io_outputs_2_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PWDATA", &(TOP.Apb3Decoder__DOT__io_outputs_2_PWDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_2_PWRITE", &(TOP.Apb3Decoder__DOT__io_outputs_2_PWRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PADDR", &(TOP.Apb3Decoder__DOT__io_outputs_3_PADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PENABLE", &(TOP.Apb3Decoder__DOT__io_outputs_3_PENABLE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PRDATA", &(TOP.Apb3Decoder__DOT__io_outputs_3_PRDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PREADY", &(TOP.Apb3Decoder__DOT__io_outputs_3_PREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PSEL", &(TOP.Apb3Decoder__DOT__io_outputs_3_PSEL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PSLVERROR", &(TOP.Apb3Decoder__DOT__io_outputs_3_PSLVERROR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PWDATA", &(TOP.Apb3Decoder__DOT__io_outputs_3_PWDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"io_outputs_3_PWRITE", &(TOP.Apb3Decoder__DOT__io_outputs_3_PWRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"mappingHitsIndex", &(TOP.Apb3Decoder__DOT__mappingHitsIndex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"mappingHits_0", &(TOP.Apb3Decoder__DOT__mappingHits_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"mappingHits_1", &(TOP.Apb3Decoder__DOT__mappingHits_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"mappingHits_2", &(TOP.Apb3Decoder__DOT__mappingHits_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Apb3Decoder.varInsert(__Vfinal,"mappingHits_3", &(TOP.Apb3Decoder__DOT__mappingHits_3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PADDR", &(TOP.io_input_PADDR), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PENABLE", &(TOP.io_input_PENABLE), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PRDATA", &(TOP.io_input_PRDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PREADY", &(TOP.io_input_PREADY), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PSEL", &(TOP.io_input_PSEL), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PSLVERROR", &(TOP.io_input_PSLVERROR), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PWDATA", &(TOP.io_input_PWDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_input_PWRITE", &(TOP.io_input_PWRITE), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PADDR", &(TOP.io_outputs_0_PADDR), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PENABLE", &(TOP.io_outputs_0_PENABLE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PRDATA", &(TOP.io_outputs_0_PRDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PREADY", &(TOP.io_outputs_0_PREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PSEL", &(TOP.io_outputs_0_PSEL), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PSLVERROR", &(TOP.io_outputs_0_PSLVERROR), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PWDATA", &(TOP.io_outputs_0_PWDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_0_PWRITE", &(TOP.io_outputs_0_PWRITE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PADDR", &(TOP.io_outputs_1_PADDR), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PENABLE", &(TOP.io_outputs_1_PENABLE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PRDATA", &(TOP.io_outputs_1_PRDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PREADY", &(TOP.io_outputs_1_PREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PSEL", &(TOP.io_outputs_1_PSEL), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PSLVERROR", &(TOP.io_outputs_1_PSLVERROR), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PWDATA", &(TOP.io_outputs_1_PWDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_1_PWRITE", &(TOP.io_outputs_1_PWRITE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PADDR", &(TOP.io_outputs_2_PADDR), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PENABLE", &(TOP.io_outputs_2_PENABLE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PRDATA", &(TOP.io_outputs_2_PRDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PREADY", &(TOP.io_outputs_2_PREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PSEL", &(TOP.io_outputs_2_PSEL), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PSLVERROR", &(TOP.io_outputs_2_PSLVERROR), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PWDATA", &(TOP.io_outputs_2_PWDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_2_PWRITE", &(TOP.io_outputs_2_PWRITE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PADDR", &(TOP.io_outputs_3_PADDR), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PENABLE", &(TOP.io_outputs_3_PENABLE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PRDATA", &(TOP.io_outputs_3_PRDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PREADY", &(TOP.io_outputs_3_PREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PSEL", &(TOP.io_outputs_3_PSEL), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PSLVERROR", &(TOP.io_outputs_3_PSLVERROR), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PWDATA", &(TOP.io_outputs_3_PWDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"io_outputs_3_PWRITE", &(TOP.io_outputs_3_PWRITE), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
    }
}
