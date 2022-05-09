package workshop.common

import spinal.core.ClockDomain
import spinal.core.sim._
import spinal.lib.bus.amba3.apb.Apb3

case class Apb3Driver(apb : Apb3, clockDomain : ClockDomain) {
  def write(address : BigInt, data : BigInt) : Unit = {
    apb.PSEL #= 1
    apb.PENABLE #= false
    apb.PWRITE #= true
    apb.PADDR #= address
    apb.PWDATA #= data
    clockDomain.waitSampling()
    apb.PENABLE #= true
    clockDomain.waitSamplingWhere(apb.PREADY.toBoolean)
    apb.PSEL #= 0
    apb.PENABLE.randomize()
    apb.PADDR.randomize()
    apb.PWDATA.randomize()
    apb.PWRITE.randomize()
  }

  def read(address : BigInt) : BigInt = {
    apb.PSEL #= 1
    apb.PENABLE #= false
    apb.PADDR #= address
    apb.PWRITE #= false
    clockDomain.waitSampling()
    apb.PENABLE #= true
    clockDomain.waitSamplingWhere(apb.PREADY.toBoolean)
    apb.PSEL #= 0
    apb.PENABLE.randomize()
    apb.PADDR.randomize()
    apb.PWDATA.randomize()
    apb.PWRITE.randomize()
    apb.PRDATA.toBigInt
  }
}
