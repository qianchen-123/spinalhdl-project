// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PrimeUsage
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module PrimeUsage (
  input      [4:0]    io_value,
  output              io_isPrime
);

  reg                 _zz_io_isPrime;
  wire                when_Prime_l25;
  wire                when_Prime_l25_1;
  wire                when_Prime_l25_2;
  wire                when_Prime_l25_3;
  wire                when_Prime_l25_4;
  wire                when_Prime_l25_5;
  wire                when_Prime_l25_6;
  wire                when_Prime_l25_7;
  wire                when_Prime_l25_8;
  wire                when_Prime_l25_9;
  wire                when_Prime_l25_10;
  wire                when_Prime_l25_11;
  wire                when_Prime_l25_12;

  always @(*) begin
    _zz_io_isPrime = 1'b0;
    if(when_Prime_l25) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_1) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_2) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_3) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_4) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_5) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_6) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_7) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_8) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_9) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_10) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_11) begin
      _zz_io_isPrime = 1'b1;
    end
    if(when_Prime_l25_12) begin
      _zz_io_isPrime = 1'b1;
    end
  end

  assign when_Prime_l25 = (io_value == 5'h0);
  assign when_Prime_l25_1 = (io_value == 5'h01);
  assign when_Prime_l25_2 = (io_value == 5'h02);
  assign when_Prime_l25_3 = (io_value == 5'h03);
  assign when_Prime_l25_4 = (io_value == 5'h05);
  assign when_Prime_l25_5 = (io_value == 5'h07);
  assign when_Prime_l25_6 = (io_value == 5'h0b);
  assign when_Prime_l25_7 = (io_value == 5'h0d);
  assign when_Prime_l25_8 = (io_value == 5'h11);
  assign when_Prime_l25_9 = (io_value == 5'h13);
  assign when_Prime_l25_10 = (io_value == 5'h17);
  assign when_Prime_l25_11 = (io_value == 5'h1d);
  assign when_Prime_l25_12 = (io_value == 5'h1f);
  assign io_isPrime = _zz_io_isPrime;

endmodule
