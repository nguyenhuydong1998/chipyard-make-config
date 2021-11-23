// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__257(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__257\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__258(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__258\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170332
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170345
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:170348: Assertion failed in %NTestHarness.ldut.debug_1.dmOuter.dmiBypass.error\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 170348, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170356
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170369
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:170372: Assertion failed in %NTestHarness.ldut.debug_1.dmOuter.dmiBypass.error\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 170372, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170380
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:170393
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:170396: Assertion failed in %NTestHarness.ldut.debug_1.dmOuter.dmiBypass.error\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 170396, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__260(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__260\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_success = (1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit);
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky;
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address 
            = (0x3fffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__262(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__262\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_sizes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_sizes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_sizes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_opcodes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_opcodes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_opcodes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___watchdog_T_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle = 1U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done) 
             & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg = 0U;
    } else {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT___T_4) {
                vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg = 0U;
            } else {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)))) {
                        vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg 
                            = vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT___GEN_13;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__263(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__263\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt 
        = ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
            ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_dmem_resp_val;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset 
        = vlTOPp->reset;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__264(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__264\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp7132[4];
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__size_1 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
                ? 2U : 0U);
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address 
            = (0x7fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)))) {
        VL_EXTEND_WI(128,9, __Vtemp7132, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp7132[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp7132[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp7132[2U];
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp7132[3U];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__denied 
            = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x21U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__sink 
            = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x22U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__source_1 
            = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x23U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param_1 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x26U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size_1 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x24U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode_1 
            = (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x28U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__265(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__265\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg = 0U;
    } else {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_chainIn_capture) {
                vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg 
                    = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__busy)) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__nonzeroResp));
            } else {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__267(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__267\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7134[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    VL_SHIFTR_WWI(76,76,8, __Vtemp7134, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7134[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7134[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7134[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id 
        = (((((0U == (0xa012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
              | ((0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))
                  ? 2U : 0U)) | ((0U == (0xa010000U 
                                         & (0x2000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))
                                  ? 3U : 0U)) | ((0U 
                                                  == 
                                                  (0xa012000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))
                                                  ? 4U
                                                  : 0U)) 
           | ((0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))
               ? 5U : 0U));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__269(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__269\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT___GEN_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__busyReg));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg 
        = ((~ (IData)(vlTOPp->reset)) & ((0xfU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dtmInfoChain_io_update_valid)
                                             ? ((~ 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits 
                                                  >> 0x10U)) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT___GEN_4))
                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT___GEN_4))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__270(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__270\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7140[3];
    WData/*95:0*/ __Vtemp7141[3];
    WData/*95:0*/ __Vtemp7146[3];
    WData/*95:0*/ __Vtemp7147[3];
    WData/*95:0*/ __Vtemp7152[3];
    WData/*95:0*/ __Vtemp7153[3];
    WData/*95:0*/ __Vtemp7158[3];
    WData/*95:0*/ __Vtemp7159[3];
    // Body
    __Vtemp7140[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7140[1U] = 0U;
    __Vtemp7140[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7141, __Vtemp7140);
    __Vtemp7146[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7146[1U] = 0U;
    __Vtemp7146[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7147, __Vtemp7146);
    __Vtemp7152[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7152[1U] = 0U;
    __Vtemp7152[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7153, __Vtemp7152);
    __Vtemp7158[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7158[1U] = 0U;
    __Vtemp7158[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7159, __Vtemp7158);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7141[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7147[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7153[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7159[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___waddr_T_25 
        = ((8U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                  >> 0xbU)) | ((0x4000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                ? ((4U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 0xbU)) 
                                   | ((0x2000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                       ? ((2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 0xbU)) 
                                          | (1U & (
                                                   (0x1000U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xbU)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xaU))))
                                       : ((2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 8U)) 
                                          | (1U & (
                                                   (0x200U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 8U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 7U))))))
                                : ((4U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 4U)) | 
                                   ((0x40U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                     ? ((2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                               >> 4U)) 
                                        | (1U & ((0x20U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 4U)
                                                  : 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 3U))))
                                     : ((2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                               >> 1U)) 
                                        | (1U & ((4U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 1U)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pagesMasked_4 
        = ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_4
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
        = ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_5
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stall 
        = (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            >> 3U))) & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter))) 
             & ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_0) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_1)) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_2)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_3)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_4)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_5)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_6)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_7))) 
            & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id)) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stalls_id) 
                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id)))) 
           | ((((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              >> 3U))) & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter))) 
               & ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_8) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_9)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_10)) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_11)) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_12)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_13)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_14)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_15))) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id)) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stalls_id_1) 
                    != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__271(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__271\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_opcode) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_size) 
                                             << 1U) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_source))))) 
                << 0x23U) | ((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_data)) 
                             << 1U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__273(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__273\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (0U == (0x1ffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (0U == (0x1ffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_141 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                          >> 0x11U))) ? 5U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x10U)))
                                               ? 6U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0xfU)))
                                                   ? 7U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0xeU)))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0xdU)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0xcU)))
                                                      ? 0xaU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0xbU)))
                                                       ? 0xbU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0xaU)))
                                                        ? 0xcU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 9U)))
                                                         ? 0xdU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 8U)))
                                                          ? 0xeU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 7U)))
                                                           ? 0xfU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 6U)))
                                                            ? 0x10U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 5U)))
                                                             ? 0x11U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 4U)))
                                                              ? 0x12U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 3U)))
                                                               ? 0x13U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 2U)))
                                                                ? 0x14U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 1U)))
                                                                 ? 0x15U
                                                                 : 0x16U)))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_68 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                          >> 0x11U))) ? 0x22U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x10U)))
                                                  ? 0x23U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0xfU)))
                                                   ? 0x24U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0xeU)))
                                                    ? 0x25U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0xdU)))
                                                     ? 0x26U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0xcU)))
                                                      ? 0x27U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0xbU)))
                                                       ? 0x28U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0xaU)))
                                                        ? 0x29U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 9U)))
                                                         ? 0x2aU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 8U)))
                                                          ? 0x2bU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 7U)))
                                                           ? 0x2cU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 6U)))
                                                            ? 0x2dU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 5U)))
                                                             ? 0x2eU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 4U)))
                                                              ? 0x2fU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 3U)))
                                                               ? 0x30U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 2U)))
                                                                ? 0x31U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 1U)))
                                                                 ? 0x32U
                                                                 : 0x33U)))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__waddr 
        = ((0x1cU > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_prediction_entry))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_prediction_entry)
            : ((0x10U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                         >> 0x16U)) | ((0x4000000U 
                                        & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                        ? ((8U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                  >> 0x16U)) 
                                           | ((0x2000000U 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                               ? ((2U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                      >> 0x17U)) 
                                                  | (1U 
                                                     & ((0x1000000U 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                         ? 
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                         >> 0x17U)
                                                         : 
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                         >> 0x16U))))
                                               : ((4U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                      >> 0x13U)) 
                                                  | ((0x200000U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                      ? 
                                                     ((2U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & ((0x100000U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                             ? 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0x13U)
                                                             : 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0x12U))))
                                                      : 
                                                     ((2U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                          >> 0x10U)) 
                                                      | (1U 
                                                         & ((0x20000U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg)
                                                             ? 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0x10U)
                                                             : 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0xfU))))))))
                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___waddr_T_25))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stall))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__276(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__276\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x23U)) << 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__277(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__277\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_113 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_rd)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_rd));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_114 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_typeTag)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_typeTag));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_116 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_117 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_rd)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_rd));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_118 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_typeTag)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_typeTag));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_120 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_pipeid)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_1_pipeid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut))
            ? ((((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x1dU)))) 
                 & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x13U)) << 9U) | ((((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))) 
                                           & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                 >> 0x13U))) 
                                          << 8U) | 
                                         ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf_1) 
                                            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                           << 7U) | 
                                          ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal_1) 
                                             & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                            << 6U) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal_1) 
                                                & (~ 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                               << 5U) 
                                              | ((((0U 
                                                    == 
                                                    (7U 
                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 3U) 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x1dU)))) 
                                                   & (~ 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])) 
                                                  << 4U) 
                                                 | ((((0U 
                                                       == 
                                                       (7U 
                                                        & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                            << 3U) 
                                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                              >> 0x1dU)))) 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                     << 3U) 
                                                    | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal_1) 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                        << 2U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal_1) 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                                                           << 1U) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf_1) 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))))))))))
            : ((((7U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                       >> 0x1dU)))) 
                 & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                            >> 0x16U))) << 9U) | ((
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                 >> 0x1dU)))) 
                                                    & (~ (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                  >> 0x16U)))) 
                                                   << 8U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf) 
                                                       & (~ (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                     >> 0x20U)))) 
                                                      << 7U) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal) 
                                                          & (~ (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                        >> 0x20U)))) 
                                                         << 6U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                           >> 0x20U)))) 
                                                            << 5U) 
                                                           | ((((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                             >> 0x1dU)))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                              >> 0x20U)))) 
                                                               << 4U) 
                                                              | ((((0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                                >> 0x1dU)))) 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                              >> 0x20U))) 
                                                                  << 3U) 
                                                                 | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal) 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                                >> 0x20U))) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal) 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                                >> 0x20U))) 
                                                                        << 1U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf) 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                                >> 0x20U)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist_1 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                          >> 0x16U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x15U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0x14U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x13U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x12U)))
                                                     ? 4U
                                                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_141))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3 
        = (((QData)((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 3U) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x1dU))))
                               ? ((0x80000000U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                           >> 0x20U)) 
                                                  << 0x1fU)) 
                                  | ((0x7f800000U & 
                                      (((VL_GTS_III(1,10,10, 0x82U, 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                                >> 0x17U))))
                                          ? 0U : ((0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                              >> 0x17U))) 
                                                  - (IData)(0x81U))) 
                                        | ((((3U == 
                                              (3U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                             >> 0x1eU)))) 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                        >> 0x1dU))) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05FisInf))
                                            ? 0xffU
                                            : 0U)) 
                                       << 0x17U)) | 
                                     (0x7fffffU & (
                                                   VL_GTS_III(1,10,10, 0x82U, 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                                          >> 0x17U))))
                                                    ? 
                                                   (0xffffffU 
                                                    & ((0xffffffU 
                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05Fsig 
                                                           >> 1U)) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                                       >> 0x17U)))))))
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05FisInf)
                                                     ? 0U
                                                     : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05Fsig)))))
                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                  ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))
                  : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isNaN) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf)) 
                           | (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                            << 3U) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                              >> 0x1dU)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_85 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                          >> 0x22U))) ? 0x11U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x21U)))
                                                  ? 0x12U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0x20U)))
                                                   ? 0x13U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x1fU)))
                                                    ? 0x14U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x1eU)))
                                                     ? 0x15U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x1dU)))
                                                      ? 0x16U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0x1cU)))
                                                       ? 0x17U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0x1bU)))
                                                        ? 0x18U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 0x1aU)))
                                                         ? 0x19U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 0x19U)))
                                                          ? 0x1aU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 0x18U)))
                                                           ? 0x1bU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 0x17U)))
                                                            ? 0x1cU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 0x16U)))
                                                             ? 0x1dU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 0x15U)))
                                                              ? 0x1eU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 0x14U)))
                                                               ? 0x1fU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 0x13U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 0x12U)))
                                                                 ? 0x21U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_68))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__waddr)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_respPipe_bits_entry));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid) 
           & (0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                     & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                >> 0x17U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_97 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x22U))) ? 0x1dU : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x21U)))
                                                  ? 0x1eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x20U)))
                                                   ? 0x1fU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x1fU)))
                                                    ? 0x20U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x1eU)))
                                                     ? 0x21U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x1dU)))
                                                      ? 0x22U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x1cU)))
                                                       ? 0x23U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x1bU)))
                                                        ? 0x24U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x1aU)))
                                                         ? 0x25U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x19U)))
                                                          ? 0x26U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x18U)))
                                                           ? 0x27U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x17U)))
                                                            ? 0x28U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 0x16U)))
                                                             ? 0x29U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 0x15U)))
                                                              ? 0x2aU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 0x14U)))
                                                               ? 0x2bU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 0x13U)))
                                                                ? 0x2cU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                            >> 0x12U)))
                                                                 ? 0x2dU
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_80))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__updatePageHit 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid) 
           & (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_5 
                == (0x1ffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                          >> 0xeU)))) 
               << 5U) | (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_4 
                           == (0x1ffffffU & (IData)(
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                                     >> 0xeU)))) 
                          << 4U) | (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_3 
                                      == (0x1ffffffU 
                                          & (IData)(
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                                     >> 0xeU)))) 
                                     << 3U) | (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_2 
                                                 == 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                                             >> 0xeU)))) 
                                                << 2U) 
                                               | (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_1 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                                                >> 0xeU)))) 
                                                   << 1U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pages_0 
                                                     == 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
                                                                 >> 0xeU))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid) 
           & (0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid) 
           & (0U == (0xa012000U & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid) 
           & (0U == (0xa010000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__278(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__278\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_source 
            = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x2eU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_size 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x2fU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_opcode 
            = (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x34U))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_data 
            = (((0x1fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                 ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x27U))))
                 : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                     ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 0x27U))))
                     : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                         ? (0U == (0x50U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x27U))))
                         : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                             ? (0U == (0x50U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                        >> 0x27U))))
                             : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                 ? (0U == (0x50U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x27U))))
                                 : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                     ? (0U == (0x50U 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))
                                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_294)))))))
                ? ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                    ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63) 
                        << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62) 
                                      << 0x10U) | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60))))
                    : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                        ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59) 
                            << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58) 
                                          << 0x10U) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57) 
                                             << 8U) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56))))
                        : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55) 
                                << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54) 
                                              << 0x10U) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53) 
                                                 << 8U) 
                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52))))
                            : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51) 
                                    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50) 
                                                  << 0x10U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48))))
                                : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                    ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47) 
                                        << 0x18U) | 
                                       (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46) 
                                         << 0x10U) 
                                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45) 
                                            << 8U) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44))))
                                    : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                        ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43) 
                                            << 0x18U) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42) 
                                               << 0x10U) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41) 
                                                  << 8U) 
                                                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40))))
                                        : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39) 
                                                << 0x18U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38) 
                                                   << 0x10U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36))))
                                            : ((0x18U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                ? (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35) 
                                                    << 0x18U) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34) 
                                                       << 0x10U) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33) 
                                                          << 8U) 
                                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32))))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                    ? 
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31) 
                                                     << 0x18U) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30) 
                                                        << 0x10U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29) 
                                                           << 8U) 
                                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28))))
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_323)))))))))
                : 0U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__280(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__280\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__281(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__281\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp7161[4];
    WData/*127:0*/ __Vtemp7162[4];
    WData/*95:0*/ __Vtemp7164[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum) 
                 - (1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
                          | (1U & (((IData)(1U) << 
                                    (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                                   >> 3U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wbInfo_0_pipeid_T_10 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3)
                ? 2U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6)
                                ? 3U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt_io_sboard_clr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
              & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 
        = ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)))
               ? (0xfffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
                               << 1U)) : 0U) | ((0x1ffU 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                               >> 0x17U))))
                                                 ? 0x400000U
                                                 : 0U)) 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5) 
                & (~ (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                        >> 0x17U)))))
                ? 0x800000U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                       ? 0U : (0x7fffffU 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z 
                                                  >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_26 
        = ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)))
               ? (VL_ULL(0x1ffffffffffffe) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
                                              << 1U))
               : VL_ULL(0)) | ((0xfffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                                          & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                              << 0xcU) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x14U))))
                                ? VL_ULL(0x8000000000000)
                                : VL_ULL(0))) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5) 
                                                  & (~ 
                                                     (0xfffU 
                                                      & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x14U)))))
                                                  ? VL_ULL(0x10000000000000)
                                                  : VL_ULL(0))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
               ? VL_ULL(0) : (VL_ULL(0xfffffffffffff) 
                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z 
                                 >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wtypeTag 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_typeTag));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp_1 
        = (0x1ffU & (((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                               >> 0x17U))))
                       ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist_1))
                       : (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                           >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                          >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_lo_4 
        = (0x7fU & ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                     ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                        >> 0xfU) : ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x38U & (((4U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                   ? 
                                                  ((4U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                         >> 1U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                            ? 
                                                           (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                            : 
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                            >> 0x13U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((2U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             ? 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0x12U)
                                                             : 
                                                            (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                   >> 0x12U)) 
                                                 << 3U)) 
                                       | (7U & ((4U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 0xfU)
                                                 : 
                                                ((4U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                       >> 1U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                          ? 
                                                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                          : 
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                          >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((2U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                           ? 
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                           >> 0xfU)
                                                           : 
                                                          (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_hi_lo_9 
        = (0x7fU & ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                     ? ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                      >> 2U)) << 6U)) 
                        | ((0x38U & (((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                       ? ((4U & ((~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 ? 
                                                (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 : 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 0xbU)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0xaU)
                                                    : 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                       : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 0xaU)) 
                                     << 3U)) | (7U 
                                                & ((4U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 7U)
                                                    : 
                                                   ((4U 
                                                     & ((~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                          >> 1U)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((2U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             ? 
                                                            (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             : 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 8U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((2U 
                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                              ? 
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                              >> 7U)
                                                              : 
                                                             (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))))))
                     : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                        >> 7U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_lo_11 
        = (0x7fU & ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                     ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg
                     : ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                      >> 2U)) << 6U)) 
                        | ((0x38U & (((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                       ? ((4U & ((~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 ? 
                                                (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                 : 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                 >> 4U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 3U)
                                                    : 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                       : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                          >> 3U)) << 3U)) 
                           | (7U & ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                     ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg
                                     : ((4U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                   >> 1U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    ? 
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((2U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg
                                                : (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__memLatencyMask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint)) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3)
                ? 2U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6)
                                ? 4U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3
            : (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3)) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3))));
    VL_EXTEND_WQ(115,52, __Vtemp7161, (VL_ULL(0xfffffffffffff) 
                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2));
    VL_SHIFTL_WWI(115,115,6, __Vtemp7162, __Vtemp7161, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist));
    __Vtemp7164[0U] = (IData)((((QData)((IData)((7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_isZero)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                      >> 9U)) 
                                                    | ((3U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                            >> 0xaU))) 
                                                       & (VL_ULL(0) 
                                                          != 
                                                          (VL_ULL(0xfffffffffffff) 
                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2))))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp)))) 
                                              << 0x34U) 
                                             | (VL_ULL(0xfffffffffffff) 
                                                & ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0x34U))))
                                                    ? 
                                                   (VL_ULL(0xffffffffffffe) 
                                                    & (((QData)((IData)(
                                                                        __Vtemp7162[1U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp7162[0U])) 
                                                          << 1U)))
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))));
    __Vtemp7164[1U] = (IData)(((((QData)((IData)((7U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_isZero)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                       >> 9U)) 
                                                     | ((3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                             >> 0xaU))) 
                                                        & (VL_ULL(0) 
                                                           != 
                                                           (VL_ULL(0xfffffffffffff) 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2))))))) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               (0x1ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp)))) 
                                               << 0x34U) 
                                              | (VL_ULL(0xfffffffffffff) 
                                                 & ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                 >> 0x34U))))
                                                     ? 
                                                    (VL_ULL(0xffffffffffffe) 
                                                     & (((QData)((IData)(
                                                                         __Vtemp7162[1U])) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(
                                                                           __Vtemp7162[0U])) 
                                                           << 1U)))
                                                     : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[0U] 
        = __Vtemp7164[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
        = __Vtemp7164[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
        = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                         >> 0x3fU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                          >> 0x33U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x32U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0x31U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x30U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x2fU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x2eU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0x2dU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0x2cU)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 0x2bU)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 0x2aU)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 0x29U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 0x28U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 0x27U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 0x26U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 0x25U)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 0x24U)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 0x23U)))
                                                                 ? 0x10U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_normDist_T_85))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S)))
              ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                 << 1U) : 0U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S))
                                  ? ((0x6000000U & 
                                      (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                                         >> 0x16U) 
                                        - (IData)(1U)) 
                                       << 0x19U)) | 
                                     (0x1fffff8U & 
                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                                       << 3U))) : 0U)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
               ? 0U : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source)
              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                  ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                     & (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                   >> 0x20U)))) : (
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S)) 
                                                   & (~ 
                                                      (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isNaN) 
                                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf)) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                                      >> 0x1dU)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_114 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x33U))) ? 0xcU : ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                            >> 0x32U)))
                                                 ? 0xdU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x31U)))
                                                  ? 0xeU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x30U)))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x2fU)))
                                                    ? 0x10U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x2eU)))
                                                     ? 0x11U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x2dU)))
                                                      ? 0x12U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x2cU)))
                                                       ? 0x13U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x2bU)))
                                                        ? 0x14U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x2aU)))
                                                         ? 0x15U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x29U)))
                                                          ? 0x16U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x28U)))
                                                           ? 0x17U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x27U)))
                                                            ? 0x18U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 0x26U)))
                                                             ? 0x19U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 0x25U)))
                                                              ? 0x1aU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 0x24U)))
                                                               ? 0x1bU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 0x23U)))
                                                                ? 0x1cU
                                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_97))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inValid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_div) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inFlight)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
             ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address
             : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data) 
           | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__old_gennum1) 
                                  << 3U) | (0x1fffU 
                                            & ((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                | (7U & (~ (0x3ffU 
                                            & ((IData)(7U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
        = (0x3ffffffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address
                           : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data) 
                         | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__old_gennum1) 
                                                << 3U) 
                                               | (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                              | (7U 
                                                 & (~ 
                                                    (0x3ffU 
                                                     & ((IData)(7U) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source)
              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source)
              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source)
              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address)
                       : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data) 
                     | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1) 
                                            << 3U) 
                                           | (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                          | (7U & (~ 
                                                   (0x3ffU 
                                                    & ((IData)(7U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
        = (0x1ffffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address
                         : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data) 
                       | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1) 
                                              << 3U) 
                                             | (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__283(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__283\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__284(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__284\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7165[3];
    WData/*95:0*/ __Vtemp7169[3];
    WData/*95:0*/ __Vtemp7172[3];
    WData/*95:0*/ __Vtemp7175[3];
    WData/*1215:0*/ __Vtemp7177[38];
    WData/*1215:0*/ __Vtemp7178[38];
    WData/*95:0*/ __Vtemp7179[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wen_T_2 
        = ((3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                  >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__memLatencyMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu_io_in_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu_io_in_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe));
    __Vtemp7165[0U] = (IData)((((QData)((IData)((1U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xff800000U 
                                                              & ((((0U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 3U) 
                                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x1dU)))) 
                                                                   | (6U 
                                                                      <= 
                                                                      (7U 
                                                                       & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                           << 3U) 
                                                                          | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x1dU)))))
                                                                   ? 
                                                                  ((0x1c0U 
                                                                    & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                        << 9U) 
                                                                       | (0x1c0U 
                                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                             >> 0x17U)))) 
                                                                   | (0x3fU 
                                                                      & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                          << 0xcU) 
                                                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                            >> 0x14U))))
                                                                   : 
                                                                  ((IData)(0x100U) 
                                                                   + 
                                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                     << 0xcU) 
                                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                       >> 0x14U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                    << 3U) 
                                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                      >> 0x1dU))))))));
    __Vtemp7165[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
                       | (IData)(((((QData)((IData)(
                                                    (1U 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xff800000U 
                                                                  & ((((0U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                             << 3U) 
                                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                               >> 0x1dU)))) 
                                                                       | (6U 
                                                                          <= 
                                                                          (7U 
                                                                           & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                               << 3U) 
                                                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x1dU)))))
                                                                       ? 
                                                                      ((0x1c0U 
                                                                        & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                            << 9U) 
                                                                           | (0x1c0U 
                                                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x17U)))) 
                                                                       | (0x3fU 
                                                                          & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                              << 0xcU) 
                                                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                                >> 0x14U))))
                                                                       : 
                                                                      ((IData)(0x100U) 
                                                                       + 
                                                                       ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                                                                         << 0xcU) 
                                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                           >> 0x14U)))) 
                                                                     << 0x17U)) 
                                                                 | (0x7fffffU 
                                                                    & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                                                                        << 3U) 
                                                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                                                                          >> 0x1dU))))))) 
                                  >> 0x20U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___GEN_25[0U] 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_typeTagOut))
            ? __Vtemp7165[0U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___GEN_25[1U] 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_typeTagOut))
            ? __Vtemp7165[1U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___GEN_25[2U] 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_typeTagOut))
            ? (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_10 
        = (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                           >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(((0xe0000000U 
                                          & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_isZero_1)
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp_1) 
                                                   >> 6U)) 
                                              | ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp_1) 
                                                      >> 7U))) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2))))) 
                                             << 0x1dU)) 
                                         | ((0x1f800000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp_1) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x17U))))
                                                   ? 
                                                  (0x7ffffeU 
                                                   & ((IData)(
                                                              (VL_ULL(0x3fffffffffffff) 
                                                               & ((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2)))) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist_1)))) 
                                                      << 1U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___state_reg_T_66 
        = ((0x4000000U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                              >> 4U)) << 0x1aU)) | 
           ((0x3ff8000U & (((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                             ? ((0x400U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                               >> 3U)) 
                                           << 0xaU)) 
                                | ((0x380U & (((8U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                ? (
                                                   (4U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                                         >> 1U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                            ? 
                                                           (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                            : 
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                            >> 0x17U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((2U 
                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                                                             ? 
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                             >> 0x16U)
                                                             : 
                                                            (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))))))
                                                : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                   >> 0x16U)) 
                                              << 7U)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_lo_4)))
                             : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg 
                                >> 0xfU)) << 0xfU)) 
            | (0x7fffU & ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized))
                           ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg
                           : ((0x4000U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                              >> 3U)) 
                                          << 0xeU)) 
                              | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_hi_lo_9) 
                                  << 7U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__state_reg_lo_11)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_144 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen)
            ? ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__write_port_busy)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__memLatencyMask) 
                         >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_typeTag))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_typeTag));
    VL_SHIFTR_WWI(76,76,8, __Vtemp7169, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7169[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7169[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7169[2U]);
    VL_SHIFTR_WWI(76,76,8, __Vtemp7172, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7172[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7172[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7172[2U]);
    VL_SHIFTR_WWI(76,76,8, __Vtemp7175, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7175[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7175[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7175[2U]);
    VL_SHIFTR_WWI(1216,1216,12, __Vtemp7177, vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7177[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7177[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp7177[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp7177[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp7177[4U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp7177[5U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp7177[6U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp7177[7U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp7177[8U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp7177[9U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp7177[0xaU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp7177[0xbU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp7177[0xcU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp7177[0xdU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp7177[0xeU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp7177[0xfU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp7177[0x10U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp7177[0x11U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp7177[0x12U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp7177[0x13U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp7177[0x14U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp7177[0x15U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp7177[0x16U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp7177[0x17U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp7177[0x18U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp7177[0x19U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp7177[0x1aU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp7177[0x1bU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp7177[0x1cU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp7177[0x1dU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp7177[0x1eU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp7177[0x1fU];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x20U] 
        = __Vtemp7177[0x20U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x21U] 
        = __Vtemp7177[0x21U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x22U] 
        = __Vtemp7177[0x22U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x23U] 
        = __Vtemp7177[0x23U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x24U] 
        = __Vtemp7177[0x24U];
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0x25U] 
        = __Vtemp7177[0x25U];
    VL_SHIFTR_WWI(1216,1216,12, __Vtemp7178, vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7178[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7178[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp7178[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp7178[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp7178[4U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp7178[5U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp7178[6U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp7178[7U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp7178[8U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp7178[9U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp7178[0xaU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp7178[0xbU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp7178[0xcU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp7178[0xdU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp7178[0xeU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp7178[0xfU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp7178[0x10U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp7178[0x11U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp7178[0x12U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp7178[0x13U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp7178[0x14U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp7178[0x15U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp7178[0x16U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp7178[0x17U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp7178[0x18U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp7178[0x19U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp7178[0x1aU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp7178[0x1bU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp7178[0x1cU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp7178[0x1dU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp7178[0x1eU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp7178[0x1fU];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x20U] 
        = __Vtemp7178[0x20U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x21U] 
        = __Vtemp7178[0x21U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x22U] 
        = __Vtemp7178[0x22U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x23U] 
        = __Vtemp7178[0x23U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x24U] 
        = __Vtemp7178[0x24U];
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x25U] 
        = __Vtemp7178[0x25U];
    __Vtemp7179[0U] = (IData)((((QData)((IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U])))) 
                                << 0x3cU) | (((QData)((IData)(
                                                              (0x7fU 
                                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
                                                                   << 0xbU) 
                                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
                                                                     >> 0x15U))))) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10 
                                                                             >> 0x1fU))))) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    (0xfffffU 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U]))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10 
                                                                                >> 0x20U)) 
                                                                          << 0x1fU)) 
                                                                      | (0x7fffffffU 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10))))))))));
    __Vtemp7179[1U] = ((0xe0000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U]) 
                       | (IData)(((((QData)((IData)(
                                                    (0xfffffU 
                                                     == 
                                                     (0xfffffU 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U])))) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
                                                                       << 0xbU) 
                                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
                                                                         >> 0x15U))))) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10 
                                                                                >> 0x1fU))))) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        (0xfffffU 
                                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U]))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0x80000000U 
                                                                           & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10 
                                                                                >> 0x20U)) 
                                                                              << 0x1fU)) 
                                                                          | (0x7fffffffU 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10))))))))) 
                                  >> 0x20U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[0U] 
        = __Vtemp7179[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[1U] 
        = __Vtemp7179[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[2U] 
        = (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp 
        = (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                >> 0x34U))))
                       ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist))
                       : (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                            >> 0x34U)))) 
                     + (0x400U | ((0U == (0x7ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                            >> 0x34U))))
                                   ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm 
        = (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                 ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
                    << 1U) : 0U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                                        & (~ (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                         >> 0x17U))))))
                                     ? 0x1000000U : 0U)) 
              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                  ? 0x2800000U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                          ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
            | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                ? 0x1000000U : 0U)) | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
                                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                                           << 1U) : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm 
        = (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                 ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
                    << 1U) : VL_ULL(0)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                                               & (~ 
                                                  (0xfffU 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x14U))))))
                                            ? VL_ULL(0x20000000000000)
                                            : VL_ULL(0))) 
              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                  ? VL_ULL(0x50000000000000) : VL_ULL(0))) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                 ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__fractB_Z)) 
            | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))))
                ? VL_ULL(0x20000000000000) : VL_ULL(0))) 
           | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))
               ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                  << 1U) : VL_ULL(0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                     >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                     >> 2U)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inValid) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inValid) 
              & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_adjustedNormDist 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x3fU))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x3eU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x3dU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x3cU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x3bU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x3aU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x39U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x38U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x37U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x36U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x35U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x34U)))
                                                            ? 0xbU
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_114)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_lo 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_lo 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_lo 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1779 
        = ((0xdU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                              >> 3U))) ? VL_ULL(0) : 
           ((0xcU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
             : ((0xbU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                 : ((0xaU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0x100073)
                     : ((9U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                         >> 3U))) ? VL_ULL(0x100026237b200073)
                         : ((8U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U)))
                             ? VL_ULL(0x7b20247310802423)
                             : ((7U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                 ? VL_ULL(0xf140247330000067)
                                 : ((6U == (0xffU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U)))
                                     ? VL_ULL(0x100022237b202473)
                                     : ((5U == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                         ? VL_ULL(0x4086300147413)
                                         : ((4U == 
                                             (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                             ? VL_ULL(0xfe0408e300347413)
                                             : ((3U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                                 ? VL_ULL(0x4004440310802023)
                                                 : 
                                                ((2U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
                                                  ? VL_ULL(0xf14024737b241073)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                                                   ? VL_ULL(0xff0000f0440006f)
                                                   : VL_ULL(0x380006f00c0006f))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop 
        = ((4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
           & (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop 
        = ((4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
           & (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1518 
        = ((8U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U))) ? (0x100U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
            : ((7U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U))) ? (0x100U 
                                            == (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((6U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                    >> 3U))) ? (0x100U 
                                                == 
                                                (0x100U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                    : ((5U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 3U))) ? 
                       (0x100U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U)))
                        : ((4U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                            ? (0x100U == (0x100U & 
                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                            : ((3U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                ? (0x100U == (0x100U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                : ((2U == (0xffU & 
                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                                    ? (0x100U == (0x100U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                    : (0x100U == (0x100U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_13 
        = ((0xdU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                               >> 3U))) ? VL_ULL(0)
            : ((0xcU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                   >> 3U))) ? VL_ULL(0)
                : ((0xbU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 3U))) ? VL_ULL(0xbff5)
                    : ((0xaU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                        ? VL_ULL(0x1050007330405073)
                        : ((9U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U)))
                            ? VL_ULL(0x385859300000597)
                            : ((8U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                ? VL_ULL(0xf14025737c105073)
                                : ((7U == (0x1ffU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                                    ? VL_ULL(0) : (
                                                   (6U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? VL_ULL(0x8402)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? VL_ULL(0x705859300000597)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? VL_ULL(0xf140257301f41413)
                                                         : VL_ULL(0x10041b7c105073))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__285(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__285\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_101) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_101) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_103) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_103) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_102) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_102) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_41) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_41) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x10U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_72) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_72) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x18U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_73) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_73) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x18U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_18) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_18) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 8U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_71) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_71) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_40) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_40) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x10U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_17) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_17) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_42) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_42) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 8U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_16) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_16) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_39) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_39) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_100) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_100) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
             & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
             & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_84) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_84) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_83) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_83) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x18U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x10U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_6) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_6) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 8U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_5) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_5) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_30) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_30) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_29) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_29) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_28) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_28) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x18U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_89) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_89) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x10U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_88) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_88) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 8U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_77) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_77) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_85) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_85) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_76) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_76) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_75) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_75) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
             & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_4) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_4) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
             & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__288(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__288\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7184[3];
    WData/*95:0*/ __Vtemp7185[3];
    WData/*95:0*/ __Vtemp7190[3];
    WData/*95:0*/ __Vtemp7191[3];
    WData/*95:0*/ __Vtemp7196[3];
    WData/*95:0*/ __Vtemp7197[3];
    WData/*95:0*/ __Vtemp7202[3];
    WData/*95:0*/ __Vtemp7203[3];
    WData/*95:0*/ __Vtemp7208[3];
    WData/*95:0*/ __Vtemp7209[3];
    WData/*95:0*/ __Vtemp7214[3];
    WData/*95:0*/ __Vtemp7215[3];
    WData/*95:0*/ __Vtemp7220[3];
    WData/*95:0*/ __Vtemp7221[3];
    WData/*95:0*/ __Vtemp7226[3];
    WData/*95:0*/ __Vtemp7227[3];
    WData/*95:0*/ __Vtemp7232[3];
    WData/*95:0*/ __Vtemp7233[3];
    WData/*95:0*/ __Vtemp7238[3];
    WData/*95:0*/ __Vtemp7239[3];
    WData/*95:0*/ __Vtemp7244[3];
    WData/*95:0*/ __Vtemp7245[3];
    WData/*95:0*/ __Vtemp7250[3];
    WData/*95:0*/ __Vtemp7251[3];
    WData/*1215:0*/ __Vtemp7256[38];
    WData/*1215:0*/ __Vtemp7257[38];
    WData/*1215:0*/ __Vtemp7262[38];
    WData/*1215:0*/ __Vtemp7263[38];
    WData/*1215:0*/ __Vtemp7268[38];
    WData/*1215:0*/ __Vtemp7269[38];
    WData/*1215:0*/ __Vtemp7274[38];
    WData/*1215:0*/ __Vtemp7275[38];
    WData/*1215:0*/ __Vtemp7280[38];
    WData/*1215:0*/ __Vtemp7281[38];
    WData/*1215:0*/ __Vtemp7286[38];
    WData/*1215:0*/ __Vtemp7287[38];
    WData/*1215:0*/ __Vtemp7292[38];
    WData/*1215:0*/ __Vtemp7293[38];
    WData/*1215:0*/ __Vtemp7298[38];
    WData/*1215:0*/ __Vtemp7299[38];
    WData/*95:0*/ __Vtemp7302[3];
    WData/*95:0*/ __Vtemp7308[3];
    WData/*127:0*/ __Vtemp7315[4];
    WData/*127:0*/ __Vtemp7316[4];
    WData/*95:0*/ __Vtemp7318[3];
    WData/*127:0*/ __Vtemp7320[4];
    WData/*127:0*/ __Vtemp7321[4];
    WData/*127:0*/ __Vtemp7324[4];
    WData/*127:0*/ __Vtemp7325[4];
    // Body
    __Vtemp7184[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7184[1U] = 0U;
    __Vtemp7184[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7185, __Vtemp7184);
    __Vtemp7190[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7190[1U] = 0U;
    __Vtemp7190[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7191, __Vtemp7190);
    __Vtemp7196[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7196[1U] = 0U;
    __Vtemp7196[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7197, __Vtemp7196);
    __Vtemp7202[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7202[1U] = 0U;
    __Vtemp7202[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7203, __Vtemp7202);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7185[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7191[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7197[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7203[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp7208[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7208[1U] = 0U;
    __Vtemp7208[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7209, __Vtemp7208);
    __Vtemp7214[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7214[1U] = 0U;
    __Vtemp7214[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7215, __Vtemp7214);
    __Vtemp7220[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7220[1U] = 0U;
    __Vtemp7220[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7221, __Vtemp7220);
    __Vtemp7226[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7226[1U] = 0U;
    __Vtemp7226[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7227, __Vtemp7226);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7209[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7215[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7221[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7227[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp7232[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7232[1U] = 0U;
    __Vtemp7232[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7233, __Vtemp7232);
    __Vtemp7238[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7238[1U] = 0U;
    __Vtemp7238[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7239, __Vtemp7238);
    __Vtemp7244[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7244[1U] = 0U;
    __Vtemp7244[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7245, __Vtemp7244);
    __Vtemp7250[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7250[1U] = 0U;
    __Vtemp7250[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7251, __Vtemp7250);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7233[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7239[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7245[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7251[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp7256[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7256[1U] = 0U;
    __Vtemp7256[2U] = 0U;
    __Vtemp7256[3U] = 0U;
    __Vtemp7256[4U] = 0U;
    __Vtemp7256[5U] = 0U;
    __Vtemp7256[6U] = 0U;
    __Vtemp7256[7U] = 0U;
    __Vtemp7256[8U] = 0U;
    __Vtemp7256[9U] = 0U;
    __Vtemp7256[0xaU] = 0U;
    __Vtemp7256[0xbU] = 0U;
    __Vtemp7256[0xcU] = 0U;
    __Vtemp7256[0xdU] = 0U;
    __Vtemp7256[0xeU] = 0U;
    __Vtemp7256[0xfU] = 0U;
    __Vtemp7256[0x10U] = 0U;
    __Vtemp7256[0x11U] = 0U;
    __Vtemp7256[0x12U] = 0U;
    __Vtemp7256[0x13U] = 0U;
    __Vtemp7256[0x14U] = 0U;
    __Vtemp7256[0x15U] = 0U;
    __Vtemp7256[0x16U] = 0U;
    __Vtemp7256[0x17U] = 0U;
    __Vtemp7256[0x18U] = 0U;
    __Vtemp7256[0x19U] = 0U;
    __Vtemp7256[0x1aU] = 0U;
    __Vtemp7256[0x1bU] = 0U;
    __Vtemp7256[0x1cU] = 0U;
    __Vtemp7256[0x1dU] = 0U;
    __Vtemp7256[0x1eU] = 0U;
    __Vtemp7256[0x1fU] = 0U;
    __Vtemp7256[0x20U] = 0U;
    __Vtemp7256[0x21U] = 0U;
    __Vtemp7256[0x22U] = 0U;
    __Vtemp7256[0x23U] = 0U;
    __Vtemp7256[0x24U] = 0U;
    __Vtemp7256[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7257, __Vtemp7256);
    __Vtemp7262[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7262[1U] = 0U;
    __Vtemp7262[2U] = 0U;
    __Vtemp7262[3U] = 0U;
    __Vtemp7262[4U] = 0U;
    __Vtemp7262[5U] = 0U;
    __Vtemp7262[6U] = 0U;
    __Vtemp7262[7U] = 0U;
    __Vtemp7262[8U] = 0U;
    __Vtemp7262[9U] = 0U;
    __Vtemp7262[0xaU] = 0U;
    __Vtemp7262[0xbU] = 0U;
    __Vtemp7262[0xcU] = 0U;
    __Vtemp7262[0xdU] = 0U;
    __Vtemp7262[0xeU] = 0U;
    __Vtemp7262[0xfU] = 0U;
    __Vtemp7262[0x10U] = 0U;
    __Vtemp7262[0x11U] = 0U;
    __Vtemp7262[0x12U] = 0U;
    __Vtemp7262[0x13U] = 0U;
    __Vtemp7262[0x14U] = 0U;
    __Vtemp7262[0x15U] = 0U;
    __Vtemp7262[0x16U] = 0U;
    __Vtemp7262[0x17U] = 0U;
    __Vtemp7262[0x18U] = 0U;
    __Vtemp7262[0x19U] = 0U;
    __Vtemp7262[0x1aU] = 0U;
    __Vtemp7262[0x1bU] = 0U;
    __Vtemp7262[0x1cU] = 0U;
    __Vtemp7262[0x1dU] = 0U;
    __Vtemp7262[0x1eU] = 0U;
    __Vtemp7262[0x1fU] = 0U;
    __Vtemp7262[0x20U] = 0U;
    __Vtemp7262[0x21U] = 0U;
    __Vtemp7262[0x22U] = 0U;
    __Vtemp7262[0x23U] = 0U;
    __Vtemp7262[0x24U] = 0U;
    __Vtemp7262[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7263, __Vtemp7262);
    __Vtemp7268[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7268[1U] = 0U;
    __Vtemp7268[2U] = 0U;
    __Vtemp7268[3U] = 0U;
    __Vtemp7268[4U] = 0U;
    __Vtemp7268[5U] = 0U;
    __Vtemp7268[6U] = 0U;
    __Vtemp7268[7U] = 0U;
    __Vtemp7268[8U] = 0U;
    __Vtemp7268[9U] = 0U;
    __Vtemp7268[0xaU] = 0U;
    __Vtemp7268[0xbU] = 0U;
    __Vtemp7268[0xcU] = 0U;
    __Vtemp7268[0xdU] = 0U;
    __Vtemp7268[0xeU] = 0U;
    __Vtemp7268[0xfU] = 0U;
    __Vtemp7268[0x10U] = 0U;
    __Vtemp7268[0x11U] = 0U;
    __Vtemp7268[0x12U] = 0U;
    __Vtemp7268[0x13U] = 0U;
    __Vtemp7268[0x14U] = 0U;
    __Vtemp7268[0x15U] = 0U;
    __Vtemp7268[0x16U] = 0U;
    __Vtemp7268[0x17U] = 0U;
    __Vtemp7268[0x18U] = 0U;
    __Vtemp7268[0x19U] = 0U;
    __Vtemp7268[0x1aU] = 0U;
    __Vtemp7268[0x1bU] = 0U;
    __Vtemp7268[0x1cU] = 0U;
    __Vtemp7268[0x1dU] = 0U;
    __Vtemp7268[0x1eU] = 0U;
    __Vtemp7268[0x1fU] = 0U;
    __Vtemp7268[0x20U] = 0U;
    __Vtemp7268[0x21U] = 0U;
    __Vtemp7268[0x22U] = 0U;
    __Vtemp7268[0x23U] = 0U;
    __Vtemp7268[0x24U] = 0U;
    __Vtemp7268[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7269, __Vtemp7268);
    __Vtemp7274[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7274[1U] = 0U;
    __Vtemp7274[2U] = 0U;
    __Vtemp7274[3U] = 0U;
    __Vtemp7274[4U] = 0U;
    __Vtemp7274[5U] = 0U;
    __Vtemp7274[6U] = 0U;
    __Vtemp7274[7U] = 0U;
    __Vtemp7274[8U] = 0U;
    __Vtemp7274[9U] = 0U;
    __Vtemp7274[0xaU] = 0U;
    __Vtemp7274[0xbU] = 0U;
    __Vtemp7274[0xcU] = 0U;
    __Vtemp7274[0xdU] = 0U;
    __Vtemp7274[0xeU] = 0U;
    __Vtemp7274[0xfU] = 0U;
    __Vtemp7274[0x10U] = 0U;
    __Vtemp7274[0x11U] = 0U;
    __Vtemp7274[0x12U] = 0U;
    __Vtemp7274[0x13U] = 0U;
    __Vtemp7274[0x14U] = 0U;
    __Vtemp7274[0x15U] = 0U;
    __Vtemp7274[0x16U] = 0U;
    __Vtemp7274[0x17U] = 0U;
    __Vtemp7274[0x18U] = 0U;
    __Vtemp7274[0x19U] = 0U;
    __Vtemp7274[0x1aU] = 0U;
    __Vtemp7274[0x1bU] = 0U;
    __Vtemp7274[0x1cU] = 0U;
    __Vtemp7274[0x1dU] = 0U;
    __Vtemp7274[0x1eU] = 0U;
    __Vtemp7274[0x1fU] = 0U;
    __Vtemp7274[0x20U] = 0U;
    __Vtemp7274[0x21U] = 0U;
    __Vtemp7274[0x22U] = 0U;
    __Vtemp7274[0x23U] = 0U;
    __Vtemp7274[0x24U] = 0U;
    __Vtemp7274[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7275, __Vtemp7274);
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7257[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7263[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7269[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7275[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp7280[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7280[1U] = 0U;
    __Vtemp7280[2U] = 0U;
    __Vtemp7280[3U] = 0U;
    __Vtemp7280[4U] = 0U;
    __Vtemp7280[5U] = 0U;
    __Vtemp7280[6U] = 0U;
    __Vtemp7280[7U] = 0U;
    __Vtemp7280[8U] = 0U;
    __Vtemp7280[9U] = 0U;
    __Vtemp7280[0xaU] = 0U;
    __Vtemp7280[0xbU] = 0U;
    __Vtemp7280[0xcU] = 0U;
    __Vtemp7280[0xdU] = 0U;
    __Vtemp7280[0xeU] = 0U;
    __Vtemp7280[0xfU] = 0U;
    __Vtemp7280[0x10U] = 0U;
    __Vtemp7280[0x11U] = 0U;
    __Vtemp7280[0x12U] = 0U;
    __Vtemp7280[0x13U] = 0U;
    __Vtemp7280[0x14U] = 0U;
    __Vtemp7280[0x15U] = 0U;
    __Vtemp7280[0x16U] = 0U;
    __Vtemp7280[0x17U] = 0U;
    __Vtemp7280[0x18U] = 0U;
    __Vtemp7280[0x19U] = 0U;
    __Vtemp7280[0x1aU] = 0U;
    __Vtemp7280[0x1bU] = 0U;
    __Vtemp7280[0x1cU] = 0U;
    __Vtemp7280[0x1dU] = 0U;
    __Vtemp7280[0x1eU] = 0U;
    __Vtemp7280[0x1fU] = 0U;
    __Vtemp7280[0x20U] = 0U;
    __Vtemp7280[0x21U] = 0U;
    __Vtemp7280[0x22U] = 0U;
    __Vtemp7280[0x23U] = 0U;
    __Vtemp7280[0x24U] = 0U;
    __Vtemp7280[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7281, __Vtemp7280);
    __Vtemp7286[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7286[1U] = 0U;
    __Vtemp7286[2U] = 0U;
    __Vtemp7286[3U] = 0U;
    __Vtemp7286[4U] = 0U;
    __Vtemp7286[5U] = 0U;
    __Vtemp7286[6U] = 0U;
    __Vtemp7286[7U] = 0U;
    __Vtemp7286[8U] = 0U;
    __Vtemp7286[9U] = 0U;
    __Vtemp7286[0xaU] = 0U;
    __Vtemp7286[0xbU] = 0U;
    __Vtemp7286[0xcU] = 0U;
    __Vtemp7286[0xdU] = 0U;
    __Vtemp7286[0xeU] = 0U;
    __Vtemp7286[0xfU] = 0U;
    __Vtemp7286[0x10U] = 0U;
    __Vtemp7286[0x11U] = 0U;
    __Vtemp7286[0x12U] = 0U;
    __Vtemp7286[0x13U] = 0U;
    __Vtemp7286[0x14U] = 0U;
    __Vtemp7286[0x15U] = 0U;
    __Vtemp7286[0x16U] = 0U;
    __Vtemp7286[0x17U] = 0U;
    __Vtemp7286[0x18U] = 0U;
    __Vtemp7286[0x19U] = 0U;
    __Vtemp7286[0x1aU] = 0U;
    __Vtemp7286[0x1bU] = 0U;
    __Vtemp7286[0x1cU] = 0U;
    __Vtemp7286[0x1dU] = 0U;
    __Vtemp7286[0x1eU] = 0U;
    __Vtemp7286[0x1fU] = 0U;
    __Vtemp7286[0x20U] = 0U;
    __Vtemp7286[0x21U] = 0U;
    __Vtemp7286[0x22U] = 0U;
    __Vtemp7286[0x23U] = 0U;
    __Vtemp7286[0x24U] = 0U;
    __Vtemp7286[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7287, __Vtemp7286);
    __Vtemp7292[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7292[1U] = 0U;
    __Vtemp7292[2U] = 0U;
    __Vtemp7292[3U] = 0U;
    __Vtemp7292[4U] = 0U;
    __Vtemp7292[5U] = 0U;
    __Vtemp7292[6U] = 0U;
    __Vtemp7292[7U] = 0U;
    __Vtemp7292[8U] = 0U;
    __Vtemp7292[9U] = 0U;
    __Vtemp7292[0xaU] = 0U;
    __Vtemp7292[0xbU] = 0U;
    __Vtemp7292[0xcU] = 0U;
    __Vtemp7292[0xdU] = 0U;
    __Vtemp7292[0xeU] = 0U;
    __Vtemp7292[0xfU] = 0U;
    __Vtemp7292[0x10U] = 0U;
    __Vtemp7292[0x11U] = 0U;
    __Vtemp7292[0x12U] = 0U;
    __Vtemp7292[0x13U] = 0U;
    __Vtemp7292[0x14U] = 0U;
    __Vtemp7292[0x15U] = 0U;
    __Vtemp7292[0x16U] = 0U;
    __Vtemp7292[0x17U] = 0U;
    __Vtemp7292[0x18U] = 0U;
    __Vtemp7292[0x19U] = 0U;
    __Vtemp7292[0x1aU] = 0U;
    __Vtemp7292[0x1bU] = 0U;
    __Vtemp7292[0x1cU] = 0U;
    __Vtemp7292[0x1dU] = 0U;
    __Vtemp7292[0x1eU] = 0U;
    __Vtemp7292[0x1fU] = 0U;
    __Vtemp7292[0x20U] = 0U;
    __Vtemp7292[0x21U] = 0U;
    __Vtemp7292[0x22U] = 0U;
    __Vtemp7292[0x23U] = 0U;
    __Vtemp7292[0x24U] = 0U;
    __Vtemp7292[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7293, __Vtemp7292);
    __Vtemp7298[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7298[1U] = 0U;
    __Vtemp7298[2U] = 0U;
    __Vtemp7298[3U] = 0U;
    __Vtemp7298[4U] = 0U;
    __Vtemp7298[5U] = 0U;
    __Vtemp7298[6U] = 0U;
    __Vtemp7298[7U] = 0U;
    __Vtemp7298[8U] = 0U;
    __Vtemp7298[9U] = 0U;
    __Vtemp7298[0xaU] = 0U;
    __Vtemp7298[0xbU] = 0U;
    __Vtemp7298[0xcU] = 0U;
    __Vtemp7298[0xdU] = 0U;
    __Vtemp7298[0xeU] = 0U;
    __Vtemp7298[0xfU] = 0U;
    __Vtemp7298[0x10U] = 0U;
    __Vtemp7298[0x11U] = 0U;
    __Vtemp7298[0x12U] = 0U;
    __Vtemp7298[0x13U] = 0U;
    __Vtemp7298[0x14U] = 0U;
    __Vtemp7298[0x15U] = 0U;
    __Vtemp7298[0x16U] = 0U;
    __Vtemp7298[0x17U] = 0U;
    __Vtemp7298[0x18U] = 0U;
    __Vtemp7298[0x19U] = 0U;
    __Vtemp7298[0x1aU] = 0U;
    __Vtemp7298[0x1bU] = 0U;
    __Vtemp7298[0x1cU] = 0U;
    __Vtemp7298[0x1dU] = 0U;
    __Vtemp7298[0x1eU] = 0U;
    __Vtemp7298[0x1fU] = 0U;
    __Vtemp7298[0x20U] = 0U;
    __Vtemp7298[0x21U] = 0U;
    __Vtemp7298[0x22U] = 0U;
    __Vtemp7298[0x23U] = 0U;
    __Vtemp7298[0x24U] = 0U;
    __Vtemp7298[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7299, __Vtemp7298);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7281[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7287[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7293[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7299[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[0U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[0U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[1U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[2U] 
        = ((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[1U] 
                                    >> 0x1dU)))) ? 
           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_swizzledNaN[2U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6[2U]);
    __Vtemp7302[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0)))) 
                                             << 0x1dU)));
    __Vtemp7302[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U]
                : __Vtemp7302[0U]) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U]
                : __Vtemp7302[1U]) : 0xe0080000U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U]
                : (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in1_floats_0 
                                 >> 0x20U)))) : 0U);
    __Vtemp7308[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                  >> 0x1dU)))) 
                                                     | (6U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                    >> 0x1dU)))))
                                                     ? 
                                                    ((0xe00U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                  >> 0x1dU)) 
                                                         << 9U)) 
                                                     | (0x1ffU 
                                                        & ((IData)(0x100U) 
                                                           + (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                      >> 0x17U)))))
                                                     : 
                                                    ((IData)(0x700U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                 >> 0x17U)))))))) 
                                << 0x34U) | ((QData)((IData)(
                                                             (0x7fffffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0)))) 
                                             << 0x1dU)));
    __Vtemp7308[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                   >> 0x1dU)))) 
                                                      | (6U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                     >> 0x1dU)))))
                                                      ? 
                                                     ((0xe00U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | (0x1ffU 
                                                         & ((IData)(0x100U) 
                                                            + (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                       >> 0x17U)))))
                                                      : 
                                                     ((IData)(0x700U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                                                  >> 0x17U)))))))) 
                                 << 0x34U) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0)))) 
                                              << 0x1dU)) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U]
                : __Vtemp7308[0U]) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U]
                : __Vtemp7308[1U]) : 0xe0080000U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U] 
        = ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn) 
                  | (0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U] 
                                         << 4U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
                                                   >> 0x1cU))))))
            ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U]
                : (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_bits_req_in2_floats_0 
                                 >> 0x20U)))) : 0U);
    VL_EXTEND_WQ(115,52, __Vtemp7315, (VL_ULL(0xfffffffffffff) 
                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2));
    VL_SHIFTL_WWI(115,115,6, __Vtemp7316, __Vtemp7315, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist));
    __Vtemp7318[0U] = (IData)((((QData)((IData)((7U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_isZero)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp) 
                                                      >> 9U)) 
                                                    | ((3U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp) 
                                                            >> 0xaU))) 
                                                       & (VL_ULL(0) 
                                                          != 
                                                          (VL_ULL(0xfffffffffffff) 
                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2))))))) 
                                << 0x3dU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp)))) 
                                              << 0x34U) 
                                             | (VL_ULL(0xfffffffffffff) 
                                                & ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x34U))))
                                                    ? 
                                                   (VL_ULL(0xffffffffffffe) 
                                                    & (((QData)((IData)(
                                                                        __Vtemp7316[1U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp7316[0U])) 
                                                          << 1U)))
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2)))));
    __Vtemp7318[1U] = (IData)(((((QData)((IData)((7U 
                                                  & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_isZero)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp) 
                                                       >> 9U)) 
                                                     | ((3U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp) 
                                                             >> 0xaU))) 
                                                        & (VL_ULL(0) 
                                                           != 
                                                           (VL_ULL(0xfffffffffffff) 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2))))))) 
                                 << 0x3dU) | (((QData)((IData)(
                                                               (0x1ffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp)))) 
                                               << 0x34U) 
                                              | (VL_ULL(0xfffffffffffff) 
                                                 & ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x34U))))
                                                     ? 
                                                    (VL_ULL(0xffffffffffffe) 
                                                     & (((QData)((IData)(
                                                                         __Vtemp7316[1U])) 
                                                         << 0x21U) 
                                                        | ((QData)((IData)(
                                                                           __Vtemp7316[0U])) 
                                                           << 1U)))
                                                     : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2)))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6[0U] 
        = __Vtemp7318[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6[1U] 
        = __Vtemp7318[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6[2U] 
        = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                         >> 0x3fU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem 
        = (0x1fffffffU & (VL_EXTENDS_II(29,28, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                          - VL_EXTENDS_II(29,28, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem 
        = (VL_ULL(0x3ffffffffffffff) & (VL_EXTENDS_QQ(58,57, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                                        - VL_EXTENDS_QQ(58,57, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S)));
    VL_EXTEND_WQ(127,64, __Vtemp7320, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo);
    VL_SHIFTL_WWI(127,127,6, __Vtemp7321, __Vtemp7320, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_adjustedNormDist));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U] 
        = __Vtemp7321[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U] 
        = __Vtemp7321[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[2U] 
        = __Vtemp7321[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[3U] 
        = (0x7fffffffU & __Vtemp7321[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)));
    VL_EXTEND_WQ(127,64, __Vtemp7324, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo);
    VL_SHIFTL_WWI(127,127,6, __Vtemp7325, __Vtemp7324, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U] 
        = __Vtemp7325[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
        = __Vtemp7325[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[2U] 
        = __Vtemp7325[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[3U] 
        = (0x7fffffffU & __Vtemp7325[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_lo) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_lo)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1792 
        = ((0x1aU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
            : ((0x19U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                : ((0x18U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0)
                    : ((0x17U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? VL_ULL(0) : ((0x16U == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x15U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x14U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0xfU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1779)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1535 
        = ((0x19U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x18U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x17U 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x16U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x15U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x14U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x13U 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x12U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x11U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x10U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0xfU 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0xeU 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0xdU 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0xcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0xbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0xaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                (0x100U 
                                                                                == 
                                                                                (0x100U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                (0x100U 
                                                                                == 
                                                                                (0x100U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1518))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_26 
        = ((0x1aU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x400000003000000)
            : ((0x19U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x100000000000000)
                : ((0x18U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x400000003000000)
                    : ((0x17U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x1000000) : ((0x16U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x15U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x4407000019020000)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x10000000)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 3U)))
                                                       ? VL_ULL(0x1100000028000000)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 3U)))
                                                        ? VL_ULL(0x7c07000038000000)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 3U)))
                                                         ? VL_ULL(0x95090000edfe0dd0)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                              >> 3U)))
                                                          ? VL_ULL(0)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                               >> 3U)))
                                                           ? VL_ULL(0)
                                                           : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_13)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__289(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__289\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__290(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__290\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_gray));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__291(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__291\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7327[3];
    WData/*95:0*/ __Vtemp7328[3];
    WData/*95:0*/ __Vtemp7329[3];
    WData/*95:0*/ __Vtemp7330[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))) 
                   & (1U >= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                      - (IData)(1U)))))) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))) 
                   & (1U >= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                      - (IData)(1U)))))) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 
        = (0x1fU & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))
                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                              ? ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                >> 0x17U)))
                                  ? 0x18U : 0x19U) : 0x1aU)
                          : 0U)) | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))))
                                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                        - (IData)(1U))
                                     : 0U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17 
        = (0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__normalCase_S))
                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                              ? ((1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                         << 0xcU) | 
                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                         >> 0x14U)))
                                  ? 0x35U : 0x36U) : 0x37U)
                          : 0U)) | ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))))
                                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                        - (IData)(1U))
                                     : 0U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 
        = (0x3fffffffU & ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))))
                           ? ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                   ? (VL_LTES_III(1,29,29, 0U, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                      << 0x19U) : 0U) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5)
                                     ? 0x1000000U : 0U)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                    ? (VL_LTES_III(1,29,29, 0U, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem) 
                                       << 0x17U) : 0U)) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                   ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                              | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                  & VL_LTES_III(1,29,29, 0U, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))
                                  ? (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                     >> 2U) : 0U)) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14 
        = (VL_ULL(0x3fffffffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
                                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))))
                                          ? ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_1)
                                                  ? 
                                                 ((QData)((IData)(
                                                                  VL_LTES_IQQ(1,58,58, VL_ULL(0), vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))) 
                                                  << 0x36U)
                                                  : VL_ULL(0)) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5)
                                                    ? VL_ULL(0x20000000000000)
                                                    : VL_ULL(0))) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   VL_LTES_IQQ(1,58,58, VL_ULL(0), vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))) 
                                                   << 0x34U)
                                                   : VL_ULL(0))) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
                                                  ? VL_ULL(0)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z)) 
                                             | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                                                 & VL_LTES_IQQ(1,58,58, VL_ULL(0), vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem))
                                                 ? 
                                                ((VL_ULL(1) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
                                                 >> 2U)
                                                 : VL_ULL(0)))
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp7327, (((QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp7328, (((QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
        = ((0x7fffffeU & ((__Vtemp7327[2U] << 0x1aU) 
                          | (0x3fffffeU & (__Vtemp7327[1U] 
                                           >> 6U)))) 
           | (0U != (VL_ULL(0x7fffffffff) & (((QData)((IData)(
                                                              __Vtemp7328[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp7328[0U]))))));
    VL_EXTEND_WQ(65,64, __Vtemp7329, (((QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp7330, (((QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
        = ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
                                                         __Vtemp7329[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            __Vtemp7329[1U])) 
                                            << 0x17U) 
                                           | (VL_ULL(0x7ffffffffffffe) 
                                              & ((QData)((IData)(
                                                                 __Vtemp7329[0U])) 
                                                 >> 9U))))) 
           | (QData)((IData)((0U != (0x3ffU & __Vtemp7330[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1805 
        = ((0x27U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
            : ((0x26U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                : ((0x25U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0)
                    : ((0x24U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? VL_ULL(0) : ((0x23U == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x22U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x21U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x1cU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1792)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid) 
            << 4U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
                       << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
                                  << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1558 
        = ((0x30U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x2fU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x2eU 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x2dU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x2cU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x2bU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x2aU 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x29U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x28U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x27U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0x26U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0x25U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0x24U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0x23U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0x22U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x21U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                (0U 
                                                                                == 
                                                                                (0x100U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                (0U 
                                                                                == 
                                                                                (0x100U 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U)))
                                                                                 : 
                                                                                ((0x1fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x1eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x1dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x1cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x1bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | ((0x1aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1535))))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_39 
        = ((0x27U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x100000000000000)
            : ((0x26U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x6e776f6e6b6e752d)
                : ((0x25U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x7069686374656b63)
                    : ((0x24U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x6f722c7370696863)
                        : ((0x23U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x6565726626000000)
                            : ((0x22U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x1d00000003000000)
                                : ((0x21U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x7665642d)
                                    : ((0x20U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x6e776f6e6b6e752d)
                                        : ((0x1fU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x7069686374656b63)
                                            : ((0x1eU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x6f722c7370696863)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x656572661b000000)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x2100000003000000)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x10000000f000000)
                                                      : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_26)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__292(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__292\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
              & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)))));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_incremented) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (VL_ULL(0x1001e00000000) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_opcode)) 
                                           << 0x34U) 
                                          | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_address)) 
                                              << 0x25U) 
                                             | ((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_data)) 
                                                << 1U))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__296(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__296\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_fmaCmd_T_3 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3)) 
                 & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                    >> 0x1bU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm 
        = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                               >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm)
                  : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0xcU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
           & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_div)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt)) 
              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != (2U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)) 
           | (0U != (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != (VL_ULL(2) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)) 
           | (0U != (VL_ULL(1) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_5) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_6) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_5) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_6) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_5) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1818 
        = ((0x34U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
            : ((0x33U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                : ((0x32U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0)
                    : ((0x31U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? VL_ULL(0) : ((0x30U == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x2fU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x2eU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x2dU 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x2cU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x2bU 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x2aU 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x29U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x28U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1805)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter_lo) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask))) 
            << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid) 
                                  << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid) 
                                             << 2U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid) 
                                                << 1U) 
                                               | (1U 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1573 
        = ((0x3fU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x3eU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x3dU 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x3cU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x3bU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x3aU 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x39U 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x38U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x36U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0x35U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0x34U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0x33U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0x32U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0x31U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1558))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_52 
        = ((0x34U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x722c657669666973)
            : ((0x33U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x1b00000015000000)
                : ((0x32U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x300000000000000)
                    : ((0x31U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x3f00000004000000)
                        : ((0x30U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x300000000000030)
                            : ((0x2fU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x4075706301000000)
                                : ((0x2eU == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x40420f002c000000)
                                    : ((0x2dU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x400000003000000)
                                        : ((0x2cU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0xf000000)
                                            : ((0x2bU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x400000003000000)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x100000000000000)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x400000003000000)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x73757063)
                                                      : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_39)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__298(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__298\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__299(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__299\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_data 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__mem_0_address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__300(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__300\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__301(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__301\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
                           & (0U != (2U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                          | ((((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                              | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                >> 2U))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                     & (0U != (2U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                    ? 1U : 0U))) : 
                         ((0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                         >> 2U)) | 
                          (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                            ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
                                         & (0U != (VL_ULL(2) 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                        | ((((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                            | ((3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_in_sign)))) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                  >> 2U))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                                   & (0U 
                                                      != 
                                                      (VL_ULL(2) 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (VL_ULL(1) 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))))
                                                  ? VL_ULL(1)
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                               ? VL_ULL(1)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1831 
        = ((0x41U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
            : ((0x40U == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                : ((0x3fU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0)
                    : ((0x3eU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? VL_ULL(0) : ((0x3dU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x3cU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x3bU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x3aU 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x39U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x36U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x35U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1818)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_unready_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter) 
           | (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter) 
                        >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1588 
        = ((0x4eU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x4cU 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x4bU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x4aU 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x49U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x48U 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x47U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x46U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x45U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0x44U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0x43U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0x42U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0x41U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0x40U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1573))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_65 
        = ((0x41U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x400000003000000)
            : ((0x40U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x2000000087000000)
                : ((0x3fU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x400000003000000)
                    : ((0x3eU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x10000007c000000)
                        : ((0x3dU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x400000003000000)
                            : ((0x3cU == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x4000006f000000)
                                : ((0x3bU == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x400000003000000)
                                    : ((0x3aU == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x4000000062000000)
                                        : ((0x39U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x400000003000000)
                                            : ((0x38U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x400000004f000000)
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x400000003000000)
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x76637369)
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x72003074656b636f)
                                                      : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_52)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__302(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__302\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                 >> 0x34U)))) ? 2U : 
           ((4U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                  >> 0x34U)))) ? 1U
             : ((3U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x34U)))) ? 1U
                 : ((2U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                          >> 0x34U))))
                     ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x2eU)) << 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x2fU)))) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x2fU)))) 
                           >> 1U) & (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 0x26U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x2fU)))) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x2fU)))) 
                           >> 1U) & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x26U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
        = ((((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x24U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                          >> 0x23U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x22U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x21U)))
                                ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex 
        = ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x2cU)) << 4U)) | 
           (0xfU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x27U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__303(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__303\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__304(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__304\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_op))
            ? 0U : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_op))
                     ? 4U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_op))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_addr) 
               << 2U) : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_op))
                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_addr) 
                             << 2U) : 0x48U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__306(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__306\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_out[0U] 
        = (IData)((((QData)((IData)((0xfffU & (((0x3fffU 
                                                 & VL_EXTENDS_II(14,13, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x780U) 
                                                                     + 
                                                                     (0x1fffU 
                                                                      & VL_EXTENDS_II(13,12, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                                + (0x3fffU 
                                                   & VL_EXTENDS_II(14,13, 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                               >> 0x35U)))))) 
                                               & (~ 
                                                  ((0x80000000U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])
                                                    ? 0U
                                                    : 0xe00U)))))) 
                    << 0x34U) | ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])
                                  ? (VL_ULL(0xfffffffffffff) 
                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                  : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
        = (IData)(((((QData)((IData)((0xfffU & (((0x3fffU 
                                                  & VL_EXTENDS_II(14,13, 
                                                                  (0xfffU 
                                                                   & ((IData)(0x780U) 
                                                                      + 
                                                                      (0x1fffU 
                                                                       & VL_EXTENDS_II(13,12, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist)))))))))) 
                                                 + 
                                                 (0x3fffU 
                                                  & VL_EXTENDS_II(14,13, 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x35U)))))) 
                                                & (~ 
                                                   ((0x80000000U 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])
                                                     ? 0U
                                                     : 0xe00U)))))) 
                     << 0x34U) | ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])
                                   ? (VL_ULL(0xfffffffffffff) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                   : VL_ULL(0))) >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_in_sign;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1844 
        = ((0x4eU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? VL_ULL(0)
            : ((0x4dU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? VL_ULL(0)
                : ((0x4cU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? VL_ULL(0)
                    : ((0x4bU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? VL_ULL(0) : ((0x4aU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? VL_ULL(0)
                                        : ((0x49U == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? VL_ULL(0)
                                            : ((0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? VL_ULL(0)
                                                : (
                                                   (0x47U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x46U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? VL_ULL(0)
                                                     : 
                                                    ((0x45U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 3U)))
                                                      ? VL_ULL(0)
                                                      : 
                                                     ((0x44U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 3U)))
                                                       ? VL_ULL(0)
                                                       : 
                                                      ((0x43U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U)))
                                                        ? VL_ULL(0)
                                                        : 
                                                       ((0x42U 
                                                         == 
                                                         (0xffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 3U)))
                                                         ? VL_ULL(0)
                                                         : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1831)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_unready_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_unready_T_1) 
           | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_unready_T_1) 
                       >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1603 
        = ((0x5dU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) | ((0x5cU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U))) 
                                           | ((0x5bU 
                                               == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                              | ((0x5aU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))) 
                                                 | ((0x59U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U))) 
                                                    | ((0x58U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 3U))) 
                                                       | ((0x57U 
                                                           == 
                                                           (0xffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 3U))) 
                                                          | ((0x56U 
                                                              == 
                                                              (0xffU 
                                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                  >> 3U))) 
                                                             | ((0x55U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                     >> 3U))) 
                                                                | ((0x54U 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                        >> 3U))) 
                                                                   | ((0x53U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                           >> 3U))) 
                                                                      | ((0x52U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                              >> 3U))) 
                                                                         | ((0x51U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                            | ((0x50U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                               | ((0x4fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                                >> 3U))) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1588))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_78 
        = ((0x4eU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x20000000f5000000)
            : ((0x4dU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x400000003000000)
                : ((0x4cU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x1000000ea000000)
                    : ((0x4bU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x400000003000000)
                        : ((0x4aU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x400000dd000000)
                            : ((0x49U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x400000003000000)
                                : ((0x48U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x40000000d0000000)
                                    : ((0x47U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x400000003000000)
                                        : ((0x46U == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x40000000bd000000)
                                            : ((0x45U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x400000003000000)
                                                : (
                                                   (0x44U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x10000009e000000)
                                                    : 
                                                   ((0x43U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x400000003000000)
                                                     : 
                                                    ((0x42U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x75706392000000)
                                                      : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_65)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__307(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__307\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc_1) 
                   | ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                               >> 0x26U)) & (IData)(
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                     >> 0x25U)))) 
                  << 3U)) | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc_1) 
                                     | ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 0x26U)) 
                                        & (~ (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x25U))))) 
                                    << 2U)) | ((2U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc) 
                                                    | ((~ (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x26U))) 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                  >> 0x25U)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc) 
                                                     | ((~ (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                    >> 0x26U))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                      >> 0x25U)))))))));
}
