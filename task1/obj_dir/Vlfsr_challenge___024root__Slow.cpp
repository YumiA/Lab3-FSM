// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_challenge.h for the primary calling header

#include "verilated.h"

#include "Vlfsr_challenge__Syms.h"
#include "Vlfsr_challenge___024root.h"

void Vlfsr_challenge___024root___ctor_var_reset(Vlfsr_challenge___024root* vlSelf);

Vlfsr_challenge___024root::Vlfsr_challenge___024root(Vlfsr_challenge__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr_challenge___024root___ctor_var_reset(this);
}

void Vlfsr_challenge___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr_challenge___024root::~Vlfsr_challenge___024root() {
}
