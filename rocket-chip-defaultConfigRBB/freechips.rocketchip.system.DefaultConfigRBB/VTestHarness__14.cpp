// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__240(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__240\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5954[3];
    WData/*95:0*/ __Vtemp5955[3];
    WData/*95:0*/ __Vtemp5960[3];
    WData/*95:0*/ __Vtemp5961[3];
    WData/*95:0*/ __Vtemp5966[3];
    WData/*95:0*/ __Vtemp5967[3];
    WData/*95:0*/ __Vtemp5972[3];
    WData/*95:0*/ __Vtemp5973[3];
    WData/*95:0*/ __Vtemp5978[3];
    WData/*95:0*/ __Vtemp5979[3];
    WData/*95:0*/ __Vtemp5984[3];
    WData/*95:0*/ __Vtemp5985[3];
    WData/*95:0*/ __Vtemp5990[3];
    WData/*95:0*/ __Vtemp5991[3];
    WData/*95:0*/ __Vtemp5996[3];
    WData/*95:0*/ __Vtemp5997[3];
    WData/*159:0*/ __Vtemp6000[5];
    WData/*159:0*/ __Vtemp6003[5];
    WData/*159:0*/ __Vtemp6004[5];
    WData/*159:0*/ __Vtemp6007[5];
    WData/*159:0*/ __Vtemp6010[5];
    WData/*159:0*/ __Vtemp6011[5];
    WData/*159:0*/ __Vtemp6014[5];
    WData/*159:0*/ __Vtemp6017[5];
    WData/*159:0*/ __Vtemp6018[5];
    WData/*159:0*/ __Vtemp6021[5];
    WData/*159:0*/ __Vtemp6024[5];
    WData/*159:0*/ __Vtemp6025[5];
    WData/*127:0*/ __Vtemp6026[4];
    WData/*127:0*/ __Vtemp6027[4];
    WData/*127:0*/ __Vtemp6028[4];
    WData/*127:0*/ __Vtemp6029[4];
    WData/*511:0*/ __Vtemp6034[16];
    WData/*511:0*/ __Vtemp6035[16];
    WData/*511:0*/ __Vtemp6040[16];
    WData/*511:0*/ __Vtemp6041[16];
    WData/*511:0*/ __Vtemp6046[16];
    WData/*511:0*/ __Vtemp6047[16];
    WData/*511:0*/ __Vtemp6052[16];
    WData/*511:0*/ __Vtemp6053[16];
    WData/*511:0*/ __Vtemp6058[16];
    WData/*511:0*/ __Vtemp6059[16];
    WData/*511:0*/ __Vtemp6064[16];
    WData/*511:0*/ __Vtemp6065[16];
    WData/*511:0*/ __Vtemp6070[16];
    WData/*511:0*/ __Vtemp6071[16];
    WData/*511:0*/ __Vtemp6076[16];
    WData/*511:0*/ __Vtemp6077[16];
    WData/*511:0*/ __Vtemp6080[16];
    WData/*511:0*/ __Vtemp6083[16];
    WData/*511:0*/ __Vtemp6084[16];
    WData/*511:0*/ __Vtemp6087[16];
    WData/*511:0*/ __Vtemp6090[16];
    WData/*511:0*/ __Vtemp6091[16];
    WData/*127:0*/ __Vtemp6092[4];
    WData/*127:0*/ __Vtemp6093[4];
    WData/*127:0*/ __Vtemp6097[4];
    WData/*127:0*/ __Vtemp6098[4];
    WData/*127:0*/ __Vtemp6102[4];
    WData/*127:0*/ __Vtemp6103[4];
    WData/*511:0*/ __Vtemp6106[16];
    WData/*511:0*/ __Vtemp6109[16];
    WData/*511:0*/ __Vtemp6110[16];
    WData/*511:0*/ __Vtemp6113[16];
    WData/*511:0*/ __Vtemp6116[16];
    WData/*511:0*/ __Vtemp6117[16];
    WData/*127:0*/ __Vtemp6118[4];
    WData/*127:0*/ __Vtemp6119[4];
    WData/*127:0*/ __Vtemp6120[4];
    WData/*127:0*/ __Vtemp6121[4];
    WData/*511:0*/ __Vtemp6126[16];
    WData/*511:0*/ __Vtemp6127[16];
    WData/*511:0*/ __Vtemp6132[16];
    WData/*511:0*/ __Vtemp6133[16];
    WData/*511:0*/ __Vtemp6138[16];
    WData/*511:0*/ __Vtemp6139[16];
    WData/*511:0*/ __Vtemp6144[16];
    WData/*511:0*/ __Vtemp6145[16];
    WData/*511:0*/ __Vtemp6150[16];
    WData/*511:0*/ __Vtemp6151[16];
    WData/*511:0*/ __Vtemp6156[16];
    WData/*511:0*/ __Vtemp6157[16];
    WData/*511:0*/ __Vtemp6162[16];
    WData/*511:0*/ __Vtemp6163[16];
    WData/*511:0*/ __Vtemp6168[16];
    WData/*511:0*/ __Vtemp6169[16];
    WData/*511:0*/ __Vtemp6172[16];
    WData/*511:0*/ __Vtemp6175[16];
    WData/*511:0*/ __Vtemp6176[16];
    WData/*511:0*/ __Vtemp6179[16];
    WData/*511:0*/ __Vtemp6182[16];
    WData/*511:0*/ __Vtemp6183[16];
    WData/*127:0*/ __Vtemp6184[4];
    WData/*127:0*/ __Vtemp6185[4];
    WData/*127:0*/ __Vtemp6189[4];
    WData/*127:0*/ __Vtemp6190[4];
    WData/*127:0*/ __Vtemp6194[4];
    WData/*127:0*/ __Vtemp6195[4];
    WData/*511:0*/ __Vtemp6198[16];
    WData/*511:0*/ __Vtemp6201[16];
    WData/*511:0*/ __Vtemp6202[16];
    WData/*511:0*/ __Vtemp6205[16];
    WData/*511:0*/ __Vtemp6208[16];
    WData/*511:0*/ __Vtemp6209[16];
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21390
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21403
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21406: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21406, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21414
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21427
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21430: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21430, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21438
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21451
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21454: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21454, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21462
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21475
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21478: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21478, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21486
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21499
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21502: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21502, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21510
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21523
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21526: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21526, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21534
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21547
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21550: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21550, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21558
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21571
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21574: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21574, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21582
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21595
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21598: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21598, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21606
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21619
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21622: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21622, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21630
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21643
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21646: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21646, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21654
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21667
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21670: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21670, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21678
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21691
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21694: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21694, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21702
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21715
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21718: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21718, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21726
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21739
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21742: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21742, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21750
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21763
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21766: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21766, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21774
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21787
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21790: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21790, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21798
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                & (((((0U == (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                               >> 3U))) 
                                      | (1U == (3U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                     | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                   | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21811
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                & (((((0U == (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                               >> 3U))) 
                                      | (1U == (3U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                     | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                   | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21814: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21814, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21822
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                & (0U == (0x60000000U 
                                          & (0x60000000U 
                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21835
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                & (0U == (0x60000000U 
                                          & (0x60000000U 
                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21838: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21838, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21846
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21859
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21862: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21862, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21870
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21883
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21886: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21886, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21894
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21907
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21910: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21910, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21918
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21931
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21934: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21934, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21942
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21955
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21958: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21958, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21966
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                 & (((((0U == (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                >> 3U))) 
                                       | (1U == (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                    >> 3U)))) 
                                      | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                                & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21979
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                 & (((((0U == (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                >> 3U))) 
                                       | (1U == (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                    >> 3U)))) 
                                      | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                                & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:21982: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 21982, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:21990
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22003
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22006: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22006, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22014
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22027
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22030: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22030, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22038
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22051
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22054: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22054, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22062
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22075
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22078: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22078, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22086
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                 & (((((0U == (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                >> 3U))) 
                                       | (1U == (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                    >> 3U)))) 
                                      | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                                & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22099
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                 & (((((0U == (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                >> 3U))) 
                                       | (1U == (3U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                    >> 3U)))) 
                                      | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                    | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                                & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                   & (0U == (0x60000000U 
                                             & (0x60000000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22102: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22102, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22110
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22123
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22126: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22126, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22134
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22147
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22150: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22150, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22158
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22171
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22174: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22174, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22182
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22195
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22198: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22198, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22206
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22219
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22222: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22222, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22230
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22243
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22246: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22246, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22254
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22267
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22270: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22270, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22278
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22291
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22294: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22294, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22302
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22315
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22318: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22318, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22326
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22339
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22342: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22342, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22350
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22363
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22366: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22366, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22374
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22387
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22390: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22390, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22398
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22411
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22414: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22414, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22422
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22435
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22438: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22438, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22446
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22459
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22462: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22462, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22470
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22483
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22486: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22486, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22494
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22507
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address 
                                                & (~ 
                                                   (0x7fffffU 
                                                    & ((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22510: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22510, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22518
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22531
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22534: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22534, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22542
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22555
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22558: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22558, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22566
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22579
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_0) 
                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                    [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2_1) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22582: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22582, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22590
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22603
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22606: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22606, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22614
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22627
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22630: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22630, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22638
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22651
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22654: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22654, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22662
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22675
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22678: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22678, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22686
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22699
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22702: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22702, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22710
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22723
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22726: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22726, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22734
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22747
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22750: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22750, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22758
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22771
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22774: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22774, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22782
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22795
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22798: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22798, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22806
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22819
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22822: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22822, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22830
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22843
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22846: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22846, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22854
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22867
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22870: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22870, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22878
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22891
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22894: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22894, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22902
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22915
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22918: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22918, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22926
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22939
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22942: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22942, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22950
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22963
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22966: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22966, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22974
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22987
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:22990: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 22990, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:22998
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23011
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                               >> 3U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                 >> 3U)))) 
                                | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                               | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23014: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23014, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23022
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23035
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23038: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23038, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23046
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23059
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23062: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23062, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23070
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23083
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23086: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23086, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23094
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23107
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23110: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23110, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23118
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23131
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23134: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23134, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23142
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23155
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_2_a_bits_address) 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23158: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23158, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23166
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23179
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23182: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23182, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23190
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23203
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23206: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23206, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23214
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23227
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23230: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23230, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23238
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23251
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23254: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23254, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23262
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23275
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23278: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23278, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23286
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                                           >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23299
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                                           >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                              | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23302: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23302, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23310
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23323
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23326: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23326, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23334
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23347
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23350: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23350, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23358
verbose&&done_reset        
    ) {
        __Vtemp5954[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5954[1U] = 0U;
        __Vtemp5954[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5955, __Vtemp5954);
        __Vtemp5960[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5960[1U] = 0U;
        __Vtemp5960[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5961, __Vtemp5960);
        __Vtemp5966[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5966[1U] = 0U;
        __Vtemp5966[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5967, __Vtemp5966);
        __Vtemp5972[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5972[1U] = 0U;
        __Vtemp5972[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5973, __Vtemp5972);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp5955[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp5961[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp5967[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp5973[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23371
done_reset        
    ) {
        __Vtemp5978[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5978[1U] = 0U;
        __Vtemp5978[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5979, __Vtemp5978);
        __Vtemp5984[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5984[1U] = 0U;
        __Vtemp5984[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5985, __Vtemp5984);
        __Vtemp5990[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5990[1U] = 0U;
        __Vtemp5990[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5991, __Vtemp5990);
        __Vtemp5996[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5996[1U] = 0U;
        __Vtemp5996[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5997, __Vtemp5996);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp5979[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp5985[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp5991[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp5997[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23374: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23374, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23382
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp6000, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 3U));
        __Vtemp6003[0U] = (0x7fU & (__Vtemp6000[0U] 
                                    >> 1U));
        __Vtemp6003[1U] = 0U;
        __Vtemp6003[2U] = 0U;
        __Vtemp6003[3U] = 0U;
        __Vtemp6003[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp6004, __Vtemp6003);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (0xffU & __Vtemp6004[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23395
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp6007, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 3U));
        __Vtemp6010[0U] = (0x7fU & (__Vtemp6007[0U] 
                                    >> 1U));
        __Vtemp6010[1U] = 0U;
        __Vtemp6010[2U] = 0U;
        __Vtemp6010[3U] = 0U;
        __Vtemp6010[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp6011, __Vtemp6010);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (0xffU & __Vtemp6011[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23398: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23398, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23406
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23417
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23420: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23420, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23428
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x7ffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                      ? 1U
                                                      : 0U)))
                                                 ? 
                                                (0x7ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23441
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x7ffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))
                                      : 0U) != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                      ? 1U
                                                      : 0U)))
                                                 ? 
                                                (0x7ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source)))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23444: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23444, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23452
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23465
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23468: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23468, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23476
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23489
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23492: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23492, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23500
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp6014, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 3U));
        __Vtemp6017[0U] = (0x7fU & (__Vtemp6014[0U] 
                                    >> 1U));
        __Vtemp6017[1U] = 0U;
        __Vtemp6017[2U] = 0U;
        __Vtemp6017[3U] = 0U;
        __Vtemp6017[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp6018, __Vtemp6017);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                              == (0xffU & __Vtemp6018[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:91:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23513
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp6021, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 3U));
        __Vtemp6024[0U] = (0x7fU & (__Vtemp6021[0U] 
                                    >> 1U));
        __Vtemp6024[1U] = 0U;
        __Vtemp6024[2U] = 0U;
        __Vtemp6024[3U] = 0U;
        __Vtemp6024[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp6025, __Vtemp6024);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                              == (0xffU & __Vtemp6025[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23516: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23516, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23524
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Ports.scala:91:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:23537
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:23540: Assertion failed in %NTestHarness.ldut.subsystem_sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 23540, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84096
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84109
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84112: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84112, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84120
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84133
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84136: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84136, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84144
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84157
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84160: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84160, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84168
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84181
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84184: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84184, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84192
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84205
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84208: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84208, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84216
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84229
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84232: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84232, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84240
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84253
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84256: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84256, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84264
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84277
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84280: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84280, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84288
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84301
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84304: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84304, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84312
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84325
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84328: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84328, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84336
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84349
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84352: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84352, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84360
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84373
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84376: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84376, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84384
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84397
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84400: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84400, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84408
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84421
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84424: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84424, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84432
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84445
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84448: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84448, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84456
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84469
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84472: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84472, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84480
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84493
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84496: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84496, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84504
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84517
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84520: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84520, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84528
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84541
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84544: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84544, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84552
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84565
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84568: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84568, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84576
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84589
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84592: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84592, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84600
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84613
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84616: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84616, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84624
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84637
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84640: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84640, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84648
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84661
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84664: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84664, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84672
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84685
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84688: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84688, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84696
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84709
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84712: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84712, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84720
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84733
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84736: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84736, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84744
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84757
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84760: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84760, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84768
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84781
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84784: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84784, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84792
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84805
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84808: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84808, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84816
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84829
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84832: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84832, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84840
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84853
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84856: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84856, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84864
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84877
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84880: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84880, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84888
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84901
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84904: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84904, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84912
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84925
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84928: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84928, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84936
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84949
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84952: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84952, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84960
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84973
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:84976: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 84976, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84984
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:84997
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85000: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85000, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85008
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85021
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85024: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85024, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85032
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85045
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85048: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85048, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85056
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85069
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85072: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85072, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85080
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85093
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85096: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85096, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85104
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85117
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85120: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85120, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85128
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85141
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85144: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85144, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85152
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85165
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85168: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85168, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85176
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85189
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85192: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85192, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85200
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85213
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85216: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85216, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85224
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85237
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85240: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85240, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85248
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85261
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85264: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85264, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85272
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85285
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_corrupt))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85288: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85288, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85296
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85309
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85312: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85312, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85320
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85333
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85336: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85336, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85344
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85357
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85360: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85360, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85368
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85381
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85384: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85384, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85392
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85405
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85408: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85408, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85416
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85429
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85432: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85432, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85440
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85453
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85456: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85456, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85464
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85477
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85480: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85480, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85488
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85501
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85504: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85504, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85512
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6026, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp6026[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85525
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6027, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp6027[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85528: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85528, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85536
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6028, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp6028[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85549
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6029, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp6029[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85552: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85552, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85560
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85573
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85576: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85576, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85584
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85597
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85600: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85600, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85608
verbose&&done_reset        
    ) {
        __Vtemp6034[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6034[1U] = 0U;
        __Vtemp6034[2U] = 0U;
        __Vtemp6034[3U] = 0U;
        __Vtemp6034[4U] = 0U;
        __Vtemp6034[5U] = 0U;
        __Vtemp6034[6U] = 0U;
        __Vtemp6034[7U] = 0U;
        __Vtemp6034[8U] = 0U;
        __Vtemp6034[9U] = 0U;
        __Vtemp6034[0xaU] = 0U;
        __Vtemp6034[0xbU] = 0U;
        __Vtemp6034[0xcU] = 0U;
        __Vtemp6034[0xdU] = 0U;
        __Vtemp6034[0xeU] = 0U;
        __Vtemp6034[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6035, __Vtemp6034);
        __Vtemp6040[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6040[1U] = 0U;
        __Vtemp6040[2U] = 0U;
        __Vtemp6040[3U] = 0U;
        __Vtemp6040[4U] = 0U;
        __Vtemp6040[5U] = 0U;
        __Vtemp6040[6U] = 0U;
        __Vtemp6040[7U] = 0U;
        __Vtemp6040[8U] = 0U;
        __Vtemp6040[9U] = 0U;
        __Vtemp6040[0xaU] = 0U;
        __Vtemp6040[0xbU] = 0U;
        __Vtemp6040[0xcU] = 0U;
        __Vtemp6040[0xdU] = 0U;
        __Vtemp6040[0xeU] = 0U;
        __Vtemp6040[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6041, __Vtemp6040);
        __Vtemp6046[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6046[1U] = 0U;
        __Vtemp6046[2U] = 0U;
        __Vtemp6046[3U] = 0U;
        __Vtemp6046[4U] = 0U;
        __Vtemp6046[5U] = 0U;
        __Vtemp6046[6U] = 0U;
        __Vtemp6046[7U] = 0U;
        __Vtemp6046[8U] = 0U;
        __Vtemp6046[9U] = 0U;
        __Vtemp6046[0xaU] = 0U;
        __Vtemp6046[0xbU] = 0U;
        __Vtemp6046[0xcU] = 0U;
        __Vtemp6046[0xdU] = 0U;
        __Vtemp6046[0xeU] = 0U;
        __Vtemp6046[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6047, __Vtemp6046);
        __Vtemp6052[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6052[1U] = 0U;
        __Vtemp6052[2U] = 0U;
        __Vtemp6052[3U] = 0U;
        __Vtemp6052[4U] = 0U;
        __Vtemp6052[5U] = 0U;
        __Vtemp6052[6U] = 0U;
        __Vtemp6052[7U] = 0U;
        __Vtemp6052[8U] = 0U;
        __Vtemp6052[9U] = 0U;
        __Vtemp6052[0xaU] = 0U;
        __Vtemp6052[0xbU] = 0U;
        __Vtemp6052[0xcU] = 0U;
        __Vtemp6052[0xdU] = 0U;
        __Vtemp6052[0xeU] = 0U;
        __Vtemp6052[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6053, __Vtemp6052);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp6035[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp6041[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp6047[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp6053[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85621
done_reset        
    ) {
        __Vtemp6058[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6058[1U] = 0U;
        __Vtemp6058[2U] = 0U;
        __Vtemp6058[3U] = 0U;
        __Vtemp6058[4U] = 0U;
        __Vtemp6058[5U] = 0U;
        __Vtemp6058[6U] = 0U;
        __Vtemp6058[7U] = 0U;
        __Vtemp6058[8U] = 0U;
        __Vtemp6058[9U] = 0U;
        __Vtemp6058[0xaU] = 0U;
        __Vtemp6058[0xbU] = 0U;
        __Vtemp6058[0xcU] = 0U;
        __Vtemp6058[0xdU] = 0U;
        __Vtemp6058[0xeU] = 0U;
        __Vtemp6058[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6059, __Vtemp6058);
        __Vtemp6064[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6064[1U] = 0U;
        __Vtemp6064[2U] = 0U;
        __Vtemp6064[3U] = 0U;
        __Vtemp6064[4U] = 0U;
        __Vtemp6064[5U] = 0U;
        __Vtemp6064[6U] = 0U;
        __Vtemp6064[7U] = 0U;
        __Vtemp6064[8U] = 0U;
        __Vtemp6064[9U] = 0U;
        __Vtemp6064[0xaU] = 0U;
        __Vtemp6064[0xbU] = 0U;
        __Vtemp6064[0xcU] = 0U;
        __Vtemp6064[0xdU] = 0U;
        __Vtemp6064[0xeU] = 0U;
        __Vtemp6064[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6065, __Vtemp6064);
        __Vtemp6070[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6070[1U] = 0U;
        __Vtemp6070[2U] = 0U;
        __Vtemp6070[3U] = 0U;
        __Vtemp6070[4U] = 0U;
        __Vtemp6070[5U] = 0U;
        __Vtemp6070[6U] = 0U;
        __Vtemp6070[7U] = 0U;
        __Vtemp6070[8U] = 0U;
        __Vtemp6070[9U] = 0U;
        __Vtemp6070[0xaU] = 0U;
        __Vtemp6070[0xbU] = 0U;
        __Vtemp6070[0xcU] = 0U;
        __Vtemp6070[0xdU] = 0U;
        __Vtemp6070[0xeU] = 0U;
        __Vtemp6070[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6071, __Vtemp6070);
        __Vtemp6076[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6076[1U] = 0U;
        __Vtemp6076[2U] = 0U;
        __Vtemp6076[3U] = 0U;
        __Vtemp6076[4U] = 0U;
        __Vtemp6076[5U] = 0U;
        __Vtemp6076[6U] = 0U;
        __Vtemp6076[7U] = 0U;
        __Vtemp6076[8U] = 0U;
        __Vtemp6076[9U] = 0U;
        __Vtemp6076[0xaU] = 0U;
        __Vtemp6076[0xbU] = 0U;
        __Vtemp6076[0xcU] = 0U;
        __Vtemp6076[0xdU] = 0U;
        __Vtemp6076[0xeU] = 0U;
        __Vtemp6076[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6077, __Vtemp6076);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp6059[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp6065[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp6071[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp6077[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85624: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85624, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85632
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6080, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp6083[0U] = (7U & (__Vtemp6080[0U] >> 1U));
        __Vtemp6083[1U] = 0U;
        __Vtemp6083[2U] = 0U;
        __Vtemp6083[3U] = 0U;
        __Vtemp6083[4U] = 0U;
        __Vtemp6083[5U] = 0U;
        __Vtemp6083[6U] = 0U;
        __Vtemp6083[7U] = 0U;
        __Vtemp6083[8U] = 0U;
        __Vtemp6083[9U] = 0U;
        __Vtemp6083[0xaU] = 0U;
        __Vtemp6083[0xbU] = 0U;
        __Vtemp6083[0xcU] = 0U;
        __Vtemp6083[0xdU] = 0U;
        __Vtemp6083[0xeU] = 0U;
        __Vtemp6083[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6084, __Vtemp6083);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & __Vtemp6084[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85645
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6087, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp6090[0U] = (7U & (__Vtemp6087[0U] >> 1U));
        __Vtemp6090[1U] = 0U;
        __Vtemp6090[2U] = 0U;
        __Vtemp6090[3U] = 0U;
        __Vtemp6090[4U] = 0U;
        __Vtemp6090[5U] = 0U;
        __Vtemp6090[6U] = 0U;
        __Vtemp6090[7U] = 0U;
        __Vtemp6090[8U] = 0U;
        __Vtemp6090[9U] = 0U;
        __Vtemp6090[0xaU] = 0U;
        __Vtemp6090[0xbU] = 0U;
        __Vtemp6090[0xcU] = 0U;
        __Vtemp6090[0xdU] = 0U;
        __Vtemp6090[0xeU] = 0U;
        __Vtemp6090[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6091, __Vtemp6090);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                == (0xfU & __Vtemp6091[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85648: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85648, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85656
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85667
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85670: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85670, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85678
verbose&&done_reset        
    ) {
        __Vtemp6092[0U] = 1U;
        __Vtemp6092[1U] = 0U;
        __Vtemp6092[2U] = 0U;
        __Vtemp6092[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp6093, __Vtemp6092, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6093[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp6093[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp6093[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6093[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85691
done_reset        
    ) {
        __Vtemp6097[0U] = 1U;
        __Vtemp6097[1U] = 0U;
        __Vtemp6097[2U] = 0U;
        __Vtemp6097[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp6098, __Vtemp6097, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6098[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp6098[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp6098[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6098[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85694: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85694, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85702
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85715
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85718: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85718, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85726
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6102, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp6102[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85739
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6103, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp6103[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85742: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85742, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85750
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6106, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp6109[0U] = (7U & (__Vtemp6106[0U] >> 1U));
        __Vtemp6109[1U] = 0U;
        __Vtemp6109[2U] = 0U;
        __Vtemp6109[3U] = 0U;
        __Vtemp6109[4U] = 0U;
        __Vtemp6109[5U] = 0U;
        __Vtemp6109[6U] = 0U;
        __Vtemp6109[7U] = 0U;
        __Vtemp6109[8U] = 0U;
        __Vtemp6109[9U] = 0U;
        __Vtemp6109[0xaU] = 0U;
        __Vtemp6109[0xbU] = 0U;
        __Vtemp6109[0xcU] = 0U;
        __Vtemp6109[0xdU] = 0U;
        __Vtemp6109[0xeU] = 0U;
        __Vtemp6109[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6110, __Vtemp6109);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                              == (0xfU & __Vtemp6110[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Ports.scala:59:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85763
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6113, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                       << 2U));
        __Vtemp6116[0U] = (7U & (__Vtemp6113[0U] >> 1U));
        __Vtemp6116[1U] = 0U;
        __Vtemp6116[2U] = 0U;
        __Vtemp6116[3U] = 0U;
        __Vtemp6116[4U] = 0U;
        __Vtemp6116[5U] = 0U;
        __Vtemp6116[6U] = 0U;
        __Vtemp6116[7U] = 0U;
        __Vtemp6116[8U] = 0U;
        __Vtemp6116[9U] = 0U;
        __Vtemp6116[0xaU] = 0U;
        __Vtemp6116[0xbU] = 0U;
        __Vtemp6116[0xcU] = 0U;
        __Vtemp6116[0xdU] = 0U;
        __Vtemp6116[0xeU] = 0U;
        __Vtemp6116[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6117, __Vtemp6116);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                              == (0xfU & __Vtemp6117[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85766: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85766, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85774
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Ports.scala:59:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:85787
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:85790: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 85790, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77503
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77516
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77519: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77519, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77527
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77540
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77543: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77543, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77551
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77564
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77567: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77567, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77575
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77588
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77591: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77591, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77599
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77612
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77615: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77615, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77623
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77636
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77639: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77639, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77647
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77660
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77663: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77663, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77671
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77684
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77687: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77687, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77695
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77708
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77711: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77711, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77719
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77732
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77735: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77735, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77743
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77756
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77759: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77759, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77767
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77780
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77783: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77783, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77791
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77804
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77807: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77807, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77815
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77828
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77831: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77831, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77839
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77852
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77855: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77855, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77863
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77876
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77879: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77879, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77887
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77900
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77903: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77903, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77911
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77924
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77927: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77927, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77935
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77948
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77951: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77951, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77959
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77972
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77975: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77975, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77983
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:77996
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:77999: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 77999, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78007
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78020
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                                & (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78023: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78023, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78031
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78044
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78047: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78047, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78055
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78068
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78071: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78071, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78079
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78092
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78095: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78095, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78103
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78116
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78119: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78119, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78127
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78140
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78143: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78143, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78151
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78164
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78167: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78167, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78175
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78188
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78191: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78191, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78199
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78212
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78215: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78215, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78223
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78236
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78239: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78239, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78247
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78260
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78263: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78263, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78271
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78284
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78287: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78287, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78295
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78308
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78311: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78311, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78319
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78332
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                                & (~ 
                                                   (0x1fffU 
                                                    & ((IData)(0x3fU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78335: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78335, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78343
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78356
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78359: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78359, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78367
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78380
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78383: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78383, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78391
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78404
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78407: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78407, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78415
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78428
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78431: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78431, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78439
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78452
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78455: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78455, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78463
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78476
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78479: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78479, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78487
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78500
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78503: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78503, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78511
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78524
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78527: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78527, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78535
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78548
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78551: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78551, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78559
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78572
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78575: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78575, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78583
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78596
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78599: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78599, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78607
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78620
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78623: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78623, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78631
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78644
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78647: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78647, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78655
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78668
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78671: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78671, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78679
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78692
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78695: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78695, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78703
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78716
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78719: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78719, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78727
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78740
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78743: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78743, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78751
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78764
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78767: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78767, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78775
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78788
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78791: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78791, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78799
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78812
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78815: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78815, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78823
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78836
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78839: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78839, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78847
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78860
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78863: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78863, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78871
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78884
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78887: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78887, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78895
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78908
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78911: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78911, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78919
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6118, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp6118[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78932
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6119, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp6119[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78935: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78935, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78943
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6120, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp6120[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78956
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6121, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp6121[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78959: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78959, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78967
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78980
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:78983: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 78983, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:78991
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79004
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79007: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79007, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79015
verbose&&done_reset        
    ) {
        __Vtemp6126[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6126[1U] = 0U;
        __Vtemp6126[2U] = 0U;
        __Vtemp6126[3U] = 0U;
        __Vtemp6126[4U] = 0U;
        __Vtemp6126[5U] = 0U;
        __Vtemp6126[6U] = 0U;
        __Vtemp6126[7U] = 0U;
        __Vtemp6126[8U] = 0U;
        __Vtemp6126[9U] = 0U;
        __Vtemp6126[0xaU] = 0U;
        __Vtemp6126[0xbU] = 0U;
        __Vtemp6126[0xcU] = 0U;
        __Vtemp6126[0xdU] = 0U;
        __Vtemp6126[0xeU] = 0U;
        __Vtemp6126[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6127, __Vtemp6126);
        __Vtemp6132[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6132[1U] = 0U;
        __Vtemp6132[2U] = 0U;
        __Vtemp6132[3U] = 0U;
        __Vtemp6132[4U] = 0U;
        __Vtemp6132[5U] = 0U;
        __Vtemp6132[6U] = 0U;
        __Vtemp6132[7U] = 0U;
        __Vtemp6132[8U] = 0U;
        __Vtemp6132[9U] = 0U;
        __Vtemp6132[0xaU] = 0U;
        __Vtemp6132[0xbU] = 0U;
        __Vtemp6132[0xcU] = 0U;
        __Vtemp6132[0xdU] = 0U;
        __Vtemp6132[0xeU] = 0U;
        __Vtemp6132[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6133, __Vtemp6132);
        __Vtemp6138[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6138[1U] = 0U;
        __Vtemp6138[2U] = 0U;
        __Vtemp6138[3U] = 0U;
        __Vtemp6138[4U] = 0U;
        __Vtemp6138[5U] = 0U;
        __Vtemp6138[6U] = 0U;
        __Vtemp6138[7U] = 0U;
        __Vtemp6138[8U] = 0U;
        __Vtemp6138[9U] = 0U;
        __Vtemp6138[0xaU] = 0U;
        __Vtemp6138[0xbU] = 0U;
        __Vtemp6138[0xcU] = 0U;
        __Vtemp6138[0xdU] = 0U;
        __Vtemp6138[0xeU] = 0U;
        __Vtemp6138[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6139, __Vtemp6138);
        __Vtemp6144[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6144[1U] = 0U;
        __Vtemp6144[2U] = 0U;
        __Vtemp6144[3U] = 0U;
        __Vtemp6144[4U] = 0U;
        __Vtemp6144[5U] = 0U;
        __Vtemp6144[6U] = 0U;
        __Vtemp6144[7U] = 0U;
        __Vtemp6144[8U] = 0U;
        __Vtemp6144[9U] = 0U;
        __Vtemp6144[0xaU] = 0U;
        __Vtemp6144[0xbU] = 0U;
        __Vtemp6144[0xcU] = 0U;
        __Vtemp6144[0xdU] = 0U;
        __Vtemp6144[0xeU] = 0U;
        __Vtemp6144[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6145, __Vtemp6144);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp6127[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp6133[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp6139[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp6145[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79028
done_reset        
    ) {
        __Vtemp6150[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6150[1U] = 0U;
        __Vtemp6150[2U] = 0U;
        __Vtemp6150[3U] = 0U;
        __Vtemp6150[4U] = 0U;
        __Vtemp6150[5U] = 0U;
        __Vtemp6150[6U] = 0U;
        __Vtemp6150[7U] = 0U;
        __Vtemp6150[8U] = 0U;
        __Vtemp6150[9U] = 0U;
        __Vtemp6150[0xaU] = 0U;
        __Vtemp6150[0xbU] = 0U;
        __Vtemp6150[0xcU] = 0U;
        __Vtemp6150[0xdU] = 0U;
        __Vtemp6150[0xeU] = 0U;
        __Vtemp6150[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6151, __Vtemp6150);
        __Vtemp6156[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6156[1U] = 0U;
        __Vtemp6156[2U] = 0U;
        __Vtemp6156[3U] = 0U;
        __Vtemp6156[4U] = 0U;
        __Vtemp6156[5U] = 0U;
        __Vtemp6156[6U] = 0U;
        __Vtemp6156[7U] = 0U;
        __Vtemp6156[8U] = 0U;
        __Vtemp6156[9U] = 0U;
        __Vtemp6156[0xaU] = 0U;
        __Vtemp6156[0xbU] = 0U;
        __Vtemp6156[0xcU] = 0U;
        __Vtemp6156[0xdU] = 0U;
        __Vtemp6156[0xeU] = 0U;
        __Vtemp6156[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6157, __Vtemp6156);
        __Vtemp6162[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6162[1U] = 0U;
        __Vtemp6162[2U] = 0U;
        __Vtemp6162[3U] = 0U;
        __Vtemp6162[4U] = 0U;
        __Vtemp6162[5U] = 0U;
        __Vtemp6162[6U] = 0U;
        __Vtemp6162[7U] = 0U;
        __Vtemp6162[8U] = 0U;
        __Vtemp6162[9U] = 0U;
        __Vtemp6162[0xaU] = 0U;
        __Vtemp6162[0xbU] = 0U;
        __Vtemp6162[0xcU] = 0U;
        __Vtemp6162[0xdU] = 0U;
        __Vtemp6162[0xeU] = 0U;
        __Vtemp6162[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6163, __Vtemp6162);
        __Vtemp6168[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp6168[1U] = 0U;
        __Vtemp6168[2U] = 0U;
        __Vtemp6168[3U] = 0U;
        __Vtemp6168[4U] = 0U;
        __Vtemp6168[5U] = 0U;
        __Vtemp6168[6U] = 0U;
        __Vtemp6168[7U] = 0U;
        __Vtemp6168[8U] = 0U;
        __Vtemp6168[9U] = 0U;
        __Vtemp6168[0xaU] = 0U;
        __Vtemp6168[0xbU] = 0U;
        __Vtemp6168[0xcU] = 0U;
        __Vtemp6168[0xdU] = 0U;
        __Vtemp6168[0xeU] = 0U;
        __Vtemp6168[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6169, __Vtemp6168);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp6151[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp6157[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp6163[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp6169[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79031: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79031, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79039
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6172, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp6175[0U] = (7U & (__Vtemp6172[0U] >> 1U));
        __Vtemp6175[1U] = 0U;
        __Vtemp6175[2U] = 0U;
        __Vtemp6175[3U] = 0U;
        __Vtemp6175[4U] = 0U;
        __Vtemp6175[5U] = 0U;
        __Vtemp6175[6U] = 0U;
        __Vtemp6175[7U] = 0U;
        __Vtemp6175[8U] = 0U;
        __Vtemp6175[9U] = 0U;
        __Vtemp6175[0xaU] = 0U;
        __Vtemp6175[0xbU] = 0U;
        __Vtemp6175[0xcU] = 0U;
        __Vtemp6175[0xdU] = 0U;
        __Vtemp6175[0xeU] = 0U;
        __Vtemp6175[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6176, __Vtemp6175);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (0xfU & __Vtemp6176[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79052
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6179, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp6182[0U] = (7U & (__Vtemp6179[0U] >> 1U));
        __Vtemp6182[1U] = 0U;
        __Vtemp6182[2U] = 0U;
        __Vtemp6182[3U] = 0U;
        __Vtemp6182[4U] = 0U;
        __Vtemp6182[5U] = 0U;
        __Vtemp6182[6U] = 0U;
        __Vtemp6182[7U] = 0U;
        __Vtemp6182[8U] = 0U;
        __Vtemp6182[9U] = 0U;
        __Vtemp6182[0xaU] = 0U;
        __Vtemp6182[0xbU] = 0U;
        __Vtemp6182[0xcU] = 0U;
        __Vtemp6182[0xdU] = 0U;
        __Vtemp6182[0xeU] = 0U;
        __Vtemp6182[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6183, __Vtemp6182);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (0xfU & __Vtemp6183[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79055: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79055, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79063
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79074
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79077: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79077, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79085
verbose&&done_reset        
    ) {
        __Vtemp6184[0U] = 1U;
        __Vtemp6184[1U] = 0U;
        __Vtemp6184[2U] = 0U;
        __Vtemp6184[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp6185, __Vtemp6184, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6185[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp6185[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp6185[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6185[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79098
done_reset        
    ) {
        __Vtemp6189[0U] = 1U;
        __Vtemp6189[1U] = 0U;
        __Vtemp6189[2U] = 0U;
        __Vtemp6189[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp6190, __Vtemp6189, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6190[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp6190[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp6190[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp6190[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79101: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79101, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79109
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79122
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79125: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79125, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79133
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6194, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp6194[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79146
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp6195, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp6195[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79149: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79149, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79157
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6198, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp6201[0U] = (7U & (__Vtemp6198[0U] >> 1U));
        __Vtemp6201[1U] = 0U;
        __Vtemp6201[2U] = 0U;
        __Vtemp6201[3U] = 0U;
        __Vtemp6201[4U] = 0U;
        __Vtemp6201[5U] = 0U;
        __Vtemp6201[6U] = 0U;
        __Vtemp6201[7U] = 0U;
        __Vtemp6201[8U] = 0U;
        __Vtemp6201[9U] = 0U;
        __Vtemp6201[0xaU] = 0U;
        __Vtemp6201[0xbU] = 0U;
        __Vtemp6201[0xcU] = 0U;
        __Vtemp6201[0xdU] = 0U;
        __Vtemp6201[0xeU] = 0U;
        __Vtemp6201[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6202, __Vtemp6201);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                              == (0xfU & __Vtemp6202[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79170
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp6205, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp6208[0U] = (7U & (__Vtemp6205[0U] >> 1U));
        __Vtemp6208[1U] = 0U;
        __Vtemp6208[2U] = 0U;
        __Vtemp6208[3U] = 0U;
        __Vtemp6208[4U] = 0U;
        __Vtemp6208[5U] = 0U;
        __Vtemp6208[6U] = 0U;
        __Vtemp6208[7U] = 0U;
        __Vtemp6208[8U] = 0U;
        __Vtemp6208[9U] = 0U;
        __Vtemp6208[0xaU] = 0U;
        __Vtemp6208[0xbU] = 0U;
        __Vtemp6208[0xcU] = 0U;
        __Vtemp6208[0xdU] = 0U;
        __Vtemp6208[0xeU] = 0U;
        __Vtemp6208[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp6209, __Vtemp6208);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                              == (0xfU & __Vtemp6209[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79173: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79173, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79181
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:79194
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:79197: Assertion failed in %NTestHarness.ldut.subsystem_mbus.fixer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 79197, "");
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_2)
                             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) ? (~ (0xfffffU 
                                                   & (((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                      >> 3U)))
                                 : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_1)
                             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) ? (~ (0xfffffU 
                                                   & (((IData)(0xffU) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                      >> 3U)))
                                 : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
}
