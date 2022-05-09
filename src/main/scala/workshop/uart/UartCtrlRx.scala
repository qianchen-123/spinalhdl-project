package workshop.uart

import spinal.core._
import spinal.lib._

case class UartRxGenerics(preSamplingSize: Int = 1, // Specify how many samplingTick are drop at the begining of a UART baud
                          samplingSize:Int = 5, // Specify how many samplingTick are used to sample rxd values in the middle of the UART baud
                          postSamplingSize:Int =2){ //Specify how many samplingTick are drop at the end of a UART baud
  val rxdSamplePerBit = preSamplingSize + samplingSize + postSamplingSize
  require(isPow2(rxdSamplePerBit))

  if((samplingSize % 2) == 0)
    SpinalWarning(s"It's not nice to have a even samplingSize value at ${ScalaLocated.short} (because of the majority vote)")
}

object UartCtrlRxState extends SpinalEnum{
  val IDLE,START,DATA,STOP = newElement()
}

case class UartCtrlRx(generics : UartRxGenerics) extends Component{
  import generics._ //allow to directly use generics attribute without generics.prefix
  val io = new Bundle{
    val rxd = in Bool() //pin use to receive UART Frames
    val samplingTick = in Bool() //Time reference used to sample rxd
    val read = master Flow(Bits(8 bits)) //Flow used to transmit decoded bytes
  }

  // Implement the rxd sampling with a majority vote over samplingSize bits
  // Provide a new sampler.value each time sampler.tick is high
  val sampler = new Area{
    val samples = History(
      that = io.rxd,
      range = 2 until 2+samplingSize, //2 : start pos + stop pos //samplingSize
      when = io.samplingTick,
      init = True
    )
    val value = RegNext(MajorityVote(samples)) init(True)
    val tick = RegNext(io.samplingTick) init(False)
  }

  //Provide a bitTimer.tick each rxSamplerPreBit
  //reset() can be called to recenter the counter over a start bit.
  val bitTimer = new Area{
    val counter = Reg(UInt(log2Up(rxdSamplePerBit) bit))
    val recenter = False
    val tick = False
    when(sampler.tick){
      counter := counter - 1
      when(counter === 0){
        tick := True
      }
    }
    when(recenter){
      counter := preSamplingSize + (samplingSize - 1) / 2 -1
    }

  }

  //Provide bitCounter.value that count up each bitTimer.tick, Used by the state machine to count data bits and stop bits
  //reset() can be called to reset it to zero
  val bitCounter = new Area{
    val value = Reg(UInt(3 bits))
    val clear = False

    when(bitTimer.tick){
      value := value + 1
    }
    when(clear){
      value := 0
    }
  }

  // Statemachine that use all precedent area
  val stateMachine = new Area{
    //TODO state machine
    import UartCtrlRxState._

    val state = RegInit(IDLE)
    val buffer = Reg(io.read.payload)

    io.read.valid := False
    switch(state){
      is(IDLE){
        when(sampler.tick && !sampler.value){
          state := START
          bitTimer.recenter := True
        }
      }
      is(START){
        when(bitTimer.tick){
          state := DATA
          bitCounter.clear := True
        }
      }
      is(DATA){
        when(bitTimer.tick){
          buffer(bitCounter.value) := sampler.value
          when(bitCounter.value === 7){
            state := STOP
          }
        }
      }
      is(STOP){
        when(bitTimer.tick){
          state := IDLE
          io.read.valid := True
        }
      }
    }
  }
  io.read.payload := stateMachine.buffer
}
