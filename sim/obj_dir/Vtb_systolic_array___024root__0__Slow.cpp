// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_array.h for the primary calling header

#include "Vtb_systolic_array__pch.h"

void Vtb_systolic_array___024root___timing_ready(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_static(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_static\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 
        = vlSelfRef.tb_systolic_array__DOT__clk;
    Vtb_systolic_array___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_initial__TOP(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial__TOP\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile("sim/waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_final(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_final\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_systolic_array___024root___eval_phase__stl(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_settle(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_settle\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_systolic_array.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_systolic_array___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_triggers_vec__stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_triggers_vec__stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_systolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_array___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_systolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_systolic_array___024root___stl_sequent__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___stl_sequent__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[1U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[2U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[3U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[4U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[5U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[6U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[3U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[4U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[5U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[6U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__a_row[7U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[0U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[1U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[2U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[3U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[4U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[5U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[6U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__b_col[7U];
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
}

VL_ATTR_COLD void Vtb_systolic_array___024root____Vm_traceActivitySetAll(Vtb_systolic_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_systolic_array___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_systolic_array___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_systolic_array___024root___eval_phase__stl(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__stl\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_systolic_array___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_systolic_array___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_systolic_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_systolic_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_systolic_array___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_systolic_array.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_systolic_array___024root____Vm_traceActivitySetAll(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root____Vm_traceActivitySetAll\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_systolic_array___024root___ctor_var_reset(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___ctor_var_reset\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_systolic_array__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6379806378902927025ull);
    vlSelf->tb_systolic_array__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4859732936904228830ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__a_row[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16803868873349417502ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_systolic_array__DOT__b_col[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4064965344468674740ull);
    }
    vlSelf->tb_systolic_array__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2016302142719306885ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 9; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__a_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4672983010527496921ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__b_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15562832588251271831ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_systolic_array__DOT__dut__DOT__acc_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16991564220567525748ull);
        }
    }
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
