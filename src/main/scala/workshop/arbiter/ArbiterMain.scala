package workshop.arbiter

import spinal.core._


object arbiterMain {
  def main(args:Array[String]){
    SpinalConfig(targetDirectory = "rtl").generateVerilog(
      Arbiter(
        ArbiterGenerics(
          width = 32, num_Input = 4
        )
      )
    )
  }
}
