// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : SimCounterDut
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module SimCounterDut (
  input               io_enable,
  output     [7:0]    io_value,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_reg_1;
  reg        [7:0]    reg_1;

  assign _zz_reg_1 = (reg_1 + 8'h01);
  assign io_value = reg_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      reg_1 <= 8'h2b;
    end else begin
      if(io_enable) begin
        reg_1 <= (_zz_reg_1 + 8'h0);
      end
    end
  end


endmodule
