// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : AxiLite4WavePlayerMultiTone
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module AxiLite4WavePlayerMultiTone (
  input               io_axiLite_aw_valid,
  output              io_axiLite_aw_ready,
  input      [19:0]   io_axiLite_aw_payload_addr,
  input      [2:0]    io_axiLite_aw_payload_prot,
  input               io_axiLite_w_valid,
  output              io_axiLite_w_ready,
  input      [31:0]   io_axiLite_w_payload_data,
  input      [3:0]    io_axiLite_w_payload_strb,
  output              io_axiLite_b_valid,
  input               io_axiLite_b_ready,
  output     [1:0]    io_axiLite_b_payload_resp,
  input               io_axiLite_ar_valid,
  output reg          io_axiLite_ar_ready,
  input      [19:0]   io_axiLite_ar_payload_addr,
  input      [2:0]    io_axiLite_ar_payload_prot,
  output              io_axiLite_r_valid,
  input               io_axiLite_r_ready,
  output     [31:0]   io_axiLite_r_payload_data,
  output     [1:0]    io_axiLite_r_payload_resp,
  output     [15:0]   io_wave,
  input               clk,
  input               reset
);

  wire       [15:0]   _zz_tones_0_wavePlayer_sampler_rom_port0;
  wire       [15:0]   _zz_tones_1_wavePlayer_sampler_rom_port0;
  wire       [15:0]   _zz_tones_2_wavePlayer_sampler_rom_port0;
  wire       [15:0]   _zz_tones_3_wavePlayer_sampler_rom_port0;
  wire       [23:0]   _zz_tones_0_wavePlayer_filter_accumulator;
  wire       [23:0]   _zz_tones_0_wavePlayer_filter_accumulator_1;
  wire       [31:0]   _zz_tones_0_wavePlayer_filter_accumulator_2;
  wire       [23:0]   _zz_tones_0_wavePlayer_filter_accumulator_3;
  wire       [23:0]   _zz_tones_1_wavePlayer_filter_accumulator;
  wire       [23:0]   _zz_tones_1_wavePlayer_filter_accumulator_1;
  wire       [31:0]   _zz_tones_1_wavePlayer_filter_accumulator_2;
  wire       [23:0]   _zz_tones_1_wavePlayer_filter_accumulator_3;
  wire       [23:0]   _zz_tones_2_wavePlayer_filter_accumulator;
  wire       [23:0]   _zz_tones_2_wavePlayer_filter_accumulator_1;
  wire       [31:0]   _zz_tones_2_wavePlayer_filter_accumulator_2;
  wire       [23:0]   _zz_tones_2_wavePlayer_filter_accumulator_3;
  wire       [23:0]   _zz_tones_3_wavePlayer_filter_accumulator;
  wire       [23:0]   _zz_tones_3_wavePlayer_filter_accumulator_1;
  wire       [31:0]   _zz_tones_3_wavePlayer_filter_accumulator_2;
  wire       [23:0]   _zz_tones_3_wavePlayer_filter_accumulator_3;
  wire       [15:0]   _zz_io_wave;
  wire       [15:0]   _zz_io_wave_1;
  wire                factory_readHaltRequest;
  wire                factory_writeHaltRequest;
  wire                factory_writeJoinEvent_valid;
  wire                factory_writeJoinEvent_ready;
  wire                factory_writeJoinEvent_fire;
  wire       [1:0]    factory_writeRsp_resp;
  wire                factory_writeJoinEvent_translated_valid;
  wire                factory_writeJoinEvent_translated_ready;
  wire       [1:0]    factory_writeJoinEvent_translated_payload_resp;
  wire                _zz_io_axiLite_b_valid;
  reg                 _zz_factory_writeJoinEvent_translated_ready;
  wire                _zz_io_axiLite_b_valid_1;
  reg                 _zz_io_axiLite_b_valid_2;
  reg        [1:0]    _zz_io_axiLite_b_payload_resp;
  wire                when_Stream_l342;
  wire                factory_readDataStage_valid;
  wire                factory_readDataStage_ready;
  wire       [19:0]   factory_readDataStage_payload_addr;
  wire       [2:0]    factory_readDataStage_payload_prot;
  reg                 io_axiLite_ar_rValid;
  reg        [19:0]   io_axiLite_ar_rData_addr;
  reg        [2:0]    io_axiLite_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   factory_readRsp_data;
  wire       [1:0]    factory_readRsp_resp;
  wire                _zz_io_axiLite_r_valid;
  wire                factory_writeOccur;
  wire                factory_readOccur;
  wire                tones_0_wavePlayer_phase_run;
  wire       [15:0]   tones_0_wavePlayer_phase_rate;
  reg        [15:0]   tones_0_wavePlayer_phase_value;
  wire       [4:0]    _zz_tones_0_wavePlayer_sampler_sample;
  wire       [15:0]   tones_0_wavePlayer_sampler_sample;
  wire                tones_0_wavePlayer_filter_bypass;
  wire       [7:0]    tones_0_wavePlayer_filter_coef;
  reg        [23:0]   tones_0_wavePlayer_filter_accumulator;
  wire       [15:0]   tones_0_wavePlayer_filter_filtredSampler;
  wire       [15:0]   tones_0_wavePlayer_filter_value;
  reg                 _zz_tones_0_wavePlayer_phase_run;
  reg        [15:0]   _zz_tones_0_wavePlayer_phase_rate;
  reg                 tones_0_wavePlayer_filter_bypass_driver;
  reg        [7:0]    _zz_tones_0_wavePlayer_filter_coef;
  wire                tones_1_wavePlayer_phase_run;
  wire       [15:0]   tones_1_wavePlayer_phase_rate;
  reg        [15:0]   tones_1_wavePlayer_phase_value;
  wire       [4:0]    _zz_tones_1_wavePlayer_sampler_sample;
  wire       [15:0]   tones_1_wavePlayer_sampler_sample;
  wire                tones_1_wavePlayer_filter_bypass;
  wire       [7:0]    tones_1_wavePlayer_filter_coef;
  reg        [23:0]   tones_1_wavePlayer_filter_accumulator;
  wire       [15:0]   tones_1_wavePlayer_filter_filtredSampler;
  wire       [15:0]   tones_1_wavePlayer_filter_value;
  reg                 _zz_tones_1_wavePlayer_phase_run;
  reg        [15:0]   _zz_tones_1_wavePlayer_phase_rate;
  reg                 tones_1_wavePlayer_filter_bypass_driver;
  reg        [7:0]    _zz_tones_1_wavePlayer_filter_coef;
  wire                tones_2_wavePlayer_phase_run;
  wire       [15:0]   tones_2_wavePlayer_phase_rate;
  reg        [15:0]   tones_2_wavePlayer_phase_value;
  wire       [4:0]    _zz_tones_2_wavePlayer_sampler_sample;
  wire       [15:0]   tones_2_wavePlayer_sampler_sample;
  wire                tones_2_wavePlayer_filter_bypass;
  wire       [7:0]    tones_2_wavePlayer_filter_coef;
  reg        [23:0]   tones_2_wavePlayer_filter_accumulator;
  wire       [15:0]   tones_2_wavePlayer_filter_filtredSampler;
  wire       [15:0]   tones_2_wavePlayer_filter_value;
  reg                 _zz_tones_2_wavePlayer_phase_run;
  reg        [15:0]   _zz_tones_2_wavePlayer_phase_rate;
  reg                 tones_2_wavePlayer_filter_bypass_driver;
  reg        [7:0]    _zz_tones_2_wavePlayer_filter_coef;
  wire                tones_3_wavePlayer_phase_run;
  wire       [15:0]   tones_3_wavePlayer_phase_rate;
  reg        [15:0]   tones_3_wavePlayer_phase_value;
  wire       [4:0]    _zz_tones_3_wavePlayer_sampler_sample;
  wire       [15:0]   tones_3_wavePlayer_sampler_sample;
  wire                tones_3_wavePlayer_filter_bypass;
  wire       [7:0]    tones_3_wavePlayer_filter_coef;
  reg        [23:0]   tones_3_wavePlayer_filter_accumulator;
  wire       [15:0]   tones_3_wavePlayer_filter_filtredSampler;
  wire       [15:0]   tones_3_wavePlayer_filter_value;
  reg                 _zz_tones_3_wavePlayer_phase_run;
  reg        [15:0]   _zz_tones_3_wavePlayer_phase_rate;
  reg                 tones_3_wavePlayer_filter_bypass_driver;
  reg        [7:0]    _zz_tones_3_wavePlayer_filter_coef;
  (* ram_style = "distributed" *) reg [15:0] tones_0_wavePlayer_sampler_rom [0:31];
  (* ram_style = "distributed" *) reg [15:0] tones_1_wavePlayer_sampler_rom [0:31];
  (* ram_style = "distributed" *) reg [15:0] tones_2_wavePlayer_sampler_rom [0:31];
  (* ram_style = "distributed" *) reg [15:0] tones_3_wavePlayer_sampler_rom [0:31];

  assign _zz_tones_0_wavePlayer_filter_accumulator = (tones_0_wavePlayer_filter_accumulator - _zz_tones_0_wavePlayer_filter_accumulator_1);
  assign _zz_tones_0_wavePlayer_filter_accumulator_1 = (_zz_tones_0_wavePlayer_filter_accumulator_2 >>> 8);
  assign _zz_tones_0_wavePlayer_filter_accumulator_2 = (tones_0_wavePlayer_filter_accumulator * tones_0_wavePlayer_filter_coef);
  assign _zz_tones_0_wavePlayer_filter_accumulator_3 = (tones_0_wavePlayer_sampler_sample * tones_0_wavePlayer_filter_coef);
  assign _zz_tones_1_wavePlayer_filter_accumulator = (tones_1_wavePlayer_filter_accumulator - _zz_tones_1_wavePlayer_filter_accumulator_1);
  assign _zz_tones_1_wavePlayer_filter_accumulator_1 = (_zz_tones_1_wavePlayer_filter_accumulator_2 >>> 8);
  assign _zz_tones_1_wavePlayer_filter_accumulator_2 = (tones_1_wavePlayer_filter_accumulator * tones_1_wavePlayer_filter_coef);
  assign _zz_tones_1_wavePlayer_filter_accumulator_3 = (tones_1_wavePlayer_sampler_sample * tones_1_wavePlayer_filter_coef);
  assign _zz_tones_2_wavePlayer_filter_accumulator = (tones_2_wavePlayer_filter_accumulator - _zz_tones_2_wavePlayer_filter_accumulator_1);
  assign _zz_tones_2_wavePlayer_filter_accumulator_1 = (_zz_tones_2_wavePlayer_filter_accumulator_2 >>> 8);
  assign _zz_tones_2_wavePlayer_filter_accumulator_2 = (tones_2_wavePlayer_filter_accumulator * tones_2_wavePlayer_filter_coef);
  assign _zz_tones_2_wavePlayer_filter_accumulator_3 = (tones_2_wavePlayer_sampler_sample * tones_2_wavePlayer_filter_coef);
  assign _zz_tones_3_wavePlayer_filter_accumulator = (tones_3_wavePlayer_filter_accumulator - _zz_tones_3_wavePlayer_filter_accumulator_1);
  assign _zz_tones_3_wavePlayer_filter_accumulator_1 = (_zz_tones_3_wavePlayer_filter_accumulator_2 >>> 8);
  assign _zz_tones_3_wavePlayer_filter_accumulator_2 = (tones_3_wavePlayer_filter_accumulator * tones_3_wavePlayer_filter_coef);
  assign _zz_tones_3_wavePlayer_filter_accumulator_3 = (tones_3_wavePlayer_sampler_sample * tones_3_wavePlayer_filter_coef);
  assign _zz_io_wave = (_zz_io_wave_1 + (tones_2_wavePlayer_phase_run ? tones_2_wavePlayer_filter_value : 16'h0));
  assign _zz_io_wave_1 = ((tones_0_wavePlayer_phase_run ? tones_0_wavePlayer_filter_value : 16'h0) + (tones_1_wavePlayer_phase_run ? tones_1_wavePlayer_filter_value : 16'h0));
  initial begin
    $readmemb("AxiLite4WavePlayerMultiTone.v_toplevel_tones_0_wavePlayer_sampler_rom.bin",tones_0_wavePlayer_sampler_rom);
  end
  assign _zz_tones_0_wavePlayer_sampler_rom_port0 = tones_0_wavePlayer_sampler_rom[_zz_tones_0_wavePlayer_sampler_sample];
  initial begin
    $readmemb("AxiLite4WavePlayerMultiTone.v_toplevel_tones_1_wavePlayer_sampler_rom.bin",tones_1_wavePlayer_sampler_rom);
  end
  assign _zz_tones_1_wavePlayer_sampler_rom_port0 = tones_1_wavePlayer_sampler_rom[_zz_tones_1_wavePlayer_sampler_sample];
  initial begin
    $readmemb("AxiLite4WavePlayerMultiTone.v_toplevel_tones_2_wavePlayer_sampler_rom.bin",tones_2_wavePlayer_sampler_rom);
  end
  assign _zz_tones_2_wavePlayer_sampler_rom_port0 = tones_2_wavePlayer_sampler_rom[_zz_tones_2_wavePlayer_sampler_sample];
  initial begin
    $readmemb("AxiLite4WavePlayerMultiTone.v_toplevel_tones_3_wavePlayer_sampler_rom.bin",tones_3_wavePlayer_sampler_rom);
  end
  assign _zz_tones_3_wavePlayer_sampler_rom_port0 = tones_3_wavePlayer_sampler_rom[_zz_tones_3_wavePlayer_sampler_sample];
  assign factory_readHaltRequest = 1'b0;
  assign factory_writeHaltRequest = 1'b0;
  assign factory_writeJoinEvent_fire = (factory_writeJoinEvent_valid && factory_writeJoinEvent_ready);
  assign factory_writeJoinEvent_valid = (io_axiLite_aw_valid && io_axiLite_w_valid);
  assign io_axiLite_aw_ready = factory_writeJoinEvent_fire;
  assign io_axiLite_w_ready = factory_writeJoinEvent_fire;
  assign factory_writeJoinEvent_translated_valid = factory_writeJoinEvent_valid;
  assign factory_writeJoinEvent_ready = factory_writeJoinEvent_translated_ready;
  assign factory_writeJoinEvent_translated_payload_resp = factory_writeRsp_resp;
  assign _zz_io_axiLite_b_valid = (! factory_writeHaltRequest);
  assign factory_writeJoinEvent_translated_ready = (_zz_factory_writeJoinEvent_translated_ready && _zz_io_axiLite_b_valid);
  always @(*) begin
    _zz_factory_writeJoinEvent_translated_ready = io_axiLite_b_ready;
    if(when_Stream_l342) begin
      _zz_factory_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! _zz_io_axiLite_b_valid_1);
  assign _zz_io_axiLite_b_valid_1 = _zz_io_axiLite_b_valid_2;
  assign io_axiLite_b_valid = _zz_io_axiLite_b_valid_1;
  assign io_axiLite_b_payload_resp = _zz_io_axiLite_b_payload_resp;
  always @(*) begin
    io_axiLite_ar_ready = factory_readDataStage_ready;
    if(when_Stream_l342_1) begin
      io_axiLite_ar_ready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! factory_readDataStage_valid);
  assign factory_readDataStage_valid = io_axiLite_ar_rValid;
  assign factory_readDataStage_payload_addr = io_axiLite_ar_rData_addr;
  assign factory_readDataStage_payload_prot = io_axiLite_ar_rData_prot;
  assign _zz_io_axiLite_r_valid = (! factory_readHaltRequest);
  assign factory_readDataStage_ready = (io_axiLite_r_ready && _zz_io_axiLite_r_valid);
  assign io_axiLite_r_valid = (factory_readDataStage_valid && _zz_io_axiLite_r_valid);
  assign io_axiLite_r_payload_data = factory_readRsp_data;
  assign io_axiLite_r_payload_resp = factory_readRsp_resp;
  assign factory_writeRsp_resp = 2'b00;
  assign factory_readRsp_resp = 2'b00;
  always @(*) begin
    factory_readRsp_data = 32'h0;
    case(factory_readDataStage_payload_addr)
      20'h00008 : begin
        factory_readRsp_data[15 : 0] = tones_0_wavePlayer_phase_value;
      end
      20'h00010 : begin
        factory_readRsp_data[0 : 0] = tones_0_wavePlayer_filter_bypass_driver;
      end
      20'h00012 : begin
        factory_readRsp_data[15 : 0] = tones_1_wavePlayer_phase_value;
      end
      20'h0001a : begin
        factory_readRsp_data[0 : 0] = tones_1_wavePlayer_filter_bypass_driver;
      end
      20'h0001c : begin
        factory_readRsp_data[15 : 0] = tones_2_wavePlayer_phase_value;
      end
      20'h00024 : begin
        factory_readRsp_data[0 : 0] = tones_2_wavePlayer_filter_bypass_driver;
      end
      20'h00026 : begin
        factory_readRsp_data[15 : 0] = tones_3_wavePlayer_phase_value;
      end
      20'h0002e : begin
        factory_readRsp_data[0 : 0] = tones_3_wavePlayer_filter_bypass_driver;
      end
      default : begin
      end
    endcase
  end

  assign factory_writeOccur = (factory_writeJoinEvent_valid && factory_writeJoinEvent_ready);
  assign factory_readOccur = (io_axiLite_r_valid && io_axiLite_r_ready);
  assign _zz_tones_0_wavePlayer_sampler_sample = (tones_0_wavePlayer_phase_value >>> 11);
  assign tones_0_wavePlayer_sampler_sample = _zz_tones_0_wavePlayer_sampler_rom_port0;
  assign tones_0_wavePlayer_filter_filtredSampler = (tones_0_wavePlayer_filter_accumulator >>> 8);
  assign tones_0_wavePlayer_filter_value = (tones_0_wavePlayer_filter_bypass ? tones_0_wavePlayer_sampler_sample : tones_0_wavePlayer_filter_filtredSampler);
  assign tones_0_wavePlayer_phase_run = _zz_tones_0_wavePlayer_phase_run;
  assign tones_0_wavePlayer_phase_rate = _zz_tones_0_wavePlayer_phase_rate;
  assign tones_0_wavePlayer_filter_bypass = tones_0_wavePlayer_filter_bypass_driver;
  assign tones_0_wavePlayer_filter_coef = _zz_tones_0_wavePlayer_filter_coef;
  assign _zz_tones_1_wavePlayer_sampler_sample = (tones_1_wavePlayer_phase_value >>> 11);
  assign tones_1_wavePlayer_sampler_sample = _zz_tones_1_wavePlayer_sampler_rom_port0;
  assign tones_1_wavePlayer_filter_filtredSampler = (tones_1_wavePlayer_filter_accumulator >>> 8);
  assign tones_1_wavePlayer_filter_value = (tones_1_wavePlayer_filter_bypass ? tones_1_wavePlayer_sampler_sample : tones_1_wavePlayer_filter_filtredSampler);
  assign tones_1_wavePlayer_phase_run = _zz_tones_1_wavePlayer_phase_run;
  assign tones_1_wavePlayer_phase_rate = _zz_tones_1_wavePlayer_phase_rate;
  assign tones_1_wavePlayer_filter_bypass = tones_1_wavePlayer_filter_bypass_driver;
  assign tones_1_wavePlayer_filter_coef = _zz_tones_1_wavePlayer_filter_coef;
  assign _zz_tones_2_wavePlayer_sampler_sample = (tones_2_wavePlayer_phase_value >>> 11);
  assign tones_2_wavePlayer_sampler_sample = _zz_tones_2_wavePlayer_sampler_rom_port0;
  assign tones_2_wavePlayer_filter_filtredSampler = (tones_2_wavePlayer_filter_accumulator >>> 8);
  assign tones_2_wavePlayer_filter_value = (tones_2_wavePlayer_filter_bypass ? tones_2_wavePlayer_sampler_sample : tones_2_wavePlayer_filter_filtredSampler);
  assign tones_2_wavePlayer_phase_run = _zz_tones_2_wavePlayer_phase_run;
  assign tones_2_wavePlayer_phase_rate = _zz_tones_2_wavePlayer_phase_rate;
  assign tones_2_wavePlayer_filter_bypass = tones_2_wavePlayer_filter_bypass_driver;
  assign tones_2_wavePlayer_filter_coef = _zz_tones_2_wavePlayer_filter_coef;
  assign _zz_tones_3_wavePlayer_sampler_sample = (tones_3_wavePlayer_phase_value >>> 11);
  assign tones_3_wavePlayer_sampler_sample = _zz_tones_3_wavePlayer_sampler_rom_port0;
  assign tones_3_wavePlayer_filter_filtredSampler = (tones_3_wavePlayer_filter_accumulator >>> 8);
  assign tones_3_wavePlayer_filter_value = (tones_3_wavePlayer_filter_bypass ? tones_3_wavePlayer_sampler_sample : tones_3_wavePlayer_filter_filtredSampler);
  assign tones_3_wavePlayer_phase_run = _zz_tones_3_wavePlayer_phase_run;
  assign tones_3_wavePlayer_phase_rate = _zz_tones_3_wavePlayer_phase_rate;
  assign tones_3_wavePlayer_filter_bypass = tones_3_wavePlayer_filter_bypass_driver;
  assign tones_3_wavePlayer_filter_coef = _zz_tones_3_wavePlayer_filter_coef;
  assign io_wave = (_zz_io_wave + (tones_3_wavePlayer_phase_run ? tones_3_wavePlayer_filter_value : 16'h0));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_io_axiLite_b_valid_2 <= 1'b0;
      io_axiLite_ar_rValid <= 1'b0;
      tones_0_wavePlayer_phase_value <= 16'h0;
      tones_0_wavePlayer_filter_accumulator <= 24'h0;
      _zz_tones_0_wavePlayer_phase_run <= 1'b0;
      tones_0_wavePlayer_filter_bypass_driver <= 1'b1;
      _zz_tones_0_wavePlayer_filter_coef <= 8'h0;
      tones_1_wavePlayer_phase_value <= 16'h0;
      tones_1_wavePlayer_filter_accumulator <= 24'h0;
      _zz_tones_1_wavePlayer_phase_run <= 1'b0;
      tones_1_wavePlayer_filter_bypass_driver <= 1'b1;
      _zz_tones_1_wavePlayer_filter_coef <= 8'h0;
      tones_2_wavePlayer_phase_value <= 16'h0;
      tones_2_wavePlayer_filter_accumulator <= 24'h0;
      _zz_tones_2_wavePlayer_phase_run <= 1'b0;
      tones_2_wavePlayer_filter_bypass_driver <= 1'b1;
      _zz_tones_2_wavePlayer_filter_coef <= 8'h0;
      tones_3_wavePlayer_phase_value <= 16'h0;
      tones_3_wavePlayer_filter_accumulator <= 24'h0;
      _zz_tones_3_wavePlayer_phase_run <= 1'b0;
      tones_3_wavePlayer_filter_bypass_driver <= 1'b1;
      _zz_tones_3_wavePlayer_filter_coef <= 8'h0;
    end else begin
      if(_zz_factory_writeJoinEvent_translated_ready) begin
        _zz_io_axiLite_b_valid_2 <= (factory_writeJoinEvent_translated_valid && _zz_io_axiLite_b_valid);
      end
      if(io_axiLite_ar_ready) begin
        io_axiLite_ar_rValid <= io_axiLite_ar_valid;
      end
      if(tones_0_wavePlayer_phase_run) begin
        tones_0_wavePlayer_phase_value <= (tones_0_wavePlayer_phase_value + tones_0_wavePlayer_phase_rate);
      end
      tones_0_wavePlayer_filter_accumulator <= (_zz_tones_0_wavePlayer_filter_accumulator + _zz_tones_0_wavePlayer_filter_accumulator_3);
      if(tones_1_wavePlayer_phase_run) begin
        tones_1_wavePlayer_phase_value <= (tones_1_wavePlayer_phase_value + tones_1_wavePlayer_phase_rate);
      end
      tones_1_wavePlayer_filter_accumulator <= (_zz_tones_1_wavePlayer_filter_accumulator + _zz_tones_1_wavePlayer_filter_accumulator_3);
      if(tones_2_wavePlayer_phase_run) begin
        tones_2_wavePlayer_phase_value <= (tones_2_wavePlayer_phase_value + tones_2_wavePlayer_phase_rate);
      end
      tones_2_wavePlayer_filter_accumulator <= (_zz_tones_2_wavePlayer_filter_accumulator + _zz_tones_2_wavePlayer_filter_accumulator_3);
      if(tones_3_wavePlayer_phase_run) begin
        tones_3_wavePlayer_phase_value <= (tones_3_wavePlayer_phase_value + tones_3_wavePlayer_phase_rate);
      end
      tones_3_wavePlayer_filter_accumulator <= (_zz_tones_3_wavePlayer_filter_accumulator + _zz_tones_3_wavePlayer_filter_accumulator_3);
      case(io_axiLite_aw_payload_addr)
        20'h0 : begin
          if(factory_writeOccur) begin
            _zz_tones_0_wavePlayer_phase_run <= io_axiLite_w_payload_data[0];
          end
        end
        20'h00010 : begin
          if(factory_writeOccur) begin
            tones_0_wavePlayer_filter_bypass_driver <= io_axiLite_w_payload_data[0];
          end
        end
        20'h00014 : begin
          if(factory_writeOccur) begin
            _zz_tones_0_wavePlayer_filter_coef <= io_axiLite_w_payload_data[7 : 0];
            _zz_tones_2_wavePlayer_phase_run <= io_axiLite_w_payload_data[0];
          end
        end
        20'h0000a : begin
          if(factory_writeOccur) begin
            _zz_tones_1_wavePlayer_phase_run <= io_axiLite_w_payload_data[0];
          end
        end
        20'h0001a : begin
          if(factory_writeOccur) begin
            tones_1_wavePlayer_filter_bypass_driver <= io_axiLite_w_payload_data[0];
          end
        end
        20'h0001e : begin
          if(factory_writeOccur) begin
            _zz_tones_1_wavePlayer_filter_coef <= io_axiLite_w_payload_data[7 : 0];
            _zz_tones_3_wavePlayer_phase_run <= io_axiLite_w_payload_data[0];
          end
        end
        20'h00024 : begin
          if(factory_writeOccur) begin
            tones_2_wavePlayer_filter_bypass_driver <= io_axiLite_w_payload_data[0];
          end
        end
        20'h00028 : begin
          if(factory_writeOccur) begin
            _zz_tones_2_wavePlayer_filter_coef <= io_axiLite_w_payload_data[7 : 0];
          end
        end
        20'h0002e : begin
          if(factory_writeOccur) begin
            tones_3_wavePlayer_filter_bypass_driver <= io_axiLite_w_payload_data[0];
          end
        end
        20'h00032 : begin
          if(factory_writeOccur) begin
            _zz_tones_3_wavePlayer_filter_coef <= io_axiLite_w_payload_data[7 : 0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(_zz_factory_writeJoinEvent_translated_ready) begin
      _zz_io_axiLite_b_payload_resp <= factory_writeJoinEvent_translated_payload_resp;
    end
    if(io_axiLite_ar_ready) begin
      io_axiLite_ar_rData_addr <= io_axiLite_ar_payload_addr;
      io_axiLite_ar_rData_prot <= io_axiLite_ar_payload_prot;
    end
    case(io_axiLite_aw_payload_addr)
      20'h00004 : begin
        if(factory_writeOccur) begin
          _zz_tones_0_wavePlayer_phase_rate <= io_axiLite_w_payload_data[15 : 0];
        end
      end
      20'h0000e : begin
        if(factory_writeOccur) begin
          _zz_tones_1_wavePlayer_phase_rate <= io_axiLite_w_payload_data[15 : 0];
        end
      end
      20'h00018 : begin
        if(factory_writeOccur) begin
          _zz_tones_2_wavePlayer_phase_rate <= io_axiLite_w_payload_data[15 : 0];
        end
      end
      20'h00022 : begin
        if(factory_writeOccur) begin
          _zz_tones_3_wavePlayer_phase_rate <= io_axiLite_w_payload_data[15 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule
