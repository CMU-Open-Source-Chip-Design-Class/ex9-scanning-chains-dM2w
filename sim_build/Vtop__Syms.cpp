// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_hidden_fsm);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_hidden_fsm.configure(this, name(), "hidden_fsm", "hidden_fsm", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_hidden_fsm);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"buf_en", &(TOP.buf_en), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"data_avail", &(TOP.data_avail), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"out_sel", &(TOP.out_sel), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"out_writing", &(TOP.out_writing), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_en", &(TOP.scan_en), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_in", &(TOP.scan_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scan_out", &(TOP.scan_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_00_", &(TOP.hidden_fsm__DOT___00_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_01_", &(TOP.hidden_fsm__DOT___01_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_02_", &(TOP.hidden_fsm__DOT___02_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_03_", &(TOP.hidden_fsm__DOT___03_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_04_", &(TOP.hidden_fsm__DOT___04_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_05_", &(TOP.hidden_fsm__DOT___05_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_06_", &(TOP.hidden_fsm__DOT___06_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_07_", &(TOP.hidden_fsm__DOT___07_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_08_", &(TOP.hidden_fsm__DOT___08_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_09_", &(TOP.hidden_fsm__DOT___09_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_10_", &(TOP.hidden_fsm__DOT___10_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_11_", &(TOP.hidden_fsm__DOT___11_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_12_", &(TOP.hidden_fsm__DOT___12_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_13_", &(TOP.hidden_fsm__DOT___13_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_14_", &(TOP.hidden_fsm__DOT___14_), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"_the_state", &(TOP.hidden_fsm__DOT___the_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"buf_en", &(TOP.hidden_fsm__DOT__buf_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"clk", &(TOP.hidden_fsm__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\cur_state[0] ", &(TOP.hidden_fsm__DOT__cur_state__05b0__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\cur_state[1] ", &(TOP.hidden_fsm__DOT__cur_state__05b1__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\cur_state[2] ", &(TOP.hidden_fsm__DOT__cur_state__05b2__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"data_avail", &(TOP.hidden_fsm__DOT__data_avail), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\nstate[0] ", &(TOP.hidden_fsm__DOT__nstate__05b0__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\nstate[1] ", &(TOP.hidden_fsm__DOT__nstate__05b1__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"\\nstate[2] ", &(TOP.hidden_fsm__DOT__nstate__05b2__05d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"out_sel", &(TOP.hidden_fsm__DOT__out_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"out_writing", &(TOP.hidden_fsm__DOT__out_writing), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"scan_en", &(TOP.hidden_fsm__DOT__scan_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"scan_in", &(TOP.hidden_fsm__DOT__scan_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_hidden_fsm.varInsert(__Vfinal,"scan_out", &(TOP.hidden_fsm__DOT__scan_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
