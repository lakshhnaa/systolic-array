// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_systolic_array.h for the primary calling header

#include "Vtb_systolic_array__pch.h"

VL_ATTR_COLD void Vtb_systolic_array___024root___eval_initial__TOP(Vtb_systolic_array___024root* vlSelf);
VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_array___024root* vlSelf);
VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_array___024root* vlSelf);

void Vtb_systolic_array___024root___eval_initial(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_systolic_array___024root___eval_initial__TOP(vlSelf);
    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_systolic_array___024root____VbeforeTrig_h1bebed47__0(Vtb_systolic_array___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_systolic_array__DOT__rst = 1U;
    vlSelfRef.tb_systolic_array__DOT__a_row[0U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[0U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[1U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[1U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[2U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[2U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[3U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[3U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[4U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[4U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[5U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[5U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[6U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[6U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[7U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__b_col[7U] = 0U;
    vlSelfRef.tb_systolic_array__DOT__i = 8U;
    Vtb_systolic_array___024root____VbeforeTrig_h1bebed47__0(vlSelf, 
                                                             "@(posedge tb_systolic_array.clk)");
    co_await vlSelfRef.__VtrigSched_h1bebed47__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_systolic_array.clk)", 
                                                         "tb/tb_systolic_array.v", 
                                                         37);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb/tb_systolic_array.v", 
                                         37);
    vlSelfRef.tb_systolic_array__DOT__rst = 0U;
    vlSelfRef.tb_systolic_array__DOT__i = 0U;
    vlSelfRef.tb_systolic_array__DOT__a_row[0U] = 1U;
    vlSelfRef.tb_systolic_array__DOT__b_col[0U] = 1U;
    vlSelfRef.tb_systolic_array__DOT__i = 1U;
    vlSelfRef.tb_systolic_array__DOT__a_row[1U] = 2U;
    vlSelfRef.tb_systolic_array__DOT__b_col[1U] = 2U;
    vlSelfRef.tb_systolic_array__DOT__i = 2U;
    vlSelfRef.tb_systolic_array__DOT__a_row[2U] = 3U;
    vlSelfRef.tb_systolic_array__DOT__b_col[2U] = 3U;
    vlSelfRef.tb_systolic_array__DOT__i = 3U;
    vlSelfRef.tb_systolic_array__DOT__a_row[3U] = 4U;
    vlSelfRef.tb_systolic_array__DOT__b_col[3U] = 4U;
    vlSelfRef.tb_systolic_array__DOT__i = 4U;
    vlSelfRef.tb_systolic_array__DOT__a_row[4U] = 5U;
    vlSelfRef.tb_systolic_array__DOT__b_col[4U] = 5U;
    vlSelfRef.tb_systolic_array__DOT__i = 5U;
    vlSelfRef.tb_systolic_array__DOT__a_row[5U] = 6U;
    vlSelfRef.tb_systolic_array__DOT__b_col[5U] = 6U;
    vlSelfRef.tb_systolic_array__DOT__i = 6U;
    vlSelfRef.tb_systolic_array__DOT__a_row[6U] = 7U;
    vlSelfRef.tb_systolic_array__DOT__b_col[6U] = 7U;
    vlSelfRef.tb_systolic_array__DOT__i = 7U;
    vlSelfRef.tb_systolic_array__DOT__a_row[7U] = 8U;
    vlSelfRef.tb_systolic_array__DOT__b_col[7U] = 8U;
    vlSelfRef.tb_systolic_array__DOT__i = 8U;
    tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_systolic_array___024root____VbeforeTrig_h1bebed47__0(vlSelf, 
                                                                 "@(posedge tb_systolic_array.clk)");
        co_await vlSelfRef.__VtrigSched_h1bebed47__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_systolic_array.clk)", 
                                                             "tb/tb_systolic_array.v", 
                                                             47);
        tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_systolic_array__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Result [0][0] = %0d\nResult [0][1] = %0d\nResult [7][7] = %0d\n",3
                 , '~',32,vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][0U]
                 , '~',32,vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[0U][1U]
                 , '~',32,vlSelfRef.tb_systolic_array__DOT__dut__DOT__acc_wire[7U][7U]);
    VL_FINISH_MT("tb/tb_systolic_array.v", 54, "");
    co_return;
}

VlCoroutine Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_systolic_array.v", 
                                             21);
        vlSelfRef.tb_systolic_array__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_systolic_array__DOT__clk)));
    }
    co_return;
}

void Vtb_systolic_array___024root___eval_triggers_vec__act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_triggers_vec__act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_systolic_array__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 
        = vlSelfRef.tb_systolic_array__DOT__clk;
}

bool Vtb_systolic_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_anySet__act\n"); );
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

void Vtb_systolic_array___024root___act_comb__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___act_comb__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtb_systolic_array___024root___eval_act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_systolic_array___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_systolic_array___024root___nba_sequent__TOP__0(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___nba_sequent__TOP__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_systolic_array__DOT__rst) {
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
    } else {
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][0U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][0U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][1U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][1U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][2U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][2U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][3U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][3U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][4U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][4U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][5U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][5U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][6U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][6U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
            = (vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__acc 
               + VL_MULS_III(32, VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][7U]), 
                             VL_EXTENDS_II(32,8, vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][7U])));
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[0U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][0U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][1U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][2U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][3U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][4U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][5U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][6U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][7U];
        vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][7U];
    }
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
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[0U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[1U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[1U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[2U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[2U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[3U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[3U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[4U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[4U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[5U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[5U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[6U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[6U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[7U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][0U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][1U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][2U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][3U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][4U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][5U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][6U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__pe_inst__b_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__a_wire[7U][8U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__a_out;
    vlSelfRef.tb_systolic_array__DOT__dut__DOT__b_wire[8U][7U] 
        = vlSelfRef.tb_systolic_array__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__pe_inst__b_out;
}

void Vtb_systolic_array___024root___eval_nba(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_nba\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_systolic_array___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_systolic_array___024root___timing_ready(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___timing_ready\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1bebed47__0.ready("@(posedge tb_systolic_array.clk)");
    }
}

void Vtb_systolic_array___024root___timing_resume(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___timing_resume\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1bebed47__0.moveToResumeQueue(
                                                          "@(posedge tb_systolic_array.clk)");
    vlSelfRef.__VtrigSched_h1bebed47__0.resume("@(posedge tb_systolic_array.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_systolic_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_systolic_array___024root___eval_phase__act(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__act\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_systolic_array___024root___eval_triggers_vec__act(vlSelf);
    Vtb_systolic_array___024root___timing_ready(vlSelf);
    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_systolic_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_systolic_array___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_systolic_array___024root___timing_resume(vlSelf);
        Vtb_systolic_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_systolic_array___024root___eval_phase__inact(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__inact\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_systolic_array.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_systolic_array___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_systolic_array___024root___eval_phase__nba(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_phase__nba\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_systolic_array___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_systolic_array___024root___eval_nba(vlSelf);
        Vtb_systolic_array___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_systolic_array___024root___eval(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_systolic_array.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_systolic_array.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_systolic_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_systolic_array.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_systolic_array___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_systolic_array___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_systolic_array___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_systolic_array___024root____VbeforeTrig_h1bebed47__0(Vtb_systolic_array___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root____VbeforeTrig_h1bebed47__0\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_systolic_array__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_systolic_array__DOT__clk__0 
        = vlSelfRef.tb_systolic_array__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1bebed47__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1bebed47__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_systolic_array___024root___eval_debug_assertions(Vtb_systolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_systolic_array___024root___eval_debug_assertions\n"); );
    Vtb_systolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
