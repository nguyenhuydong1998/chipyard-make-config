// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__83(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__83\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___inflight_sizes_T_5));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param_3 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size_3 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__address_2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_3 
            = (0x10U | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_3 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___c_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__87(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__87\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp5112[4];
    WData/*127:0*/ __Vtemp5113[4];
    WData/*127:0*/ __Vtemp5114[4];
    WData/*127:0*/ __Vtemp5115[4];
    WData/*511:0*/ __Vtemp5120[16];
    WData/*511:0*/ __Vtemp5121[16];
    WData/*511:0*/ __Vtemp5126[16];
    WData/*511:0*/ __Vtemp5127[16];
    WData/*511:0*/ __Vtemp5132[16];
    WData/*511:0*/ __Vtemp5133[16];
    WData/*511:0*/ __Vtemp5138[16];
    WData/*511:0*/ __Vtemp5139[16];
    WData/*511:0*/ __Vtemp5144[16];
    WData/*511:0*/ __Vtemp5145[16];
    WData/*511:0*/ __Vtemp5150[16];
    WData/*511:0*/ __Vtemp5151[16];
    WData/*511:0*/ __Vtemp5156[16];
    WData/*511:0*/ __Vtemp5157[16];
    WData/*511:0*/ __Vtemp5162[16];
    WData/*511:0*/ __Vtemp5163[16];
    WData/*511:0*/ __Vtemp5166[16];
    WData/*511:0*/ __Vtemp5169[16];
    WData/*511:0*/ __Vtemp5170[16];
    WData/*511:0*/ __Vtemp5173[16];
    WData/*511:0*/ __Vtemp5176[16];
    WData/*511:0*/ __Vtemp5177[16];
    WData/*127:0*/ __Vtemp5178[4];
    WData/*127:0*/ __Vtemp5179[4];
    WData/*127:0*/ __Vtemp5183[4];
    WData/*127:0*/ __Vtemp5184[4];
    WData/*127:0*/ __Vtemp5188[4];
    WData/*127:0*/ __Vtemp5189[4];
    WData/*511:0*/ __Vtemp5192[16];
    WData/*511:0*/ __Vtemp5195[16];
    WData/*511:0*/ __Vtemp5196[16];
    WData/*511:0*/ __Vtemp5199[16];
    WData/*511:0*/ __Vtemp5202[16];
    WData/*511:0*/ __Vtemp5203[16];
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
        = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
        = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:138645
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb) 
                         & (~ (((~ (IData)((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U] 
                                                         >> 0x1dU)))))) 
                                | ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U] 
                                          >> 0x1cU)) 
                                   == (0xfffffU == 
                                       (0xfffffU & 
                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U])))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at FPU.scala:800 assert(consistent(wdata))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:138656
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb) 
                         & (~ (((~ (IData)((7U == (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U] 
                                                         >> 0x1dU)))))) 
                                | ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U] 
                                          >> 0x1cU)) 
                                   == (0xfffffU == 
                                       (0xfffffU & 
                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata[1U])))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:138659: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.fpuOpt\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 138659, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:138667
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
                               & (~ (((~ (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                         >> 0x1dU)))))) 
                                      | ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                >> 0x1cU)) 
                                         == (0xfffffU 
                                             == (0xfffffU 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U])))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at FPU.scala:938 assert(consistent(wdata))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:138678
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)) 
                               & (~ (((~ (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                         >> 0x1dU)))))) 
                                      | ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                                >> 0x1cU)) 
                                         == (0xfffffU 
                                             == (0xfffffU 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_1[1U])))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:138681: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.fpuOpt\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 138681, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U];
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U];
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U];
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:143969
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((0U < vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
                         & (~ ((((0xffffffc0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1) 
                                                 << 6U)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1)) 
                                < vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Timeout exceeded: Kill the emulation after INT rdtime cycles. Off if 0.\n    at PlusArg.scala:64 assert (io.count < max, s\"Timeout exceeded: $docstring\")\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:143982
done_reset        
    ) {
        if (VL_UNLIKELY(((0U < vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
                         & (~ ((((0xffffffc0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1) 
                                                 << 6U)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1)) 
                                < vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:143985: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.core.PlusArgTimeout\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 143985, "");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49312
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0)) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))) 
                                     & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))) 
                                        | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)))) 
                                    & ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2))) 
                                       | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)))) 
                                   & ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3))) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49326
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0)) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))) 
                                     & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))) 
                                        | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)))) 
                                    & ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2))) 
                                       | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)))) 
                                   & ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3))) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:49330: Assertion failed in %NTestHarness.ldut.subsystem_cbus.out_xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 49330, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49338
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49352
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:49356: Assertion failed in %NTestHarness.ldut.subsystem_cbus.out_xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 49356, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49364
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49377
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:49380: Assertion failed in %NTestHarness.ldut.subsystem_cbus.out_xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 49380, "");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:41046
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_w_ready) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                          & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid))))) 
                                   | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:169 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:41059
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_w_ready) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                          & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid))))) 
                                   | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:41062: Assertion failed in %NTestHarness.ldut.subsystem_fbus_coupler_from_port_named_slave_port_axi4.axi4frag\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 41062, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:41070
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                        & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid)))) 
                                    | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last
                                          [0U]))) | 
                                   (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:178 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:41082
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                        & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid)))) 
                                    | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last
                                          [0U]))) | 
                                   (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:41085: Assertion failed in %NTestHarness.ldut.subsystem_fbus_coupler_from_port_named_slave_port_axi4.axi4frag\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 41085, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:69824
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:69836
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:69839: Assertion failed in %NTestHarness.ldut.subsystem_cbus.coupler_to_clint.fragmenter\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 69839, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:69847
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:69860
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:69863: Assertion failed in %NTestHarness.ldut.subsystem_cbus.coupler_to_clint.fragmenter\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 69863, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:40157
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__maybe_full))) 
                                   | ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                                              ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__ram_id
                                             [0U] : 
                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              >> 3U)))
                                       ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full))))
                                       : (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:63 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:40170
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__maybe_full))) 
                                   | ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                                              ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__ram_id
                                             [0U] : 
                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              >> 3U)))
                                       ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full))))
                                       : (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:40173: Assertion failed in %NTestHarness.ldut.subsystem_fbus_coupler_from_port_named_slave_port_axi4.axi4yank\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 40173, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:40181
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)
                                       ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full))))
                                       : (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:84 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:40194
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_in_b_valid)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_io_deq_bits_id)
                                       ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full))))
                                       : (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:40197: Assertion failed in %NTestHarness.ldut.subsystem_fbus_coupler_from_port_named_slave_port_axi4.axi4yank\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 40197, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_tag 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101172
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__counter_2))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__idle) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:438 assert (idle)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101183
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__counter_2))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__idle) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:101186: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 101186, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101194
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_15)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_54)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__last)) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__sent_d)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:459 assert (!sent_d)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101205
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_15)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_54)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__last)) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__sent_d)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:101208: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 101208, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101216
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_io_deq_bits_MPORT_data)) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty))) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__got_e)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:463 assert (!got_e)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101227
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_io_deq_bits_MPORT_data)) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty))) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__got_e)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:101230: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 101230, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101238
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_probenack) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_probedack)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__count) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:468 assert (count > 0.U)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:101249
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_probenack) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_probedack)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__count) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:101252: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 101252, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102249
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__counter_2))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__idle) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:438 assert (idle)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102260
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__counter_2))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__idle) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:102263: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker_3\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 102263, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102271
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1) 
                             >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_15)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_54)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__last)) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:459 assert (!sent_d)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102282
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1) 
                             >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_15)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_54)) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__last)) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:102285: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker_3\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 102285, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102293
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_io_deq_bits_MPORT_data)) 
                                 >> 3U) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty))) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__got_e)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:463 assert (!got_e)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102304
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_io_deq_bits_MPORT_data)) 
                                 >> 3U) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty))) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__got_e)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:102307: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker_3\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 102307, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102315
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_probenack) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_probedack)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__count) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:468 assert (count > 0.U)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:102326
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_probenack) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_probedack)) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__count) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:102329: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1.TLBroadcastTracker_3\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 102329, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:128184
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size)) 
                                | ((0x7ffffffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                          >> 0xcU))) 
                                   == (0x7ffffffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                             >> 0xcU))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at TLB.scala:385 assert(!io.sfence.bits.rs1 || (io.sfence.bits.addr >> pgIdxBits) === vpn)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:128197
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size)) 
                                | ((0x7ffffffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                          >> 0xcU))) 
                                   == (0x7ffffffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                             >> 0xcU))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:128200: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.frontend.tlb\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 128200, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:146336
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_retire) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_trace_0_exception)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"C0: %10# [%1#] pc=[%x] W[r%2#=%x][%1#] R[r%2#=%x] R[r%2#=%x] inst=[%x] DASM(%x)\n",
                       32,((0xffffffc0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1) 
                                           << 6U)) 
                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1)),
                       1,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_retire) 
                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_trace_0_exception)) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_trace_0_exception))),
                       64,(((QData)((IData)(((1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc 
                                                            >> 0x27U)))
                                              ? 0xffffffU
                                              : 0U))) 
                            << 0x28U) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_pc),
                       5,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd) 
                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wfd))
                           ? (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 7U)) : 0U),
                       64,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_wen) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_set_sboard)))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_wdata
                            : VL_ULL(0)),1,((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_wen) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_set_sboard))),
                       5,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rxs1) 
                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rfs1))
                           ? (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0xfU)) : 0U),
                       64,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rxs1) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rfs1))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__coreMonitorBundle_rd0val_REG
                            : VL_ULL(0)),5,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rxs2) 
                                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rfs2))
                                             ? (0x1fU 
                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                   >> 0x14U))
                                             : 0U),
                       64,(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rxs2) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rfs2))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__coreMonitorBundle_rd1val_REG
                            : VL_ULL(0)),32,((((3U 
                                                == 
                                                (3U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_raw_inst))
                                                ? (0xffffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x10U))
                                                : 0U) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_raw_inst)),
                       32,((((3U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_raw_inst))
                              ? (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x10U))
                              : 0U) << 0x10U) | (0xffffU 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_raw_inst)));
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103662
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid)) 
                                    | (1U != (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                               >> 5U)))) 
                                   | (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                              ? 1U : 0U))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:125 assert (!out.d.valid || !d_drop || out.d.bits.opcode === TLMessages.AccessAck)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103675
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid)) 
                                    | (1U != (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                               >> 5U)))) 
                                   | (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                              ? 1U : 0U))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103678: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103678, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103686
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid)) 
                                   | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1)) 
                                      | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_bits_opcode)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Broadcast.scala:137 assert (!d_normal.valid || (d_trackerOH.orR() || d_normal.bits.opcode === TLMessages.ReleaseAck))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103699
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid)) 
                                   | ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_1)) 
                                      | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_bits_opcode)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103702: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103702, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103710
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner___05F1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103723
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner___05F1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103726: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103726, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103734
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner___05F1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103747
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner___05F1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103750: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103750, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103758
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_213)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103771
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_earlyValid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_213)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103774: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103774, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103782
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid)) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1))) 
                                     & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1))) 
                                        | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)))) 
                                    & ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2))) 
                                       | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3)))) 
                                   & ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3))) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_4)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103796
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid)) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1))) 
                                     & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1))) 
                                        | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)))) 
                                    & ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2))) 
                                       | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3)))) 
                                   & ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3))) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_4)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103800: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103800, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103808
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_out_a_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1_io_out_a_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2_io_out_a_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_out_a_valid))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103822
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_out_a_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1_io_out_a_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2_io_out_a_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_out_a_valid))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3)) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103826: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103826, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103834
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_out_a_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1_io_out_a_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2_io_out_a_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_out_a_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_281)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:103847
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_io_out_a_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1_io_out_a_valid)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2_io_out_a_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3_io_out_a_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_281)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:103850: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.broadcast_1\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 103850, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:191994
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_aw_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_aw_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192005
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_aw_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_aw_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:192008: Assertion failed in %NTestHarness.mem.axi4xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 192008, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192016
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_ar_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_ar_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192027
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_ar_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank_auto_out_ar_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:192030: Assertion failed in %NTestHarness.mem.axi4xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 192030, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192038
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192049
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:192052: Assertion failed in %NTestHarness.mem.axi4xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 192052, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192060
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:192071
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid)) 
                                  | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:192074: Assertion failed in %NTestHarness.mem.axi4xbar\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 192074, "");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1;
    vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value 
        = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104350
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104363
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104366: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104366, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104374
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104387
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104390: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104390, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104398
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104411
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104414: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104414, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104422
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104435
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104438: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104438, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104446
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104459
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104462: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104462, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104470
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104483
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104486: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104486, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104494
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104507
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104510: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104510, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104518
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104531
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104534: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104534, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104542
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104555
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104558: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104558, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104566
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104579
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104582: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104582, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104590
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104603
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104606: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104606, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104614
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104627
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104630: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104630, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104638
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104651
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104654: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104654, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104662
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104675
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104678: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104678, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104686
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104699
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104702: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104702, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104710
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104723
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104726: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104726, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104734
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104747
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104750: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104750, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104758
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104771
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104774: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104774, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104782
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104795
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104798: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104798, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104806
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104819
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104822: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104822, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104830
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104843
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104846: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104846, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104854
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104867
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104870: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104870, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104878
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104891
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104894: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104894, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104902
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104915
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104918: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104918, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104926
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104939
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104942: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104942, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104950
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104963
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104966: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104966, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104974
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104987
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:104990: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 104990, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:104998
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105011
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105014: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105014, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105022
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105035
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105038: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105038, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105046
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105059
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105062: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105062, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105070
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105083
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105086: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105086, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105094
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105107
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105110: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105110, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105118
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105131
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105134: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105134, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105142
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105155
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105158: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105158, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105166
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
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105179
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
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105182: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105182, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105190
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105203
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105206: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105206, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105214
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105227
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105230: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105230, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105238
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105251
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                         & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                        ? 1U : 0U)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105254: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105254, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105262
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105275
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105278: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105278, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105286
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105299
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105302: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105302, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105310
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105323
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105326: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105326, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105334
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105347
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105350: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105350, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105358
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105371
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105374: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105374, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105382
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105395
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105398: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105398, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105406
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105419
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105422: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105422, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105430
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105443
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105446: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105446, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105454
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105467
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105470: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105470, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105478
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105491
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105494: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105494, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105502
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105515
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105518: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105518, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105526
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105539
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105542: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105542, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105550
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105563
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105566: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105566, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105574
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105587
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105590: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105590, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105598
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105611
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105614: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105614, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105622
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105635
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105638: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105638, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105646
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105659
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105662: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105662, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105670
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105683
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105686: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105686, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105694
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105707
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105710: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105710, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105718
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105731
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105734: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105734, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105742
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105755
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105758: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105758, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105766
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5112, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp5112[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105779
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5113, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ __Vtemp5113[0U]) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105782: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105782, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105790
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5114, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp5114[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105803
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5115, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ ((__Vtemp5115[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105806: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105806, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105814
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
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
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105827
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
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
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105830: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105830, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105838
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105851
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105854: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105854, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105862
verbose&&done_reset        
    ) {
        __Vtemp5120[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5120[1U] = 0U;
        __Vtemp5120[2U] = 0U;
        __Vtemp5120[3U] = 0U;
        __Vtemp5120[4U] = 0U;
        __Vtemp5120[5U] = 0U;
        __Vtemp5120[6U] = 0U;
        __Vtemp5120[7U] = 0U;
        __Vtemp5120[8U] = 0U;
        __Vtemp5120[9U] = 0U;
        __Vtemp5120[0xaU] = 0U;
        __Vtemp5120[0xbU] = 0U;
        __Vtemp5120[0xcU] = 0U;
        __Vtemp5120[0xdU] = 0U;
        __Vtemp5120[0xeU] = 0U;
        __Vtemp5120[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5121, __Vtemp5120);
        __Vtemp5126[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5126[1U] = 0U;
        __Vtemp5126[2U] = 0U;
        __Vtemp5126[3U] = 0U;
        __Vtemp5126[4U] = 0U;
        __Vtemp5126[5U] = 0U;
        __Vtemp5126[6U] = 0U;
        __Vtemp5126[7U] = 0U;
        __Vtemp5126[8U] = 0U;
        __Vtemp5126[9U] = 0U;
        __Vtemp5126[0xaU] = 0U;
        __Vtemp5126[0xbU] = 0U;
        __Vtemp5126[0xcU] = 0U;
        __Vtemp5126[0xdU] = 0U;
        __Vtemp5126[0xeU] = 0U;
        __Vtemp5126[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5127, __Vtemp5126);
        __Vtemp5132[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5132[1U] = 0U;
        __Vtemp5132[2U] = 0U;
        __Vtemp5132[3U] = 0U;
        __Vtemp5132[4U] = 0U;
        __Vtemp5132[5U] = 0U;
        __Vtemp5132[6U] = 0U;
        __Vtemp5132[7U] = 0U;
        __Vtemp5132[8U] = 0U;
        __Vtemp5132[9U] = 0U;
        __Vtemp5132[0xaU] = 0U;
        __Vtemp5132[0xbU] = 0U;
        __Vtemp5132[0xcU] = 0U;
        __Vtemp5132[0xdU] = 0U;
        __Vtemp5132[0xeU] = 0U;
        __Vtemp5132[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5133, __Vtemp5132);
        __Vtemp5138[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5138[1U] = 0U;
        __Vtemp5138[2U] = 0U;
        __Vtemp5138[3U] = 0U;
        __Vtemp5138[4U] = 0U;
        __Vtemp5138[5U] = 0U;
        __Vtemp5138[6U] = 0U;
        __Vtemp5138[7U] = 0U;
        __Vtemp5138[8U] = 0U;
        __Vtemp5138[9U] = 0U;
        __Vtemp5138[0xaU] = 0U;
        __Vtemp5138[0xbU] = 0U;
        __Vtemp5138[0xcU] = 0U;
        __Vtemp5138[0xdU] = 0U;
        __Vtemp5138[0xeU] = 0U;
        __Vtemp5138[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5139, __Vtemp5138);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp5121[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp5127[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp5133[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp5139[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105875
done_reset        
    ) {
        __Vtemp5144[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5144[1U] = 0U;
        __Vtemp5144[2U] = 0U;
        __Vtemp5144[3U] = 0U;
        __Vtemp5144[4U] = 0U;
        __Vtemp5144[5U] = 0U;
        __Vtemp5144[6U] = 0U;
        __Vtemp5144[7U] = 0U;
        __Vtemp5144[8U] = 0U;
        __Vtemp5144[9U] = 0U;
        __Vtemp5144[0xaU] = 0U;
        __Vtemp5144[0xbU] = 0U;
        __Vtemp5144[0xcU] = 0U;
        __Vtemp5144[0xdU] = 0U;
        __Vtemp5144[0xeU] = 0U;
        __Vtemp5144[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5145, __Vtemp5144);
        __Vtemp5150[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5150[1U] = 0U;
        __Vtemp5150[2U] = 0U;
        __Vtemp5150[3U] = 0U;
        __Vtemp5150[4U] = 0U;
        __Vtemp5150[5U] = 0U;
        __Vtemp5150[6U] = 0U;
        __Vtemp5150[7U] = 0U;
        __Vtemp5150[8U] = 0U;
        __Vtemp5150[9U] = 0U;
        __Vtemp5150[0xaU] = 0U;
        __Vtemp5150[0xbU] = 0U;
        __Vtemp5150[0xcU] = 0U;
        __Vtemp5150[0xdU] = 0U;
        __Vtemp5150[0xeU] = 0U;
        __Vtemp5150[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5151, __Vtemp5150);
        __Vtemp5156[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5156[1U] = 0U;
        __Vtemp5156[2U] = 0U;
        __Vtemp5156[3U] = 0U;
        __Vtemp5156[4U] = 0U;
        __Vtemp5156[5U] = 0U;
        __Vtemp5156[6U] = 0U;
        __Vtemp5156[7U] = 0U;
        __Vtemp5156[8U] = 0U;
        __Vtemp5156[9U] = 0U;
        __Vtemp5156[0xaU] = 0U;
        __Vtemp5156[0xbU] = 0U;
        __Vtemp5156[0xcU] = 0U;
        __Vtemp5156[0xdU] = 0U;
        __Vtemp5156[0xeU] = 0U;
        __Vtemp5156[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5157, __Vtemp5156);
        __Vtemp5162[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5162[1U] = 0U;
        __Vtemp5162[2U] = 0U;
        __Vtemp5162[3U] = 0U;
        __Vtemp5162[4U] = 0U;
        __Vtemp5162[5U] = 0U;
        __Vtemp5162[6U] = 0U;
        __Vtemp5162[7U] = 0U;
        __Vtemp5162[8U] = 0U;
        __Vtemp5162[9U] = 0U;
        __Vtemp5162[0xaU] = 0U;
        __Vtemp5162[0xbU] = 0U;
        __Vtemp5162[0xcU] = 0U;
        __Vtemp5162[0xdU] = 0U;
        __Vtemp5162[0xeU] = 0U;
        __Vtemp5162[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5163, __Vtemp5162);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                   ? 1U : 0U) == ((7U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp5145[0U]))
                                                   ? 4U
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp5151[0U]))
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_46)))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U) == 
                                   ((7U == (7U & __Vtemp5157[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp5163[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105878: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105878, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105886
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp5166, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp5169[0U] = (7U & (__Vtemp5166[0U] >> 1U));
        __Vtemp5169[1U] = 0U;
        __Vtemp5169[2U] = 0U;
        __Vtemp5169[3U] = 0U;
        __Vtemp5169[4U] = 0U;
        __Vtemp5169[5U] = 0U;
        __Vtemp5169[6U] = 0U;
        __Vtemp5169[7U] = 0U;
        __Vtemp5169[8U] = 0U;
        __Vtemp5169[9U] = 0U;
        __Vtemp5169[0xaU] = 0U;
        __Vtemp5169[0xbU] = 0U;
        __Vtemp5169[0xcU] = 0U;
        __Vtemp5169[0xdU] = 0U;
        __Vtemp5169[0xeU] = 0U;
        __Vtemp5169[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5170, __Vtemp5169);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (0xfU & __Vtemp5170[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105899
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp5173, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp5176[0U] = (7U & (__Vtemp5173[0U] >> 1U));
        __Vtemp5176[1U] = 0U;
        __Vtemp5176[2U] = 0U;
        __Vtemp5176[3U] = 0U;
        __Vtemp5176[4U] = 0U;
        __Vtemp5176[5U] = 0U;
        __Vtemp5176[6U] = 0U;
        __Vtemp5176[7U] = 0U;
        __Vtemp5176[8U] = 0U;
        __Vtemp5176[9U] = 0U;
        __Vtemp5176[0xaU] = 0U;
        __Vtemp5176[0xbU] = 0U;
        __Vtemp5176[0xcU] = 0U;
        __Vtemp5176[0xdU] = 0U;
        __Vtemp5176[0xeU] = 0U;
        __Vtemp5176[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5177, __Vtemp5176);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                      ? 1U : 0U))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                                == (0xfU & __Vtemp5177[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105902: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105902, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105910
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
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
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105921
done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source))) 
                          & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready)) 
                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_a_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105924: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105924, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105932
verbose&&done_reset        
    ) {
        __Vtemp5178[0U] = 1U;
        __Vtemp5178[1U] = 0U;
        __Vtemp5178[2U] = 0U;
        __Vtemp5178[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp5179, __Vtemp5178, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp5179[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp5179[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp5179[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp5179[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105945
done_reset        
    ) {
        __Vtemp5183[0U] = 1U;
        __Vtemp5183[1U] = 0U;
        __Vtemp5183[2U] = 0U;
        __Vtemp5183[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp5184, __Vtemp5183, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp5184[0U]
                                                  : 0U)) 
                                             | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp5184[1U]
                                                    : 0U))) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                               ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                        ? 1U
                                                        : 0U)))
                                                   ? 
                                                  __Vtemp5184[2U]
                                                   : 0U))) 
                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                              ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                       ? 1U
                                                       : 0U)))
                                                  ? 
                                                 __Vtemp5184[3U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105948: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105948, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105956
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105969
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105972: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105972, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105980
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5188, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp5188[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:105993
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp5189, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (__Vtemp5189[0U] | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:105996: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 105996, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:106004
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp5192, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp5195[0U] = (7U & (__Vtemp5192[0U] >> 1U));
        __Vtemp5195[1U] = 0U;
        __Vtemp5195[2U] = 0U;
        __Vtemp5195[3U] = 0U;
        __Vtemp5195[4U] = 0U;
        __Vtemp5195[5U] = 0U;
        __Vtemp5195[6U] = 0U;
        __Vtemp5195[7U] = 0U;
        __Vtemp5195[8U] = 0U;
        __Vtemp5195[9U] = 0U;
        __Vtemp5195[0xaU] = 0U;
        __Vtemp5195[0xbU] = 0U;
        __Vtemp5195[0xcU] = 0U;
        __Vtemp5195[0xdU] = 0U;
        __Vtemp5195[0xeU] = 0U;
        __Vtemp5195[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5196, __Vtemp5195);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                              == (0xfU & __Vtemp5196[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:106017
done_reset        
    ) {
        VL_SHIFTR_WWI(512,512,10, __Vtemp5199, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                       << 2U));
        __Vtemp5202[0U] = (7U & (__Vtemp5199[0U] >> 1U));
        __Vtemp5202[1U] = 0U;
        __Vtemp5202[2U] = 0U;
        __Vtemp5202[3U] = 0U;
        __Vtemp5202[4U] = 0U;
        __Vtemp5202[5U] = 0U;
        __Vtemp5202[6U] = 0U;
        __Vtemp5202[7U] = 0U;
        __Vtemp5202[8U] = 0U;
        __Vtemp5202[9U] = 0U;
        __Vtemp5202[0xaU] = 0U;
        __Vtemp5202[0xbU] = 0U;
        __Vtemp5202[0xcU] = 0U;
        __Vtemp5202[0xdU] = 0U;
        __Vtemp5202[0xeU] = 0U;
        __Vtemp5202[0xfU] = 0U;
        VL_EXTEND_WW(512,511, __Vtemp5203, __Vtemp5202);
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                     ? 1U : 0U))) & 
                         (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size) 
                              == (0xfU & __Vtemp5203[0U])) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:106020: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 106020, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:106028
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BankedL2Params.scala:65:103)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:106041
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != 
                                                (((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[0U] 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[1U]) 
                                                  | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[2U]) 
                                                 | vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1[3U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:106044: Assertion failed in %NTestHarness.ldut.subsystem_l2_wrapper.binder.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 106044, "");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 
        = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1;
    vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
        = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140932
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid)) 
                                    | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken)
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken)))) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx)
                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx)) 
                                      >= (1U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                                        >> 1U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at IBuf.scala:79 assert(!io.imem.valid || !io.imem.bits.btb.taken || io.imem.bits.btb.bridx >= pcWordBits)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140945
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid)) 
                                    | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken)
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken)))) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx)
                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx)) 
                                      >= (1U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                                        >> 1U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:140948: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.core.ibuf\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 140948, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__88(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__88\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__intsource_1__DOT__reg___DOT__reg_ 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__bundleOut_0_0_REG) 
              > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__intsource_2__DOT__reg___DOT__reg_ 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__bundleOut_1_0_REG) 
              > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__intsource__DOT__reg___DOT__reg_ 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                      >= vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0) 
                     << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__ipi_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__89(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__89\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp5209[5];
    WData/*159:0*/ __Vtemp5210[5];
    WData/*159:0*/ __Vtemp5211[5];
    WData/*127:0*/ __Vtemp5219[4];
    WData/*127:0*/ __Vtemp5220[4];
    WData/*127:0*/ __Vtemp5221[4];
    WData/*127:0*/ __Vtemp5222[4];
    WData/*127:0*/ __Vtemp5223[4];
    WData/*127:0*/ __Vtemp5224[4];
    WData/*127:0*/ __Vtemp5225[4];
    WData/*127:0*/ __Vtemp5226[4];
    WData/*127:0*/ __Vtemp5227[4];
    WData/*127:0*/ __Vtemp5228[4];
    WData/*127:0*/ __Vtemp5229[4];
    WData/*127:0*/ __Vtemp5230[4];
    WData/*127:0*/ __Vtemp5231[4];
    // Body
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__r_len 
        = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___GEN_4));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__r_len_1 
        = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___GEN_9));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_bits_strb;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_bits_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_bits_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_out_w_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb
               [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_bits_strb));
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_out_w_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data
               [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_deq_bits_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT___do_enq_T) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     >> 3U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT___do_enq_T)
          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT___GEN_8))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT__ram_id__v0 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     >> 3U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq__DOT__ram_id__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__enq_ptr_value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_vaddr_r 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_addr;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_sel_alu2 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_xcpt)
                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu_io_xcpt_if) 
                    | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_33)))
                    ? 0U : ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5))
                             ? 1U : 0U)) : ((((((0U 
                                                 == 
                                                 (0x48U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                                | (0U 
                                                   == 
                                                   (0x44U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                               | (0U 
                                                  == 
                                                  (0x18U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                              | (0x4000U 
                                                 == 
                                                 (0x4008U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                             << 1U) 
                                            | (((((0U 
                                                   == 
                                                   (0x58U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                                  | (0U 
                                                     == 
                                                     (0x20U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                 | (4U 
                                                    == 
                                                    (0xcU 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                | (0x48U 
                                                   == 
                                                   (0x48U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                               | (0x4050U 
                                                  == 
                                                  (0x4050U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_sel_imm 
            = (((((0U == (0x30U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                  | (4U == (0x201cU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                 | (0x10U == (0x14U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                << 2U) | ((((8U == (0x18U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                            | (0x14U == (0x14U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                           << 1U) | ((8U == (0x18U 
                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                     | (0x40U == (0x44U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_511));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_462));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_490));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_483));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_497));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_476));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_469));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__req_tag 
            = (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_504));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_sel_alu1 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_xcpt)
                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu_io_xcpt_if) 
                    | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_33)))
                    ? 2U : ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5))
                             ? 2U : 1U)) : ((((0x14U 
                                               == (0x34U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                              | (0x48U 
                                                 == 
                                                 (0x48U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                             << 1U) 
                                            | (((((0U 
                                                   == 
                                                   (0x4004U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                                                  | (0U 
                                                     == 
                                                     (0x50U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                 | (0U 
                                                    == 
                                                    (0x44U 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                                | (0U 
                                                   == 
                                                   (0x24U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                                               | (0U 
                                                  == 
                                                  (0x18U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__req_dw 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__do_enq) 
             != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__do_enq;
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
                     ? ((0U == (4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)))
                         ? 2U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__lhs_sign) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__rhs_sign))
                                  ? 1U : 3U)) : ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_resp_ready) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_resp_valid)) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__killm_common) 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_kill_REG)))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_14)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_12)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
            = (((0U == (4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw)))
                ? 4U : 0U);
    } else {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
                    ? (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___eOutPos_T_1)))
                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___count_T_1));
        } else {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___count_T_1;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__cmdHi)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__lhs_sign)
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__lhs_sign) 
                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__rhs_sign)));
    } else {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))) {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divby0) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out = 0U;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__resHi 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)) 
           & ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
               ? ((0x40U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)
                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_13))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_13)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
            = (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in2 
                                                     >> 0x20U))
                                          : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__rhs_sign)
                                              ? 0xffffffffU
                                              : 0U)))) 
                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in2))));
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
            = (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in2 
                                                      >> 0x20U))
                                           : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__rhs_sign)
                                               ? 0xffffffffU
                                               : 0U)))) 
                         << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in2))) 
                       >> 0x20U));
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__rhs_sign;
    } else {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))) {
            if ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U];
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U];
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U];
            }
        }
    }
    VL_EXTEND_WQ(130,64, __Vtemp5209, (((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw)
                                                          ? (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in1 
                                                                     >> 0x20U))
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__lhs_sign)
                                                           ? 0xffffffffU
                                                           : 0U)))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_bits_in1))));
    VL_EXTEND_WW(130,129, __Vtemp5210, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16);
    VL_EXTEND_WQ(130,64, __Vtemp5211, VL_NEGATE_Q(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__result));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
            ? __Vtemp5209[0U] : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                  ? __Vtemp5210[0U]
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[0U]
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                          ? __Vtemp5211[0U]
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
            ? __Vtemp5209[1U] : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                  ? __Vtemp5210[1U]
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[1U]
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                          ? __Vtemp5211[1U]
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[1U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
            ? __Vtemp5209[2U] : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                  ? __Vtemp5210[2U]
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[2U]
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                          ? __Vtemp5211[2U]
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
            ? __Vtemp5209[3U] : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                  ? __Vtemp5210[3U]
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[3U]
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                          ? __Vtemp5211[3U]
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[3U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36)
            ? __Vtemp5209[4U] : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                  ? __Vtemp5210[4U]
                                  : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[4U]
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                                          ? __Vtemp5211[4U]
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[4U]))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_1837) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_satp_ppn 
                    = (QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata))));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___r = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ll_wen) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_134))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___r 
                = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_132 
                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_134)
                       ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                   >> 7U)))
                       : 0U));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ll_wen) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___r 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_132;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x302U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_medeleg 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_scause 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
            ? ((0x142U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x14U))) ? 
               (VL_ULL(0x800000000000001f) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_126)
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_126);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stval 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x143U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_128)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_128));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x141U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_125)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_125));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_fflags 
        = (0x1fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                             ? ((3U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                  >> 0x14U)))
                                 ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                 : ((1U == (0xfffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U)))
                                     ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                     : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_174))))
                             : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_174)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mscratch 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtval 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x343U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_134)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_134));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? VL_ULL(0) : (VL_ULL(0x3ffffffffffffff) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                               ? ((0xb02U == (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x14U)))
                                   ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                      >> 6U) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_1)
                               : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcause 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? VL_ULL(0) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                            ? ((0x342U == (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U)))
                                ? (VL_ULL(0x800000000000000f) 
                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)
                                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_133)
                            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_133));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0x3fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                      ? ((0xb02U == 
                                          (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U)))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                          : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_0)))
                                      : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 3U : (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                           ? ((0x7b0U == (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                           >> 0x14U)))
                               ? ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)))
                                   ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata))
                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_119))
                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_119))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xdU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xfU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xcU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_step 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 2U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x104U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_mie_T_4;
        } else {
            if ((0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie 
                    = (VL_ULL(0xaaa) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dpc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x7b1U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_117)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_117));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x341U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_132)
                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_132));
    VL_EXTEND_WQ(103,64, __Vtemp5219, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp5219[0U] >> 7U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_169))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_169))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5220, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr 
                    = (1U & (__Vtemp5220[0U] >> 0x16U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5221, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw 
                    = (1U & (__Vtemp5221[0U] >> 0x15U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5222, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm 
                    = (1U & (__Vtemp5222[0U] >> 0x14U));
            }
        }
    }
    VL_EXTEND_WQ(103,64, __Vtemp5223, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp5223[0U] >> 3U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_168))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_168))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5224, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                    = (1U & (__Vtemp5224[0U] >> 0x12U));
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp5225, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                        = (1U & (__Vtemp5225[0U] >> 0x12U));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5226, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                    = (1U & (__Vtemp5226[0U] >> 0x13U));
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp5227, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                        = (1U & (__Vtemp5227[0U] >> 0x13U));
                }
            }
        }
    }
    VL_EXTEND_WQ(103,64, __Vtemp5228, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp5229, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spie 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp5228[0U] >> 5U) : 
                        ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U)))
                          ? (__Vtemp5229[0U] >> 5U)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_163)))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_163))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp5230, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
                    = ((0U != (3U & ((__Vtemp5230[1U] 
                                      << 0x13U) | (
                                                   __Vtemp5230[0U] 
                                                   >> 0xdU))))
                        ? 3U : 0U);
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp5231, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
                        = ((0U != (3U & ((__Vtemp5231[1U] 
                                          << 0x13U) 
                                         | (__Vtemp5231[0U] 
                                            >> 0xdU))))
                            ? 3U : 0U);
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___new_mip_T_8 
                                 >> 5U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___new_mip_T_8 
                                 >> 9U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x2fU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x2bU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x2aU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x29U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x28U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x28U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x27U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x23U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x22U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x21U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x20U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x20U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xfU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xbU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0xaU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 9U)) & (IData)(
                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                     >> 8U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 8U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x1fU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x1bU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x1aU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x19U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x18U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x18U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x17U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x13U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x12U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x11U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x10U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x10U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x37U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x33U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x32U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x31U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x30U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x30U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x3fU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x14U))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x3bU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x3aU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w 
                = (1U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                  >> 0x39U)) & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x38U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                   >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x38U)));
        }
    }
    if ((1U & ((((0U == (0x1fU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1))) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit)) 
                | (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter)) 
                    | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__beats1_1))) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_297))) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_reg_pause = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_reg_pause 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___GEN_1;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_e_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__empty)))) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0)
                  ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_data
                  : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1)
                                   ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_in_d_bits_data
                                   : VL_ULL(0))) | 
               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_2)
                 ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_data
                 : VL_ULL(0)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_wen) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_waddr)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vlvbound3 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__dmem_resp_valid) 
                & (~ (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_tag) 
                               >> 1U)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_resp_bits_data
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___rf_wdata_T_5);
        if ((0x1eU >= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_waddr))))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf__v0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf__v0 
                = (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__rf_waddr)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask = 0x1fU;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter_lo)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                   | (0x10U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_mask_T_6) 
                               << 4U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x144U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip 
                = (1U & (IData)(((((QData)((IData)(
                                                   (0xaaaU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_mip_T)))) 
                                   & (~ (VL_ULL(0x222) 
                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mideleg))) 
                                  | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___new_sip_T_2) 
                                 >> 1U)));
        } else {
            if ((0x344U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___new_mip_T_8 
                                     >> 1U)));
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__sink_ACancel_9_bits_source));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = ((7U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                [0U]) ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_signed 
            = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_mem_req_valid)) 
                     & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
                           >> 0xeU))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_tag 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_mem_req_valid)
                ? 0U : (0x7fU & (1U | ((0x7cU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
                                                 >> 5U)) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_fp) 
                                          << 1U)))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 
            = (0x7fffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                            >> 3U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_1837) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_satp_mode 
                    = (8U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x3cU)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
        = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_424);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__exception) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause 
                        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_singleStepped)
                            ? 4U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)
                                     ? 3U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)
                                              ? 2U : 1U)));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action 
                        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode) 
                           & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___newBPC_T_8 
                                      >> 0xcU)));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
            if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 7U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
            if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 6U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
            if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 4U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
            if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 3U)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x 
                        = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                         >> 2U)));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w 
                        = (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                         >> 1U)));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r 
                        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_cmd_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_cmd;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read__v0 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_2) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_addr 
            = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_burst))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_addr
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_burst))
                    ? ((0x7fffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__inc_addr 
                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wrapMask_T_1 
                                      >> 8U))) | (~ 
                                                  ((~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_addr) 
                                                   | (0x7fffU 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wrapMask_T_1 
                                                         >> 8U)))))
                    : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__inc_addr));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_stalld)))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                 < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nIC))) 
             & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc 
                = ((VL_ULL(0xfffffffffc) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc) 
                   | (VL_ULL(3) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                   + (QData)((IData)(
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                                                      << 1U))))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_263) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_tag 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_tag;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter)))) {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__d_cam_sel_match_0) 
             & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_denied 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___s2_replay_T) {
        if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid_1) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken))) 
             & (3U == (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                             >> 0x10U))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn 
                = (0xffffU & (3U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                    >> 0x10U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_stalld)))) {
        if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_valid) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady) 
                 < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nIC))) 
             & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf___05Fdata 
                = (0xffffU & (IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_data) 
                                                         | (0xffffU 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_data 
                                                               >> 0x10U))))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_data))) 
                                      >> (0x30U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                                                >> 1U))) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nICReady)) 
                                                   << 4U)))));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___T_50) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut 
                = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)))
                    ? 0xcU : ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)))
                               ? 6U : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)))
                                        ? 0xeU : 8U)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___T_50) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___T_50) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___T_50) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                = (0xfffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_0_a_bits_address);
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__state_0 
                = (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_masked) 
              & (0x14U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_cmd))));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___T_50) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_source 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_pf_ld 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_bad_va) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_read)) 
               | (0U != (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_read)
                           ? (~ (0x2000U | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_priv_rw_ok) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fr_array_T_3)) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_ptw_ae_array))))
                           : 0U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits))));
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132021
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_flush_icache)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__imem_might_request_reg)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Frontend.scala:89 assert(!(io.cpu.req.valid || io.cpu.sfence.valid || io.cpu.flush_icache || io.cpu.bht_update.valid || io.cpu.btb_update.valid) || io.cpu.might_request)\n");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s0_speculative))));
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132035
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid) 
                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_flush_icache)) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__imem_might_request_reg)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:132039: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.frontend\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 132039, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132047
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative) 
                                       & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                                  >> 3U))) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_s2_kill)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Frontend.scala:175 assert(!(s2_speculative && io.ptw.customCSRs.asInstanceOf[RocketCustomCSRs].disableSpeculativeICacheRefill && !icache.io.s2_kill))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132060
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative) 
                                       & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                                  >> 3U))) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_s2_kill)))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:132063: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.frontend\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 132063, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132071
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn_valid)) 
                                   | (7U & ((IData)(3U) 
                                            << (1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                           >> 1U)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Frontend.scala:320 assert(!s2_partial_insn_valid || fq.io.enq.bits.mask(0))\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:132083
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn_valid)) 
                                   | (7U & ((IData)(3U) 
                                            << (1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                           >> 1U)))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:132086: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.frontend\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 132086, "");
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_fence_i 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_fence_i;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_div 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_div;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_sfence 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_sfence;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_61)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_cause
                : (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_62)
                                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_debug_breakpoint)
                                             ? 0xeU
                                             : 3U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_load_use 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__data_hazard_mem)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_csr;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_22) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest 
            = (1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_valid_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid)
               ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                   ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FhitsVec_T_106)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_455))
                   : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                       >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_data_0 
                                          >> 0xdU)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_455))))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_455)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_22) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_addr 
            = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
                 ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_opcode))
                     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi)) 
                         << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo)))
                     : ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param))
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out
                         : (((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param)) 
                             == (1U & (((1U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
                                                       >> 0x3fU))) 
                                        == (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext 
                                                          >> 0x3fU))))
                                        ? (~ (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out 
                                                      >> 0x3fU)))
                                        : ((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                                  >> 1U)) 
                                           == (1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
                                                             >> 0x3fU)))))))
                             ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data
                             : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data)))
                 : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_data
                                  : VL_ULL(0)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_4 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__beatsLeft_1))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_4;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_3 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__beatsLeft_1))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__beatsLeft_1))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__beatsLeft_1))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__earlyWinner_1_2;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid)
               ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                   ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_106)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_455))
                   : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                       >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                          >> 0xdU)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_455))))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_455)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)
                     ? 0U : (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state)) 
                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid))
                              ? 3U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___invalidate_refill_T)
                                       ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid)
                                           ? (((1U 
                                                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__arb_io_out_ready))
                                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid)
                                                   ? 3U
                                                   : 2U)
                                               : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid)
                                                   ? 0U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_589)))
                                           : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_589)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_level 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_level 
                        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_level 
                        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_level 
                        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_level 
                        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count));
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_level 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_valid_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid)
               ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                   ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_23)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_463))
                   : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                       >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0 
                                          >> 0xdU)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_463))))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_463)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_valid_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid)
               ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                   ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_37)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_467))
                   : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                       >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0 
                                          >> 0xdU)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_467))))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_467)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
            if ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_tag 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_tag 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag;
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:123677
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid)) 
                                   | (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___T_19))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ICache.scala:267 assert(!(s1_valid || s1_slaveValid) || PopCount(s1_tag_hit zip s1_tag_disparity map { case (h, d) => h && !d }) <= 1)\n");
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) 
              & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_redirect) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_miss)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_2;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_3;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_0 
            = ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_paddr)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[0U]
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[0U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_1 
            = ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_paddr)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[1U]
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[1U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_2 
            = ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_paddr)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[2U]
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[2U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_3 
            = ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_resp_paddr)
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[3U]
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[3U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tl_error 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_3) 
                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
                   >> 0x13U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_2) 
                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
                                     >> 0x1eU)) | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch_1) 
                                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
                                                       >> 9U)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tagMatch) 
                                                      & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
                                                         >> 0x14U)))));
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:123690
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_valid)) 
                                   | (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___T_19))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:123693: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.frontend.icache\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 123693, "");
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_776))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_776))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_536))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_336;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_801))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_801))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_543))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_343;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_774))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_774))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_534))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_334;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_773))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_773))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_533))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_333;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_802))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_802))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_544))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_344;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_803))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_803))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_545))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_345;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_748))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_748))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_526))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_326;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_27 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_720))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_720))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_516))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_316;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_691))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_691))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_505))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_305;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_634))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_634))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_484))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_284;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_27 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_717))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_717))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_513))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_313;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_746))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_746))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_524))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_324;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_633))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_633))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_483))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_283;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_3 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_606))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_606))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_474))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_274;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_635))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_635))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_485))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_285;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_745))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_745))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_523))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_323;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_661))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_661))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_493))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_293;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_662))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_662))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_494))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_294;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_663))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_663))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_495))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_295;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_664))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_664))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_496))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_296;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_689))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_689))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_503))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_303;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_io_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_690))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_690))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_504))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_304;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__beatsLeft_1))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__state_1_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_3_earlyValid;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_45 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_801))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_801))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_543))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_343;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_39 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_775))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_775))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_535))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_335;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_39 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_776))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_776))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_536))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_336;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_634))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_634))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_484))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_284;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_3 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_607))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_607))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_475))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_275;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_21 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_692))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_692))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_506))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_306;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_636))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_636))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_486))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_286;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_21 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_689))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_689))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_503))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_303;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_661))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_661))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_493))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_293;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_3 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_605))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_605))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_473))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_273;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_633))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_633))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_483))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_283;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_3 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_606))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_606))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_474))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_274;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_9 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_635))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_635))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_485))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_285;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_33 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_748))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_748))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_526))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_326;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_662))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_662))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_494))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_294;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_663))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_663))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_495))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_295;
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3 
                = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size))
                    ? ((0U == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_15 
                                         >> 0x12U)))
                        ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_664))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_664))
                    : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size) 
                        >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3 
                                           >> 0xdU)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_496))));
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_296;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___value_T_3;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_2) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d 
                = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_ld 
            = (0U != (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_read)
                        ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_ae_array) 
                           | (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_prot_r)
                                     ? 3U : 0U) << 0xcU) 
                                  | ((0x800U & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0 
                                                         >> 6U)) 
                                                << 0xbU)) 
                                     | ((0x400U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0 
                                                            >> 6U)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0 
                                                        >> 6U)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0 
                                                           >> 6U)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_584 
                                                              >> 6U)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_580 
                                                                 >> 6U)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_576 
                                                                    >> 6U)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_572 
                                                                       >> 6U)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_568 
                                                                          >> 6U)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((IData)(
                                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_564 
                                                                             >> 6U)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((IData)(
                                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_560 
                                                                                >> 6U)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_556 
                                                                                >> 6U))))))))))))))) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_ptw_ae_array)))))
                        : 0U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits)));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_sel1)
                ? 0U : 3U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_6 = 0U;
    } else {
        if ((0x3ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_6 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_6_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_5 = 0U;
    } else {
        if ((0x7ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_5 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_5_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_3 = 0U;
    } else {
        if ((0x1fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_3 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_3_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_2 = 0U;
    } else {
        if ((0x3fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_2 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_2_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_4 = 0U;
    } else {
        if ((0xfffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_4 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_4_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_1 = 0U;
    } else {
        if ((0x7fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_1 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_1_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_7 = 0U;
    } else {
        if ((0x1ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_7 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_7_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_0 = 0U;
    } else {
        if ((0xffffU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_0 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_0_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_10 = 0U;
    } else {
        if ((0x3fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_10 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_10_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_8 = 0U;
    } else {
        if ((0xffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 8U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_8 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_8_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_9 = 0U;
    } else {
        if ((0x7fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 9U) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_9 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_9_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_11 = 0U;
    } else {
        if ((0x1fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_11 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_11_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_12 = 0U;
    } else {
        if ((0xfU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_12 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_12_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_13 = 0U;
    } else {
        if ((7U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_13 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_13_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_14 = 0U;
    } else {
        if ((3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_14 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_14_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_15 = 0U;
    } else {
        if ((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT__error_15 
                = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___error_15_T));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay 
        = (((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_valid) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_d_ready) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)))))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___b_delay_T_1)
            : 0U);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_echo_real_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_sel1)
                ? 0U : 3U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__w_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                   [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]
                    : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                     ? (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                          ? (0U == 
                                             (0x7bf9eeU 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                              [0U]))
                                          : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                              ? (0U 
                                                 == 
                                                 (0x7bf9eeU 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                  [0U]))
                                              : ((4U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0x7bf9eeU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                   [0U]))
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (0x7bf9eeU 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                    [0U]))
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (0x7bf9eeU 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                     [0U]))
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                     ? 
                                                    (0U 
                                                     == 
                                                     (0x7bf9eeU 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                      [0U]))
                                                     : 
                                                    ((0x14U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                                                     | (0U 
                                                        == 
                                                        (0x7bf9eeU 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                         [0U])))))))))
                                         ? ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                             ? ((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_0)) 
                                                << 0x20U)
                                             : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                 ? (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_1))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                  ? (QData)((IData)(
                                                                    (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_1) 
                                                                      << 2U) 
                                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0) 
                                                                        << 1U))))
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0) 
                                                                      << 1U)))
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                    ? (QData)((IData)(
                                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0) 
                                                                       << 1U)))
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                     ? 
                                                    (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_0)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_0)))
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))
                                                      ? 
                                                     (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_1)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_1)))
                                                      : VL_ULL(0))))))))
                                         : VL_ULL(0))
                                     : VL_ULL(0))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                     ? (((3U == (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 0xeU))) | 
                         ((2U == (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 0xeU))) ? 
                          (0x7ffU == (0x7ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                           : (0U == (0x7ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 3U)))))
                         ? ((3U == (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                          >> 0xeU)))
                             ? VL_ULL(0) : ((2U == 
                                             (3U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 0xeU)))
                                             ? vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 0xeU)))
                                                 ? vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0
                                                 : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__ipi_0)))))
                         : VL_ULL(0)) : VL_ULL(0))) 
                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                    ? (((0xffU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                         ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U)))
                         : ((0xfeU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                             ? (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1763)))
                        ? ((0xffU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                            : ((0xfeU == (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                : ((0xfdU == (0xffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                    : ((0xfcU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                        : ((0xfbU == 
                                            (0xffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                            : ((0xfaU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                : (
                                                   (0xf9U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                    : 
                                                   ((0xf8U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                     : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2013))))))))
                        : VL_ULL(0)) : VL_ULL(0))) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
                   ? ((0U != (0xfU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                      >> 0xcU))) ? VL_ULL(0)
                       : ((0x1ffU == (0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                           ? VL_ULL(0) : ((0x1feU == 
                                           (0x1ffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 3U)))
                                           ? VL_ULL(0)
                                           : ((0x1fdU 
                                               == (0x1ffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 3U)))
                                               ? VL_ULL(0)
                                               : ((0x1fcU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 3U)))
                                                   ? VL_ULL(0)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_507)))))
                   : VL_ULL(0)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x3ffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = (0x3fffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0xfffU & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data);
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
}
