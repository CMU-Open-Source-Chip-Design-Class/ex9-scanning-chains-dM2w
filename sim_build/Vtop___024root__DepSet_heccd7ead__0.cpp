// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_hidden_fsm__DOT___31___0__Vfuncout;
    __Vfunc_hidden_fsm__DOT___31___0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___31___0__b;
    __Vfunc_hidden_fsm__DOT___31___0__b = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___31___0__s;
    __Vfunc_hidden_fsm__DOT___31___0__s = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___35___1__Vfuncout;
    __Vfunc_hidden_fsm__DOT___35___1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_hidden_fsm__DOT___35___1__s;
    __Vfunc_hidden_fsm__DOT___35___1__s = 0;
    // Body
    vlSelf->hidden_fsm__DOT__clk = vlSelf->clk;
    vlSelf->hidden_fsm__DOT__data_avail = vlSelf->data_avail;
    vlSelf->hidden_fsm__DOT__scan_in = vlSelf->scan_in;
    vlSelf->hidden_fsm__DOT__scan_en = vlSelf->scan_en;
    vlSelf->hidden_fsm__DOT__cur_state__05b1__05d = 
        (1U & ((IData)(vlSelf->hidden_fsm__DOT___the_state) 
               >> 1U));
    vlSelf->hidden_fsm__DOT__cur_state__05b0__05d = 
        (1U & (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->scan_out = (1U & ((IData)(vlSelf->hidden_fsm__DOT___the_state) 
                              >> 2U));
    vlSelf->hidden_fsm__DOT___10_ = (3U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___11_ = (1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->hidden_fsm__DOT___the_state)))));
    vlSelf->hidden_fsm__DOT___14_ = (1U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___12_ = (4U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___13_ = (2U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT__scan_out = vlSelf->scan_out;
    vlSelf->hidden_fsm__DOT__cur_state__05b2__05d = vlSelf->scan_out;
    vlSelf->hidden_fsm__DOT___04_ = (2U != (((IData)(vlSelf->hidden_fsm__DOT___11_) 
                                             << 1U) 
                                            | (IData)(vlSelf->data_avail)));
    vlSelf->buf_en = ((IData)(vlSelf->hidden_fsm__DOT___11_) 
                      | (IData)(vlSelf->hidden_fsm__DOT___10_));
    __Vfunc_hidden_fsm__DOT___35___1__s = (((IData)(vlSelf->hidden_fsm__DOT___14_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                               << 1U) 
                                              | (IData)(vlSelf->hidden_fsm__DOT___12_)));
    __Vfunc_hidden_fsm__DOT___35___1__Vfuncout = ((1U 
                                                   == 
                                                   (1U 
                                                    & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (2U 
                                                     & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                    ? 3U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                     ? 2U
                                                     : 0U)));
    vlSelf->hidden_fsm__DOT__out_sel = __Vfunc_hidden_fsm__DOT___35___1__Vfuncout;
    vlSelf->hidden_fsm__DOT__nstate__05b0__05d = ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                                                  | (IData)(vlSelf->hidden_fsm__DOT___13_));
    vlSelf->hidden_fsm__DOT__nstate__05b1__05d = ((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                                  | (IData)(vlSelf->hidden_fsm__DOT___14_));
    vlSelf->hidden_fsm__DOT__buf_en = vlSelf->buf_en;
    vlSelf->hidden_fsm__DOT___05_ = ((IData)(vlSelf->hidden_fsm__DOT___14_) 
                                     | ((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                        | ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                                           | (IData)(vlSelf->buf_en))));
    vlSelf->out_sel = vlSelf->hidden_fsm__DOT__out_sel;
    vlSelf->out_writing = ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                           | (IData)(vlSelf->hidden_fsm__DOT__nstate__05b1__05d));
    vlSelf->hidden_fsm__DOT___06_ = ((IData)(vlSelf->hidden_fsm__DOT___04_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT___05_));
    vlSelf->hidden_fsm__DOT__out_writing = vlSelf->out_writing;
    __Vfunc_hidden_fsm__DOT___31___0__s = (((IData)(vlSelf->hidden_fsm__DOT___10_) 
                                            << 1U) 
                                           | (IData)(vlSelf->out_writing));
    __Vfunc_hidden_fsm__DOT___31___0__b = ((IData)(vlSelf->data_avail) 
                                           << 1U);
    __Vfunc_hidden_fsm__DOT___31___0__Vfuncout = (1U 
                                                  & ((1U 
                                                      == 
                                                      (1U 
                                                       & (IData)(__Vfunc_hidden_fsm__DOT___31___0__s)))
                                                      ? (IData)(__Vfunc_hidden_fsm__DOT___31___0__b)
                                                      : 
                                                     ((2U 
                                                       != 
                                                       (2U 
                                                        & (IData)(__Vfunc_hidden_fsm__DOT___31___0__s))) 
                                                      || (1U 
                                                          & ((IData)(__Vfunc_hidden_fsm__DOT___31___0__b) 
                                                             >> 1U)))));
    vlSelf->hidden_fsm__DOT__nstate__05b2__05d = __Vfunc_hidden_fsm__DOT___31___0__Vfuncout;
    vlSelf->hidden_fsm__DOT___03_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     | (IData)(vlSelf->scan_en));
    vlSelf->hidden_fsm__DOT___07_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b0__05d));
    vlSelf->hidden_fsm__DOT___08_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b1__05d));
    vlSelf->hidden_fsm__DOT___09_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b2__05d));
    if (vlSelf->scan_en) {
        vlSelf->hidden_fsm__DOT___02_ = vlSelf->scan_in;
        vlSelf->hidden_fsm__DOT___01_ = vlSelf->hidden_fsm__DOT__cur_state__05b0__05d;
        vlSelf->hidden_fsm__DOT___00_ = vlSelf->hidden_fsm__DOT__cur_state__05b1__05d;
    } else {
        vlSelf->hidden_fsm__DOT___02_ = vlSelf->hidden_fsm__DOT___07_;
        vlSelf->hidden_fsm__DOT___01_ = vlSelf->hidden_fsm__DOT___08_;
        vlSelf->hidden_fsm__DOT___00_ = vlSelf->hidden_fsm__DOT___09_;
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_hidden_fsm__DOT___31___0__Vfuncout;
    __Vfunc_hidden_fsm__DOT___31___0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___31___0__b;
    __Vfunc_hidden_fsm__DOT___31___0__b = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___31___0__s;
    __Vfunc_hidden_fsm__DOT___31___0__s = 0;
    CData/*1:0*/ __Vfunc_hidden_fsm__DOT___35___1__Vfuncout;
    __Vfunc_hidden_fsm__DOT___35___1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_hidden_fsm__DOT___35___1__s;
    __Vfunc_hidden_fsm__DOT___35___1__s = 0;
    // Body
    if (vlSelf->hidden_fsm__DOT___03_) {
        vlSelf->hidden_fsm__DOT___the_state = ((6U 
                                                & (IData)(vlSelf->hidden_fsm__DOT___the_state)) 
                                               | (IData)(vlSelf->hidden_fsm__DOT___02_));
        vlSelf->hidden_fsm__DOT___the_state = ((3U 
                                                & (IData)(vlSelf->hidden_fsm__DOT___the_state)) 
                                               | ((IData)(vlSelf->hidden_fsm__DOT___00_) 
                                                  << 2U));
        vlSelf->hidden_fsm__DOT___the_state = ((5U 
                                                & (IData)(vlSelf->hidden_fsm__DOT___the_state)) 
                                               | ((IData)(vlSelf->hidden_fsm__DOT___01_) 
                                                  << 1U));
    }
    vlSelf->hidden_fsm__DOT__cur_state__05b1__05d = 
        (1U & ((IData)(vlSelf->hidden_fsm__DOT___the_state) 
               >> 1U));
    vlSelf->hidden_fsm__DOT__cur_state__05b0__05d = 
        (1U & (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->scan_out = (1U & ((IData)(vlSelf->hidden_fsm__DOT___the_state) 
                              >> 2U));
    vlSelf->hidden_fsm__DOT___10_ = (3U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___11_ = (1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->hidden_fsm__DOT___the_state)))));
    vlSelf->hidden_fsm__DOT___14_ = (1U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___12_ = (4U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT___13_ = (2U == (IData)(vlSelf->hidden_fsm__DOT___the_state));
    vlSelf->hidden_fsm__DOT__scan_out = vlSelf->scan_out;
    vlSelf->hidden_fsm__DOT__cur_state__05b2__05d = vlSelf->scan_out;
    vlSelf->hidden_fsm__DOT___04_ = (2U != (((IData)(vlSelf->hidden_fsm__DOT___11_) 
                                             << 1U) 
                                            | (IData)(vlSelf->data_avail)));
    vlSelf->buf_en = ((IData)(vlSelf->hidden_fsm__DOT___11_) 
                      | (IData)(vlSelf->hidden_fsm__DOT___10_));
    __Vfunc_hidden_fsm__DOT___35___1__s = (((IData)(vlSelf->hidden_fsm__DOT___14_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                               << 1U) 
                                              | (IData)(vlSelf->hidden_fsm__DOT___12_)));
    __Vfunc_hidden_fsm__DOT___35___1__Vfuncout = ((1U 
                                                   == 
                                                   (1U 
                                                    & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (2U 
                                                     & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                    ? 3U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(__Vfunc_hidden_fsm__DOT___35___1__s)))
                                                     ? 2U
                                                     : 0U)));
    vlSelf->hidden_fsm__DOT__out_sel = __Vfunc_hidden_fsm__DOT___35___1__Vfuncout;
    vlSelf->hidden_fsm__DOT__nstate__05b0__05d = ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                                                  | (IData)(vlSelf->hidden_fsm__DOT___13_));
    vlSelf->hidden_fsm__DOT__nstate__05b1__05d = ((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                                  | (IData)(vlSelf->hidden_fsm__DOT___14_));
    vlSelf->hidden_fsm__DOT__buf_en = vlSelf->buf_en;
    vlSelf->hidden_fsm__DOT___05_ = ((IData)(vlSelf->hidden_fsm__DOT___14_) 
                                     | ((IData)(vlSelf->hidden_fsm__DOT___13_) 
                                        | ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                                           | (IData)(vlSelf->buf_en))));
    vlSelf->out_sel = vlSelf->hidden_fsm__DOT__out_sel;
    vlSelf->out_writing = ((IData)(vlSelf->hidden_fsm__DOT___12_) 
                           | (IData)(vlSelf->hidden_fsm__DOT__nstate__05b1__05d));
    vlSelf->hidden_fsm__DOT___06_ = ((IData)(vlSelf->hidden_fsm__DOT___04_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT___05_));
    vlSelf->hidden_fsm__DOT__out_writing = vlSelf->out_writing;
    __Vfunc_hidden_fsm__DOT___31___0__s = (((IData)(vlSelf->hidden_fsm__DOT___10_) 
                                            << 1U) 
                                           | (IData)(vlSelf->out_writing));
    __Vfunc_hidden_fsm__DOT___31___0__b = ((IData)(vlSelf->data_avail) 
                                           << 1U);
    __Vfunc_hidden_fsm__DOT___31___0__Vfuncout = (1U 
                                                  & ((1U 
                                                      == 
                                                      (1U 
                                                       & (IData)(__Vfunc_hidden_fsm__DOT___31___0__s)))
                                                      ? (IData)(__Vfunc_hidden_fsm__DOT___31___0__b)
                                                      : 
                                                     ((2U 
                                                       != 
                                                       (2U 
                                                        & (IData)(__Vfunc_hidden_fsm__DOT___31___0__s))) 
                                                      || (1U 
                                                          & ((IData)(__Vfunc_hidden_fsm__DOT___31___0__b) 
                                                             >> 1U)))));
    vlSelf->hidden_fsm__DOT__nstate__05b2__05d = __Vfunc_hidden_fsm__DOT___31___0__Vfuncout;
    vlSelf->hidden_fsm__DOT___03_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     | (IData)(vlSelf->scan_en));
    vlSelf->hidden_fsm__DOT___07_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b0__05d));
    vlSelf->hidden_fsm__DOT___08_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b1__05d));
    vlSelf->hidden_fsm__DOT___09_ = ((IData)(vlSelf->hidden_fsm__DOT___06_) 
                                     & (IData)(vlSelf->hidden_fsm__DOT__nstate__05b2__05d));
    if (vlSelf->scan_en) {
        vlSelf->hidden_fsm__DOT___02_ = vlSelf->scan_in;
        vlSelf->hidden_fsm__DOT___01_ = vlSelf->hidden_fsm__DOT__cur_state__05b0__05d;
        vlSelf->hidden_fsm__DOT___00_ = vlSelf->hidden_fsm__DOT__cur_state__05b1__05d;
    } else {
        vlSelf->hidden_fsm__DOT___02_ = vlSelf->hidden_fsm__DOT___07_;
        vlSelf->hidden_fsm__DOT___01_ = vlSelf->hidden_fsm__DOT___08_;
        vlSelf->hidden_fsm__DOT___00_ = vlSelf->hidden_fsm__DOT___09_;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr16/sutongy/private/18224/ex9-scanning-chains-dM2w/hidden_fsm/hidden_fsm_out.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr16/sutongy/private/18224/ex9-scanning-chains-dM2w/hidden_fsm/hidden_fsm_out.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/afs/andrew.cmu.edu/usr16/sutongy/private/18224/ex9-scanning-chains-dM2w/hidden_fsm/hidden_fsm_out.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->data_avail & 0xfeU))) {
        Verilated::overWidthError("data_avail");}
    if (VL_UNLIKELY((vlSelf->scan_in & 0xfeU))) {
        Verilated::overWidthError("scan_in");}
    if (VL_UNLIKELY((vlSelf->scan_en & 0xfeU))) {
        Verilated::overWidthError("scan_en");}
}
#endif  // VL_DEBUG
