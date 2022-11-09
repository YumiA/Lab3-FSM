// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_challenge.h for the primary calling header

#include "verilated.h"

#include "Vlfsr_challenge___024root.h"

VL_INLINE_OPT void Vlfsr_challenge___024root___sequent__TOP__0(Vlfsr_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_challenge___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->lfsr_challenge__DOT__sreg = ((0x7eU 
                                              & ((IData)(vlSelf->lfsr_challenge__DOT__sreg) 
                                                 << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_8(
                                                              (0x60U 
                                                               & (IData)(vlSelf->lfsr_challenge__DOT__sreg)))));
    }
    vlSelf->data_out = vlSelf->lfsr_challenge__DOT__sreg;
}

void Vlfsr_challenge___024root___eval(Vlfsr_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_challenge___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlfsr_challenge___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlfsr_challenge___024root___eval_debug_assertions(Vlfsr_challenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_challenge___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
