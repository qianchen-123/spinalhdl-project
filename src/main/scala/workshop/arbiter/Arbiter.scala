package workshop.arbiter


import spinal.core._
import spinal.lib
import spinal.lib._

import scala.+:

case class ArbiterGenerics(width : Int, num_Input:Int){
  var ArbiterLevel = 1
  var num_Arbiter = 0
  var numInput_EachLevel = num_Input
//  var num_EachLevel : List[Int] = List()
  var numInput_All = numInput_EachLevel



  while(numInput_EachLevel/4 !=0){
    if(numInput_EachLevel%4  == 0)
      numInput_EachLevel = numInput_EachLevel/4
    else
      numInput_EachLevel = numInput_EachLevel/4 + 1
    ArbiterLevel +=1
    numInput_All = numInput_All + numInput_EachLevel
//    num_EachLevel = num_EachLevel :+ List(numInput_EachLevel)

  }

  if(numInput_EachLevel%4 > 1){

    ArbiterLevel += 1
    numInput_EachLevel = 1
    numInput_All = numInput_All + numInput_EachLevel
  }

  num_Arbiter = numInput_All - num_Input

}


case class Arbiter(g : ArbiterGenerics) extends Component{
  require(isPow2(g.num_Input) && log2Up(g.num_Input)%2 == 0,"num input must be power of 4")
  val io = new Bundle{
    val Arbiter_In = Vec(slave Stream(Bits(g.width bits)),g.num_Input)
    val Arbiter_Out = master Stream(Bits(g.width bits))
  }

  var x = 0
  val Arbiter_InterSignal = Vec(Stream(Bits(g.width bits)),g.numInput_All)

  for(x<- 0 to g.num_Input-1){
    Arbiter_InterSignal(x) <-/< io.Arbiter_In(x)
  }

  def ArbiterConnect(num_Input : Int, num_offset : Int) {
    if (num_Input == 1 )
      Arbiter_InterSignal(g.num_Input + num_offset/num_Input) <-/< Arbiter_InterSignal(num_offset + 0)
    if (num_Input == 2)
      Arbiter_InterSignal(g.num_Input + num_offset/num_Input) <-/< StreamArbiterFactory.roundRobin.onArgs(Arbiter_InterSignal(num_offset + 0),Arbiter_InterSignal(num_offset + 1))
    if (num_Input == 3)
      Arbiter_InterSignal(g.num_Input + num_offset/num_Input) <-/< StreamArbiterFactory.roundRobin.onArgs(Arbiter_InterSignal(num_offset + 0),Arbiter_InterSignal(num_offset + 1),Arbiter_InterSignal(num_offset + 2))
    if (num_Input == 4)
      Arbiter_InterSignal(g.num_Input + num_offset/num_Input) <-/< StreamArbiterFactory.roundRobin.onArgs(Arbiter_InterSignal(num_offset + 0),Arbiter_InterSignal(num_offset + 1),Arbiter_InterSignal(num_offset + 2),Arbiter_InterSignal(num_offset + 3))
  }

  x = 0

  while (x < g.numInput_All-1){
    if(g.numInput_All-x >=4)
      ArbiterConnect(4,x)
    else
      ArbiterConnect(g.numInput_All-x,x)
    x += 4
  }



  io.Arbiter_Out << Arbiter_InterSignal(g.numInput_All-1)
}



