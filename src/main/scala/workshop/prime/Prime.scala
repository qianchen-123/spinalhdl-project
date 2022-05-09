package workshop.prime

import spinal.core._
import spinal.lib._


object Prime{
  //Pure scala function which return true when the number is prime
  def apply(n : Int) =  ! ((2 until n-1) exists (n % _ == 0))

  //Should return True when the number is prime.
  def apply1(n : UInt) : Bool = {
    //TODO
    val valueRange = (0 until 1<<widthOf(n))
    val primesInValueRange = valueRange.filter(i=>Prime(i))
    val primesHits = primesInValueRange.map(primeValue=>n === primeValue)
    val nIsPrime = primesHits.orR
    nIsPrime
  }

  def apply(n : UInt) : Bool = {
    val nIsPrime = False
    for(i<-(0 until 1 << widthOf(n))){
      if(Prime(i)){
        when (n === i){
          nIsPrime := True
        }
      }
    }
    nIsPrime
  }
}


