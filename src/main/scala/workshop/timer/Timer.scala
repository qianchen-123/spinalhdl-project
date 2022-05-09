package workshop.timer

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory


case class Timer(width : Int) extends Component {
  val io = new Bundle {
    //Input
    val tick = in Bool()
    val clear = in Bool()
    val limit = in UInt(width bits)

    //Output
    val full = out Bool()
    val value = out UInt(width bits)
  }

  //TODO phase 1
  val counter = Reg(UInt(width bits))
  when(io.tick && !io.full){
    counter := counter + 1
  }

  when(io.clear){
    counter := 0
  }

  io.full := counter === io.limit
  io.value := counter


  //Bridging function
  //This is a bus bridging function for Timer component
  //Main techniques:
  //1. Using the BusSlaveFactory tool to create a bank of register
  //2. This function can be called from the parent component to drive the Timer's IO in an abstract way

  //busCtrl BusSlaveFactory : The BusSlaveFactory instance that will be used by the function to create the bridging logic
  //baseAddress BigInt : The base address where the bridging logic should be mapped
  //ticks Seq[Bool] : A list of Bool sources that can be used as a tick signal
  //clears Seq[Bool] : A list of Bool sources that can be used as a clear signal

  def driveFrom(busCtrl : BusSlaveFactory,baseAddress : BigInt)(ticks : Seq[Bool],clears : Seq[Bool]) = new Area {
    //TODO phase 2

    //Address 0 => clear/tick masks + bus
    //Address 0 , bit offset = 0 -> control ticks
    //Address 0 , bit offset = 16 -> control clear

    //si ticksEnable and clearEnable comes from bus
    //signal ticks and clears comes from parent component
    //we need use bus and parent's signal to determine the tick and clear signal of Timer
    val ticksEnable = busCtrl.createReadAndWrite(Bits(ticks.length bits),baseAddress + 0,0) init(0)
    val clearEnable = busCtrl.createReadAndWrite(Bits(clears.length bits),baseAddress + 0,16) init(0)
    val busClearing = False


    io.tick := (ticksEnable & ticks.asBits).orR // drive tick signal of component timer
    io.clear := (clearEnable & clears.asBits).orR | busClearing //drive clear signal of component timer

    //Address 4 => read/write limit (+ auto clear)
    //Ask the busCtrl to create a readable/writable register at the baseAddress + 4
    //busClearing = True when baseAddress + 4 is Writing
    busCtrl.driveAndRead(io.limit,baseAddress + 4) //drive or read signal limit of component timer in register of base address + 4
    busClearing.setWhen(busCtrl.isWriting(baseAddress + 4)) //when bus writing data in baseAddress + 4 , clear the timer

    //Address 8 => read timer value/write => clear timer value
    //Ask the busCtrl to create a readable
    busCtrl.read(io.value,baseAddress+8) //read signal value of component timer in base address + 8
    busClearing.setWhen(busCtrl.isWriting(baseAddress + 8)) // when bus writing data in baseAddress + 8 , clear the timer
  }
}
