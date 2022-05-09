// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : FunctionUnit
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module FunctionUnit (
  input               io_cmd_valid,
  input      [7:0]    io_cmd_payload,
  output     [7:0]    io_valueA,
  output     [31:0]   io_valueB,
  output     [47:0]   io_valueC,
  input               clk,
  input               reset
);

  reg                 _zz_when_FunctionUnit_l25_7;
  wire       [0:0]    _zz_when;
  reg                 _zz_when_FunctionUnit_l25_1_1;
  wire       [1:0]    _zz_loadB_counter_valueNext;
  wire       [0:0]    _zz_loadB_counter_valueNext_1;
  reg                 _zz_when_FunctionUnit_l25_2_1;
  wire       [2:0]    _zz_loadC_counter_valueNext;
  wire       [0:0]    _zz_loadC_counter_valueNext_1;
  reg                 setA_hit;
  reg        [3:0]    setA_counter;
  wire                _zz_when_FunctionUnit_l25;
  wire                _zz_when_FunctionUnit_l25_1;
  wire                _zz_when_FunctionUnit_l25_2;
  wire                _zz_when_FunctionUnit_l25_3;
  wire                _zz_when_FunctionUnit_l25_4;
  wire                _zz_when_FunctionUnit_l25_5;
  wire                _zz_when_FunctionUnit_l25_6;
  wire                when_FunctionUnit_l25;
  wire                when_FunctionUnit_l26;
  reg                 loadA_active;
  reg                 loadA_counter_willIncrement;
  wire                loadA_counter_willClear;
  wire                loadA_counter_willOverflowIfInc;
  wire                loadA_counter_willOverflow;
  reg        [7:0]    loadA_buffer;
  wire                when_FunctionUnit_l46;
  reg                 setB_hit;
  reg        [3:0]    setB_counter;
  wire                when_FunctionUnit_l25_1;
  wire                when_FunctionUnit_l26_1;
  reg                 loadB_active;
  reg                 loadB_counter_willIncrement;
  wire                loadB_counter_willClear;
  reg        [1:0]    loadB_counter_valueNext;
  reg        [1:0]    loadB_counter_value;
  wire                loadB_counter_willOverflowIfInc;
  wire                loadB_counter_willOverflow;
  reg        [31:0]   loadB_buffer;
  wire                when_FunctionUnit_l46_1;
  wire       [3:0]    _zz_1;
  reg                 setC_hit;
  reg        [3:0]    setC_counter;
  wire                when_FunctionUnit_l25_2;
  wire                when_FunctionUnit_l26_2;
  reg                 loadC_active;
  reg                 loadC_counter_willIncrement;
  wire                loadC_counter_willClear;
  reg        [2:0]    loadC_counter_valueNext;
  reg        [2:0]    loadC_counter_value;
  wire                loadC_counter_willOverflowIfInc;
  wire                loadC_counter_willOverflow;
  reg        [47:0]   loadC_buffer;
  wire                when_FunctionUnit_l46_2;
  wire       [7:0]    _zz_2;

  assign _zz_when = 1'b1;
  assign _zz_loadB_counter_valueNext_1 = loadB_counter_willIncrement;
  assign _zz_loadB_counter_valueNext = {1'd0, _zz_loadB_counter_valueNext_1};
  assign _zz_loadC_counter_valueNext_1 = loadC_counter_willIncrement;
  assign _zz_loadC_counter_valueNext = {2'd0, _zz_loadC_counter_valueNext_1};
  always @(*) begin
    case(setA_counter)
      4'b0000 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25;
      4'b0001 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_1;
      4'b0010 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_2;
      4'b0011 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_3;
      4'b0100 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_4;
      4'b0101 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_5;
      4'b0110 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_6;
      4'b0111 : _zz_when_FunctionUnit_l25_7 = _zz_when_FunctionUnit_l25_1;
      default : _zz_when_FunctionUnit_l25_7 = (io_cmd_payload == 8'h41);
    endcase
  end

  always @(*) begin
    case(setB_counter)
      4'b0000 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25;
      4'b0001 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_1;
      4'b0010 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_2;
      4'b0011 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_3;
      4'b0100 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_4;
      4'b0101 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_5;
      4'b0110 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_6;
      4'b0111 : _zz_when_FunctionUnit_l25_1_1 = _zz_when_FunctionUnit_l25_1;
      default : _zz_when_FunctionUnit_l25_1_1 = (io_cmd_payload == 8'h42);
    endcase
  end

  always @(*) begin
    case(setC_counter)
      4'b0000 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25;
      4'b0001 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_1;
      4'b0010 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_2;
      4'b0011 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_3;
      4'b0100 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_4;
      4'b0101 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_5;
      4'b0110 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_6;
      4'b0111 : _zz_when_FunctionUnit_l25_2_1 = _zz_when_FunctionUnit_l25_1;
      default : _zz_when_FunctionUnit_l25_2_1 = (io_cmd_payload == 8'h43);
    endcase
  end

  always @(*) begin
    setA_hit = 1'b0;
    if(io_cmd_valid) begin
      if(when_FunctionUnit_l25) begin
        if(when_FunctionUnit_l26) begin
          setA_hit = 1'b1;
        end
      end
    end
  end

  assign _zz_when_FunctionUnit_l25 = (io_cmd_payload == 8'h73);
  assign _zz_when_FunctionUnit_l25_1 = (io_cmd_payload == 8'h65);
  assign _zz_when_FunctionUnit_l25_2 = (io_cmd_payload == 8'h74);
  assign _zz_when_FunctionUnit_l25_3 = (io_cmd_payload == 8'h56);
  assign _zz_when_FunctionUnit_l25_4 = (io_cmd_payload == 8'h61);
  assign _zz_when_FunctionUnit_l25_5 = (io_cmd_payload == 8'h6c);
  assign _zz_when_FunctionUnit_l25_6 = (io_cmd_payload == 8'h75);
  assign when_FunctionUnit_l25 = _zz_when_FunctionUnit_l25_7;
  assign when_FunctionUnit_l26 = (setA_counter == 4'b1000);
  always @(*) begin
    loadA_counter_willIncrement = 1'b0;
    if(when_FunctionUnit_l46) begin
      loadA_counter_willIncrement = 1'b1;
    end
  end

  assign loadA_counter_willClear = 1'b0;
  assign loadA_counter_willOverflowIfInc = 1'b1;
  assign loadA_counter_willOverflow = (loadA_counter_willOverflowIfInc && loadA_counter_willIncrement);
  assign when_FunctionUnit_l46 = (loadA_active && io_cmd_valid);
  assign io_valueA = loadA_buffer;
  always @(*) begin
    setB_hit = 1'b0;
    if(io_cmd_valid) begin
      if(when_FunctionUnit_l25_1) begin
        if(when_FunctionUnit_l26_1) begin
          setB_hit = 1'b1;
        end
      end
    end
  end

  assign when_FunctionUnit_l25_1 = _zz_when_FunctionUnit_l25_1_1;
  assign when_FunctionUnit_l26_1 = (setB_counter == 4'b1000);
  always @(*) begin
    loadB_counter_willIncrement = 1'b0;
    if(when_FunctionUnit_l46_1) begin
      loadB_counter_willIncrement = 1'b1;
    end
  end

  assign loadB_counter_willClear = 1'b0;
  assign loadB_counter_willOverflowIfInc = (loadB_counter_value == 2'b11);
  assign loadB_counter_willOverflow = (loadB_counter_willOverflowIfInc && loadB_counter_willIncrement);
  always @(*) begin
    loadB_counter_valueNext = (loadB_counter_value + _zz_loadB_counter_valueNext);
    if(loadB_counter_willClear) begin
      loadB_counter_valueNext = 2'b00;
    end
  end

  assign when_FunctionUnit_l46_1 = (loadB_active && io_cmd_valid);
  assign _zz_1 = ({3'd0,1'b1} <<< loadB_counter_value);
  assign io_valueB = loadB_buffer;
  always @(*) begin
    setC_hit = 1'b0;
    if(io_cmd_valid) begin
      if(when_FunctionUnit_l25_2) begin
        if(when_FunctionUnit_l26_2) begin
          setC_hit = 1'b1;
        end
      end
    end
  end

  assign when_FunctionUnit_l25_2 = _zz_when_FunctionUnit_l25_2_1;
  assign when_FunctionUnit_l26_2 = (setC_counter == 4'b1000);
  always @(*) begin
    loadC_counter_willIncrement = 1'b0;
    if(when_FunctionUnit_l46_2) begin
      loadC_counter_willIncrement = 1'b1;
    end
  end

  assign loadC_counter_willClear = 1'b0;
  assign loadC_counter_willOverflowIfInc = (loadC_counter_value == 3'b101);
  assign loadC_counter_willOverflow = (loadC_counter_willOverflowIfInc && loadC_counter_willIncrement);
  always @(*) begin
    if(loadC_counter_willOverflow) begin
      loadC_counter_valueNext = 3'b000;
    end else begin
      loadC_counter_valueNext = (loadC_counter_value + _zz_loadC_counter_valueNext);
    end
    if(loadC_counter_willClear) begin
      loadC_counter_valueNext = 3'b000;
    end
  end

  assign when_FunctionUnit_l46_2 = (loadC_active && io_cmd_valid);
  assign _zz_2 = ({7'd0,1'b1} <<< loadC_counter_value);
  assign io_valueC = loadC_buffer;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      setA_counter <= 4'b0000;
      loadA_active <= 1'b0;
      setB_counter <= 4'b0000;
      loadB_active <= 1'b0;
      loadB_counter_value <= 2'b00;
      setC_counter <= 4'b0000;
      loadC_active <= 1'b0;
      loadC_counter_value <= 3'b000;
    end else begin
      if(io_cmd_valid) begin
        if(when_FunctionUnit_l25) begin
          if(when_FunctionUnit_l26) begin
            setA_counter <= 4'b0000;
          end else begin
            setA_counter <= (setA_counter + 4'b0001);
          end
        end else begin
          setA_counter <= 4'b0000;
        end
      end
      if(setA_hit) begin
        loadA_active <= 1'b1;
      end
      if(when_FunctionUnit_l46) begin
        if(loadA_counter_willOverflowIfInc) begin
          loadA_active <= 1'b0;
        end
      end
      if(io_cmd_valid) begin
        if(when_FunctionUnit_l25_1) begin
          if(when_FunctionUnit_l26_1) begin
            setB_counter <= 4'b0000;
          end else begin
            setB_counter <= (setB_counter + 4'b0001);
          end
        end else begin
          setB_counter <= 4'b0000;
        end
      end
      if(setB_hit) begin
        loadB_active <= 1'b1;
      end
      loadB_counter_value <= loadB_counter_valueNext;
      if(when_FunctionUnit_l46_1) begin
        if(loadB_counter_willOverflowIfInc) begin
          loadB_active <= 1'b0;
        end
      end
      if(io_cmd_valid) begin
        if(when_FunctionUnit_l25_2) begin
          if(when_FunctionUnit_l26_2) begin
            setC_counter <= 4'b0000;
          end else begin
            setC_counter <= (setC_counter + 4'b0001);
          end
        end else begin
          setC_counter <= 4'b0000;
        end
      end
      if(setC_hit) begin
        loadC_active <= 1'b1;
      end
      loadC_counter_value <= loadC_counter_valueNext;
      if(when_FunctionUnit_l46_2) begin
        if(loadC_counter_willOverflowIfInc) begin
          loadC_active <= 1'b0;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(when_FunctionUnit_l46) begin
      if(_zz_when[0]) begin
        loadA_buffer[7 : 0] <= io_cmd_payload;
      end
    end
    if(when_FunctionUnit_l46_1) begin
      if(_zz_1[0]) begin
        loadB_buffer[7 : 0] <= io_cmd_payload;
      end
      if(_zz_1[1]) begin
        loadB_buffer[15 : 8] <= io_cmd_payload;
      end
      if(_zz_1[2]) begin
        loadB_buffer[23 : 16] <= io_cmd_payload;
      end
      if(_zz_1[3]) begin
        loadB_buffer[31 : 24] <= io_cmd_payload;
      end
    end
    if(when_FunctionUnit_l46_2) begin
      if(_zz_2[0]) begin
        loadC_buffer[7 : 0] <= io_cmd_payload;
      end
      if(_zz_2[1]) begin
        loadC_buffer[15 : 8] <= io_cmd_payload;
      end
      if(_zz_2[2]) begin
        loadC_buffer[23 : 16] <= io_cmd_payload;
      end
      if(_zz_2[3]) begin
        loadC_buffer[31 : 24] <= io_cmd_payload;
      end
      if(_zz_2[4]) begin
        loadC_buffer[39 : 32] <= io_cmd_payload;
      end
      if(_zz_2[5]) begin
        loadC_buffer[47 : 40] <= io_cmd_payload;
      end
    end
  end


endmodule
