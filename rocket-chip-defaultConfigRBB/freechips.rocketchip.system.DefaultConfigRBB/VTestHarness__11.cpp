// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__94(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__94\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5405[3];
    WData/*95:0*/ __Vtemp5406[3];
    WData/*95:0*/ __Vtemp5411[3];
    WData/*95:0*/ __Vtemp5412[3];
    WData/*95:0*/ __Vtemp5417[3];
    WData/*95:0*/ __Vtemp5418[3];
    WData/*95:0*/ __Vtemp5423[3];
    WData/*95:0*/ __Vtemp5424[3];
    WData/*95:0*/ __Vtemp5429[3];
    WData/*95:0*/ __Vtemp5430[3];
    WData/*95:0*/ __Vtemp5435[3];
    WData/*95:0*/ __Vtemp5436[3];
    WData/*95:0*/ __Vtemp5441[3];
    WData/*95:0*/ __Vtemp5442[3];
    WData/*95:0*/ __Vtemp5447[3];
    WData/*95:0*/ __Vtemp5448[3];
    WData/*159:0*/ __Vtemp5451[5];
    WData/*159:0*/ __Vtemp5454[5];
    WData/*159:0*/ __Vtemp5455[5];
    WData/*159:0*/ __Vtemp5458[5];
    WData/*159:0*/ __Vtemp5461[5];
    WData/*159:0*/ __Vtemp5462[5];
    WData/*159:0*/ __Vtemp5465[5];
    WData/*159:0*/ __Vtemp5468[5];
    WData/*159:0*/ __Vtemp5469[5];
    WData/*159:0*/ __Vtemp5472[5];
    WData/*159:0*/ __Vtemp5475[5];
    WData/*159:0*/ __Vtemp5476[5];
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42927
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42940
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:42943: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 42943, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42951
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42964
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:42967: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 42967, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42975
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42988
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:42991: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 42991, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:42999
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43012
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43015: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43015, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43023
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43036
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43039: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43039, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43047
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43060
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43063: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43063, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43071
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43084
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43087: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43087, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43095
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43108
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43111: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43111, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43119
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43132
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43135: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43135, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43143
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43156
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43159: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43159, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43167
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43180
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43183: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43183, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43191
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43204
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43207: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43207, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43215
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43228
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43231: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43231, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43239
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43252
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43255: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43255, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43263
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43276
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43279: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43279, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43287
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43300
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43303: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43303, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43311
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43324
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43327: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43327, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43335
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43348
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43351: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43351, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43359
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & ((((0U == (0x1ffff000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43372
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & ((((0U == (0x1ffff000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43375: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43375, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43383
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43396
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43399: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43399, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43407
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43420
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43423: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43423, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43431
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43444
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43447: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43447, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43455
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43468
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43471: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43471, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43479
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43492
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43495: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43495, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43503
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43516
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43519: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43519, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43527
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43540
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43543: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43543, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43551
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43564
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43567: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43567, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43575
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43588
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43591: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43591, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43599
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43612
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43615: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43615, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43623
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43636
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43639: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43639, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43647
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43660
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43663: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43663, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43671
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43684
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43687: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43687, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43695
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43708
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43711: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43711, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43719
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43732
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43735: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43735, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43743
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43756
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43759: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43759, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43767
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43780
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43783: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43783, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43791
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43804
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43807: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43807, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43815
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43828
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43831: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43831, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43839
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43852
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43855: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43855, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43863
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43876
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43879: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43879, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43887
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43900
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43903: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43903, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43911
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43924
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43927: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43927, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43935
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43948
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43951: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43951, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43959
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43972
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43975: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43975, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43983
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:43996
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_84) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_398)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:43999: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 43999, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44007
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44020
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44023: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44023, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44031
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44044
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44047: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44047, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44055
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44068
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44071: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44071, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44079
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44092
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44095: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44095, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44103
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44116
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44119: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44119, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44127
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44140
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44143: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44143, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44151
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44164
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44167: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44167, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44175
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44188
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44191: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44191, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44199
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44212
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44215: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44215, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44223
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44236
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44239: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44239, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44247
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44260
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44263: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44263, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44271
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44284
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44287: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44287, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44295
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44308
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44311: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44311, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44319
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44332
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44335: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44335, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44343
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44356
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44359: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44359, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44367
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44380
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44383: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44383, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44391
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44404
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44407: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44407, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44415
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44428
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44431: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44431, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44439
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44452
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44455: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44455, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44463
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44476
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44479: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44479, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44487
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44500
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44503: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44503, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44511
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44524
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44527: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44527, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44535
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44548
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44551: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44551, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44559
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44572
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44575: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44575, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44583
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44596
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44599: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44599, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44607
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44620
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44623: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44623, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44631
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44644
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44647: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44647, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44655
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44668
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44671: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44671, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44679
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44692
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44695: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44695, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44703
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44716
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44719: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44719, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44727
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44740
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44743: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44743, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44751
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44764
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44767: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44767, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44775
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44788
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44791: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44791, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44799
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44812
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44815: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44815, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44823
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44836
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44839: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44839, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44847
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44860
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44863: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44863, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44871
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44884
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44887: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44887, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44895
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44908
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44911: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44911, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44919
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44932
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44935: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44935, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44943
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44956
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44959: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44959, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44967
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44980
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:44983: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 44983, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:44991
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45004
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45007: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45007, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45015
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45028
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45031: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45031, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45039
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45052
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45055: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45055, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45063
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                                             >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45076
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                                             >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45079: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45079, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45087
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45100
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45103: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45103, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45111
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45124
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45127: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45127, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45135
verbose&&done_reset        
    ) {
        __Vtemp5405[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5405[1U] = 0U;
        __Vtemp5405[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5406, __Vtemp5405);
        __Vtemp5411[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5411[1U] = 0U;
        __Vtemp5411[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5412, __Vtemp5411);
        __Vtemp5417[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5417[1U] = 0U;
        __Vtemp5417[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5418, __Vtemp5417);
        __Vtemp5423[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5423[1U] = 0U;
        __Vtemp5423[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5424, __Vtemp5423);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                 == ((7U == (7U & __Vtemp5406[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp5412[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                   == ((7U == (7U & 
                                               __Vtemp5418[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp5424[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45148
done_reset        
    ) {
        __Vtemp5429[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5429[1U] = 0U;
        __Vtemp5429[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5430, __Vtemp5429);
        __Vtemp5435[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5435[1U] = 0U;
        __Vtemp5435[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5436, __Vtemp5435);
        __Vtemp5441[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5441[1U] = 0U;
        __Vtemp5441[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5442, __Vtemp5441);
        __Vtemp5447[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5447[1U] = 0U;
        __Vtemp5447[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5448, __Vtemp5447);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                 == ((7U == (7U & __Vtemp5430[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp5436[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
                                   == ((7U == (7U & 
                                               __Vtemp5442[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp5448[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45151: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45151, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45159
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5451, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                       << 3U));
        __Vtemp5454[0U] = (0x7fU & (__Vtemp5451[0U] 
                                    >> 1U));
        __Vtemp5454[1U] = 0U;
        __Vtemp5454[2U] = 0U;
        __Vtemp5454[3U] = 0U;
        __Vtemp5454[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5455, __Vtemp5454);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (0xffU & __Vtemp5455[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45172
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5458, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                       << 3U));
        __Vtemp5461[0U] = (0x7fU & (__Vtemp5458[0U] 
                                    >> 1U));
        __Vtemp5461[1U] = 0U;
        __Vtemp5461[2U] = 0U;
        __Vtemp5461[3U] = 0U;
        __Vtemp5461[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5462, __Vtemp5461);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                          & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (0xffU & __Vtemp5462[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45175: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45175, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45183
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45194
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor_io_in_a_ready)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45197: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45197, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45205
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45218
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45221: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45221, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45229
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
                                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45242
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
                                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45245: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45245, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45253
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5465, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                       << 3U));
        __Vtemp5468[0U] = (0x7fU & (__Vtemp5465[0U] 
                                    >> 1U));
        __Vtemp5468[1U] = 0U;
        __Vtemp5468[2U] = 0U;
        __Vtemp5468[3U] = 0U;
        __Vtemp5468[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5469, __Vtemp5468);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (0xffU & __Vtemp5469[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45266
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5472, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                       << 3U));
        __Vtemp5475[0U] = (0x7fU & (__Vtemp5472[0U] 
                                    >> 1U));
        __Vtemp5475[1U] = 0U;
        __Vtemp5475[2U] = 0U;
        __Vtemp5475[3U] = 0U;
        __Vtemp5475[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5476, __Vtemp5475);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size) 
                                == (0xffU & __Vtemp5476[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45269: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45269, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45277
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:54:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:45290
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:45293: Assertion failed in %NTestHarness.ldut.subsystem_cbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 45293, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__98(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__98\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181422
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
                             & (0x3ffU == (0x3ffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))) 
                         & (~ ((0U == (0x3ffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                         >> 0x20U)))) 
                               | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected 'GOING' hart.\n    at Debug.scala:1391 assert(hartGoingId === 0.U, \"Unexpected 'GOING' hart.\")//Chisel3 #540 %%x, expected %%x\", hartGoingId, 0.U)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181435
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract))) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
                             & (0x3ffU == (0x3ffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))) 
                         & (~ ((0U == (0x3ffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                         >> 0x20U)))) 
                               | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:181438: Assertion failed in %NTestHarness.ldut.debug_1.dmInner.dmInner\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 181438, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181446
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                            & (1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449)) 
                         & (~ ((0U == (0x3ffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                         >> 0x20U)))) 
                               | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected 'EXCEPTION' hart\n    at Debug.scala:1711 assert(hartExceptionId === 0.U, \"Unexpected 'EXCEPTION' hart\")//Chisel3 #540, %%x, expected %%x\", hartExceptionId, 0.U)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181459
done_reset        
    ) {
        if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                            & (1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449)) 
                         & (~ ((0U == (0x3ffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                         >> 0x20U)))) 
                               | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:181462: Assertion failed in %NTestHarness.ldut.debug_1.dmInner.dmInner\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 181462, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181470
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                            & (1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                           & (2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT___T_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Should not be in custom state unless we need it.\n    at Debug.scala:1716 assert(needCustom.B, \"Should not be in custom state unless we need it.\")\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181483
done_reset        
    ) {
        if (VL_UNLIKELY((((((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                            & (1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                           & (2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT___T_1))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:181486: Assertion failed in %NTestHarness.ldut.debug_1.dmInner.dmInner\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 181486, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181494
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)) 
                                    | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449))) 
                                   | (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                                  | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unexpected EXCEPTION write: should only get it in Debug Module EXEC state\n    at Debug.scala:1729 assert ((!io.dmactive || !hartExceptionWrEn || ctrlStateReg === CtrlState(Exec)),\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:181507
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)) 
                                    | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449))) 
                                   | (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                                  | (IData)(vlTOPp->TestHarness__DOT___T_1)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:181510: Assertion failed in %NTestHarness.ldut.debug_1.dmInner.dmInner\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 181510, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__99(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__99\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__100(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__100\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp5490[4];
    WData/*127:0*/ __Vtemp5491[4];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[2U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[3U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[4U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[5U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[6U] 
        = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                    << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[7U] 
        = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                     << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U] 
        = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                    << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U] 
        = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                     << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U] 
        = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                    << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U] 
        = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                     << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__R0_random 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_ren 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem_R0_en;
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem_R0_en) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_addr 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_2_typeTag 
        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_144));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_wmode)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_en) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_wmode)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_out_bits_write)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_out_bits_write)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr 
            = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_out_bits_addr) 
                         >> 3U));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0 
        = vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0 
        = vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_1;
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_2) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr 
            = (0x7fffffffU & ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_burst))
                               ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr
                               : ((2U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_burst))
                                   ? ((0x7fffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr 
                                                  & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_1 
                                                     >> 8U))) 
                                      | (~ ((~ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr) 
                                            | (0x7fffU 
                                               & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_1 
                                                  >> 8U)))))
                                   : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_5) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr_1 
            = (0x7fffffffU & ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))
                               ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr
                               : ((2U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))
                                   ? ((0x7fffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr_1 
                                                  & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_3 
                                                     >> 8U))) 
                                      | (~ ((~ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr) 
                                            | (0x7fffU 
                                               & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_3 
                                                  >> 8U)))))
                                   : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr_1)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist 
            = (0x1fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len 
        = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_4));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len_1 
        = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[1U] 
        = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                    << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random[2U] 
        = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                     << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[1U] 
        = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                    << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[2U] 
        = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                     << 0x20U) | (QData)((IData)(VL_RANDOM_I(32)))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_wmode)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array_RW0_en) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_idx;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__accruedRefillError 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refillError;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_wmode))) {
        if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[0U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 = 0U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr;
        }
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[1U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1 = 0x20U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr;
        }
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[2U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2 = 0x40U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr;
        }
        if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[3U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3 = 0x60U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_en) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_wmode))) {
        if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[0U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0 = 0U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr;
        }
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[1U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1 = 0x20U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr;
        }
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[2U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2 = 0x40U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr;
        }
        if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[3U];
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3 = 0x60U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1_RW0_addr;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_entry 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_resp_bits_entry;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist 
            = (0x3fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_way 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_way;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__busy = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_2) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__len));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_2) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_5) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = (~ ((~ vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__addr) 
                  | (7U & (~ (0x3ffU & ((IData)(7U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = (0x7fffffffU & (~ ((~ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr) 
                                 | (7U & (~ (0x3ffU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_size))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 
            = (0U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__len));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 
            = (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_g 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_g;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_d 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_d;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_u;
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_sel1)
                ? 0U : 3U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_5 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__REG 
        = vlTOPp->TestHarness__DOT__ldut_reset;
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 
            = (0x7fffffffU & (~ ((~ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr_1) 
                                 | (7U & (~ (0x3ffU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0 
            = (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1) 
         & (0U == (0xfffff000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data))))) {
        if ((1U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                   [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1]));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0 = 0U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((2U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 8U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1 = 8U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((4U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x10U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2 = 0x10U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((8U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x18U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3 = 0x18U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((0x10U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x20U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4 = 0x20U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((0x20U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x28U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5 = 0x28U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((0x40U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x30U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6 = 0x30U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
        if ((0x80U & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
             [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1])) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
                                    [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1] 
                                    >> 0x38U)));
            vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7 = 0x38U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7 
                = (0x1ffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
                             >> 3U));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_sel1)
                ? 0U : 3U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data
               [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
                                             & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
                                                & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___in_aw_ready_T)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_10)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_cease_r 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_173));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_a 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_a;
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 1U;
    }
    if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___io_resp_valid_T_84))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_respPipe_bits_entry 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_resp_bits_entry;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC 
            = (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
            = (VL_ULL(0x1ffffffffffff) & ((VL_ULL(0xffffffffffff) 
                                           & ((QData)((IData)(
                                                              (0xffffffU 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05Fsig))) 
                                              * (QData)((IData)(
                                                                (0xffffffU 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05Fsig))))) 
                                          + (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
                                                      >> 1U))))));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC 
            = (0x3ffffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                              << 0xfU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                          >> 0x11U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_1 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_2 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_0 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_3 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
            if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_4 
                    = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2);
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_0 = 0U;
    } else {
        if ((3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_111) 
                   & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___b_count_0_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_1 = 0U;
    } else {
        if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_111) 
                   & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)) 
                      >> 1U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___b_count_1_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay_REG 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay) 
              & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s0_fq_has_space)))));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                              >> 0x38U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7)) 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                               >> 0x30U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                                >> 0x28U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5)) 
                                                   << 8U)) 
                                       | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                               >> 0x20U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4)))))))) 
                << 0x20U) | (QData)((IData)(((0xff000000U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                              >> 0x18U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3)) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                      ? (IData)(
                                                                (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                                 >> 0x10U))
                                                      : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                         ? (IData)(
                                                                   (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                                                    >> 8U))
                                                         : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data)
                                                          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0)))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_reg_fence = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_mem_busy)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_reg_fence = 0U;
            }
        } else {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_reg_fence 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___GEN_2;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_x 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_x;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_v 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_v;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_w 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_w;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_r 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_barrier_io_x_r;
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_wmode))) {
        if ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2 
                = (0x1fffffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[0U]);
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0 = 0U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
        }
        if ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2 
                = (0x1fffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[1U] 
                                 << 0xbU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[0U] 
                                             >> 0x15U)));
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1 = 0x15U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
        }
        if ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2 
                = (0x1fffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[2U] 
                                 << 0x16U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[1U] 
                                              >> 0xaU)));
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2 = 0x2aU;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
        }
        if ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2 
                = (0x1fffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[2U] 
                                 << 1U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wdata[1U] 
                                           >> 0x1fU)));
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3 = 1U;
            vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3 = 0x3fU;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_ar_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_42) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_41) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0_touch_way_sized;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_scounteren 
        = (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_421);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_42) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr 
            = ((0xffU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                ? ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                          >> 4U)) | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0))
                                      ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                >> 4U)) 
                                         | (1U & ((0x20U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                   >> 4U)
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                   >> 3U))))
                                      : ((2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                >> 1U)) 
                                         | (1U & ((4U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                   >> 1U)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0))))))
                : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                            ? ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                                ? ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                                    ? ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                                        ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids))
                                            ? 7U : 6U)
                                        : 5U) : 4U)
                                : 3U) : 2U) : 1U) : 0U));
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_42) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_30;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_41) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_30;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                                          [0U]) >> 3U)))
                                  : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_out_aw_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_io_deq_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_first)
                              ? ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                  [0U]) ? 0U : (~ (0xffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                                                       [0U]) 
                                                      >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
                if ((6U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count))) {
                    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___count_T_1;
                }
            } else {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
                    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_410;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid) {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos 
                    = ((5U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___nextPos_T_3)
                        : 0U);
            } else {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType))) {
                    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_411;
                }
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1)));
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_18))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_18)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_7 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_25))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_25)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_5 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((5U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_23))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_22))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_22)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_10 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_28))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_3 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_21))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_21)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_9 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((9U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_27))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_27)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_20))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_24))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_24)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_8 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_26))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_26)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_19))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_19)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_11 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_29))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_29)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_12 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_30))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_30)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_13 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_31))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_31)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_14 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_32))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_32)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__flight_15 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___d_first_T))
               ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_33))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___GEN_33)));
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_size)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_replay 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting)
               ? ((4U != (7U & (((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__flushCounter)) 
                                >> 6U))) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_349))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_349)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pageValid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0x3fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_373)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcounteren 
        = (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_422);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stvec 
        = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_416);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_xcpt_interrupt 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_6) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass_1)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_1 
                = (VL_ULL(0x3fffffffffffffff) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_1 
                                                 >> 2U));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_want_victimize) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_size = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe_x12) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_size 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_size_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___a_first_T) 
         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_source) 
               >> 3U)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__stalls_id 
            = (VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_address))));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___a_first_T) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_source) 
            >> 3U))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__stalls_id_1 
            = (VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_address))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___out_arw_bits_size_T_1));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0x7fffffU & (((IData)(0x7ffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                        >> 3U))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 
            = (0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq_io_enq_bits_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq_io_enq_bits_last));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data
               [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_bits_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 1U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_release_data_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_release_data_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseRejected)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__isValid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0xfffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_375));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen)
                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__killm)
                         ? (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                                  >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wen_T_2))
                     : (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                              >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtvec 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_394));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        if ((0x40U == (0x50U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_ra_2 
                = (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                            >> 0x1bU));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2) {
                if ((0x10U == (0x30000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_ra_2 
                        = (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                    >> 0x14U));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_ra_0 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2)
                         ? ((0U == (0x40U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))
                             ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                >> 0x14U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_61))
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_61)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_ra_1 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2)
                         ? (((0U != (0x40U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                             & (0x10U != (0x30000010U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))
                             ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                                >> 0x14U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_62))
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_62)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__inc_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__write_1 
            = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                        >> 2U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__inc_2) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__write_2 
            = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                        >> 2U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_want_victimize) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_param = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe_x12) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_param 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_xcpt) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 
            = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                        >> 2U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__doneAW = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__doneAW 
                = (1U & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter)) 
                            | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__beats1)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_stalld)))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                 < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nIC))) 
             & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_ae_inst 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_stalld)))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                 < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nIC))) 
             & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_miss;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_valid;
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_stalld)))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                 < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nIC))) 
             & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf___05Freplay 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_replay;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_size;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_replay 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_kill_mem) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_replay)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__fpu_kill_mem)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
        = (0x3ffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14);
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
            = (0x3ffffffU & (VL_LTES_III(1,29,29, 0U, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                              ? (VL_EXTENDS_II(29,28, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                                 - VL_EXTENDS_II(29,28, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm))
                              : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem));
    }
    if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
            = (VL_ULL(0x7fffffffffffff) & (VL_LTES_IQQ(1,58,58, VL_ULL(0), vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialRem)
                                            ? (VL_EXTENDS_QQ(58,57, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem) 
                                               - VL_EXTENDS_QQ(58,57, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__trialTerm))
                                            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid = 0U;
    } else {
        if (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                    | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))) 
                       & (1U == (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                          - (IData)(1U)))))) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid = 0U;
    } else {
        if (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___inReady_T_1) 
                    | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2))) 
                       & (1U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum) 
                                          - (IData)(1U)))))) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_41) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr 
            = ((0xffU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                ? ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                          >> 4U)) | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0))
                                      ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                                                >> 4U)) 
                                         | (1U & ((0x20U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                                                   >> 4U)
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                                                   >> 3U))))
                                      : ((2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                                                >> 1U)) 
                                         | (1U & ((4U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0) 
                                                   >> 1U)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0))))))
                : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                            ? ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                                ? ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                                    ? ((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                                        ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids))
                                            ? 7U : 6U)
                                        : 5U) : 4U)
                                : 3U) : 2U) : 1U) : 0U));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_taken 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_resp_bits_taken;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_valid 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___io_resp_valid_T_84));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
        = (VL_ULL(0x7fffffffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_14);
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last
               [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1] 
               & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last
               [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1]);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_illegal_insn) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_0 
                = (QData)((IData)((0x3fffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__inst 
                                                  >> 2U))));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_7) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_0 
                    = (VL_ULL(0x3fffffffffffffff) & 
                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_0 
                        >> 2U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantInProgress = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_271) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantInProgress 
                    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_271)
                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)
                         ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last)
                             ? 7U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_183))
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_183))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_183)));
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
            [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_dmem_resp_val) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_data 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore_drain_on_miss_REG 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_nack;
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x140U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sscratch 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dscratch 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    VL_EXTEND_WQ(103,64, __Vtemp5490, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp5491, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp5490[0U] >> 1U) : 
                        ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U)))
                          ? (__Vtemp5491[0U] >> 1U)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_162)))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_162))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 7U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 3U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 2U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r 
                = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___05Fres_res_value_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_1_d_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter1)));
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_bypass_0)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_5
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_6);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killm)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__wrong_path 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_76)
                  : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_taken)
                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_76)
                      : ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___s2_replay_T) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken_1)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictBranch_1))) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictJump_1))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictReturn_1))) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_76))))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__earlyWinner_0;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_valid 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_cmd;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__blocked 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_requestor_1_req_ready)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_perf_grant))) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__blocked) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_dmem_req_valid)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_requestor_1_s2_nack)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)
            ? (QData)((IData)((0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                                   >> 0xaU)))))
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___r_pte_T_10_ppn);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_did_read 
            = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb___05Fgrant_T_1)) 
               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_read) 
                     | (((((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
                           | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
                          | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s0_read_T_21)) 
                        & (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_cmd))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_0_d_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_out_valid))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_out_valid));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_dmem_resp_val) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_typeTag 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size) 
                     - (IData)(2U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb__DOT__s2_id 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb__DOT__s1_id;
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_0 = 0U;
    } else {
        if ((3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_12) 
                   & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_id))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_count_0_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_1 = 0U;
    } else {
        if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_12) 
                   & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
                      >> 1U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_count_1_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_dprv_REG 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_passthrough 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb___05Fgrant_T_5) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_mem_req_valid));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_len_1 
        = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_9));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__muxStateEarly_1)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data
                   [0U] : VL_ULL(0)) : VL_ULL(0));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_0 = 0U;
    } else {
        if ((3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_36) 
                   & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_id))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_count_0_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_1 = 0U;
    } else {
        if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_36) 
                   & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
                      >> 1U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_count_1_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_5) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy_1 
                = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__aw_last)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_5) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_addr_1 
            = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))
                    ? ((0x7fffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__inc_addr_1 
                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wrapMask_T_3 
                                      >> 8U))) | (~ 
                                                  ((~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr) 
                                                   | (0x7fffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wrapMask_T_3 
                                                         >> 8U)))))
                    : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__inc_addr_1));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_3));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_flush_icache) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] = 0U;
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_one_beat) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[0U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[0U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[1U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[1U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[2U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[2U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[3U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[3U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[4U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[4U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[5U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[5U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[6U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[6U]));
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
                    = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_done) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated)))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_4[7U]
                        : (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___vb_array_T_6[7U]));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___value_T_3;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_21))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_21)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_7 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_28))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_5 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((5U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_26))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_26)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_25))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_25)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_10 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_31))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_31)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_3 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_24))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_24)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_9 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((9U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_30))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_30)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_23))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_27))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_27)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_8 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_29))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_29)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_22))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_22)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_11 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_32))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_32)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_12 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_33))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_33)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_13 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_34))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_34)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_14 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_35))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_35)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_15 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T))
               ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_36))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_36)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_in_b_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data) 
               | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_15)
                   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_14)
                       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                           ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_13)
                           : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                               ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_12)
                               : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_11)
                                   : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_10)
                                       : ((9U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_9)
                                           : ((8U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_8)
                                               : ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_7)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_6)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_5)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_4)
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_3)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_2)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_1)
                                                         : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_0)))))))))))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_holds_d = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_2) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_holds_d 
                = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_last)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank_auto_in_r_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__b_delay 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                  & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_d_ready) 
                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins))))))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___b_delay_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked = 0U;
    } else {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last))))) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked 
                = (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_latched 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_in_aw_ready) 
                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___in_aw_ready_T)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_10)));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_271)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_62)
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)
                    ? ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_signed)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_62))
                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_62)))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_62));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_263) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((~ (((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pending_interrupts) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__exception))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_48)));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_nack)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T) 
         & (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         >> 3U))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stalls_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T) 
         & (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         >> 3U))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stalls_id_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_id;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_st 
            = (0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_ae_st_array) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_ld 
            = (0U != ((((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fmisaligned_T_3) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_read))
                        ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_eff_array))
                        : 0U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_st 
            = (0U != ((((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fmisaligned_T_3) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write))
                        ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_eff_array))
                        : 0U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_297) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_addr 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_prediction_entry 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_entry)
                : 0x1cU);
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_18))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_18)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F7 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((7U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_25))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_25)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F5 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((5U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_23))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((4U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_22))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_22)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F10 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xaU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_28))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_28)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F3 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((3U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_21))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_21)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F9 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((9U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_27))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_27)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((2U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_20))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F6 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((6U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_24))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_24)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F8 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((8U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_26))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_26)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((1U != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_19))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_19)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F11 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xbU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_29))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_29)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F12 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xcU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_30))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_30)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F13 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xdU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_31))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_31)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F14 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xeU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_32))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_32)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__flight___05F15 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___d_first_T))
               ? ((0xfU != (0xfU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_7_bits_source))) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_33))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___GEN_33)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter1)));
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
            [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
            [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch) 
                   | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                         >> 9U))) : (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                                        >> 9U))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch) 
                  & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                      >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0 
            = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid)
                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                              ? ((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr))
                                  ? (0x1ffU & (((~ (IData)(
                                                           (VL_ULL(0x1fffffffff) 
                                                            & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_2) 
                                                               >> 2U)))) 
                                                ^ (3U 
                                                   & (~ (IData)(
                                                                (VL_ULL(0xfffffff) 
                                                                 & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_2) 
                                                                    >> 0xbU)))))) 
                                               ^ (0x1c0U 
                                                  & (((IData)(0xddU) 
                                                      * (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                                     << 1U))))
                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr))
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_isValid 
            = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid)) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr)) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal))));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_802))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_802))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_544))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_344;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_803))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_803))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_545))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_345;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_27 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_720))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_720))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_516))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_316;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_3 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_608))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_608))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_476))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_276;
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_req_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_nack)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___a_first_T) 
          & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                >> 3U))) & (VL_ULL(0) != (VL_ULL(0x80000000) 
                                          & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__stalls_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_id;
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT___a_first_T) 
          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
             >> 3U)) & (VL_ULL(0) != (VL_ULL(0x80000000) 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__stalls_id_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_id;
    }
    if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__full)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1ffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut_reset_reg__DOT__reg_ 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__102(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__102\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__clock_en = ((IData)(vlTOPp->TestHarness__DOT___T_1) 
                                          | (IData)(vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___inflight_sizes_T_5));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xfU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x10U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x11U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x12U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x13U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x14U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x15U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x16U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x17U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x18U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x19U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1aU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1bU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1cU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1dU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1eU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1fU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x20U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x21U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x21U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x22U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x22U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x23U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x23U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x24U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x24U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x25U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x25U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___inflight_opcodes_T_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x20U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x21U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x21U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x22U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x22U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x23U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x23U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x24U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x24U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x25U] 
        = ((IData)(vlTOPp->TestHarness__DOT___T_1) ? 0U
            : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x25U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs 
        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_65));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs 
        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_66));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_done) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_counter_1)))
                         ? (3U & ((IData)(1U) << (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x2eU)))))
                         : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_done) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_counter_1)))
                                       ? (3U & ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x2eU)))))
                                       : 0U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy)
                ? 1U : (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                         & ((1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                            & ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449))))
                         ? 3U : (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))
                                   ? ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__wrAccessRegisterCommand) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__regAccessRegisterCommand))) 
                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) 
                                          & (0U != 
                                             (0xffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                                 >> 0x18U)))) 
                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported))))
                                   : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)))
                                  ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_38))))
            : 0U);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal) {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__wrAccessRegisterCommand) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__regAccessRegisterCommand))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
                    = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported)
                        ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume)
                                 ? 0U : 2U));
            } else {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) {
                    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2114;
                }
            }
        }
    } else {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control 
                = (0xffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal);
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype 
                = (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                            >> 0x18U));
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_406));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_10) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf 
                = (0xffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x11U)));
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_8) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata 
                = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                 >> 1U)));
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x30U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_2) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_2) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x28U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_1) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_1) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x18U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_99) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_99) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 8U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_97) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_97) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 9U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x10U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_98) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_98) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x11U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x38U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_3) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_3) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x19U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 
                = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
             & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 
                = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        } else {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96) 
                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)))) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 
                        = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 1U)));
                }
            }
        }
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0 = 0U;
    }
    if (vlTOPp->TestHarness__DOT___T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid) {
                vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 
                    = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg));
            }
        } else {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 = 0U;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) 
           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid) 
               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                  >> 3U)) ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs) 
                              & (0U != (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                                                  >> 4U)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0))
               : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__104(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__104\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented) 
                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:188173
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) 
                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))))) 
                                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg)))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Conflicting updates for dmiReqValidReg, should not happen.\n    at DebugTransport.scala:205 assert(!(dmiReqValidCheck && io.dmi.req.fire()), \"Conflicting updates for dmiReqValidReg, should not happen.\");\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:188186
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) 
                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)) 
                                          & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))))) 
                                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready)) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqValidReg)))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:188189: Assertion failed in %NTestHarness.ldut.dtm\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 188189, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__107(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__107\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight;
}
