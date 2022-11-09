// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr_challenge.h"
#include "Vlfsr_challenge__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlfsr_challenge::Vlfsr_challenge(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlfsr_challenge__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlfsr_challenge::Vlfsr_challenge(const char* _vcname__)
    : Vlfsr_challenge(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlfsr_challenge::~Vlfsr_challenge() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlfsr_challenge___024root___eval_initial(Vlfsr_challenge___024root* vlSelf);
void Vlfsr_challenge___024root___eval_settle(Vlfsr_challenge___024root* vlSelf);
void Vlfsr_challenge___024root___eval(Vlfsr_challenge___024root* vlSelf);
#ifdef VL_DEBUG
void Vlfsr_challenge___024root___eval_debug_assertions(Vlfsr_challenge___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr_challenge___024root___final(Vlfsr_challenge___024root* vlSelf);

static void _eval_initial_loop(Vlfsr_challenge__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlfsr_challenge___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlfsr_challenge___024root___eval_settle(&(vlSymsp->TOP));
        Vlfsr_challenge___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlfsr_challenge::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr_challenge::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr_challenge___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlfsr_challenge___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlfsr_challenge::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlfsr_challenge::final() {
    Vlfsr_challenge___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlfsr_challenge::hierName() const { return vlSymsp->name(); }
const char* Vlfsr_challenge::modelName() const { return "Vlfsr_challenge"; }
unsigned Vlfsr_challenge::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlfsr_challenge::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlfsr_challenge___024root__trace_init_top(Vlfsr_challenge___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlfsr_challenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr_challenge___024root*>(voidSelf);
    Vlfsr_challenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlfsr_challenge___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlfsr_challenge___024root__trace_register(Vlfsr_challenge___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlfsr_challenge::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlfsr_challenge::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlfsr_challenge___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
