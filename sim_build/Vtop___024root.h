// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(data_avail,0,0);
    VL_OUT8(buf_en,0,0);
    VL_OUT8(out_sel,1,0);
    VL_OUT8(out_writing,0,0);
    VL_IN8(scan_in,0,0);
    VL_IN8(scan_en,0,0);
    VL_OUT8(scan_out,0,0);
    CData/*0:0*/ hidden_fsm__DOT__clk;
    CData/*0:0*/ hidden_fsm__DOT__data_avail;
    CData/*0:0*/ hidden_fsm__DOT__buf_en;
    CData/*1:0*/ hidden_fsm__DOT__out_sel;
    CData/*0:0*/ hidden_fsm__DOT__out_writing;
    CData/*0:0*/ hidden_fsm__DOT__scan_in;
    CData/*0:0*/ hidden_fsm__DOT__scan_en;
    CData/*0:0*/ hidden_fsm__DOT__scan_out;
    CData/*0:0*/ hidden_fsm__DOT___00_;
    CData/*0:0*/ hidden_fsm__DOT___01_;
    CData/*0:0*/ hidden_fsm__DOT___02_;
    CData/*0:0*/ hidden_fsm__DOT___03_;
    CData/*0:0*/ hidden_fsm__DOT___04_;
    CData/*0:0*/ hidden_fsm__DOT___05_;
    CData/*0:0*/ hidden_fsm__DOT___06_;
    CData/*0:0*/ hidden_fsm__DOT___07_;
    CData/*0:0*/ hidden_fsm__DOT___08_;
    CData/*0:0*/ hidden_fsm__DOT___09_;
    CData/*0:0*/ hidden_fsm__DOT___10_;
    CData/*0:0*/ hidden_fsm__DOT___11_;
    CData/*0:0*/ hidden_fsm__DOT___12_;
    CData/*0:0*/ hidden_fsm__DOT___13_;
    CData/*0:0*/ hidden_fsm__DOT___14_;
    CData/*2:0*/ hidden_fsm__DOT___the_state;
    CData/*0:0*/ hidden_fsm__DOT__cur_state__05b0__05d;
    CData/*0:0*/ hidden_fsm__DOT__cur_state__05b1__05d;
    CData/*0:0*/ hidden_fsm__DOT__cur_state__05b2__05d;
    CData/*0:0*/ hidden_fsm__DOT__nstate__05b0__05d;
    CData/*0:0*/ hidden_fsm__DOT__nstate__05b1__05d;
    CData/*0:0*/ hidden_fsm__DOT__nstate__05b2__05d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
