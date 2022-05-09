// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPIXELSOLVERMULTICORE_H_
#define _VPIXELSOLVERMULTICORE_H_  // guard

#include "verilated.h"

//==========

class VPixelSolverMultiCore__Syms;
class VPixelSolverMultiCore_VerilatedVcd;


//----------

VL_MODULE(VPixelSolverMultiCore) {
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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_0_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_1_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_2_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_3_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_4_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_5_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_6_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_7_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_0_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_1_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_2_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_3_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_4_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_5_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_6_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_7_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_0_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_1_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_2_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_3_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_4_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_5_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_6_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter_io_inputs_7_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_0_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_1_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_2_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_3_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_4_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_5_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_6_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_7_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7_io_rsp_rData_iteration;
    };
    struct {
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher__DOT___zz_io_input_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher__DOT__counter_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher__DOT__counter_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher__DOT__counter_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_taskId_value;
    };
    struct {
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Inserter_taskId_value;
    };
    struct {
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Inserter_loopBack_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Inserter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Inserter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Inserter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_output_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_valid;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_id;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_done;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_taskId_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_taskId_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_taskId_value;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter__DOT___zz_io_output_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter__DOT__counter_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter__DOT__counter_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__pixelResultArbiter__DOT__counter_value;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_0_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_0_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_1_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_1_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_2_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_2_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_3_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_3_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_4_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_4_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_5_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_5_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_6_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_6_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_7_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskDispatcher_io_outputs_7_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_yy;
    };
    struct {
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_xx;
    };
    struct {
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Mulstage_input_payload_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_xx;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_yy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_xy;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_x0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_y0;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_y;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_id;
    CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_iteration;
    CData/*2:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_id;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_0__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_1__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_2__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_3__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_4__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_5__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_6__DOT__Rounter_input_payload_x;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__AddStage_input_payload_xy;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_x0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_y0;
    IData/*27:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelTaskSolver_7__DOT__Rounter_input_payload_x;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPixelSolverMultiCore__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPixelSolverMultiCore);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPixelSolverMultiCore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPixelSolverMultiCore();
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
    static void _eval_initial_loop(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPixelSolverMultiCore__Syms* symsp, bool first);
  private:
    static QData _change_request(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__16(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _combo__TOP__17(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPixelSolverMultiCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPixelSolverMultiCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VPixelSolverMultiCore__Syms* __restrict vlSymsp);
    static void _settle__TOP__13(VPixelSolverMultiCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(VPixelSolverMultiCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(VPixelSolverMultiCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgSub3(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
