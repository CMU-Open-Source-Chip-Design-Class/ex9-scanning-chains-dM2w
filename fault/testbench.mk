TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/fault5.sv
TOPLEVEL = fault
MODULE = fault_tb
SIM = verilator
EXTRA_ARGS += --trace -Wno-WIDTHTRUNC -Wno-UNOPTFLAT -Wno-fatal
include $(shell cocotb-config --makefiles)/Makefile.sim
