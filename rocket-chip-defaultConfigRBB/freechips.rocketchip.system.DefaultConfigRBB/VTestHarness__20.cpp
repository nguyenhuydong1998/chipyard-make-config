// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_multiclk__TOP__493(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_multiclk__TOP__493\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1215:0*/ __Vtemp7574[38];
    WData/*1215:0*/ __Vtemp7575[38];
    WData/*1215:0*/ __Vtemp7580[38];
    WData/*1215:0*/ __Vtemp7581[38];
    WData/*1215:0*/ __Vtemp7586[38];
    WData/*1215:0*/ __Vtemp7587[38];
    WData/*1215:0*/ __Vtemp7592[38];
    WData/*1215:0*/ __Vtemp7593[38];
    // Body
    __Vtemp7574[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7574[1U] = 0U;
    __Vtemp7574[2U] = 0U;
    __Vtemp7574[3U] = 0U;
    __Vtemp7574[4U] = 0U;
    __Vtemp7574[5U] = 0U;
    __Vtemp7574[6U] = 0U;
    __Vtemp7574[7U] = 0U;
    __Vtemp7574[8U] = 0U;
    __Vtemp7574[9U] = 0U;
    __Vtemp7574[0xaU] = 0U;
    __Vtemp7574[0xbU] = 0U;
    __Vtemp7574[0xcU] = 0U;
    __Vtemp7574[0xdU] = 0U;
    __Vtemp7574[0xeU] = 0U;
    __Vtemp7574[0xfU] = 0U;
    __Vtemp7574[0x10U] = 0U;
    __Vtemp7574[0x11U] = 0U;
    __Vtemp7574[0x12U] = 0U;
    __Vtemp7574[0x13U] = 0U;
    __Vtemp7574[0x14U] = 0U;
    __Vtemp7574[0x15U] = 0U;
    __Vtemp7574[0x16U] = 0U;
    __Vtemp7574[0x17U] = 0U;
    __Vtemp7574[0x18U] = 0U;
    __Vtemp7574[0x19U] = 0U;
    __Vtemp7574[0x1aU] = 0U;
    __Vtemp7574[0x1bU] = 0U;
    __Vtemp7574[0x1cU] = 0U;
    __Vtemp7574[0x1dU] = 0U;
    __Vtemp7574[0x1eU] = 0U;
    __Vtemp7574[0x1fU] = 0U;
    __Vtemp7574[0x20U] = 0U;
    __Vtemp7574[0x21U] = 0U;
    __Vtemp7574[0x22U] = 0U;
    __Vtemp7574[0x23U] = 0U;
    __Vtemp7574[0x24U] = 0U;
    __Vtemp7574[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7575, __Vtemp7574);
    __Vtemp7580[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7580[1U] = 0U;
    __Vtemp7580[2U] = 0U;
    __Vtemp7580[3U] = 0U;
    __Vtemp7580[4U] = 0U;
    __Vtemp7580[5U] = 0U;
    __Vtemp7580[6U] = 0U;
    __Vtemp7580[7U] = 0U;
    __Vtemp7580[8U] = 0U;
    __Vtemp7580[9U] = 0U;
    __Vtemp7580[0xaU] = 0U;
    __Vtemp7580[0xbU] = 0U;
    __Vtemp7580[0xcU] = 0U;
    __Vtemp7580[0xdU] = 0U;
    __Vtemp7580[0xeU] = 0U;
    __Vtemp7580[0xfU] = 0U;
    __Vtemp7580[0x10U] = 0U;
    __Vtemp7580[0x11U] = 0U;
    __Vtemp7580[0x12U] = 0U;
    __Vtemp7580[0x13U] = 0U;
    __Vtemp7580[0x14U] = 0U;
    __Vtemp7580[0x15U] = 0U;
    __Vtemp7580[0x16U] = 0U;
    __Vtemp7580[0x17U] = 0U;
    __Vtemp7580[0x18U] = 0U;
    __Vtemp7580[0x19U] = 0U;
    __Vtemp7580[0x1aU] = 0U;
    __Vtemp7580[0x1bU] = 0U;
    __Vtemp7580[0x1cU] = 0U;
    __Vtemp7580[0x1dU] = 0U;
    __Vtemp7580[0x1eU] = 0U;
    __Vtemp7580[0x1fU] = 0U;
    __Vtemp7580[0x20U] = 0U;
    __Vtemp7580[0x21U] = 0U;
    __Vtemp7580[0x22U] = 0U;
    __Vtemp7580[0x23U] = 0U;
    __Vtemp7580[0x24U] = 0U;
    __Vtemp7580[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7581, __Vtemp7580);
    __Vtemp7586[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7586[1U] = 0U;
    __Vtemp7586[2U] = 0U;
    __Vtemp7586[3U] = 0U;
    __Vtemp7586[4U] = 0U;
    __Vtemp7586[5U] = 0U;
    __Vtemp7586[6U] = 0U;
    __Vtemp7586[7U] = 0U;
    __Vtemp7586[8U] = 0U;
    __Vtemp7586[9U] = 0U;
    __Vtemp7586[0xaU] = 0U;
    __Vtemp7586[0xbU] = 0U;
    __Vtemp7586[0xcU] = 0U;
    __Vtemp7586[0xdU] = 0U;
    __Vtemp7586[0xeU] = 0U;
    __Vtemp7586[0xfU] = 0U;
    __Vtemp7586[0x10U] = 0U;
    __Vtemp7586[0x11U] = 0U;
    __Vtemp7586[0x12U] = 0U;
    __Vtemp7586[0x13U] = 0U;
    __Vtemp7586[0x14U] = 0U;
    __Vtemp7586[0x15U] = 0U;
    __Vtemp7586[0x16U] = 0U;
    __Vtemp7586[0x17U] = 0U;
    __Vtemp7586[0x18U] = 0U;
    __Vtemp7586[0x19U] = 0U;
    __Vtemp7586[0x1aU] = 0U;
    __Vtemp7586[0x1bU] = 0U;
    __Vtemp7586[0x1cU] = 0U;
    __Vtemp7586[0x1dU] = 0U;
    __Vtemp7586[0x1eU] = 0U;
    __Vtemp7586[0x1fU] = 0U;
    __Vtemp7586[0x20U] = 0U;
    __Vtemp7586[0x21U] = 0U;
    __Vtemp7586[0x22U] = 0U;
    __Vtemp7586[0x23U] = 0U;
    __Vtemp7586[0x24U] = 0U;
    __Vtemp7586[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7587, __Vtemp7586);
    __Vtemp7592[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7592[1U] = 0U;
    __Vtemp7592[2U] = 0U;
    __Vtemp7592[3U] = 0U;
    __Vtemp7592[4U] = 0U;
    __Vtemp7592[5U] = 0U;
    __Vtemp7592[6U] = 0U;
    __Vtemp7592[7U] = 0U;
    __Vtemp7592[8U] = 0U;
    __Vtemp7592[9U] = 0U;
    __Vtemp7592[0xaU] = 0U;
    __Vtemp7592[0xbU] = 0U;
    __Vtemp7592[0xcU] = 0U;
    __Vtemp7592[0xdU] = 0U;
    __Vtemp7592[0xeU] = 0U;
    __Vtemp7592[0xfU] = 0U;
    __Vtemp7592[0x10U] = 0U;
    __Vtemp7592[0x11U] = 0U;
    __Vtemp7592[0x12U] = 0U;
    __Vtemp7592[0x13U] = 0U;
    __Vtemp7592[0x14U] = 0U;
    __Vtemp7592[0x15U] = 0U;
    __Vtemp7592[0x16U] = 0U;
    __Vtemp7592[0x17U] = 0U;
    __Vtemp7592[0x18U] = 0U;
    __Vtemp7592[0x19U] = 0U;
    __Vtemp7592[0x1aU] = 0U;
    __Vtemp7592[0x1bU] = 0U;
    __Vtemp7592[0x1cU] = 0U;
    __Vtemp7592[0x1dU] = 0U;
    __Vtemp7592[0x1eU] = 0U;
    __Vtemp7592[0x1fU] = 0U;
    __Vtemp7592[0x20U] = 0U;
    __Vtemp7592[0x21U] = 0U;
    __Vtemp7592[0x22U] = 0U;
    __Vtemp7592[0x23U] = 0U;
    __Vtemp7592[0x24U] = 0U;
    __Vtemp7592[0x25U] = 0U;
    VL_EXTEND_WW(1216,1215, __Vtemp7593, __Vtemp7592);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7575[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7581[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7587[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7593[0U]))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__494(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__494\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_333 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312)
            ? ((3U == (8U | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                ? 3U : ((2U == (8U | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                         ? 3U : ((1U == (8U | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                  ? 4U : ((0U == (8U 
                                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                           ? 5U : (
                                                   (7U 
                                                    == 
                                                    (8U 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (8U 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                     ? 0U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (8U 
                                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                      ? 4U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (8U 
                                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                       ? 5U
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (8U 
                                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                        ? 1U
                                                        : 
                                                       ((0xaU 
                                                         == 
                                                         (8U 
                                                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                         ? 1U
                                                         : 
                                                        ((9U 
                                                          == 
                                                          (8U 
                                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                          ? 2U
                                                          : 
                                                         ((8U 
                                                           == 
                                                           (8U 
                                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state)))
                                                           ? 5U
                                                           : 0U))))))))))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_report_param)
                : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_report_param)
                    : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe)
                        ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data)
                            ? 5U : ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state))
                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_report_param)
                                     : 5U)) : 5U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___metaArb_io_in_3_bits_data_T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__c_cat_lo) 
                       << 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312)
            ? 6U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_size));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__block_probe_for_ordering 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseInFlight) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait) 
               & (0U == (0x7fffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_addr) 
                                    >> 6U))))) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantInProgress));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312)
            ? ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))
                ? 6U : 7U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))
                               ? 5U : 4U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_302));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_resp_bits_data_T_15 
        = ((VL_ULL(0xffffffffffff0000) & (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size))
                                            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed) 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_shifted_1) 
                                                   >> 0xfU))
                                                ? VL_ULL(0xffffffffffff)
                                                : VL_ULL(0))
                                            : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_resp_bits_data_T_7 
                                               >> 0x10U)) 
                                          << 0x10U)) 
           | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_shifted_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2032 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode) 
                  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode) 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2094 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode) 
                  >> 2U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_bits_opcode) 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___c_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___c_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_c_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_lo_2 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
            ? 0U : (0xffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))
                              ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_resp_bits_data_T_15 
                                         >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_resp_bits_data_T_15))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25 
        = (1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_12 
        = ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))) 
              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_valid))) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid))) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___beatsLeft_T_4 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25)
                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_12)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_12));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_25)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___sink_ACancel_earlyValid_T_12));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_hit_state_state 
        = (3U & ((((((0xfffffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U]) 
                     == (0xfffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                     >> 0xcU))) ? (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
                                                      >> 0x14U))
                     : 0U) | (((0xfffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                             << 0xaU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
                                               >> 0x16U))) 
                               == (0xfffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                               >> 0xcU)))
                               ? ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                   << 0x16U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                >> 0xaU))
                               : 0U)) | (((0xfffffU 
                                           & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                               << 0x14U) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                 >> 0xcU))) 
                                          == (0xfffffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                                 >> 0xcU)))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U]
                                          : 0U)) | 
                 (((0xfffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                >> 2U)) == (0xfffffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                               >> 0xcU)))
                   ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                      >> 0x16U) : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_hit_way 
        = ((((0U < (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                          >> 0x16U))) & ((0xfffffU 
                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                             >> 2U)) 
                                         == (0xfffffU 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                                >> 0xcU)))) 
            << 3U) | ((((0U < (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U])) 
                        & ((0xfffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                         << 0x14U) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                           >> 0xcU))) 
                           == (0xfffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                           >> 0xcU)))) 
                       << 2U) | ((((0U < (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[2U] 
                                                 << 0x16U) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                   >> 0xaU)))) 
                                   & ((0xfffffU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                    << 0xaU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
                                                      >> 0x16U))) 
                                      == (0xfffffU 
                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                             >> 0xcU)))) 
                                  << 1U) | ((0U < (3U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[1U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U] 
                                                         >> 0x14U)))) 
                                            & ((0xfffffU 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata[0U]) 
                                               == (0xfffffU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_paddr 
                                                      >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_flush_line 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_maybe_flush_pre_data_ecc_and_waw) 
           & ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_valid 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc_and_waw) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_data_way_x35 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_or_hit_way)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_way))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_hit_way));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_want_victimize 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_cached_miss) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_flush_line));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tl_out_a_valid_T_12 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_cached_miss) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait) 
                  & (0U == (0x7fffU & (IData)(((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                                                ^ (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_addr))) 
                                               >> 6U))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_dirty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__495(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__495\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_285 
        = ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
            ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x27U))))
            : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
               | ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                  | ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                     | ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                        | ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                           | ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                              | ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                                 | ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                     ? (0x10U == (0x50U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U))))
                                     : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                         ? (0x10U == 
                                            (0x50U 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                        >> 0x27U))))
                                         : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                             ? (0x10U 
                                                == 
                                                (0x50U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x27U))))
                                             : ((5U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                 ? 
                                                (0U 
                                                 == 
                                                 (0x50U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (0x50U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x27U))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                   ? 
                                                  (0x10U 
                                                   == 
                                                   (0x50U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                               >> 0x27U))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex)) 
                                                   | ((1U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                       ? 
                                                      (0x10U 
                                                       == 
                                                       (0x50U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x27U))))
                                                       : 
                                                      (0x40U 
                                                       == 
                                                       (0x50U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x27U))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__496(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__496\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__497(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__497\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_284 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data)
                ? 2U : ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state))
                         ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseDone)
                             ? 7U : 3U) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseDone)
                                            ? 0U : 5U)))
            : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_want_victimize)
                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_dirty) 
                    & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_flush_line) 
                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size) 
                             >> 1U)))) ? 1U : 6U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_151 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22)
            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21)
                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20)
                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19)
                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18)
                            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17)
                                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16)
                                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15)
                                        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14)
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_uncached_pending) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tl_out_a_valid_T_12));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__498(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__498\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_294 
        = ((0x19U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
            ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x27U))))
            : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x27U))))
                : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                    ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x27U))))
                    : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                        ? (0U == (0x50U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 0x27U))))
                        : ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                            ? (0U == (0x50U & (IData)(
                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))
                            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                ? (0U == (0x50U & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x27U))))
                                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                    ? (0U == (0x50U 
                                              & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                         >> 0x27U))))
                                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                        ? (0U == (0x50U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U))))
                                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                            ? (0U == 
                                               (0x50U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x27U))))
                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_285))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__499(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__499\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_ras_update_bits_returnAddr_T_2 
        = (VL_ULL(0xffffffffff) & ((~ (VL_ULL(3) | 
                                       (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc))) 
                                   + (QData)((IData)(
                                                     (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)
                                                        ? 1U
                                                        : 2U) 
                                                      << 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1)))
            ? (3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_source)))
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)
                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn)
                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn))
                ? 3U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)
                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR))
                         ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)
                                           ? (0x63U 
                                              == (0x7fU 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits))
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch))))))
            : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1)
                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn_1)
                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn_1))
                ? 3U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1)
                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1))
                         ? 2U : (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1)
                                           ? (0x63U 
                                              == (0x7fU 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data))
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_172 
        = ((0x2aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43)
            : ((0x29U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42)
                : ((0x28U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41)
                    : ((0x27U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40)
                        : ((0x26U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39)
                            : ((0x25U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38)
                                : ((0x24U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37)
                                    : ((0x23U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36)
                                        : ((0x22U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35)
                                            : ((0x21U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28)
                                                         : 
                                                        ((0x1aU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26)
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25)
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_151))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                 & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))
                     ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_193 
        = ((0x3fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64)
            : ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63)
                : ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62)
                    : ((0x3cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61)
                        : ((0x3bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60)
                            : ((0x3aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59)
                                : ((0x39U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58)
                                    : ((0x38U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57)
                                        : ((0x37U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56)
                                            : ((0x36U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55)
                                                : (
                                                   (0x35U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54)
                                                    : 
                                                   ((0x34U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53)
                                                     : 
                                                    ((0x33U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52)
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51)
                                                       : 
                                                      ((0x31U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50)
                                                        : 
                                                       ((0x30U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49)
                                                         : 
                                                        ((0x2fU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48)
                                                          : 
                                                         ((0x2eU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47)
                                                           : 
                                                          ((0x2dU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46)
                                                            : 
                                                           ((0x2cU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45)
                                                             : 
                                                            ((0x2bU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_172))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__500(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__500\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_311 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
            ? 0U : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                     ? 0U : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                              ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                  << 0x10U) | (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata)))
                              : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T
                                  : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                      ? (0x10000002U 
                                         | (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
                                             << 0xcU) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
                                               << 8U)))
                                      : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                          ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7) 
                                              << 0x18U) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6) 
                                                 << 0x10U) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4))))
                                          : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                              ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3) 
                                                  << 0x18U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2) 
                                                     << 0x10U) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1) 
                                                        << 8U) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0))))
                                              : ((3U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                    ? 
                                                   (0xa2U 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs) 
                                                        << 0x13U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs) 
                                                           << 0x12U) 
                                                          | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeAcks) 
                                                              << 0x11U) 
                                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeAcks) 
                                                                 << 0x10U) 
                                                                | ((0x800U 
                                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs)) 
                                                                       << 0xbU)) 
                                                                   | ((0x400U 
                                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs)) 
                                                                          << 0xaU)) 
                                                                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs) 
                                                                          << 9U) 
                                                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs) 
                                                                            << 8U)))))))))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__501(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__501\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___out_0_a_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_214 
        = ((0x54U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85)
            : ((0x53U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84)
                : ((0x52U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83)
                    : ((0x51U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82)
                        : ((0x50U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81)
                            : ((0x4fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80)
                                : ((0x4eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79)
                                    : ((0x4dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78)
                                        : ((0x4cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77)
                                            : ((0x4bU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76)
                                                : (
                                                   (0x4aU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75)
                                                    : 
                                                   ((0x49U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74)
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73)
                                                      : 
                                                     ((0x47U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72)
                                                       : 
                                                      ((0x46U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71)
                                                        : 
                                                       ((0x45U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70)
                                                         : 
                                                        ((0x44U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69)
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68)
                                                           : 
                                                          ((0x42U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67)
                                                            : 
                                                           ((0x41U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66)
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_193))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__502(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__502\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_323 
        = ((0x16U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27) 
                << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26) 
                              << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25) 
                                            << 8U) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24))))
            : ((0x15U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23) 
                    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22) 
                                  << 0x10U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21) 
                                                << 8U) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20))))
                : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                    ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19) 
                        << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18) 
                                      << 0x10U) | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17) 
                                                    << 8U) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16))))
                    : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                        ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15) 
                            << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14) 
                                          << 0x10U) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13) 
                                             << 8U) 
                                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12))))
                        : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11) 
                                << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10) 
                                              << 0x10U) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9) 
                                                 << 8U) 
                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8))))
                            : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7) 
                                    << 0x18U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6) 
                                                  << 0x10U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4))))
                                : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                    ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3) 
                                        << 0x18U) | 
                                       (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2) 
                                         << 0x10U) 
                                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1) 
                                            << 8U) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0))))
                                    : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                        ? 0U : ((0xeU 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                 ? 0U
                                                 : 
                                                ((0xdU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                  ? 0U
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                   ? 0U
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_iindex))
                                                    ? 0U
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_311))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__503(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__503\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp7594[8];
    WData/*255:0*/ __Vtemp7595[8];
    WData/*255:0*/ __Vtemp7596[8];
    WData/*255:0*/ __Vtemp7597[8];
    WData/*255:0*/ __Vtemp7598[8];
    WData/*255:0*/ __Vtemp7599[8];
    WData/*255:0*/ __Vtemp7600[8];
    WData/*255:0*/ __Vtemp7601[8];
    WData/*255:0*/ __Vtemp7602[8];
    WData/*255:0*/ __Vtemp7603[8];
    WData/*255:0*/ __Vtemp7604[8];
    WData/*255:0*/ __Vtemp7605[8];
    WData/*255:0*/ __Vtemp7606[8];
    WData/*255:0*/ __Vtemp7607[8];
    WData/*255:0*/ __Vtemp7608[8];
    WData/*255:0*/ __Vtemp7609[8];
    WData/*255:0*/ __Vtemp7610[8];
    WData/*255:0*/ __Vtemp7611[8];
    WData/*287:0*/ __Vtemp7613[9];
    WData/*287:0*/ __Vtemp7614[9];
    WData/*511:0*/ __Vtemp7623[16];
    WData/*511:0*/ __Vtemp7624[16];
    WData/*511:0*/ __Vtemp7630[16];
    WData/*511:0*/ __Vtemp7631[16];
    WData/*287:0*/ __Vtemp7641[9];
    WData/*287:0*/ __Vtemp7642[9];
    WData/*287:0*/ __Vtemp7650[9];
    WData/*287:0*/ __Vtemp7651[9];
    WData/*287:0*/ __Vtemp7662[9];
    WData/*287:0*/ __Vtemp7663[9];
    WData/*287:0*/ __Vtemp7671[9];
    WData/*287:0*/ __Vtemp7672[9];
    WData/*287:0*/ __Vtemp7682[9];
    WData/*287:0*/ __Vtemp7683[9];
    WData/*287:0*/ __Vtemp7689[9];
    WData/*287:0*/ __Vtemp7690[9];
    WData/*287:0*/ __Vtemp7696[9];
    WData/*287:0*/ __Vtemp7697[9];
    WData/*287:0*/ __Vtemp7703[9];
    WData/*287:0*/ __Vtemp7704[9];
    WData/*4127:0*/ __Vtemp7710[129];
    WData/*4127:0*/ __Vtemp7711[129];
    WData/*255:0*/ __Vtemp7716[8];
    WData/*255:0*/ __Vtemp7717[8];
    WData/*255:0*/ __Vtemp7718[8];
    WData/*255:0*/ __Vtemp7719[8];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0) 
           & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
           [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___GEN_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_527)
            ? (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_source))
            : (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__full)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__REG))
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__REG) 
                   & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__REG) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__REG) 
                               << 1U))))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__REG)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___beatsLeft_T_4 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___T_11)
                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___out_0_a_earlyValid_T_3)))));
    __Vtemp7594[0U] = 1U;
    __Vtemp7594[1U] = 0U;
    __Vtemp7594[2U] = 0U;
    __Vtemp7594[3U] = 0U;
    __Vtemp7594[4U] = 0U;
    __Vtemp7594[5U] = 0U;
    __Vtemp7594[6U] = 0U;
    __Vtemp7594[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7595, __Vtemp7594, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7595[3U] >> 0xeU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp7596[0U] = 1U;
    __Vtemp7596[1U] = 0U;
    __Vtemp7596[2U] = 0U;
    __Vtemp7596[3U] = 0U;
    __Vtemp7596[4U] = 0U;
    __Vtemp7596[5U] = 0U;
    __Vtemp7596[6U] = 0U;
    __Vtemp7596[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7597, __Vtemp7596, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7597[3U] >> 0xaU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp7598[0U] = 1U;
    __Vtemp7598[1U] = 0U;
    __Vtemp7598[2U] = 0U;
    __Vtemp7598[3U] = 0U;
    __Vtemp7598[4U] = 0U;
    __Vtemp7598[5U] = 0U;
    __Vtemp7598[6U] = 0U;
    __Vtemp7598[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7599, __Vtemp7598, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7599[3U] >> 0xdU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp7600[0U] = 1U;
    __Vtemp7600[1U] = 0U;
    __Vtemp7600[2U] = 0U;
    __Vtemp7600[3U] = 0U;
    __Vtemp7600[4U] = 0U;
    __Vtemp7600[5U] = 0U;
    __Vtemp7600[6U] = 0U;
    __Vtemp7600[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7601, __Vtemp7600, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7601[3U] >> 9U)) & (0U == (0x100U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    __Vtemp7602[0U] = 1U;
    __Vtemp7602[1U] = 0U;
    __Vtemp7602[2U] = 0U;
    __Vtemp7602[3U] = 0U;
    __Vtemp7602[4U] = 0U;
    __Vtemp7602[5U] = 0U;
    __Vtemp7602[6U] = 0U;
    __Vtemp7602[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7603, __Vtemp7602, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7603[3U] >> 0xcU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp7604[0U] = 1U;
    __Vtemp7604[1U] = 0U;
    __Vtemp7604[2U] = 0U;
    __Vtemp7604[3U] = 0U;
    __Vtemp7604[4U] = 0U;
    __Vtemp7604[5U] = 0U;
    __Vtemp7604[6U] = 0U;
    __Vtemp7604[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7605, __Vtemp7604, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7605[3U] >> 0x10U)) & (0U == 
                                             (0x100U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U))));
    __Vtemp7606[0U] = 1U;
    __Vtemp7606[1U] = 0U;
    __Vtemp7606[2U] = 0U;
    __Vtemp7606[3U] = 0U;
    __Vtemp7606[4U] = 0U;
    __Vtemp7606[5U] = 0U;
    __Vtemp7606[6U] = 0U;
    __Vtemp7606[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7607, __Vtemp7606, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7607[3U] >> 8U)) & (0U == (0x100U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    __Vtemp7608[0U] = 1U;
    __Vtemp7608[1U] = 0U;
    __Vtemp7608[2U] = 0U;
    __Vtemp7608[3U] = 0U;
    __Vtemp7608[4U] = 0U;
    __Vtemp7608[5U] = 0U;
    __Vtemp7608[6U] = 0U;
    __Vtemp7608[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7609, __Vtemp7608, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7609[3U] >> 0xbU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    __Vtemp7610[0U] = 1U;
    __Vtemp7610[1U] = 0U;
    __Vtemp7610[2U] = 0U;
    __Vtemp7610[3U] = 0U;
    __Vtemp7610[4U] = 0U;
    __Vtemp7610[5U] = 0U;
    __Vtemp7610[6U] = 0U;
    __Vtemp7610[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7611, __Vtemp7610, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7611[3U] >> 0xfU)) & (0U == (0x100U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_1 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))
                  : 0U)));
    __Vtemp7613[0U] = 0xffU;
    __Vtemp7613[1U] = 0U;
    __Vtemp7613[2U] = 0U;
    __Vtemp7613[3U] = 0U;
    __Vtemp7613[4U] = 0U;
    __Vtemp7613[5U] = 0U;
    __Vtemp7613[6U] = 0U;
    __Vtemp7613[7U] = 0U;
    __Vtemp7613[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7614, __Vtemp7613, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp7614[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp7614[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp7614[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp7614[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp7614[4U] : 0U)));
    __Vtemp7623[0U] = 1U;
    __Vtemp7623[1U] = 0U;
    __Vtemp7623[2U] = 0U;
    __Vtemp7623[3U] = 0U;
    __Vtemp7623[4U] = 0U;
    __Vtemp7623[5U] = 0U;
    __Vtemp7623[6U] = 0U;
    __Vtemp7623[7U] = 0U;
    __Vtemp7623[8U] = 0U;
    __Vtemp7623[9U] = 0U;
    __Vtemp7623[0xaU] = 0U;
    __Vtemp7623[0xbU] = 0U;
    __Vtemp7623[0xcU] = 0U;
    __Vtemp7623[0xdU] = 0U;
    __Vtemp7623[0xeU] = 0U;
    __Vtemp7623[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7624, __Vtemp7623, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp7630[0U] = 1U;
    __Vtemp7630[1U] = 0U;
    __Vtemp7630[2U] = 0U;
    __Vtemp7630[3U] = 0U;
    __Vtemp7630[4U] = 0U;
    __Vtemp7630[5U] = 0U;
    __Vtemp7630[6U] = 0U;
    __Vtemp7630[7U] = 0U;
    __Vtemp7630[8U] = 0U;
    __Vtemp7630[9U] = 0U;
    __Vtemp7630[0xaU] = 0U;
    __Vtemp7630[0xbU] = 0U;
    __Vtemp7630[0xcU] = 0U;
    __Vtemp7630[0xdU] = 0U;
    __Vtemp7630[0xeU] = 0U;
    __Vtemp7630[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7631, __Vtemp7630, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[4U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[5U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[5U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[6U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[6U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[7U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[7U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7624[8U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7631[8U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_T_2[9U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight[9U] 
                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                           ? __Vtemp7624[9U] : 0U)) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp7631[9U] : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                          ? ((IData)(1U) 
                                             << (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                                    [0U] 
                                                    >> 4U)))
                                          : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                          ? ((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))
                                          : 0U))));
    VL_EXTEND_WI(259,4, __Vtemp7641, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7642, __Vtemp7641, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    __Vtemp7650[0U] = 0xfU;
    __Vtemp7650[1U] = 0U;
    __Vtemp7650[2U] = 0U;
    __Vtemp7650[3U] = 0U;
    __Vtemp7650[4U] = 0U;
    __Vtemp7650[5U] = 0U;
    __Vtemp7650[6U] = 0U;
    __Vtemp7650[7U] = 0U;
    __Vtemp7650[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7651, __Vtemp7650, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7642[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7651[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7642[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7651[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7642[2U] : 0U)) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                            ? __Vtemp7651[2U] : 0U))));
    VL_EXTEND_WI(260,5, __Vtemp7662, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(260,260,8, __Vtemp7663, __Vtemp7662, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    __Vtemp7671[0U] = 0xffU;
    __Vtemp7671[1U] = 0U;
    __Vtemp7671[2U] = 0U;
    __Vtemp7671[3U] = 0U;
    __Vtemp7671[4U] = 0U;
    __Vtemp7671[5U] = 0U;
    __Vtemp7671[6U] = 0U;
    __Vtemp7671[7U] = 0U;
    __Vtemp7671[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7672, __Vtemp7671, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7663[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7672[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7663[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7672[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7663[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7672[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7663[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? __Vtemp7672[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                         | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp7663[4U] : 0U)) 
                        & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___d_first_T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                               ? __Vtemp7672[4U] : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_btb_update_valid_T_2) 
               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI) 
                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn)))))
            : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_btb_update_valid_T_2) 
               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1) 
                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn_1))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid_1) 
                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn_1))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_in_d_bits_size)
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_100 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)
               : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_in_d_bits_size)
                         : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_bits_size)
                                    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)
                                               : 0U));
    __Vtemp7682[0U] = 0xfU;
    __Vtemp7682[1U] = 0U;
    __Vtemp7682[2U] = 0U;
    __Vtemp7682[3U] = 0U;
    __Vtemp7682[4U] = 0U;
    __Vtemp7682[5U] = 0U;
    __Vtemp7682[6U] = 0U;
    __Vtemp7682[7U] = 0U;
    __Vtemp7682[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7683, __Vtemp7682, 
                  (0x7cU & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                            [0U] >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7683[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7683[8U]) : 0U);
    __Vtemp7689[0U] = 0xfU;
    __Vtemp7689[1U] = 0U;
    __Vtemp7689[2U] = 0U;
    __Vtemp7689[3U] = 0U;
    __Vtemp7689[4U] = 0U;
    __Vtemp7689[5U] = 0U;
    __Vtemp7689[6U] = 0U;
    __Vtemp7689[7U] = 0U;
    __Vtemp7689[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7690, __Vtemp7689, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7690[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7690[8U]) : 0U);
    __Vtemp7696[0U] = 0xfU;
    __Vtemp7696[1U] = 0U;
    __Vtemp7696[2U] = 0U;
    __Vtemp7696[3U] = 0U;
    __Vtemp7696[4U] = 0U;
    __Vtemp7696[5U] = 0U;
    __Vtemp7696[6U] = 0U;
    __Vtemp7696[7U] = 0U;
    __Vtemp7696[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7697, __Vtemp7696, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7697[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7697[8U]) : 0U);
    __Vtemp7703[0U] = 0xfU;
    __Vtemp7703[1U] = 0U;
    __Vtemp7703[2U] = 0U;
    __Vtemp7703[3U] = 0U;
    __Vtemp7703[4U] = 0U;
    __Vtemp7703[5U] = 0U;
    __Vtemp7703[6U] = 0U;
    __Vtemp7703[7U] = 0U;
    __Vtemp7703[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7704, __Vtemp7703, 
                  (0x7cU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7704[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7704[8U]) : 0U);
    __Vtemp7710[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x80U)) {
        __Vtemp7710[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(4111,4111,12, __Vtemp7711, __Vtemp7710, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[8U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[9U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xeU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xfU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x10U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x11U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x12U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x13U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x14U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x15U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x16U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x17U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x18U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x19U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x20U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x21U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x22U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x23U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x24U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x25U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x26U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x27U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x28U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x29U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x2fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x30U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x31U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x32U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x33U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x34U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x35U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x36U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x37U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x38U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x39U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x3fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x40U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x40U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x41U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x41U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x42U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x42U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x43U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x43U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x44U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x44U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x45U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x45U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x46U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x46U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x47U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x47U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x48U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x48U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x49U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x49U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x4fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x4fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x50U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x50U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x51U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x51U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x52U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x52U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x53U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x53U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x54U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x54U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x55U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x55U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x56U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x56U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x57U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x57U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x58U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x58U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x59U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x59U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x5fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x5fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x60U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x60U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x61U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x61U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x62U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x62U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x63U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x63U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x64U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x64U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x65U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x65U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x66U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x66U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x67U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x67U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x68U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x68U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x69U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x69U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x6fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x6fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x70U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x70U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x71U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x71U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x72U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x72U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x73U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x73U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x74U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x74U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x75U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x75U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x76U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x76U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x77U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x77U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x78U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x78U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x79U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x79U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x7fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp7711[0x7fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x80U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7711[0x80U]) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_resp_bits_data 
        = (((VL_ULL(0xffffffffffffff00) & ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
                                             | (7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)))
                                             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_lo_2) 
                                                    >> 7U))
                                                 ? VL_ULL(0xffffffffffffff)
                                                 : VL_ULL(0))
                                             : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_resp_bits_data_T_15 
                                                >> 8U)) 
                                           << 8U)) 
            | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_lo_2))) 
           | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail)));
    __Vtemp7716[0U] = 1U;
    __Vtemp7716[1U] = 0U;
    __Vtemp7716[2U] = 0U;
    __Vtemp7716[3U] = 0U;
    __Vtemp7716[4U] = 0U;
    __Vtemp7716[5U] = 0U;
    __Vtemp7716[6U] = 0U;
    __Vtemp7716[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7717, __Vtemp7716, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & __Vtemp7717[1U]) & (0U == (0x100U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U))));
    __Vtemp7718[0U] = 1U;
    __Vtemp7718[1U] = 0U;
    __Vtemp7718[2U] = 0U;
    __Vtemp7718[3U] = 0U;
    __Vtemp7718[4U] = 0U;
    __Vtemp7718[5U] = 0U;
    __Vtemp7718[6U] = 0U;
    __Vtemp7718[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp7719, __Vtemp7718, 
                  (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                            >> 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready)) 
             & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
            & (__Vtemp7719[1U] >> 1U)) & (0U == (0x100U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_out_a_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___T_11)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___out_0_a_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_118 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)
               : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                        [0U] : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                                        ? (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                                                   ? 
                                                  (4U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                   : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0 
        = (7U & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                   & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))) 
                     >> 1U)) & (0U == (0x7ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8 
        = (3U & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                   & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                  & (((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))) 
                     >> 2U)) & (0x7ffU == (0x7ffU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_91 
        = (0x1fU & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0)
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)
                        : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                  ? (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                     [0U] >> 4U) : 0U)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2)
                         ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U) : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3)
                                              ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                 >> 4U)
                                              : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_235 
        = ((0x69U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106)
            : ((0x68U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105)
                : ((0x67U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104)
                    : ((0x66U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103)
                        : ((0x65U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102)
                            : ((0x64U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101)
                                : ((0x63U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100)
                                    : ((0x62U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99)
                                        : ((0x61U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98)
                                            : ((0x60U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97)
                                                : (
                                                   (0x5fU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96)
                                                    : 
                                                   ((0x5eU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95)
                                                     : 
                                                    ((0x5dU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94)
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93)
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92)
                                                        : 
                                                       ((0x5aU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91)
                                                         : 
                                                        ((0x59U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90)
                                                          : 
                                                         ((0x58U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89)
                                                           : 
                                                          ((0x57U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88)
                                                            : 
                                                           ((0x56U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87)
                                                             : 
                                                            ((0x55U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_214))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter_lo) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_mask))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid)));
}

VL_INLINE_OPT void VTestHarness::_multiclk__TOP__504(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_multiclk__TOP__504\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*511:0*/ __Vtemp7721[16];
    WData/*511:0*/ __Vtemp7722[16];
    WData/*511:0*/ __Vtemp7728[16];
    WData/*511:0*/ __Vtemp7729[16];
    WData/*4127:0*/ __Vtemp7738[129];
    WData/*4127:0*/ __Vtemp7739[129];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_406 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) 
           | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
                  & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                  >> 0x20U)))))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)));
    __Vtemp7721[0U] = 1U;
    __Vtemp7721[1U] = 0U;
    __Vtemp7721[2U] = 0U;
    __Vtemp7721[3U] = 0U;
    __Vtemp7721[4U] = 0U;
    __Vtemp7721[5U] = 0U;
    __Vtemp7721[6U] = 0U;
    __Vtemp7721[7U] = 0U;
    __Vtemp7721[8U] = 0U;
    __Vtemp7721[9U] = 0U;
    __Vtemp7721[0xaU] = 0U;
    __Vtemp7721[0xbU] = 0U;
    __Vtemp7721[0xcU] = 0U;
    __Vtemp7721[0xdU] = 0U;
    __Vtemp7721[0xeU] = 0U;
    __Vtemp7721[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7722, __Vtemp7721, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp7728[0U] = 1U;
    __Vtemp7728[1U] = 0U;
    __Vtemp7728[2U] = 0U;
    __Vtemp7728[3U] = 0U;
    __Vtemp7728[4U] = 0U;
    __Vtemp7728[5U] = 0U;
    __Vtemp7728[6U] = 0U;
    __Vtemp7728[7U] = 0U;
    __Vtemp7728[8U] = 0U;
    __Vtemp7728[9U] = 0U;
    __Vtemp7728[0xaU] = 0U;
    __Vtemp7728[0xbU] = 0U;
    __Vtemp7728[0xcU] = 0U;
    __Vtemp7728[0xdU] = 0U;
    __Vtemp7728[0xeU] = 0U;
    __Vtemp7728[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7729, __Vtemp7728, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[4U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[5U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[5U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[6U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[6U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[7U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[7U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7722[8U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                                                ? __Vtemp7729[8U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_T_2[9U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight[9U] 
                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                           ? __Vtemp7722[9U] : 0U)) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
                             ? __Vtemp7729[9U] : 0U))));
    __Vtemp7738[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x80U)) {
        __Vtemp7738[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(4111,4111,12, __Vtemp7739, __Vtemp7738, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[8U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[9U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xeU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xfU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x10U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x11U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x12U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x13U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x14U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x15U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x16U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x17U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x18U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x19U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x20U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x21U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x22U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x23U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x24U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x25U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x26U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x27U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x28U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x29U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x2fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x30U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x31U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x32U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x33U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x34U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x35U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x36U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x37U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x38U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x39U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x3fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x40U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x40U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x41U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x41U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x42U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x42U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x43U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x43U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x44U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x44U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x45U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x45U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x46U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x46U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x47U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x47U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x48U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x48U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x49U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x49U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x4fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x4fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x50U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x50U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x51U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x51U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x52U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x52U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x53U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x53U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x54U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x54U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x55U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x55U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x56U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x56U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x57U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x57U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x58U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x58U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x59U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x59U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x5fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x5fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x60U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x60U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x61U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x61U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x62U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x62U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x63U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x63U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x64U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x64U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x65U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x65U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x66U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x66U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x67U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x67U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x68U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x68U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x69U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x69U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x6fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x6fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x70U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x70U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x71U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x71U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x72U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x72U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x73U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x73U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x74U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x74U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x75U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x75U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x76U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x76U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x77U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x77U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x78U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x78U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x79U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x79U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7aU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7bU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7cU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7dU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7eU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x7fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? __Vtemp7739[0x7fU] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x80U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp7739[0x80U]) : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__505(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__505\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp7746[9];
    WData/*287:0*/ __Vtemp7747[9];
    WData/*287:0*/ __Vtemp7760[9];
    WData/*287:0*/ __Vtemp7761[9];
    WData/*287:0*/ __Vtemp7774[9];
    WData/*287:0*/ __Vtemp7775[9];
    WData/*287:0*/ __Vtemp7788[9];
    WData/*287:0*/ __Vtemp7789[9];
    WData/*4127:0*/ __Vtemp7801[129];
    WData/*4127:0*/ __Vtemp7802[129];
    WData/*4127:0*/ __Vtemp7813[129];
    WData/*4127:0*/ __Vtemp7814[129];
    WData/*511:0*/ __Vtemp7825[16];
    WData/*511:0*/ __Vtemp7826[16];
    WData/*511:0*/ __Vtemp7832[16];
    WData/*511:0*/ __Vtemp7833[16];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_100) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_100) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_97));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(259,4, __Vtemp7746, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7747, __Vtemp7746, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7747[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7747[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7747[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7760, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7761, __Vtemp7760, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7761[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7761[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7761[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7774, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7775, __Vtemp7774, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7775[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7775[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7775[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7788, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7789, __Vtemp7788, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7789[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7789[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7789[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(4099,4, __Vtemp7801, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(4099,4099,12, __Vtemp7802, __Vtemp7801, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_opcodes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7802[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x25U]));
    VL_EXTEND_WI(4098,3, __Vtemp7813, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(4098,4098,12, __Vtemp7814, __Vtemp7813, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7814[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[0x25U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                          ? ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                                                    >> 4U)))
                                          : 0U))));
    __Vtemp7825[0U] = 1U;
    __Vtemp7825[1U] = 0U;
    __Vtemp7825[2U] = 0U;
    __Vtemp7825[3U] = 0U;
    __Vtemp7825[4U] = 0U;
    __Vtemp7825[5U] = 0U;
    __Vtemp7825[6U] = 0U;
    __Vtemp7825[7U] = 0U;
    __Vtemp7825[8U] = 0U;
    __Vtemp7825[9U] = 0U;
    __Vtemp7825[0xaU] = 0U;
    __Vtemp7825[0xbU] = 0U;
    __Vtemp7825[0xcU] = 0U;
    __Vtemp7825[0xdU] = 0U;
    __Vtemp7825[0xeU] = 0U;
    __Vtemp7825[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7826, __Vtemp7825, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp7832[0U] = 1U;
    __Vtemp7832[1U] = 0U;
    __Vtemp7832[2U] = 0U;
    __Vtemp7832[3U] = 0U;
    __Vtemp7832[4U] = 0U;
    __Vtemp7832[5U] = 0U;
    __Vtemp7832[6U] = 0U;
    __Vtemp7832[7U] = 0U;
    __Vtemp7832[8U] = 0U;
    __Vtemp7832[9U] = 0U;
    __Vtemp7832[0xaU] = 0U;
    __Vtemp7832[0xbU] = 0U;
    __Vtemp7832[0xcU] = 0U;
    __Vtemp7832[0xdU] = 0U;
    __Vtemp7832[0xeU] = 0U;
    __Vtemp7832[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp7833, __Vtemp7832, 
                  vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                  [0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[4U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[5U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[5U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[6U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[6U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[7U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[7U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7826[8U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp7833[8U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_T_2[9U] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[9U] 
                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                           ? __Vtemp7826[9U] : 0U)) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp7833[9U] : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ffU == (0x3ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                           >> 0x20U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 8U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x10U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x18U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x20U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x28U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x30U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x38U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_8 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_9 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 8U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x10U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_11 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x18U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_12 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x20U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_13 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x28U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_14 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x30U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_15 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask 
                                         >> 0x38U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
           & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_118) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
               ? 1U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_118) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4)
               ? 1U : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_91) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_88));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_91) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_88));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready 
        = ((((((0U == (0xa012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
              | ((0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
             | ((0U == (0xa010000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
            | ((0U == (0xa012000U & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
           | ((0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready 
        = ((((((0U == (0xa012000U & (0x2000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
              | ((0U == (0x8000000U & (0x8000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
             | ((0U == (0xa010000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
            | ((0U == (0xa012000U & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
           | ((0U == (0xa010000U & (0x10000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_256 
        = ((0x7eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127)
            : ((0x7dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126)
                : ((0x7cU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125)
                    : ((0x7bU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124)
                        : ((0x7aU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123)
                            : ((0x79U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122)
                                : ((0x78U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121)
                                    : ((0x77U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120)
                                        : ((0x76U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119)
                                            : ((0x75U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118)
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117)
                                                    : 
                                                   ((0x73U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116)
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115)
                                                      : 
                                                     ((0x71U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114)
                                                       : 
                                                      ((0x70U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113)
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112)
                                                         : 
                                                        ((0x6eU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111)
                                                          : 
                                                         ((0x6dU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110)
                                                           : 
                                                          ((0x6cU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109)
                                                            : 
                                                           ((0x6bU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108)
                                                             : 
                                                            ((0x6aU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107)
                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_235))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_unready 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_mask) 
                                                << 2U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__506(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__506\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata)) 
            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4) 
               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata) 
                  >> 1U))) | (((((((((((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf)) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                  >> 1U))) 
                                           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8) 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                 >> 2U))) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12) 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                >> 3U))) 
                                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16) 
                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                               >> 4U))) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20) 
                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                              >> 5U))) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24) 
                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                             >> 6U))) 
                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                            >> 7U))) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32) 
                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                           >> 8U))) 
                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36) 
                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                          >> 9U))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40) 
                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                         >> 0xaU))) 
                                  | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44) 
                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                        >> 0xbU))) 
                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                       >> 0xcU))) | 
                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                    >> 0xdU))) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                     >> 0xeU))) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                    >> 0xfU))));
}

VL_INLINE_OPT void VTestHarness::_multiclk__TOP__508(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_multiclk__TOP__508\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*4127:0*/ __Vtemp7842[129];
    WData/*4127:0*/ __Vtemp7843[129];
    WData/*4127:0*/ __Vtemp7854[129];
    WData/*4127:0*/ __Vtemp7855[129];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2114 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449)
            ? 0U : (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631))
                     ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    VL_EXTEND_WI(4099,4, __Vtemp7842, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(4099,4099,12, __Vtemp7843, __Vtemp7842, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_opcodes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7843[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x25U]));
    VL_EXTEND_WI(4098,3, __Vtemp7854, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(4098,4098,12, __Vtemp7855, __Vtemp7854, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x20U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x20U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x20U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x21U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x21U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x21U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x22U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x22U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x22U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x23U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x23U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x23U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x24U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x24U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x24U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_2[0x25U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes[0x25U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                ? __Vtemp7855[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[0x25U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__509(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__509\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp7866[9];
    WData/*287:0*/ __Vtemp7867[9];
    WData/*287:0*/ __Vtemp7876[9];
    WData/*287:0*/ __Vtemp7877[9];
    WData/*287:0*/ __Vtemp7887[9];
    WData/*287:0*/ __Vtemp7888[9];
    WData/*287:0*/ __Vtemp7901[9];
    WData/*287:0*/ __Vtemp7902[9];
    WData/*287:0*/ __Vtemp7915[9];
    WData/*287:0*/ __Vtemp7916[9];
    WData/*287:0*/ __Vtemp7929[9];
    WData/*287:0*/ __Vtemp7930[9];
    WData/*95:0*/ __Vtemp7942[3];
    WData/*95:0*/ __Vtemp7945[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter)) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stall))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___d_first_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__d_drop)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))
                  : 0U)));
    __Vtemp7866[0U] = 0xffU;
    __Vtemp7866[1U] = 0U;
    __Vtemp7866[2U] = 0U;
    __Vtemp7866[3U] = 0U;
    __Vtemp7866[4U] = 0U;
    __Vtemp7866[5U] = 0U;
    __Vtemp7866[6U] = 0U;
    __Vtemp7866[7U] = 0U;
    __Vtemp7866[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7867, __Vtemp7866, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp7867[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp7867[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp7867[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp7867[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp7867[4U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp7876[0U] = 0xffU;
    __Vtemp7876[1U] = 0U;
    __Vtemp7876[2U] = 0U;
    __Vtemp7876[3U] = 0U;
    __Vtemp7876[4U] = 0U;
    __Vtemp7876[5U] = 0U;
    __Vtemp7876[6U] = 0U;
    __Vtemp7876[7U] = 0U;
    __Vtemp7876[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7877, __Vtemp7876, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp7877[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp7877[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp7877[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp7877[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp7877[4U] : 0U)));
    VL_EXTEND_WI(259,4, __Vtemp7887, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7888, __Vtemp7887, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7888[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7888[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7888[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7901, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7902, __Vtemp7901, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7902[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7902[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7902[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7915, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7916, __Vtemp7915, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7916[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7916[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7916[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    VL_EXTEND_WI(259,4, __Vtemp7929, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp7930, __Vtemp7929, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7930[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp7930[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp7930[2U] : 0U)) 
                     & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                          ? ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                                                    >> 4U)))
                                          : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                                          ? ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                    >> 4U)))
                                          : 0U))));
    VL_SHIFTR_WWI(76,76,8, __Vtemp7942, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7942[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7942[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7942[2U]);
    VL_SHIFTR_WWI(76,76,8, __Vtemp7945, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp7945[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp7945[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (0xfffU & __Vtemp7945[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___timecmp_0_T 
        = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_7)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x38U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                          >> 0x38U))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_6)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x30U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                           >> 0x30U))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_5)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                            >> 0x28U))
                                                 : (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                            >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_4)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                           >> 0x20U))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_3)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x18U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                          >> 0x18U))) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_2)
                                                  ? (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                             >> 0x10U))
                                                  : (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_1)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___time_T_2 
        = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_15)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x38U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                          >> 0x38U))) 
                                             << 0x18U)) 
                             | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_14)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x30U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                           >> 0x30U))) 
                                              << 0x10U)) 
                                | ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_13)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                            >> 0x28U))
                                                 : (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                            >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_12)
                                                ? (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                           >> 0x20U))))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_11)
                                               ? (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                          >> 0x18U))
                                               : (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                          >> 0x18U))) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_10)
                                                  ? (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                             >> 0x10U))
                                                  : (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_9)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_8)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_2 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_d_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___dec_T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_d_ready) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked)
               : (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stall)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__stall))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall 
        = (((0x7fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128)
             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_256)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_unready)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__510(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__510\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__regAccessRegisterCommand 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype))) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__511(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__511\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__512(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__512\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7951[3];
    WData/*95:0*/ __Vtemp7952[3];
    WData/*95:0*/ __Vtemp7957[3];
    WData/*95:0*/ __Vtemp7958[3];
    WData/*95:0*/ __Vtemp7963[3];
    WData/*95:0*/ __Vtemp7964[3];
    WData/*95:0*/ __Vtemp7969[3];
    WData/*95:0*/ __Vtemp7970[3];
    WData/*95:0*/ __Vtemp7975[3];
    WData/*95:0*/ __Vtemp7976[3];
    WData/*95:0*/ __Vtemp7981[3];
    WData/*95:0*/ __Vtemp7982[3];
    WData/*95:0*/ __Vtemp7987[3];
    WData/*95:0*/ __Vtemp7988[3];
    WData/*95:0*/ __Vtemp7993[3];
    WData/*95:0*/ __Vtemp7994[3];
    WData/*287:0*/ __Vtemp7996[9];
    WData/*287:0*/ __Vtemp7997[9];
    WData/*287:0*/ __Vtemp8006[9];
    WData/*287:0*/ __Vtemp8007[9];
    WData/*287:0*/ __Vtemp8017[9];
    WData/*287:0*/ __Vtemp8018[9];
    WData/*287:0*/ __Vtemp8026[9];
    WData/*287:0*/ __Vtemp8027[9];
    WData/*287:0*/ __Vtemp8038[9];
    WData/*287:0*/ __Vtemp8039[9];
    WData/*287:0*/ __Vtemp8047[9];
    WData/*287:0*/ __Vtemp8048[9];
    WData/*287:0*/ __Vtemp8059[9];
    WData/*287:0*/ __Vtemp8060[9];
    WData/*287:0*/ __Vtemp8068[9];
    WData/*287:0*/ __Vtemp8069[9];
    WData/*287:0*/ __Vtemp8080[9];
    WData/*287:0*/ __Vtemp8081[9];
    WData/*287:0*/ __Vtemp8089[9];
    WData/*287:0*/ __Vtemp8090[9];
    WData/*287:0*/ __Vtemp8100[9];
    WData/*287:0*/ __Vtemp8101[9];
    // Body
    __Vtemp7951[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7951[1U] = 0U;
    __Vtemp7951[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7952, __Vtemp7951);
    __Vtemp7957[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7957[1U] = 0U;
    __Vtemp7957[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7958, __Vtemp7957);
    __Vtemp7963[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7963[1U] = 0U;
    __Vtemp7963[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7964, __Vtemp7963);
    __Vtemp7969[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7969[1U] = 0U;
    __Vtemp7969[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7970, __Vtemp7969);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7952[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7958[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7964[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7970[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp7975[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7975[1U] = 0U;
    __Vtemp7975[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7976, __Vtemp7975);
    __Vtemp7981[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7981[1U] = 0U;
    __Vtemp7981[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7982, __Vtemp7981);
    __Vtemp7987[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7987[1U] = 0U;
    __Vtemp7987[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7988, __Vtemp7987);
    __Vtemp7993[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                             >> 1U));
    __Vtemp7993[1U] = 0U;
    __Vtemp7993[2U] = 0U;
    VL_EXTEND_WW(76,75, __Vtemp7994, __Vtemp7993);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp7976[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp7982[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp7988[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp7994[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_mask_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_filter_lo));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_2 
        = (VL_ULL(0xffffffffff) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_pc 
                                   + (QData)((IData)(
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc)
                                                       ? 0U
                                                       : 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_42 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_2)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint_auto_in_r_bits_last)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_first));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_21 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1_io_in_d_valid) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? 1U : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__next 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPageRepl) 
                 + (((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__updatePageHit)))) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__doTgtPageRepl))
                     ? 2U : 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__do_deq 
        = (0xffffU & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                       & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__do_deq 
        = (0x1fffU & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                          >> 3U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__do_deq 
        = (0xfffU & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 4U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_deq 
        = (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__do_deq 
        = (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ptr_match) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__do_deq 
        = (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ptr_match) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__do_deq 
        = (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                      & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ptr_match) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_deq 
        = (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                       >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ptr_match) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_21 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_0))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_22 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_1))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_23 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_2))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_24 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_3))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_25 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_4))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_4));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_26 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_5))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_5));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_27 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_6))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_6));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_28 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_7))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_7));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_29 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_8))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_8));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_30 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_9))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_31 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_10))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_10));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_32 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_11))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_11));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_33 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_12))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_12));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_34 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_13))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_13));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_35 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_14))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_14));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___GEN_36 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT___a_first_T))
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_15))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__flight_15));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1_io_in_d_valid) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? 0xffU : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_deq 
        = (0x7fffU & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                          >> 1U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_deq 
        = (0x3fffU & ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_out_b_ready)) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                          >> 2U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ptr_match) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___count_T_8 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_2) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__inc_1)) 
                   - (0x7fU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                 >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_last)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___dec_T_1)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___count_T_12 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_3) 
                    + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__inc_2)) 
                   - (0x3fU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                 >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_last)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___dec_T_1)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? ((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp7996[0U] = 0xffU;
    __Vtemp7996[1U] = 0U;
    __Vtemp7996[2U] = 0U;
    __Vtemp7996[3U] = 0U;
    __Vtemp7996[4U] = 0U;
    __Vtemp7996[5U] = 0U;
    __Vtemp7996[6U] = 0U;
    __Vtemp7996[7U] = 0U;
    __Vtemp7996[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp7997, __Vtemp7996, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? __Vtemp7997[0U]
                  : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? __Vtemp7997[1U]
                  : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? __Vtemp7997[2U]
                  : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? __Vtemp7997[3U]
                  : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                             ? 1U : 0U))) ? __Vtemp7997[4U]
                  : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))
                  : 0U)));
    __Vtemp8006[0U] = 0xffU;
    __Vtemp8006[1U] = 0U;
    __Vtemp8006[2U] = 0U;
    __Vtemp8006[3U] = 0U;
    __Vtemp8006[4U] = 0U;
    __Vtemp8006[5U] = 0U;
    __Vtemp8006[6U] = 0U;
    __Vtemp8006[7U] = 0U;
    __Vtemp8006[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8007, __Vtemp8006, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp8007[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp8007[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp8007[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp8007[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp8007[4U] : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source))
                            : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                          & (6U != 
                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                               ? 1U
                                               : 0U)))
                                          ? ((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))
                                          : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))
                            : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                          ? ((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))
                                          : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___inflight_T_2 
        = (0x7ffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__a_first_counter_1)))
                            ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_source))
                            : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
                                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
                                          ? ((IData)(1U) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_source))
                                          : 0U))));
    VL_EXTEND_WI(259,4, __Vtemp8017, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp8018, __Vtemp8017, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                   << 2U));
    __Vtemp8026[0U] = 0xfU;
    __Vtemp8026[1U] = 0U;
    __Vtemp8026[2U] = 0U;
    __Vtemp8026[3U] = 0U;
    __Vtemp8026[4U] = 0U;
    __Vtemp8026[5U] = 0U;
    __Vtemp8026[6U] = 0U;
    __Vtemp8026[7U] = 0U;
    __Vtemp8026[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8027, __Vtemp8026, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8018[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8027[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8018[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8027[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp8018[2U] : 0U)) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                       ? 1U : 0U)))
                            ? __Vtemp8027[2U] : 0U))));
    VL_EXTEND_WI(260,5, __Vtemp8038, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(260,260,8, __Vtemp8039, __Vtemp8038, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_source) 
                   << 3U));
    __Vtemp8047[0U] = 0xffU;
    __Vtemp8047[1U] = 0U;
    __Vtemp8047[2U] = 0U;
    __Vtemp8047[3U] = 0U;
    __Vtemp8047[4U] = 0U;
    __Vtemp8047[5U] = 0U;
    __Vtemp8047[6U] = 0U;
    __Vtemp8047[7U] = 0U;
    __Vtemp8047[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8048, __Vtemp8047, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8039[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8048[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8039[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8048[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8039[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8048[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8039[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp8048[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes[4U] 
                         | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp8039[4U] : 0U)) 
                        & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_wins)
                                          ? 1U : 0U)))
                               ? __Vtemp8048[4U] : 0U))));
    VL_EXTEND_WI(259,4, __Vtemp8059, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp8060, __Vtemp8059, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    __Vtemp8068[0U] = 0xfU;
    __Vtemp8068[1U] = 0U;
    __Vtemp8068[2U] = 0U;
    __Vtemp8068[3U] = 0U;
    __Vtemp8068[4U] = 0U;
    __Vtemp8068[5U] = 0U;
    __Vtemp8068[6U] = 0U;
    __Vtemp8068[7U] = 0U;
    __Vtemp8068[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8069, __Vtemp8068, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8060[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8069[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8060[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8069[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                          ? __Vtemp8060[2U] : 0U)) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                            ? __Vtemp8069[2U] : 0U))));
    VL_EXTEND_WI(260,5, __Vtemp8080, (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(260,260,8, __Vtemp8081, __Vtemp8080, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    __Vtemp8089[0U] = 0xffU;
    __Vtemp8089[1U] = 0U;
    __Vtemp8089[2U] = 0U;
    __Vtemp8089[3U] = 0U;
    __Vtemp8089[4U] = 0U;
    __Vtemp8089[5U] = 0U;
    __Vtemp8089[6U] = 0U;
    __Vtemp8089[7U] = 0U;
    __Vtemp8089[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8090, __Vtemp8089, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8081[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8090[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8081[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8090[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8081[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8090[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp8081[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp8090[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
                         | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                             ? __Vtemp8081[4U] : 0U)) 
                        & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                               ? __Vtemp8090[4U] : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_set 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_3))) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___T_1661))
            ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_sink)))
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT___T_977 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1_io_in_d_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    __Vtemp8100[0U] = 0xfU;
    __Vtemp8100[1U] = 0U;
    __Vtemp8100[2U] = 0U;
    __Vtemp8100[3U] = 0U;
    __Vtemp8100[4U] = 0U;
    __Vtemp8100[5U] = 0U;
    __Vtemp8100[6U] = 0U;
    __Vtemp8100[7U] = 0U;
    __Vtemp8100[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp8101, __Vtemp8100, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[1U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[2U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[3U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[4U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[5U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[5U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[6U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[6U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[7U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? __Vtemp8101[7U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_35[8U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__monitor_io_in_d_bits_opcode)))
            ? (0x7fffU & __Vtemp8101[8U]) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2103 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT___T_2165 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                  >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
            | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
           | (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_15 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_earlyValid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__allowed_1 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2) 
                        >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT___T_63 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1__DOT__out_1_ready) 
            | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source) 
                            >> 5U)))) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_one_beat 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_1_d_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U)))) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq_io_enq_valid 
        = ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_opcode) 
                  >> 2U))) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW) 
                              | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id 
        = ((0x7fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_bits_source))
            ? 0x7fU : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_128));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___out_arw_valid_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___bundleIn_0_a_ready_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_1_valid 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
                   & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312))))
            : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar_auto_in_0_d_valid) 
                & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_12 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_wdata
                    : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__earlyWinner_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_next 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_count) 
                    + (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                   - (0xffffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_next_1 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_count_1) 
                    + (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                    >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                   - (0x7fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                   >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_next_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_count_2) 
                    + (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                    >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                   - (0x3fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                   >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_next_3 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_count_3) 
                    + (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                    >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                   - (0x1fffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                   >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_next_4 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__pending_count_4) 
                    + (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                   - (0xfffU & (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                  >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__bundleIn_0_r_bits_last)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_enq_valid 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_l2_wrapper__DOT__broadcast_1_auto_out_a_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___out_arw_valid_T_4));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_5 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata
                : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_wdata
                    : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__allowed_0 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___readys_readys_T_2))
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_0)));
}
