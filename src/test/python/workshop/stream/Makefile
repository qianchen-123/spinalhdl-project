# Makefile

#defaults

SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += ../common/timescaleit.v $(WORKSHOPROOT)/rtl/StreamUnit.v
TOPLEVEL=StreamUnit
MODULE=StreamUnitTester

include $(shell cocotb-config --makefiles)/Makefile.sim
