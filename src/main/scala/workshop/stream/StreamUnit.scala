package workshop.stream

import spinal.core._
import spinal.lib._


case class MemoryWrite() extends Bundle{
  val address = UInt(8 bits)
  val data    = Bits(32 bits)
}

case class StreamUnit() extends Component{
  val io = new Bundle{
    val memWrite = slave  Flow(MemoryWrite())
    val cmdA     = slave  Stream(UInt(8 bits))
    val cmdB     = slave  Stream(Bits(32 bits))
    val rsp      = master Stream(Bits(32 bits))
  }

  val mem = Mem(Bits(32 bits),1 << 8)
  //TODO
  mem.write(
    enable = io.memWrite.valid,
    address = io.memWrite.address,
    data = io.memWrite.data
  )

  val memReadStream = mem.streamReadSync(io.cmdA) // when io.cmdA has signal , read the data in memory syncronusly where the address is io.cmdA
  //1. join memReadStream and io.cmdB, then get new stream
  //2.
  io.rsp << StreamJoin.arg(memReadStream,io.cmdB).translateWith(memReadStream.payload ^ io.cmdB.payload)
  //-------------------------------------------------------------//

//  //*************** MemReadStage ********************
//  //MemReadStage declarations
//  val memReadValid = RegInit(False)
//  val memReadReady = Bool()
//
//  //MemReadStage handshake
//  io.cmdA.ready := ! memReadValid || memReadReady //when signal mem Read Valid === False OR mem Read Ready signal === True, ready = True
//  when(io.cmdA.ready){
//    memReadValid := io.cmdA.valid
//  }
//
//  //MemReadStage memory access
//  val memReadData = mem.readSync(
//    enable = io.cmdA.fire, // when io.cmdA.valid === io.cmdB.valid === True, io.cmdA.fire === True, then enable signal of mem is high
//    address = io.cmdA.payload //then we can read data where the address === io.cmdA.payload
//  )
//
//  //**********Join stage ******************
//  // Join arbitration
//  io.rsp.valid := memReadValid && io.cmdB.valid
//  memReadReady := io.rsp.fire //when stream of io.rsp finish handshake, give the ready signal of memory
//  io.cmdB.ready := io.rsp.fire // ---, give the ready signal of command B
//
//  // Join datapath
//  io.rsp.payload := memReadData ^ io.cmdB.payload // io.rsp.payload == memReadData XOR io.cmdB.payload



}
