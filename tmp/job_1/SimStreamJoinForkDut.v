// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : SimStreamJoinForkDut
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module SimStreamJoinForkDut (
  input               io_cmdA_valid,
  output reg          io_cmdA_ready,
  input      [31:0]   io_cmdA_payload,
  input               io_cmdB_valid,
  output reg          io_cmdB_ready,
  input      [31:0]   io_cmdB_payload,
  output              io_rspMul_valid,
  input               io_rspMul_ready,
  output     [63:0]   io_rspMul_payload,
  output              io_rspXor_valid,
  input               io_rspXor_ready,
  output     [31:0]   io_rspXor_payload,
  input               clk,
  input               reset
);

  wire                cmdJoin_m2sPipe_fork_io_input_ready;
  wire                cmdJoin_m2sPipe_fork_io_outputs_0_valid;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_0_payload_a;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_0_payload_b;
  wire                cmdJoin_m2sPipe_fork_io_outputs_1_valid;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_1_payload_a;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_1_payload_b;
  wire       [63:0]   _zz_cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload;
  wire                io_cmdA_m2sPipe_valid;
  reg                 io_cmdA_m2sPipe_ready;
  wire       [31:0]   io_cmdA_m2sPipe_payload;
  reg                 io_cmdA_rValid;
  reg        [31:0]   io_cmdA_rData;
  wire                when_Stream_l342;
  wire                cmdABuffer_valid;
  wire                cmdABuffer_ready;
  wire       [31:0]   cmdABuffer_payload;
  reg                 io_cmdA_m2sPipe_rValid;
  reg        [31:0]   io_cmdA_m2sPipe_rData;
  wire                when_Stream_l342_1;
  wire                cmdBBuffer_valid;
  wire                cmdBBuffer_ready;
  wire       [31:0]   cmdBBuffer_payload;
  reg                 io_cmdB_rValid;
  reg        [31:0]   io_cmdB_rData;
  wire                when_Stream_l342_2;
  wire                cmdJoin_valid;
  reg                 cmdJoin_ready;
  wire       [31:0]   cmdJoin_payload_a;
  wire       [31:0]   cmdJoin_payload_b;
  wire                _zz_cmdABuffer_ready;
  wire                _zz_cmdABuffer_ready_1;
  wire                cmdJoin_m2sPipe_valid;
  wire                cmdJoin_m2sPipe_ready;
  wire       [31:0]   cmdJoin_m2sPipe_payload_a;
  wire       [31:0]   cmdJoin_m2sPipe_payload_b;
  reg                 cmdJoin_rValid;
  reg        [31:0]   cmdJoin_rData_a;
  reg        [31:0]   cmdJoin_rData_b;
  wire                when_Stream_l342_3;
  wire                cmdJoin_m2sPipe_fork_io_outputs_0_translated_valid;
  reg                 cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready;
  wire       [63:0]   cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload;
  wire                cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_valid;
  reg                 cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready;
  wire       [63:0]   cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_payload;
  reg                 cmdJoin_m2sPipe_fork_io_outputs_0_translated_rValid;
  reg        [63:0]   cmdJoin_m2sPipe_fork_io_outputs_0_translated_rData;
  wire                when_Stream_l342_4;
  wire                cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_valid;
  wire                cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_ready;
  wire       [63:0]   cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_payload;
  reg                 cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rValid;
  reg        [63:0]   cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rData;
  wire                when_Stream_l342_5;
  wire                cmdJoin_m2sPipe_fork_io_outputs_1_translated_valid;
  wire                cmdJoin_m2sPipe_fork_io_outputs_1_translated_ready;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_1_translated_payload;
  wire                cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_valid;
  wire                cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_ready;
  wire       [31:0]   cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_payload;
  reg                 cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid;
  reg        [31:0]   cmdJoin_m2sPipe_fork_io_outputs_1_translated_rData;

  assign _zz_cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload = (cmdJoin_m2sPipe_fork_io_outputs_0_payload_a * cmdJoin_m2sPipe_fork_io_outputs_0_payload_b);
  StreamFork cmdJoin_m2sPipe_fork (
    .io_input_valid            (cmdJoin_m2sPipe_valid                               ), //i
    .io_input_ready            (cmdJoin_m2sPipe_fork_io_input_ready                 ), //o
    .io_input_payload_a        (cmdJoin_m2sPipe_payload_a[31:0]                     ), //i
    .io_input_payload_b        (cmdJoin_m2sPipe_payload_b[31:0]                     ), //i
    .io_outputs_0_valid        (cmdJoin_m2sPipe_fork_io_outputs_0_valid             ), //o
    .io_outputs_0_ready        (cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready  ), //i
    .io_outputs_0_payload_a    (cmdJoin_m2sPipe_fork_io_outputs_0_payload_a[31:0]   ), //o
    .io_outputs_0_payload_b    (cmdJoin_m2sPipe_fork_io_outputs_0_payload_b[31:0]   ), //o
    .io_outputs_1_valid        (cmdJoin_m2sPipe_fork_io_outputs_1_valid             ), //o
    .io_outputs_1_ready        (cmdJoin_m2sPipe_fork_io_outputs_1_translated_ready  ), //i
    .io_outputs_1_payload_a    (cmdJoin_m2sPipe_fork_io_outputs_1_payload_a[31:0]   ), //o
    .io_outputs_1_payload_b    (cmdJoin_m2sPipe_fork_io_outputs_1_payload_b[31:0]   ), //o
    .clk                       (clk                                                 ), //i
    .reset                     (reset                                               )  //i
  );
  always @(*) begin
    io_cmdA_ready = io_cmdA_m2sPipe_ready;
    if(when_Stream_l342) begin
      io_cmdA_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! io_cmdA_m2sPipe_valid);
  assign io_cmdA_m2sPipe_valid = io_cmdA_rValid;
  assign io_cmdA_m2sPipe_payload = io_cmdA_rData;
  always @(*) begin
    io_cmdA_m2sPipe_ready = cmdABuffer_ready;
    if(when_Stream_l342_1) begin
      io_cmdA_m2sPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! cmdABuffer_valid);
  assign cmdABuffer_valid = io_cmdA_m2sPipe_rValid;
  assign cmdABuffer_payload = io_cmdA_m2sPipe_rData;
  always @(*) begin
    io_cmdB_ready = cmdBBuffer_ready;
    if(when_Stream_l342_2) begin
      io_cmdB_ready = 1'b1;
    end
  end

  assign when_Stream_l342_2 = (! cmdBBuffer_valid);
  assign cmdBBuffer_valid = io_cmdB_rValid;
  assign cmdBBuffer_payload = io_cmdB_rData;
  assign _zz_cmdABuffer_ready_1 = (_zz_cmdABuffer_ready && cmdJoin_ready);
  assign _zz_cmdABuffer_ready = (cmdABuffer_valid && cmdBBuffer_valid);
  assign cmdABuffer_ready = _zz_cmdABuffer_ready_1;
  assign cmdBBuffer_ready = _zz_cmdABuffer_ready_1;
  assign cmdJoin_valid = _zz_cmdABuffer_ready;
  assign cmdJoin_payload_a = cmdABuffer_payload;
  assign cmdJoin_payload_b = cmdBBuffer_payload;
  always @(*) begin
    cmdJoin_ready = cmdJoin_m2sPipe_ready;
    if(when_Stream_l342_3) begin
      cmdJoin_ready = 1'b1;
    end
  end

  assign when_Stream_l342_3 = (! cmdJoin_m2sPipe_valid);
  assign cmdJoin_m2sPipe_valid = cmdJoin_rValid;
  assign cmdJoin_m2sPipe_payload_a = cmdJoin_rData_a;
  assign cmdJoin_m2sPipe_payload_b = cmdJoin_rData_b;
  assign cmdJoin_m2sPipe_ready = cmdJoin_m2sPipe_fork_io_input_ready;
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_valid = cmdJoin_m2sPipe_fork_io_outputs_0_valid;
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload = (_zz_cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload + 64'h0);
  always @(*) begin
    cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready;
    if(when_Stream_l342_4) begin
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l342_4 = (! cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_valid);
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_valid = cmdJoin_m2sPipe_fork_io_outputs_0_translated_rValid;
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_payload = cmdJoin_m2sPipe_fork_io_outputs_0_translated_rData;
  always @(*) begin
    cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_ready;
    if(when_Stream_l342_5) begin
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l342_5 = (! cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_valid);
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_valid = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rValid;
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_payload = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rData;
  assign io_rspMul_valid = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_valid;
  assign cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_ready = io_rspMul_ready;
  assign io_rspMul_payload = cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_m2sPipe_payload;
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_valid = cmdJoin_m2sPipe_fork_io_outputs_1_valid;
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_payload = ((cmdJoin_m2sPipe_fork_io_outputs_1_payload_a ^ cmdJoin_m2sPipe_fork_io_outputs_1_payload_b) ^ 32'h0);
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_ready = (! cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid);
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_valid = (cmdJoin_m2sPipe_fork_io_outputs_1_translated_valid || cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid);
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_payload = (cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid ? cmdJoin_m2sPipe_fork_io_outputs_1_translated_rData : cmdJoin_m2sPipe_fork_io_outputs_1_translated_payload);
  assign io_rspXor_valid = cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_valid;
  assign cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_ready = io_rspXor_ready;
  assign io_rspXor_payload = cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_cmdA_rValid <= 1'b0;
      io_cmdA_m2sPipe_rValid <= 1'b0;
      io_cmdB_rValid <= 1'b0;
      cmdJoin_rValid <= 1'b0;
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_rValid <= 1'b0;
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rValid <= 1'b0;
      cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid <= 1'b0;
    end else begin
      if(io_cmdA_ready) begin
        io_cmdA_rValid <= io_cmdA_valid;
      end
      if(io_cmdA_m2sPipe_ready) begin
        io_cmdA_m2sPipe_rValid <= io_cmdA_m2sPipe_valid;
      end
      if(io_cmdB_ready) begin
        io_cmdB_rValid <= io_cmdB_valid;
      end
      if(cmdJoin_ready) begin
        cmdJoin_rValid <= cmdJoin_valid;
      end
      if(cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready) begin
        cmdJoin_m2sPipe_fork_io_outputs_0_translated_rValid <= cmdJoin_m2sPipe_fork_io_outputs_0_translated_valid;
      end
      if(cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready) begin
        cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rValid <= cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_valid;
      end
      if(cmdJoin_m2sPipe_fork_io_outputs_1_translated_valid) begin
        cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid <= 1'b1;
      end
      if(cmdJoin_m2sPipe_fork_io_outputs_1_translated_s2mPipe_ready) begin
        cmdJoin_m2sPipe_fork_io_outputs_1_translated_rValid <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(io_cmdA_ready) begin
      io_cmdA_rData <= io_cmdA_payload;
    end
    if(io_cmdA_m2sPipe_ready) begin
      io_cmdA_m2sPipe_rData <= io_cmdA_m2sPipe_payload;
    end
    if(io_cmdB_ready) begin
      io_cmdB_rData <= io_cmdB_payload;
    end
    if(cmdJoin_ready) begin
      cmdJoin_rData_a <= cmdJoin_payload_a;
      cmdJoin_rData_b <= cmdJoin_payload_b;
    end
    if(cmdJoin_m2sPipe_fork_io_outputs_0_translated_ready) begin
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_rData <= cmdJoin_m2sPipe_fork_io_outputs_0_translated_payload;
    end
    if(cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_ready) begin
      cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_rData <= cmdJoin_m2sPipe_fork_io_outputs_0_translated_m2sPipe_payload;
    end
    if(cmdJoin_m2sPipe_fork_io_outputs_1_translated_ready) begin
      cmdJoin_m2sPipe_fork_io_outputs_1_translated_rData <= cmdJoin_m2sPipe_fork_io_outputs_1_translated_payload;
    end
  end


endmodule

module StreamFork (
  input               io_input_valid,
  output reg          io_input_ready,
  input      [31:0]   io_input_payload_a,
  input      [31:0]   io_input_payload_b,
  output              io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [31:0]   io_outputs_0_payload_a,
  output     [31:0]   io_outputs_0_payload_b,
  output              io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [31:0]   io_outputs_1_payload_a,
  output     [31:0]   io_outputs_1_payload_b,
  input               clk,
  input               reset
);

  reg                 _zz_io_outputs_0_valid;
  reg                 _zz_io_outputs_1_valid;
  wire                when_Stream_l825;
  wire                when_Stream_l825_1;
  wire                io_outputs_0_fire;
  wire                io_outputs_1_fire;

  always @(*) begin
    io_input_ready = 1'b1;
    if(when_Stream_l825) begin
      io_input_ready = 1'b0;
    end
    if(when_Stream_l825_1) begin
      io_input_ready = 1'b0;
    end
  end

  assign when_Stream_l825 = ((! io_outputs_0_ready) && _zz_io_outputs_0_valid);
  assign when_Stream_l825_1 = ((! io_outputs_1_ready) && _zz_io_outputs_1_valid);
  assign io_outputs_0_valid = (io_input_valid && _zz_io_outputs_0_valid);
  assign io_outputs_0_payload_a = io_input_payload_a;
  assign io_outputs_0_payload_b = io_input_payload_b;
  assign io_outputs_0_fire = (io_outputs_0_valid && io_outputs_0_ready);
  assign io_outputs_1_valid = (io_input_valid && _zz_io_outputs_1_valid);
  assign io_outputs_1_payload_a = io_input_payload_a;
  assign io_outputs_1_payload_b = io_input_payload_b;
  assign io_outputs_1_fire = (io_outputs_1_valid && io_outputs_1_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_io_outputs_0_valid <= 1'b1;
      _zz_io_outputs_1_valid <= 1'b1;
    end else begin
      if(io_outputs_0_fire) begin
        _zz_io_outputs_0_valid <= 1'b0;
      end
      if(io_outputs_1_fire) begin
        _zz_io_outputs_1_valid <= 1'b0;
      end
      if(io_input_ready) begin
        _zz_io_outputs_0_valid <= 1'b1;
        _zz_io_outputs_1_valid <= 1'b1;
      end
    end
  end


endmodule
