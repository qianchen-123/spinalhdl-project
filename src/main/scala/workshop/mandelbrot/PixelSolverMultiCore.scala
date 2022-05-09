package workshop.mandelbrot

import spinal.core._
import spinal.lib._


case class Dispatcher[T <: Data](dataType : T,outputsCount : Int) extends Component{
  val io = new Bundle {
    val input = slave Stream(dataType)
    val outputs = Vec(master Stream(dataType),outputsCount)
  }
  // TODO
  val counter = Counter(io.outputs.length)

  for(output <- io.outputs){
    output.valid := False
    output.payload := io.input.payload
  }

  io.outputs(counter.value).valid := io.input.valid
  io.input.ready := io.outputs(counter.value).ready

  when(io.input.fire){
    counter.increment()
  }
}

// TODO Define the Arbiter component (similar to the Dispatcher)
case class Arbiter[T <: Data](dataType : T, inputsCount : Int) extends Component{
  val io = new Bundle{
    val inputs = Vec(slave Stream(dataType),inputsCount)
    val output = master Stream(dataType)
  }
  val counter = Counter(io.inputs.length)

  for(input <- io.inputs){
    input.ready := False
  }

  io.inputs(counter.value).ready := io.output.ready
  io.output.valid := io.inputs(counter.value).valid
  io.output.payload := io.inputs(counter.value).payload

  when(io.output.fire){
    counter.increment()
  }

}

case class PixelSolverMultiCore(g : PixelSolverGenerics,coreCount : Int) extends Component {
  val io = new Bundle {
    val cmd = slave Stream (PixelTask(g))
    val rsp = master Stream (PixelResult(g))
  }

  //TODO instantiate all components
  val pixelTaskDispatcher = Dispatcher(PixelTask(g),coreCount)
  val pixelTaskSolver = List.fill(coreCount)(PixelSolver(g))
  val pixelResultArbiter = Arbiter(PixelResult(g),coreCount)

  //TODO interconnect all that stuff
  pixelTaskDispatcher.io.input << io.cmd
  for(solverId <- 0 until coreCount){
    pixelTaskSolver(solverId).io.cmd <-< pixelTaskDispatcher.io.outputs(solverId)
    pixelResultArbiter.io.inputs(solverId) <-< pixelTaskSolver(solverId).io.rsp
  }
  io.rsp << pixelResultArbiter.io.output
}

