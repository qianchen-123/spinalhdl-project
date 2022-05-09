package workshop.mandelbrot

import spinal.core._
import spinal.lib._

case class PixelSolverGenerics(fixAmplitude : Int,
                               fixResolution : Int,
                               iterationLimit : Int){
  val iterationWidth = log2Up(iterationLimit+1)
  def iterationType = UInt(iterationWidth bits)
  def fixType = SFix(
    peak = fixAmplitude exp,
    resolution = fixResolution exp
  )
}

case class PixelTask(g : PixelSolverGenerics) extends Bundle{
  val x,y = g.fixType
}

case class PixelResult(g : PixelSolverGenerics) extends Bundle{
  val iteration = g.iterationType
}

case class PixelSolver(g : PixelSolverGenerics) extends Component{
  val io = new Bundle{
    val cmd = slave  Stream(PixelTask(g))
    val rsp = master Stream(PixelResult(g))
  }

  //TODO implement the mandelbrot algorithm
  import g._

//  //Define states
//  val x,y = Reg(fixType) init(0)
//  val iteration = Reg(iterationType) init(0)
//
//  //Do some shared calculation
//  val xx = x*x
//  val yy = y*y
//  val xy = x*y
//
//
//  //Apply default assignement
//  io.cmd.ready := False
//  io.rsp.valid := False
//  io.rsp.payload.iteration := iteration
//
//  //Is the mandelbrot iteration done ?
//  when(io.cmd.valid){
//    when(xx + yy < 4.0 || iteration < iterationLimit){
//      x := (xx - yy + io.cmd.payload.x).truncated
//      y := ((xy<<1) + io.cmd.payload.y).truncated
//      iteration := iteration + 1
//    }otherwise{
//      io.rsp.valid := True
//      when(io.rsp.ready){
//        io.cmd.ready := True
//        x := 0
//        y := 0
//        iteration := 0
//      }
//    }
//  }

  val idWidth = 3

  trait Context extends Bundle{
    val id = UInt(idWidth bits)
    val x0,y0 = fixType
    val iteration = UInt(iterationWidth bits)
    val done = Bool
  }

  case class InserterContext() extends Bundle with Context{
    val x,y = fixType
  }

  case class MulStageContext() extends Bundle with Context{
    val xx,yy,xy = fixType
  }

  case class AddStageContext() extends Bundle with Context{
    val x,y = fixType
  }

  case class RouterContext() extends Bundle with Context{
    val x,y = fixType
  }

  val Inserter = new Area{
    //Input
    val cmdContext = InserterContext()
    //val loopBack = Flow(RouterContext())
    val loopBack = Stream(RouterContext())
    //Output
    //val output = Flow(InserterContext())
    val output = Stream(InserterContext())
    //interconnected and combination logic
    //give each task come from cmd port a ID
    val taskId = Counter(1 << idWidth , inc = io.cmd.fire)

    //interconnected
    cmdContext.id := taskId
    cmdContext.x0 := io.cmd.x
    cmdContext.y0 := io.cmd.y
    cmdContext.x := 0.0
    cmdContext.y := 0.0
    cmdContext.iteration := 0
    cmdContext.done := False

    output.valid := io.cmd.valid || loopBack.valid



    when(loopBack.valid){
      output.payload.assignSomeByName(loopBack.payload)
    }otherwise{
      output.payload.assignSomeByName(cmdContext)
    }

    io.cmd.ready := !loopBack.valid
    loopBack.ready := output.ready
  }

  val Mulstage = new Area {
    //Input
    //val input = Inserter.output.stage()
    val input = Inserter.output.m2sPipe().s2mPipe()
    //output
    //val output = Flow(MulStageContext())
    val output = Stream(MulStageContext())
    /*interconnected and combinated logic*/

    //connected input flow and output flow
    output.valid := input.valid
    output.payload.assignSomeByName(input.payload)


    //give the value of Mul parameter xx , yy and xy
    output.xx := (input.x * input.x).truncated
    output.yy := (input.y * input.y).truncated
    output.xy := (input.x * input.y).truncated

    //output ready
    input.ready := output.ready
  }

  val AddStage = new Area{
    //Input
    val input = Mulstage.output.stage()
    //Output
    //val output = Flow(AddStageContext())
    val output = Stream(AddStageContext())
    /*interconnected and combinated logic*/
    output.valid := input.valid
    output.payload.assignSomeByName(input.payload)

    output.x := (input.xx - input.yy + input.x0).truncated
    output.y := ((input.xy << 1) + input.y0).truncated

    output.done.allowOverride
    output.iteration.allowOverride
    output.done := input.done || input.xx + input.yy >= 4.0 || input.iteration === iterationLimit
    output.iteration := input.iteration + (!output.done).asUInt

    input.ready := output.ready
  }

  val Rounter = new Area{
    //Input
    val input = AddStage.output.m2sPipe().s2mPipe()

    val taskId = Counter(1 << idWidth,inc = io.rsp.fire)

    io.rsp.valid := input.valid && input.done && taskId === input.id
    io.rsp.iteration := input.iteration

    Inserter.loopBack.valid := input.valid && (!(input.done && taskId === input.id) || !io.rsp.ready)
    Inserter.loopBack.payload.assignSomeByName(input.payload)
    //Inserter.loopBack.ready := io.rsp.ready && Inserter.loopBack.valid

    input.ready := io.rsp.ready || Inserter.loopBack.valid
  }
}

