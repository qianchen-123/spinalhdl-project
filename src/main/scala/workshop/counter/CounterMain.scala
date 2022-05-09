package workshop.counter

import spinal.core._

//Run this main to generate the RTL
object CounterMain_VHDL{
  def main(args: Array[String]) {
    SpinalConfig(targetDirectory = "rtl").generateVhdl(Counter(width = 4))
  }
}

object CounterMain_Verilog{
  def main(args:Array[String]){
    SpinalConfig(targetDirectory = "rtl").generateVerilog(Counter(4))
  }
}
