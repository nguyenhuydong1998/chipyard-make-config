// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__141(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__141\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__intsource_3__DOT__reg___DOT__reg_ = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5733[3];
    WData/*95:0*/ __Vtemp5734[3];
    WData/*95:0*/ __Vtemp5737[3];
    WData/*95:0*/ __Vtemp5738[3];
    WData/*95:0*/ __Vtemp5741[3];
    WData/*95:0*/ __Vtemp5742[3];
    WData/*95:0*/ __Vtemp5745[3];
    WData/*95:0*/ __Vtemp5746[3];
    WData/*95:0*/ __Vtemp5749[3];
    WData/*95:0*/ __Vtemp5750[3];
    WData/*95:0*/ __Vtemp5753[3];
    WData/*95:0*/ __Vtemp5754[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_wrap_wrap 
        = (0x63U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_value));
    vlTOPp->TestHarness__DOT__ldut__DOT___int_rtc_tick_wrap_value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfB));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN)) 
            & (0U != (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                    >> 0x1dU))))) & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                             >> 0x20U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___majorExc_S_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN) 
           & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                 >> 0x16U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x1ffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                             >> 0x17U)))) 
                     + VL_EXTENDS_II(11,10, ((0x200U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2) 
                                                 << 1U)) 
                                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem_R0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__in_ar_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr 
                          + (0xffffU & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__inc_addr_1 
        = (0x7fffffffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr_1 
                          + (0xffffU & ((IData)(1U) 
                                        << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[0U]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[2U] 
        = ((0xfffffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[2U] 
                           << 1U)) | ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[3U] 
        = ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[2U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[3U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___remainder_T[4U] 
        = ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[3U] 
                  >> 0x1fU)) | (2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[4U] 
                                      << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_14 
        = ((0x40U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__neg_out)
                ? 5U : 7U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_12));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT___GEN_0 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain_io_q) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0))) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT__inFlight)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway_1__DOT___GEN_0 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain_io_q) 
                   >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_1))) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                  >> 0x1dU)))) & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                              >> 0x1dU))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty)) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty)) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__wmask 
            & ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd))
                ? ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                    & (~ (QData)((IData)((0x80000000U 
                                          & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask) 
                                                 >> 3U)) 
                                             << 0x1fU)))))) 
                   + (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                      & (~ (QData)((IData)((0x80000000U 
                                            & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask) 
                                                   >> 3U)) 
                                               << 0x1fU)))))))
                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT___out_T_1)) 
           | ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__wmask) 
              & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_2 
        = ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_io_ip) 
                  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_2 
        = ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1_io_ip) 
                  << 1U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_valid) 
           & ((0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_14 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__in_ar_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty)) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid)
                ? 1U : 0U) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid;
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_io_ip) 
                  << 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1_io_ip) 
                  << 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_10 
        = (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                           >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(((0xe0000000U 
                                          & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_isZero_1)
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1) 
                                                   >> 6U)) 
                                              | ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1) 
                                                      >> 7U))) 
                                                 & (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2))))) 
                                             << 0x1dU)) 
                                         | ((0x1f800000U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0x17U))))
                                                   ? 
                                                  (0x7ffffeU 
                                                   & ((IData)(
                                                              (VL_ULL(0x3fffffffffffff) 
                                                               & ((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))) 
                                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1)))) 
                                                      << 1U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___fractB_Z_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
           & ((0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp 
        = (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                >> 0x34U))))
                       ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist))
                       : (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                            >> 0x34U)))) 
                     + (0x400U | ((0U == (0x7ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                            >> 0x34U))))
                                   ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__complUnroundedInt 
        = ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
            ? (~ (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U])) 
                   << 0x3eU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U])) 
                                 << 0x1eU) | ((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U])) 
                                              >> 2U))))
            : (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U])) 
                                           >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42 
        = ((0x20000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 8U : ((0x10000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 9U : ((0x8000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 0xaU : ((0x4000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                         ? 0xbU : (
                                                   (0x2000U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 0xcU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 0xdU
                                                     : 
                                                    ((0x800U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 0xeU
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                       ? 0xfU
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                        ? 0x10U
                                                        : 
                                                       ((0x100U 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                         ? 0x11U
                                                         : 
                                                        ((0x80U 
                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                          ? 0x12U
                                                          : 
                                                         ((0x40U 
                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                           ? 0x13U
                                                           : 
                                                          ((0x20U 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                            ? 0x14U
                                                            : 
                                                           ((0x10U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                             ? 0x15U
                                                             : 
                                                            ((8U 
                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                              ? 0x16U
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                               ? 0x17U
                                                               : 
                                                              ((2U 
                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                                ? 0x18U
                                                                : 0x19U)))))))))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full)) 
           & ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf)) 
           | (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                   >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed))
                  : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z))) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S 
        = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                         << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x14U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact 
        = ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1fU)))
            ? (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig)))
            : (0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                       >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_97 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x22U))) ? 0x1dU : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x21U)))
                                                  ? 0x1eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x20U)))
                                                   ? 0x1fU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x1fU)))
                                                    ? 0x20U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x1eU)))
                                                     ? 0x21U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x1dU)))
                                                      ? 0x22U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x1cU)))
                                                       ? 0x23U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x1bU)))
                                                        ? 0x24U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x1aU)))
                                                         ? 0x25U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x19U)))
                                                          ? 0x26U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x18U)))
                                                           ? 0x27U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x17U)))
                                                            ? 0x28U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 0x16U)))
                                                             ? 0x29U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 0x15U)))
                                                              ? 0x2aU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 0x14U)))
                                                               ? 0x2bU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 0x13U)))
                                                                ? 0x2cU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                            >> 0x12U)))
                                                                 ? 0x2dU
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_80))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_556 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_560 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_564 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_568 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_572 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_576 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_580 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FGEN_584 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                 >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_3
            : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_2
                : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_1
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact 
        = ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1fU)))
            ? (0U != (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U]))
            : (0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                       >> 0x1dU)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[0U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U];
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_bad_va 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (~ ((VL_ULL(0) == (VL_ULL(0xc000000000) 
                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr)) 
                 | (VL_ULL(0xc000000000) == (VL_ULL(0xc000000000) 
                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T 
        = ((2U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr) 
                   | (1U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))) 
                  << 1U)) | (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inFlight 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed)) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
        = (((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
             ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_55) 
           | (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                    >> 0x1aU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
        = (((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
             ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_55) 
           | (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                    >> 0x1aU)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint 
            = (0x90000010U == (0x90000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt 
            = (0x50000010U == (0xd0000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_div 
            = (0x18000010U == (0x58000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint 
            = ((0x20U == (0x20U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
               | (0x80000010U == (0x90000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe 
            = ((0x20000010U == (0xa0000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
               | (0x40000010U == (0xd0000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma 
            = (((0U == (0x70000004U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                | (0U == (0x68000004U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut 
            = (((0x1000U == (0x1040U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                | (0x2000000U == (0x2000020U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x30000010U == (0x30000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd 
            = (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                      >> 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_fmaCmd_T_3)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
                                      << 4U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm 
            = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                                   >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm)
                      : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                         >> 0xcU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U]
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U]
                : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U]
                : (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[2U] 
                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[2U])));
    }
    __Vtemp5733[0U] = 0U;
    __Vtemp5733[1U] = 0U;
    __Vtemp5733[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5734, __Vtemp5733, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5737[0U] = 0U;
    __Vtemp5737[1U] = 0U;
    __Vtemp5737[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5738, __Vtemp5737, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5741[0U] = 0U;
    __Vtemp5741[1U] = 0U;
    __Vtemp5741[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5742, __Vtemp5741, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5745[0U] = 0U;
    __Vtemp5745[1U] = 0U;
    __Vtemp5745[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5746, __Vtemp5745, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5749[0U] = 0U;
    __Vtemp5749[1U] = 0U;
    __Vtemp5749[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5750, __Vtemp5749, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5753[0U] = 0U;
    __Vtemp5753[1U] = 0U;
    __Vtemp5753[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5754, __Vtemp5753, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_114 
        = ((0x400U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
            ? (QData)((IData)(((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                ? 0U : ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                         ? 0U : ((0x80U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (__Vtemp5734[0U] 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & __Vtemp5738[0U]) 
                                                      | (1U 
                                                         & (__Vtemp5742[0U] 
                                                            >> 2U))))))))))
            : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
                            & ((~ ((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                    ? ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                        ? ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                            ? ((0x40U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                                ? (~ 
                                                   (((QData)((IData)(
                                                                     ((0x55555555U 
                                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
                                                                          >> 1U)) 
                                                                      | (0xaaaaaaaaU 
                                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
                                                                            << 1U))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (((0x2aaa8U 
                                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82) 
                                                                            << 2U)) 
                                                                        | (0x55550U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82) 
                                                                              << 4U))) 
                                                                       | ((4U 
                                                                           & (__Vtemp5746[1U] 
                                                                              >> 0x1bU)) 
                                                                          | ((2U 
                                                                              & (__Vtemp5750[1U] 
                                                                                >> 0x1dU)) 
                                                                             | (1U 
                                                                                & (__Vtemp5754[1U] 
                                                                                >> 0x1fU)))))))))
                                                : VL_ULL(0))
                                            : VL_ULL(0))
                                        : VL_ULL(0))
                                    : VL_ULL(0))) << 3U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FhitsVec_T_106 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_valid_0) 
             & ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_tag 
                           >> 0x12U)) == (0x1ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                            >> 0x1eU))))) 
            & ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_level)) 
               | ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_tag 
                             >> 9U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x15U)))))) 
           & ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_level)) 
              | ((0x1ffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_tag) 
                 == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_3 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_27 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
        = (0x7ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_tag 
                         ^ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                    >> 0xcU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fmpu_ppn_T_17 
        = ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_level))
            ? (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU))) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fmpu_ppn_T_19 
        = ((2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_level))
            ? (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU))) : 0U);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_23) {
            if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_9) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_23)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_37)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_51))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fstate_reg_T_6;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb___05Fgrant_T_2)) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid))
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_312)
                              ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseDone)
                                  ? 6U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_322))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_322))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_8 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
           | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)) 
                    | (0xfeU & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)) 
                                << 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_9 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5757[3];
    WData/*95:0*/ __Vtemp5758[3];
    WData/*95:0*/ __Vtemp5761[3];
    WData/*95:0*/ __Vtemp5762[3];
    WData/*95:0*/ __Vtemp5765[3];
    WData/*95:0*/ __Vtemp5766[3];
    WData/*95:0*/ __Vtemp5769[3];
    WData/*95:0*/ __Vtemp5770[3];
    WData/*95:0*/ __Vtemp5773[3];
    WData/*95:0*/ __Vtemp5774[3];
    WData/*95:0*/ __Vtemp5777[3];
    WData/*95:0*/ __Vtemp5778[3];
    // Body
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_w_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_1 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1) 
           | ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                  & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full))) 
              & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_41 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_14) 
           | ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
                  & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))) 
              & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len) 
                         - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
           & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_valid)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___w_counter_T_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_todo) 
                     - ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_valid) 
                           & ((0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
                              | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_2 
        = ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_2 
        = ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_ready)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_ready)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_tval 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt) 
            & ((((((((((VL_ULL(2) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause) 
                       | (VL_ULL(3) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                      | (VL_ULL(4) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                     | (VL_ULL(6) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                    | (VL_ULL(5) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                   | (VL_ULL(7) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                  | (VL_ULL(1) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                 | (VL_ULL(0xd) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
                | (VL_ULL(0xf) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)) 
               | (VL_ULL(0xc) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause)))
            ? (((QData)((IData)((1U & (((0U == (0x1ffffffU 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                           >> 0x27U)))) 
                                        | (0x1ffffffU 
                                           == (0x1ffffffU 
                                               & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                          >> 0x27U)))))
                                        ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                   >> 0x27U))
                                        : (~ (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                      >> 0x26U))))))) 
                << 0x27U) | (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_5) 
           | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_5) 
                       << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_5) 
           | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_5) 
                       << 4U)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S)))
              ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                 << 1U) : VL_ULL(0)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S))
                                         ? (((QData)((IData)(
                                                             (3U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                                                                          >> 0x33U)) 
                                                                 - (IData)(1U))))) 
                                             << 0x36U) 
                                            | (VL_ULL(0x3ffffffffffff8) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                                                  << 3U)))
                                         : VL_ULL(0))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady)
               ? VL_ULL(0) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rem_Z 
                              << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x2000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
            ? 0U : ((0x1000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                     ? 1U : ((0x800000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                              ? 2U : ((0x400000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                       ? 3U : ((0x200000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                ? 4U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                    ? 5U
                                                    : 
                                                   ((0x80000U 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                     ? 6U
                                                     : 
                                                    ((0x40000U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
                                                      ? 7U
                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_normDistReduced2_T_42)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___rem_T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__oddSqrt_S));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_2) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_3 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_8) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_14) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_20) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_26) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_27 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_32) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_38) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_44) 
           & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
                                   >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___wdata_T_5 
        = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd)))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_27)
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_3_T_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_114 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x33U))) ? 0xcU : ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                            >> 0x32U)))
                                                 ? 0xdU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x31U)))
                                                  ? 0xeU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x30U)))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x2fU)))
                                                    ? 0x10U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x2eU)))
                                                     ? 0x11U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x2dU)))
                                                      ? 0x12U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x2cU)))
                                                       ? 0x13U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x2bU)))
                                                        ? 0x14U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x2aU)))
                                                         ? 0x15U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x29U)))
                                                          ? 0x16U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x28U)))
                                                           ? 0x17U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x27U)))
                                                            ? 0x18U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 0x26U)))
                                                             ? 0x19U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 0x25U)))
                                                              ? 0x1aU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 0x24U)))
                                                               ? 0x1bU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 0x23U)))
                                                                ? 0x1cU
                                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_97))))))))))))))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_rm;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_13 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_1 
            << 2U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T_1 
        = (((((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
                             >> 1U))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T)
               : 0U) | ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                         ? 3U : 0U)) << 2U) | ((1U 
                                                & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
                                                           >> 1U)))
                                                ? 0U
                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_wxd 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd));
    __Vtemp5757[0U] = 0U;
    __Vtemp5757[1U] = 0U;
    __Vtemp5757[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5758, __Vtemp5757, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5761[0U] = 0U;
    __Vtemp5761[1U] = 0U;
    __Vtemp5761[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5762, __Vtemp5761, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5765[0U] = 0U;
    __Vtemp5765[1U] = 0U;
    __Vtemp5765[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5766, __Vtemp5765, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5769[0U] = 0U;
    __Vtemp5769[1U] = 0U;
    __Vtemp5769[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5770, __Vtemp5769, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5773[0U] = 0U;
    __Vtemp5773[1U] = 0U;
    __Vtemp5773[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5774, __Vtemp5773, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5777[0U] = 0U;
    __Vtemp5777[1U] = 0U;
    __Vtemp5777[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5778, __Vtemp5777, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_47 
        = (((0x155540U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                          << 5U)) | (0x2aaa80U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                  << 7U))) 
           | ((0x20U & (__Vtemp5758[1U] >> 0x15U)) 
              | ((0x10U & (__Vtemp5762[1U] >> 0x17U)) 
                 | ((8U & (__Vtemp5766[1U] >> 0x19U)) 
                    | ((4U & (__Vtemp5770[1U] >> 0x1bU)) 
                       | ((2U & (__Vtemp5774[1U] >> 0x1dU)) 
                          | (1U & (__Vtemp5778[1U] 
                                   >> 0x1fU))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
           & (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                    << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
           & (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                    << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt_io_nack_mem 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__write_port_busy) 
            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_div) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
               & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen)))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inFlight));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_xcpt 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killx)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_xcpt_interrupt) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_xcpt)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
        = ((0x33333333U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
                           >> 2U)) | (0xccccccccU & 
                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
                                       << 2U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_fmt 
            = (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x19U));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ 
            = (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
        = (((0x800U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
             ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_114) 
           | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                            >> 0x37U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_12 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FhitsVec_T_106));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_39 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_45 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_6 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_msb_0 
            << 2U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_3 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_9 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_15 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_21 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_27 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3)
                : ((2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU))))
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_2)
                    : ((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                             >> 0xcU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0)))) 
              & (0U == (0x1ffffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_33 
                                      >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_23 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_37 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_51 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_9 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_valid_0) 
            & ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_tag 
                          >> 0x12U)) == (0x1ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0x1eU))))) 
           & ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_level)) 
              | ((0x1ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_tag 
                            >> 9U)) == (0x1ffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                          >> 0x15U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size1_T_1 
        = (0x7fffffU & ((0xffU | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__bad)
                                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__maxSupported1)) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_8) 
           | (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_17 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_14) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_15 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_12) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_aw_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_9));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp5781[4];
    WData/*127:0*/ __Vtemp5782[4];
    WData/*95:0*/ __Vtemp5785[3];
    WData/*95:0*/ __Vtemp5786[3];
    WData/*95:0*/ __Vtemp5789[3];
    WData/*95:0*/ __Vtemp5790[3];
    WData/*95:0*/ __Vtemp5793[3];
    WData/*95:0*/ __Vtemp5794[3];
    WData/*95:0*/ __Vtemp5797[3];
    WData/*95:0*/ __Vtemp5798[3];
    WData/*95:0*/ __Vtemp5801[3];
    WData/*95:0*/ __Vtemp5802[3];
    WData/*95:0*/ __Vtemp5805[3];
    WData/*95:0*/ __Vtemp5806[3];
    WData/*95:0*/ __Vtemp5809[3];
    WData/*95:0*/ __Vtemp5810[3];
    WData/*95:0*/ __Vtemp5813[3];
    WData/*95:0*/ __Vtemp5814[3];
    WData/*95:0*/ __Vtemp5817[3];
    WData/*95:0*/ __Vtemp5818[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_2) 
           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_2) 
           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_2));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1) 
                         - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
            : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___GEN_15));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)
            ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T)
            : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___GEN_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___new_mip_T_8 
        = (((QData)((IData)(((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd))
                              ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                                  << 9U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                             << 5U) 
                                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
                                               << 1U)))
                              : 0U))) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___wdata_T_5));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_30 
        = ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_0) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_1)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_2)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_3)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_4)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_5)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_6)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_7));
    VL_EXTEND_WQ(114,51, __Vtemp5781, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp5782, __Vtemp5781, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp5782[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp5782[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp5782[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp5782[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_11 
        = (((0x40U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                      >> 6U)) | (((IData)((0U != (3U 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                     >> 0xaU)))) 
                                  << 5U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                          >> 8U)))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 6U)))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                                   >> 2U)))) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (3U 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                   >> 1U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                 >> 1U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                >> 1U))))) 
                                      | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                  (0xfU 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                       >> 1U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                                                    >> 1U)))) 
                                                >> 6U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___newBPC_T_8 
        = ((((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd))
              ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_7
              : VL_ULL(0)) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___wdata_T_5));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
            & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_31 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_7) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_6) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_5) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_4) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_3) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_2) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_1) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_0))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x3fU))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x3eU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0x3dU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0x3cU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0x3bU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0x3aU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0x39U)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0x38U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 0x37U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 0x36U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 0x35U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 0x34U)))
                                                            ? 0xbU
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_114)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                                                << 0xcU) 
                                               | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                                  >> 0x14U)))) 
                      + VL_EXTENDS_II(14,13, (0xfffU 
                                              & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                                    >> 0x14U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_mask_xwr 
        = (((((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
                             >> 2U))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T_1)
               : 0U) | ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size))
                         ? 0xfU : 0U)) << 4U) | ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
                                                             >> 2U)))
                                                  ? 0U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s1_mask_xwr_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    __Vtemp5785[0U] = 0U;
    __Vtemp5785[1U] = 0U;
    __Vtemp5785[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5786, __Vtemp5785, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5789[0U] = 0U;
    __Vtemp5789[1U] = 0U;
    __Vtemp5789[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5790, __Vtemp5789, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5793[0U] = 0U;
    __Vtemp5793[1U] = 0U;
    __Vtemp5793[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5794, __Vtemp5793, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
        = ((0x100U & ((0x3fffU & VL_EXTENDS_II(14,13, 
                                               (0xfffU 
                                                & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                      >> 0x14U))))) 
                      - (IData)(0x100U))) ? 0U : ((0x80U 
                                                   & VL_EXTENDS_II(14,13, 
                                                                   (0xfffU 
                                                                    & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                        << 0xcU) 
                                                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                          >> 0x14U)))))
                                                   ? 
                                                  ((0x40U 
                                                    & VL_EXTENDS_II(14,13, 
                                                                    (0xfffU 
                                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                         << 0xcU) 
                                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                           >> 0x14U)))))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (__Vtemp5786[0U] 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & __Vtemp5790[0U]) 
                                                       | (1U 
                                                          & (__Vtemp5794[0U] 
                                                             >> 2U)))))
                                                   : 
                                                  (7U 
                                                   | (0x1fffff8U 
                                                      & ((~ 
                                                          ((0x40U 
                                                            & VL_EXTENDS_II(14,13, 
                                                                            (0xfffU 
                                                                             & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x14U)))))
                                                            ? 
                                                           (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_47)
                                                            : 0U)) 
                                                         << 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm 
        = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_404));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
           & (VL_ULL(1) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                           << 1U)));
    __Vtemp5797[0U] = 0U;
    __Vtemp5797[1U] = 0U;
    __Vtemp5797[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5798, __Vtemp5797, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5801[0U] = 0U;
    __Vtemp5801[1U] = 0U;
    __Vtemp5801[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5802, __Vtemp5801, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5805[0U] = 0U;
    __Vtemp5805[1U] = 0U;
    __Vtemp5805[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5806, __Vtemp5805, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5809[0U] = 0U;
    __Vtemp5809[1U] = 0U;
    __Vtemp5809[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5810, __Vtemp5809, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5813[0U] = 0U;
    __Vtemp5813[1U] = 0U;
    __Vtemp5813[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5814, __Vtemp5813, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5817[0U] = 0U;
    __Vtemp5817[1U] = 0U;
    __Vtemp5817[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5818, __Vtemp5817, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_114 
        = ((0x400U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
            ? (QData)((IData)(((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                ? 0U : ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                         ? 0U : ((0x80U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (__Vtemp5798[0U] 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & __Vtemp5802[0U]) 
                                                      | (1U 
                                                         & (__Vtemp5806[0U] 
                                                            >> 2U))))))))))
            : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
                            & ((~ ((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                    ? ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                        ? ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                            ? ((0x40U 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                                ? (~ 
                                                   (((QData)((IData)(
                                                                     ((0x55555555U 
                                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
                                                                          >> 1U)) 
                                                                      | (0xaaaaaaaaU 
                                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
                                                                            << 1U))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (((0x2aaa8U 
                                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82) 
                                                                            << 2U)) 
                                                                        | (0x55550U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82) 
                                                                              << 4U))) 
                                                                       | ((4U 
                                                                           & (__Vtemp5810[1U] 
                                                                              >> 0x1bU)) 
                                                                          | ((2U 
                                                                              & (__Vtemp5814[1U] 
                                                                                >> 0x1dU)) 
                                                                             | (1U 
                                                                                & (__Vtemp5818[1U] 
                                                                                >> 0x1fU)))))))))
                                                : VL_ULL(0))
                                            : VL_ULL(0))
                                        : VL_ULL(0))
                                    : VL_ULL(0))) << 3U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (VL_ULL(1) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                            << 1U))) & (VL_ULL(3) | 
                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                         << 2U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23 
            = (0x10U == (0x30000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3 
            = (0x40U == (0x50U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_5) 
            << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_4) 
                       << 4U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_3) 
                                  << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_2) 
                                             << 2U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_1) 
                                                << 1U) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_0))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_9 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_23));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_37));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_11 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_51));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_8 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsuperpage_hits_T_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_4 
        = ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size1_T_1 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__maxSupported1_1 
        = ((((0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_10) 
                        >> 1U) | (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___fillLow_T_10) 
                                        >> 5U)))) | 
             (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_17) 
                 | (0xf0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wipeHigh_T_17) 
                             << 4U))))) & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_15) 
                                              | (0xf0U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___align1_T_15) 
                                                    << 4U))))) 
           & ((((VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
                                                                    (0x40000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))))
                 ? 0x1fU : 0U) | (((((VL_ULL(0) == 
                                      (VL_ULL(0xca002000) 
                                       & (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0xca000000) 
                                         & (QData)((IData)(
                                                           (0x2000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0xc8000000) 
                                        & (QData)((IData)(
                                                          (0x8000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))))) 
                                   | (VL_ULL(0) == 
                                      (VL_ULL(0xc0000000) 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1))))))
                                   ? 7U : 0U)) | ((VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0xca002000) 
                                                    & (QData)((IData)(
                                                                      (0x2000U 
                                                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))))
                                                   ? 0xffU
                                                   : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseInFlight 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe)) 
           | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_aw_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_w_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                           << 7U) | (0x7eU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                              >> 0x19U)))) 
           | ((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
                             << 9U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
                                       >> 0x17U)))) 
              | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_reduced4SigExtra_T_11))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__adder_out 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext
               : (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__a_d_ext)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__do_enq 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
            : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_32 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_31) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_31)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_61 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_xcpt_interrupt) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_xcpt));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_entry 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_entry;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_xcpt 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_xcpt));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                       << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x1fU)) 
                        & ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
                                                 >> 1U)))) 
                           | (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig)))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                         << 1U)) | 
                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                            >> 0x1fU)) & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
                                                  >> 1U)))) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))) 
               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_xcpt_ae_inst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_replay 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_replay;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
           & (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                    << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
        = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T) 
                       - (IData)(0x7c8U)) - (0xfffU 
                                             & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                                                 << 0xcU) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                   >> 0x14U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr 
        = (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                       << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x1fU)) 
                        & ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U] 
                                            >> 1U)))) 
                           | (3U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U]))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__magJustBelowOne) 
                    & (0U != (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U]))))) 
             | ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                & ((1U & (((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                         << 1U)) | 
                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                            >> 0x1fU)) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U] 
                                          >> 1U))) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm))) 
               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact)))) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
              & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_50 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                     << 1U))) & (3U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__beats_lo_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__bad_1)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__maxSupported1_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_34)
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_4_T_6)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_xcpt_interrupt 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_valid)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_interrupt));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
        = (((0x800U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
             ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_114) 
           | (QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                            >> 0x37U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags 
            = ((((0U == (0x20000004U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                 | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                | (0x8000000U == (0x8002000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x80000000U == (0xc0000004U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_12) 
            << 0xcU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_11) 
                         << 0xbU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_10) 
                                      << 0xaU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hitsVec_6) 
                                                            << 6U) 
                                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits_lo))))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_taken 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_taken;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bridx 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_btb_bridx;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_5 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_4) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__bad_1)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__maxSupported1_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_data 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_pc 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__wen_4) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_4_btb_bht_history 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__157(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__157\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__160(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__160\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_echo_real_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34 
        = (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_31) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_32) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_32) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_32) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__aw_last 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2 
        = ((0x3fffffffU == (0x3fffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
                                                   >> 2U)))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tl_error)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundCarryBut2 
        = ((VL_ULL(0x3fffffffffffffff) == (VL_ULL(0x3fffffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U])) 
                                                    >> 2U))))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__beats_lo_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__beats_lo_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_tlb_miss 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_bad_va))) 
           & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))) 
                           & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                 >> 2U) 
                                                | (0x3fffffffU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9)))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                                     & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))))
                                    ? (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                    & (~ 
                                                       (3U 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                                           << 2U)))) 
                                                   >> 2U)) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))) 
                           & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                 >> 2U) 
                                                | (0x3fffffffU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9)))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                     & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))))
                                    ? (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                    & (~ 
                                                       (3U 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                                           << 2U)))) 
                                                   >> 2U)) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
           & (VL_ULL(1) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                           << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
        = ((~ (VL_ULL(1) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                            << 1U))) & (VL_ULL(3) | 
                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_1 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 1U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_3 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 4U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                            >> 5U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_6 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 7U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                            >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_10 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 9U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                            >> 0xaU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_9 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                              >> 0xcU)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_6 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_5) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter_lo) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_mask))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0)
               ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_0
               : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1)
                         ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_1
                         : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2)
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_2
                                    : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3)
                                               ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_dout_3
                                               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fstate_vec_0_T_16 
        = ((0x40U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34) 
                         >> 2U)) << 6U)) | ((0x38U 
                                             & (((4U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                  ? 
                                                 ((4U 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34) 
                                                        >> 1U)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((2U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                           ? 
                                                          (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                           >> 4U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((2U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                            ? 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                            >> 3U)
                                                            : 
                                                           (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))))))
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                  >> 3U)) 
                                                << 3U)) 
                                            | (7U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0)
                                                 : 
                                                ((4U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34) 
                                                       >> 1U)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                          ? 
                                                         (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((2U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0)
                                                           : 
                                                          (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_34))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__inc_addr_1 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1 
        = (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
            | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
              >> 7U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow 
        = (1U & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                      << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                 >> 0x1fU)))
                  ? ((0x20U <= (0x7ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))) 
                     | ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                         ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                            | (((0x1fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
                                           >> 0x20U))) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2)))
                         : ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
                             ? ((0x1fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                & ((0U != (0x7fffffffU 
                                           & (IData)(
                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
                                                      >> 2U)))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr)))
                             : ((0x1fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                | ((0x1eU == (0x7ffU 
                                              & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                    >> 0x14U)))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2))))))
                  : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_ae_inst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4) 
             << 4U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3) 
                        << 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2) 
                                  << 2U))) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1) 
                                               << 1U) 
                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow 
        = (1U & ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                      << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                 >> 0x1fU)))
                  ? ((0x40U <= (0x7ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))) 
                     | ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                         ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                            | (((0x3fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U]) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundCarryBut2)))
                         : ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
                             ? ((0x3fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U])) 
                                                    >> 2U))))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr)))
                             : ((0x3fU == (0x7ffU & 
                                           ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 0xcU) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U)))) 
                                | ((0x3eU == (0x7ffU 
                                              & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                    >> 0x14U)))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundCarryBut2))))))
                  : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn_1 
        = (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
            & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                  >> 7U))) & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                              >> 0xfU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_13 
        = ((((0x10000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
              ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                >> 0xfU)) 
                                      | ((0x20U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                   >> 0xdU)) 
                                         | ((0x18U 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                >> 0x17U)) 
                                            | (6U & 
                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                >> 0x12U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_4 
        = ((((0x1000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
              ? 0x1fU : 0U) << 8U) | ((0xc0U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                << 1U)) 
                                      | ((0x20U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                   << 3U)) 
                                         | ((0x18U 
                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                >> 7U)) 
                                            | (6U & 
                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)) 
                     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 0x18U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_4 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 3U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_8 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                  >> 6U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_10) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_9));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))) 
                                         & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                                   & (0U 
                                                      != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                               ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_6) 
                                        >> 2U)))) << 1U) 
                 | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_6) 
                           >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_size_T_6) 
                                     >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_4 
        = ((1U | (0xfffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size1_T_1 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_unready 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_mask) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((0x9002U == (0xf003U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                   >> 0x10U))) & (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                      >> 0x12U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0xc001U == (0xe003U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                   >> 0x10U))) | (0xe001U 
                                                  == 
                                                  (0xe003U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                      >> 0x10U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((0x8002U == (0xf003U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                   >> 0x10U))) & (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                      >> 0x12U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR 
        = ((0x9002U == (0xf003U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
           & (0U == (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                              >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0xc001U == (0xe003U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
           | (0xe001U == (0xe003U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR 
        = ((0x8002U == (0xf003U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
           & (0U == (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                              >> 2U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
        = ((0xffff0000U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                           << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_data 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_data
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc = VL_ULL(0x10040);
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv_io_out 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__invalidExc) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow))
            ? ((((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))) 
                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__excSign))
                 ? VL_ULL(0x8000000000000000) : VL_ULL(0)) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__excSign)
                   ? VL_ULL(0) : VL_ULL(0x7fffffffffffffff)))
            : (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr) 
                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))
                 ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__complUnroundedInt)
                 : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__complUnroundedInt) 
               | (QData)((IData)(((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall 
        = (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits)) 
            | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits))) 
           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
              >> 7U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s0_fq_has_space 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_mask) 
                      >> 2U)) | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_mask) 
                                     >> 3U)) & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_valid)) 
                                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid))))) 
                 | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_mask) 
                        >> 4U)) & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_valid)) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv_io_intExceptionFlags 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__invalidExc) 
            << 2U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__invalidExc)) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow)) 
                       << 1U) | (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__invalidExc)) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
                            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))) 
                           & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                 >> 2U) 
                                                | (0x3fffffffU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9)))) 
                             & (~ ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
                                     & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))))
                                    ? (1U | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
                                                    & (~ 
                                                       (3U 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                                           << 2U)))) 
                                                   >> 2U)) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcImm_1 
        = ((0x40000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
            ? ((0x1fe000U & (VL_NEGATE_I((IData)((1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_13) 
                                                     >> 0xcU)))) 
                             << 0xdU)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_13))
            : ((((0x10000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
                  ? 0x3ffU : 0U) << 0xbU) | ((0x400U 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                 >> 0xeU)) 
                                             | ((0x300U 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                    >> 0x11U)) 
                                                | ((0x80U 
                                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                       >> 0xfU)) 
                                                   | ((0x40U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                          >> 0x11U)) 
                                                      | ((0x20U 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                             >> 0xdU)) 
                                                         | ((0x10U 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                                >> 0x17U)) 
                                                            | (0xeU 
                                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                                  >> 0x12U))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1) 
           & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                              >> 0x17U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                             >> 7U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                             >> 7U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcImm 
        = ((0x4000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
            ? ((0x1fe000U & (VL_NEGATE_I((IData)((1U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_4) 
                                                     >> 0xcU)))) 
                             << 0xdU)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_rvcImm_T_4))
            : ((((0x1000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data)
                  ? 0x3ffU : 0U) << 0xbU) | ((0x400U 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                 << 2U)) 
                                             | ((0x300U 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                    >> 1U)) 
                                                | ((0x80U 
                                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                       << 1U)) 
                                                   | ((0x40U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                          >> 1U)) 
                                                      | ((0x20U 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                             << 3U)) 
                                                         | ((0x10U 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                                >> 7U)) 
                                                            | (0xeU 
                                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                                                                  >> 2U))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviReturn 
        = (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits)) 
            & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                  >> 7U))) & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                              >> 0xfU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcReturn 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR) 
           & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_bits_data 
                              >> 7U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z)) 
                      + VL_EXTENDS_II(14,13, (3U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                            >> 0x35U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits 
        = (1U & ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                       >> 1U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                 >> 2U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_1))) 
                    | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                         >> 4U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                   >> 5U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                               >> 3U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_3)))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_2) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_4))) 
                  | ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                         >> 7U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                   >> 8U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                               >> 6U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_6))) 
                      | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                            >> 9U) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                      >> 0xaU)) | (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                                    >> 0xbU) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_real_hits) 
                                                      >> 0xcU))) 
                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_10) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_9)))) 
                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_8) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_10)))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_2) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_4)) 
                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_leftOne_8) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits_rightOne_10)))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
        = ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size)) 
             & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ 
                                                                     (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
            | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size)) 
               & ((((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                       & (QData)((IData)(
                                                         (0x10000U 
                                                          ^ 
                                                          (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                      & (QData)((IData)(
                                                        (0x2000000U 
                                                         ^ 
                                                         (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                     & (QData)((IData)(
                                                       (0xc000000U 
                                                        ^ 
                                                        (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
                                    & (QData)((IData)(
                                                      (0x60000000U 
                                                       ^ 
                                                       (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ 
                                                      (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5)))))))))
            ? (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x3000U | (7U & (~ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_5 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_4) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_unready)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__170(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__170\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_1326 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut_reset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__172(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__172\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__173(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__173\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_filter_lo));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_exc_hi_hi_1 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv_io_intExceptionFlags) 
                  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__invalidExc)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__io_exceptionFlags_lo 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
             & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                     & VL_GTES_III(1,2,2, 0U, (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp) 
                                                >> 8U)))) 
                    & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig)
                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                           >> 1U) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9)) 
                   & (~ ((((~ ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig)
                                ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                   >> 2U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                             >> 1U))) 
                           & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig)
                               ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                  >> 0x19U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x18U))) 
                          & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                             & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig)
                                 ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                    >> 2U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                              >> 1U))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                               & (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                    >> 0x1aU) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                 >> 2U)) 
                                  | (0U != (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig)))))))))) 
            << 1U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                         & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__io_exceptionFlags_lo 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
             & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                     & VL_GTES_III(1,2,2, 0U, (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                                >> 8U)))) 
                    & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig)
                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                           >> 1U) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9)) 
                   & (~ ((((~ ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig)
                                ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                   >> 2U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_9 
                                             >> 1U))) 
                           & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig)
                               ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                  >> 0x19U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x18U))) 
                          & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                             & ((0x4000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig)
                                 ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                    >> 2U) : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                              >> 1U))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                               & (((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                    >> 0x1aU) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                 >> 2U)) 
                                  | (0U != (3U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig)))))))))) 
            << 1U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                         & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & (VL_EXTENDS_II(14,13, 
                                                             (0xfffU 
                                                              & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                  << 0xcU) 
                                                                 | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                    >> 0x14U)))) 
                                               - (IData)(0x700U)))) 
                      + VL_EXTENDS_II(15,14, (3U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                               >> 0x18U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_pf_inst)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isInf) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_addr 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_npc_T_2 
        = (VL_ULL(0x1ffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)
                                   ? (VL_EXTENDS_QI(33,32, 
                                                    ((8U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits)
                                                      ? 
                                                     ((0x80000000U 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits) 
                                                      | ((0x7ff00000U 
                                                          & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U)) 
                                                         | ((0xff000U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits) 
                                                            | ((0x800U 
                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                   >> 9U)) 
                                                               | ((0x7e0U 
                                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                        >> 0x14U)))))))
                                                      : 
                                                     ((0x80000000U 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits) 
                                                      | ((0x7ff00000U 
                                                          & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U)) 
                                                         | ((0xff000U 
                                                             & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                                >> 0x1fU)))) 
                                                                << 0xcU)) 
                                                            | ((0x800U 
                                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviBits 
                                                                        >> 7U))))))))) 
                                      - VL_ULL(2)) : 
                                  (((QData)((IData)(
                                                    (0xfffU 
                                                     & VL_NEGATE_I((IData)(
                                                                           (1U 
                                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcImm 
                                                                               >> 0x14U))))))) 
                                    << 0x15U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcImm)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__allowed_0 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_readys_T_2))
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                                          | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))) 
                                         & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                                                   & (0U 
                                                      != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                               ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundPosMask 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                             >> 0xaU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_6 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_5) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_valid));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv = 3U;
    } else {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__new_prv))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv 
                    = ((0x20000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_144)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp));
            } else {
                if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__exception) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_98;
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_xcpt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___special_entry_data_0_T;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_bht_update_valid)
                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                         ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)
                              ? ((VL_ULL(0xfffffffffe) 
                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_npc_T_3) 
                                 != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_pc)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_wrong_npc_T_3))
                             ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken) 
                                 << 7U) | (0x7fU & 
                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
                                            >> 1U)))
                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_382))
                         : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)
                              ? ((VL_ULL(0xfffffffffe) 
                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_npc_T_3) 
                                 != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_pc)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_wrong_npc_T_3))
                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)
                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_382)))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_382)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__174(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__174\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__176(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__176\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__io_exceptionFlags_lo 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
             & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                     & VL_GTES_III(1,2,2, 0U, (3U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z) 
                                                >> 0xbU)))) 
                    & ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                      >> 0x37U))) ? (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                             >> 1U))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7))) 
                   & (~ ((((~ ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                              >> 0x37U)))
                                ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                           >> 2U)) : (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMask_hi_7 
                                                              >> 1U)))) 
                           & ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                             >> 0x37U)))
                               ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x36U))
                               : (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                          >> 0x35U)))) 
                          & (0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
                             & ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                               >> 0x37U)))
                                 ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                            >> 2U))
                                 : (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                            >> 1U)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                               & (((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                            >> 0x37U)) 
                                   & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                              >> 2U))) 
                                  | (0U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig))))))))))) 
            << 1U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                         & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp)) 
                      + VL_EXTENDS_II(14,13, (3U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                            >> 0x35U))))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_size 
        = (((IData)((0U != (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_6) 
                                        >> 2U)))) << 1U) 
                 | (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_6) 
                           >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_size_T_6) 
                                     >> 1U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_0)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_1)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__state_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_s2_kill 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_cacheable) 
                  & (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                >> 3U)))))) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_xcpt));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__177(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__177\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
              >> 0xeU));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__178(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__178\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__179(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__179\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__s_interrupts 
        = (((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
            | ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sie)))
            ? (VL_ULL(0x222) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pending_interrupts 
                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mideleg))
            : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__180(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__180\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5820[3];
    WData/*127:0*/ __Vtemp5821[4];
    WData/*127:0*/ __Vtemp5822[4];
    // Body
    __Vtemp5820[0U] = (IData)((((QData)((IData)((0xfffU 
                                                 & (((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z) 
                                                                | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                                ? 0xe00U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                               ? 0xc31U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                              ? 0x400U
                                                              : 0U))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x200U
                                                             : 0U))) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                           ? 0x3ceU
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                          ? 0xbffU
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                         ? 0xc00U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                        ? 0xe00U
                                                        : 0U))))) 
                                << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                             & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z)) 
                                                  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                  ? 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                   ? VL_ULL(0x8000000000000)
                                                   : VL_ULL(0))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                              >> 0x37U)))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                    ? VL_ULL(0xfffffffffffff)
                                                    : VL_ULL(0))))));
    __Vtemp5820[1U] = (IData)(((((QData)((IData)((0xfffU 
                                                  & (((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                            & (~ 
                                                               (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z) 
                                                                 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                                 ? 0xe00U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                ? 0xc31U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                               ? 0x400U
                                                               : 0U))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                              ? 0x200U
                                                              : 0U))) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                            ? 0x3ceU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                           ? 0xbffU
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                          ? 0xc00U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                         ? 0xe00U
                                                         : 0U))))) 
                                 << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                              & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z)) 
                                                   | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)))
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                    ? VL_ULL(0x8000000000000)
                                                    : VL_ULL(0))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
                                                               >> 0x37U)))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                    >> 1U)
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                     ? VL_ULL(0xfffffffffffff)
                                                     : VL_ULL(0))))) 
                               >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[0U] 
        = __Vtemp5820[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[1U] 
        = __Vtemp5820[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN_io_out[2U] 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__allow_sfence_vma 
        = (1U & ((1U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_valid) 
              | ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_s2_kill))));
    VL_EXTEND_WQ(103,64, __Vtemp5821, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp5822, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (1U & (__Vtemp5821[0U] >> 8U))
                         : ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                  >> 0x14U)))
                             ? (1U & (__Vtemp5822[0U] 
                                      >> 8U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_164)))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_164))));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_41) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated) 
              & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))));
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140239
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
                         & (~ ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at PTW.scala:393 assert(state === s_wait3)\n");
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__l2_refill 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_104));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)
                  ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_87)
                      : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_87)))
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_87)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_88)
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_88)))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_88));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_3)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_83))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_83));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_86)
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__res_v) 
                   & (VL_ULL(0) != (VL_ULL(0x3ffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0x1eU)))))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_86));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg = 0U;
    } else {
        if (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits)) 
             & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___state_reg_T_16;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__valid = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_sfence_valid) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__valid = 0U;
        } else {
            if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
                  & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__valid 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_54;
            }
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140250
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
                         & (~ ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:140253: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.ptw\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 140253, "");
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_0 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140261
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_requestor_0_s2_nack) 
                         & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at PTW.scala:410 assert(state === s_wait2)\n");
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_1 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:140272
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_requestor_0_s2_nack) 
                         & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:140275: Assertion failed in %NTestHarness.ldut.tile_prci_domain.tile_reset_domain_tile.ptw\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 140275, "");
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_2 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_3 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_4 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_5 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_6 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_7 
                = (0xfffffff8U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T) 
                                  << 3U));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_0 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_1 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_2 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_3 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_4 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_5 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_6 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
    if (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
          & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits))))) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated)))) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__data_7 
                = (0xfffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0xaU)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__181(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__181\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeAcks 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq)
                  ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs)) 
                     & (0U != (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                                         >> 4U)))) : 
                 (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__184(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__184\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd)) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd))) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___s2_replay_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__187(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__187\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__188(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__188\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_0_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_34 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_11 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_27 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_18 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_26 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___btb_io_btb_update_valid_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___s2_replay_T) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__wrong_path)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
            ? 0xfffff000U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                              ? 0xfffff000U : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                ? 0xffe00000U
                                                : 0xc0000000U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
            << 9U) | (QData)((IData)((0x1ffU & ((3U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                 ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_addr
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_addr
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_addr 
                                                   >> 9U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_addr 
                                                   >> 0x12U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
        = (VL_ULL(0xffffffffff) & (~ (VL_ULL(1) | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___io_cpu_npc_T))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_mem_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__189(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__189\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__191(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__191\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5824[3];
    WData/*95:0*/ __Vtemp5826[3];
    WData/*95:0*/ __Vtemp5827[3];
    WData/*95:0*/ __Vtemp5829[3];
    WData/*95:0*/ __Vtemp5831[3];
    WData/*95:0*/ __Vtemp5832[3];
    WData/*95:0*/ __Vtemp5834[3];
    WData/*95:0*/ __Vtemp5836[3];
    WData/*95:0*/ __Vtemp5837[3];
    WData/*95:0*/ __Vtemp5839[3];
    WData/*95:0*/ __Vtemp5841[3];
    WData/*95:0*/ __Vtemp5842[3];
    WData/*95:0*/ __Vtemp5844[3];
    WData/*95:0*/ __Vtemp5846[3];
    WData/*95:0*/ __Vtemp5847[3];
    WData/*95:0*/ __Vtemp5849[3];
    WData/*95:0*/ __Vtemp5851[3];
    WData/*95:0*/ __Vtemp5852[3];
    WData/*95:0*/ __Vtemp5854[3];
    WData/*95:0*/ __Vtemp5857[3];
    WData/*95:0*/ __Vtemp5859[3];
    WData/*95:0*/ __Vtemp5860[3];
    WData/*95:0*/ __Vtemp5862[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_1_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_2) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_2_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_10) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_3_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_18) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_4_T_6 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_26) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_4));
    VL_EXTEND_WI(66,32, __Vtemp5824, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5824[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5824[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5824[2U]);
    __Vtemp5826[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5826[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5826[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5827, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper 
        = VL_GTE_W(3, __Vtemp5826, __Vtemp5827);
    VL_EXTEND_WI(66,32, __Vtemp5829, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5829[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5829[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5829[2U]);
    __Vtemp5831[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5831[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5831[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5832, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_1 
        = VL_GTE_W(3, __Vtemp5831, __Vtemp5832);
    VL_EXTEND_WI(66,32, __Vtemp5834, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5834[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5834[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5834[2U]);
    __Vtemp5836[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5836[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5836[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5837, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_2 
        = VL_GTE_W(3, __Vtemp5836, __Vtemp5837);
    VL_EXTEND_WI(66,32, __Vtemp5839, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5839[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5839[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5839[2U]);
    __Vtemp5841[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5841[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5841[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5842, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_3 
        = VL_GTE_W(3, __Vtemp5841, __Vtemp5842);
    VL_EXTEND_WI(66,32, __Vtemp5844, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5844[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5844[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5844[2U]);
    __Vtemp5846[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5846[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5846[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5847, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_4 
        = VL_GTE_W(3, __Vtemp5846, __Vtemp5847);
    VL_EXTEND_WI(66,32, __Vtemp5849, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5849[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5849[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5849[2U]);
    __Vtemp5851[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5851[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5851[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5852, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_5 
        = VL_GTE_W(3, __Vtemp5851, __Vtemp5852);
    VL_EXTEND_WI(66,32, __Vtemp5854, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5854[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5854[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5854[2U]);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_5;
        }
    }
    VL_EXTEND_WI(66,32, __Vtemp5857, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[0U] 
        = ((0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU)) 
           ^ __Vtemp5857[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           ^ __Vtemp5857[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[2U] 
        = ((0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U)) ^ __Vtemp5857[2U]);
    __Vtemp5859[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5859[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5859[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5860, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                  << 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_6 
        = VL_GTE_W(3, __Vtemp5859, __Vtemp5860);
    VL_EXTEND_WI(66,32, __Vtemp5862, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T[0U] 
        = (0xfffff000U & (((IData)((VL_ULL(0x3fffffffffffff) 
                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                       >> 9U))) << 0xcU) 
                          & __Vtemp5862[0U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T[1U] 
        = (((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U))) >> 0x14U)) 
            | (0xfffff000U & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                        & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                           >> 9U)) 
                                       >> 0x20U)) << 0xcU))) 
           & __Vtemp5862[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T[2U] 
        = (0xfffU & (((IData)(((VL_ULL(0x3fffffffffffff) 
                                & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                   >> 9U)) >> 0x20U)) 
                      >> 0x14U) & __Vtemp5862[2U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__193(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__193\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__194(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__194\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5864[3];
    WData/*95:0*/ __Vtemp5865[3];
    WData/*95:0*/ __Vtemp5866[3];
    WData/*95:0*/ __Vtemp5867[3];
    WData/*95:0*/ __Vtemp5868[3];
    WData/*95:0*/ __Vtemp5869[3];
    WData/*95:0*/ __Vtemp5870[3];
    // Body
    VL_EXTEND_WI(66,32, __Vtemp5864, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5864);
    VL_EXTEND_WI(66,32, __Vtemp5865, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_1 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5865);
    VL_EXTEND_WI(66,32, __Vtemp5866, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_2 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5866);
    VL_EXTEND_WI(66,32, __Vtemp5867, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_3 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5867);
    VL_EXTEND_WI(66,32, __Vtemp5868, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_4 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5868);
    VL_EXTEND_WI(66,32, __Vtemp5869, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_5 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5869);
    VL_EXTEND_WI(66,32, __Vtemp5870, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_6 
        = VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5870);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___idxHit_T 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_27) 
             == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                    >> 1U)))) << 0x1bU) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_26) 
                == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                       >> 1U)))) << 0x1aU) 
              | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_25) 
                   == (0x1fffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                          >> 1U)))) 
                  << 0x19U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_24) 
                                 == (0x1fffU & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                        >> 1U)))) 
                                << 0x18U) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_23) 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                              >> 1U)))) 
                                              << 0x17U) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_22) 
                                                  == 
                                                  (0x1fffU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                              >> 1U)))) 
                                                 << 0x16U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_21) 
                                                     == 
                                                     (0x1fffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                 >> 1U)))) 
                                                    << 0x15U) 
                                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_20) 
                                                         == 
                                                         (0x1fffU 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                     >> 1U)))) 
                                                        << 0x14U) 
                                                       | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_19) 
                                                            == 
                                                            (0x1fffU 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                        >> 1U)))) 
                                                           << 0x13U) 
                                                          | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_18) 
                                                               == 
                                                               (0x1fffU 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                           >> 1U)))) 
                                                              << 0x12U) 
                                                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_17) 
                                                                  == 
                                                                  (0x1fffU 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                              >> 1U)))) 
                                                                 << 0x11U) 
                                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_16) 
                                                                     == 
                                                                     (0x1fffU 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                    << 0x10U) 
                                                                   | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_15) 
                                                                        == 
                                                                        (0x1fffU 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                       << 0xfU) 
                                                                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_14) 
                                                                          == 
                                                                          (0x1fffU 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                         << 0xeU))))))) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_13) 
                                                           == 
                                                           (0x1fffU 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                       >> 1U)))) 
                                                          << 0xdU) 
                                                         | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_12) 
                                                              == 
                                                              (0x1fffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                          >> 1U)))) 
                                                             << 0xcU) 
                                                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_11) 
                                                                 == 
                                                                 (0x1fffU 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                             >> 1U)))) 
                                                                << 0xbU) 
                                                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_10) 
                                                                    == 
                                                                    (0x1fffU 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                   << 0xaU) 
                                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_9) 
                                                                       == 
                                                                       (0x1fffU 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                      << 9U) 
                                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_8) 
                                                                          == 
                                                                          (0x1fffU 
                                                                           & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                         << 8U) 
                                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_7) 
                                                                             == 
                                                                             (0x1fffU 
                                                                              & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                            << 7U) 
                                                                           | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_6) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                               << 6U) 
                                                                              | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_5) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_4) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_3) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_2) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_1) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxs_0) 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                                                                >> 1U)))))))))))))))))))))))));
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_fp 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_fp;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_branch;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jal;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs1;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rfs1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rfs1;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rfs2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rfs2;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_wfd 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_wfd;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_div 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_div;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_wxd 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_wxd;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_csr 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_csr;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_fence_i 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_fence_i));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rvc;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_entry 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_btb_resp_entry;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_btb_resp_bht_history;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr) 
                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_flush_pipe));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_cause 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_cause;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_slow_bypass 
                = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                   | (2U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_load 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                   & ((((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                        | (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_reg_load_T_21)));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_store 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                   & ((((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                        | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_reg_load_T_21)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_sfence = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_sfence 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_pc 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_pc;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_raw_inst 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_raw_inst;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_wdata 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw)
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT__out
                    : (((QData)((IData)(((1U & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT__out 
                                                        >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT__out))));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2 
                    = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size))
                        ? (((QData)((IData)((0xffU 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                            << 0x38U) | (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x18U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                      << 0x10U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))))))))))
                        : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size))
                            ? (((QData)((IData)((0xffffU 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x20U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))))))
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size))
                                ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))
                                : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)));
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe))))) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken 
                = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                         ^ ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))
                             ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT__slt)
                             : (VL_ULL(0) == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT__in1_xor_in2))));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_flush_pipe 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killm)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_flush_pipe));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__195(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__195\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__197(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__197\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5871[3];
    WData/*95:0*/ __Vtemp5872[3];
    WData/*95:0*/ __Vtemp5873[3];
    // Body
    __Vtemp5871[0U] = (0xfffff000U & ((IData)((VL_ULL(0x3fffffffffffff) 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                  >> 9U))) 
                                      << 0xcU));
    __Vtemp5871[1U] = ((0xfffU & ((IData)((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((VL_ULL(0x3fffffffffffff) 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                                                >> 9U)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp5871[2U] = (0xfffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pte_addr_T 
                                              >> 9U)) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    VL_EXTEND_WI(66,32, __Vtemp5872, (~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                  << 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp5873, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                                                   << 2U)))) 
                                      & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_296 
        = (1U & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                       ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_7 
                          >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                     ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_7 
                                        >> 9U) : ((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_7 
                                                   >> 0x12U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_7 
                                                   >> 0x1bU)))) 
                     | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                         ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                          & (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[2U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[0U])) 
                                                   >> 0xcU)))))
                         : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                             ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[2U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[0U])) 
                                                       >> 0xcU)))))
                             : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                 ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[2U])) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[1U])) 
                                                         << 0xbU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[0U])) 
                                                           >> 0x15U)))))
                                 : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_266[0U])) 
                                                           >> 0x1eU)))))))))
                  : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_6) 
                         | VL_GTE_W(3, __Vtemp5871, __Vtemp5872)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_6) 
                           & VL_LT_W(3, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeLower_T, __Vtemp5873))))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_5 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_4;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxHit 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___idxHit_T 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__isValid);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__199(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__199\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__200(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__200\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous 
        = (((((((((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
                   ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
                           >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                      ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
                                         >> 9U) : (
                                                   (1U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
                                                    >> 0x12U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
                                                    >> 0x1bU)))) 
                      | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                          ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[0U])) 
                                                    >> 0xcU)))))
                          : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                              ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[2U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[0U])) 
                                                        >> 0xcU)))))
                              : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                  ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[2U])) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[1U])) 
                                                          << 0xbU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[0U])) 
                                                            >> 0x15U)))))
                                  : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[2U])) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[1U])) 
                                                          << 2U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_7[0U])) 
                                                            >> 0x1eU)))))))))
                   : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)) 
                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper)))) 
                 & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
                     ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                          ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_1 
                             >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_1 
                                           >> 9U) : 
                                       ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                         ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_1 
                                            >> 0x12U)
                                         : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_1 
                                            >> 0x1bU)))) 
                        | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                            ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[2U])) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[0U])) 
                                                      >> 0xcU)))))
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[2U])) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[1U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[0U])) 
                                                          >> 0xcU)))))
                                : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                    ? (VL_ULL(0) != 
                                       (VL_ULL(0x1fffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[2U])) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[1U])) 
                                               << 0xbU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[0U])) 
                                                 >> 0x15U)))))
                                    : (VL_ULL(0) != 
                                       (VL_ULL(0xfffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[2U])) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[1U])) 
                                               << 2U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_44[0U])) 
                                                 >> 0x1eU)))))))))
                     : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)) 
                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_1)) 
                           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper) 
                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_1)))))) 
                & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
                    ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                         ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_2 
                            >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                       ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_2 
                                          >> 9U) : 
                                      ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_2 
                                           >> 0x12U)
                                        : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_2 
                                           >> 0x1bU)))) 
                       | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                           ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[2U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[0U])) 
                                                     >> 0xcU)))))
                           : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                               ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[2U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[1U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[0U])) 
                                                         >> 0xcU)))))
                               : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                   ? (VL_ULL(0) != 
                                      (VL_ULL(0x1fffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[2U])) 
                                           << 0x2bU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[1U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[0U])) 
                                                >> 0x15U)))))
                                   : (VL_ULL(0) != 
                                      (VL_ULL(0xfffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[2U])) 
                                           << 0x22U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[1U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_81[0U])) 
                                                >> 0x1eU)))))))))
                    : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)) 
                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_1) 
                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_2)) 
                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_1) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_2)))))) 
               & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
                   ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                        ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_3 
                           >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                      ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_3 
                                         >> 9U) : (
                                                   (1U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                    ? 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_3 
                                                    >> 0x12U)
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_3 
                                                    >> 0x1bU)))) 
                      | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                          ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[0U])) 
                                                    >> 0xcU)))))
                          : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                              ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[2U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[0U])) 
                                                        >> 0xcU)))))
                              : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                  ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[2U])) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[1U])) 
                                                          << 0xbU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[0U])) 
                                                            >> 0x15U)))))
                                  : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[2U])) 
                                                       << 0x22U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[1U])) 
                                                          << 2U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_118[0U])) 
                                                            >> 0x1eU)))))))))
                   : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)) 
                      | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_2) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_3)) 
                         | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_2) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_3)))))) 
              & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
                  ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                       ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_4 
                          >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                     ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_4 
                                        >> 9U) : ((1U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                   ? 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_4 
                                                   >> 0x12U)
                                                   : 
                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_4 
                                                   >> 0x1bU)))) 
                     | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                         ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                          & (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[2U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[0U])) 
                                                   >> 0xcU)))))
                         : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                             ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                              & (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[2U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[0U])) 
                                                       >> 0xcU)))))
                             : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                 ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[2U])) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[1U])) 
                                                         << 0xbU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[0U])) 
                                                           >> 0x15U)))))
                                 : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                  & (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_155[0U])) 
                                                           >> 0x1eU)))))))))
                  : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_3) 
                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_4)) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_3) 
                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_4)))))) 
             & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
                 ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                      ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_5 
                         >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                    ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_5 
                                       >> 9U) : ((1U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                  ? 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_5 
                                                  >> 0x12U)
                                                  : 
                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_5 
                                                  >> 0x1bU)))) 
                    | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                        ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                         & (((QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[2U])) 
                                             << 0x34U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[1U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[0U])) 
                                                  >> 0xcU)))))
                        : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                            ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[2U])) 
                                                 << 0x34U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[0U])) 
                                                      >> 0xcU)))))
                            : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[2U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[1U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[0U])) 
                                                          >> 0x15U)))))
                                : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_192[0U])) 
                                                          >> 0x1eU)))))))))
                 : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)) 
                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_4) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_5)) 
                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_4) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_5)))))) 
            & ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
                ? (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                     ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_6 
                        >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                   ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_6 
                                      >> 9U) : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_6 
                                                 >> 0x12U)
                                                 : 
                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_6 
                                                 >> 0x1bU)))) 
                   | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                       ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[2U])) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[1U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[0U])) 
                                                 >> 0xcU)))))
                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                           ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[2U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[0U])) 
                                                     >> 0xcU)))))
                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                               ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[2U])) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[1U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[0U])) 
                                                         >> 0x15U)))))
                               : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_229[0U])) 
                                                         >> 0x1eU)))))))))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)) 
                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_5) 
                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_6)) 
                      | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_beginsAfterUpper_5) 
                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_endsBeforeUpper_6)))))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_T_296));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_7;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_6;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_wxd 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_22;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_branch 
            = (0x60U == (0x74U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rfs1 
            = (((0x40U == (0x80000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                | (0x40U == (0x10000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jal 
            = (0x68U == (0x68U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rfs2 
            = ((((0x24U == (0x7cU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                 | (0x40U == (0x40000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x10000040U == (0x90000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_fence_i 
            = (0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_wfd 
            = ((((4U == (0x3cU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                 | (0x40U == (0x80000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                | (0x40U == (0x70U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x10000040U == (0x10000060U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x24U == (0x203cU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_div 
            = (0x2000030U == (0x2000074U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits));
    }
    if ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_interrupt)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits;
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size 
            = (3U & (((0x14U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_15)) 
                      | (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_15)))
                      ? (((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2)) 
                          << 1U) | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1)))
                      : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits 
                         >> 0xcU)));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_dw 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_xcpt) 
               | ((0U == (0x10U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                  | (0U == (8U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))));
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_flush_pipe 
            = ((0x1008U == (0x3058U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_sfence) 
                   | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_23))) 
                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_csr_en) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_csr_ren))) 
                     & (~ (((0x340U <= (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                  >> 0x14U))) 
                            & (0x343U >= (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                           | ((0x140U <= (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U))) 
                              & (0x143U >= (0xfffU 
                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U)))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret)
               ? ((0x20000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)
                   ? ((~ ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                           >> 0x1eU) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                        >> 0x1bU))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_116))
                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_116))
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_116)));
    if ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_interrupt)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_btb_resp_entry 
            = ((1U & ((((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
                        - (IData)(1U)) & (3U != (3U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_in))) 
                      | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                                - (IData)(1U)) >> 1U))))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_entry)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_deq_bits_btb_entry));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__201(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__201\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__203(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__203\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_3;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__204(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__204\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__205(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__205\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__206(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__206\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__209(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__209\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_2;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__210(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__210\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__211(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__211\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__215(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__215\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__216(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__216\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__217(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__217\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__221(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__221\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__222(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__222\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__223(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__223\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__227(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__227\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT___GEN_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__228(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__228\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__229(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__229\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__233(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__233\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_0))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__234(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__234\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__235(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__235\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__236(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__236\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_wmask 
        = (((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
            << 3U) | (((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                       << 2U) | (((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wmask 
        = (((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
            << 3U) | (((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                       << 2U) | (((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wmask 
        = (((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
            << 3U) | (((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                       << 2U) | (((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))) 
                                  << 1U) | (0U == (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___repl_way_v0_T))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__239(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__239\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5878[3];
    WData/*95:0*/ __Vtemp5879[3];
    WData/*95:0*/ __Vtemp5884[3];
    WData/*95:0*/ __Vtemp5885[3];
    WData/*95:0*/ __Vtemp5890[3];
    WData/*95:0*/ __Vtemp5891[3];
    WData/*95:0*/ __Vtemp5896[3];
    WData/*95:0*/ __Vtemp5897[3];
    WData/*95:0*/ __Vtemp5902[3];
    WData/*95:0*/ __Vtemp5903[3];
    WData/*95:0*/ __Vtemp5908[3];
    WData/*95:0*/ __Vtemp5909[3];
    WData/*95:0*/ __Vtemp5914[3];
    WData/*95:0*/ __Vtemp5915[3];
    WData/*95:0*/ __Vtemp5920[3];
    WData/*95:0*/ __Vtemp5921[3];
    WData/*159:0*/ __Vtemp5924[5];
    WData/*159:0*/ __Vtemp5927[5];
    WData/*159:0*/ __Vtemp5928[5];
    WData/*159:0*/ __Vtemp5931[5];
    WData/*159:0*/ __Vtemp5934[5];
    WData/*159:0*/ __Vtemp5935[5];
    WData/*159:0*/ __Vtemp5938[5];
    WData/*159:0*/ __Vtemp5941[5];
    WData/*159:0*/ __Vtemp5942[5];
    WData/*159:0*/ __Vtemp5945[5];
    WData/*159:0*/ __Vtemp5948[5];
    WData/*159:0*/ __Vtemp5949[5];
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49942
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49955
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:49958: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 49958, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49966
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49979
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:49982: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 49982, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:49990
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50003
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50006: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50006, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50014
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50027
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50030: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50030, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50038
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50051
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50054: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50054, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50062
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50075
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50078: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50078, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50086
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50099
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50102: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50102, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50110
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50123
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50126: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50126, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50134
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50147
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50150: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50150, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50158
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50171
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)) 
                                 & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                                & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (((((0U == (0x1ffff000U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                         | (0U == (0x1ffff000U 
                                                   & (0x3000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50174: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50174, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50182
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50195
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50198: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50198, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50206
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50219
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50222: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50222, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50230
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50243
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50246: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50246, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50254
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50267
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50270: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50270, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50278
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50291
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50294: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50294, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50302
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50315
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50318: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50318, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50326
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50339
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50342: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50342, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50350
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50363
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50366: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50366, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50374
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & ((((0U == (0x1ffff000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50387
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & ((((0U == (0x1ffff000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                        | (0U == (0x1fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                       | (0U == (0x1fff0000U 
                                                 & (0x2000000U 
                                                    ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                      | (0U == (0x1c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50390: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50390, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50398
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50411
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50414: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50414, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50422
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50435
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50438: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50438, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50446
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50459
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50462: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50462, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50470
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50483
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50486: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50486, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50494
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50507
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50510: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50510, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50518
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50531
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50534: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50534, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50542
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50555
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50558: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50558, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50566
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50579
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50582: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50582, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50590
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50603
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50606: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50606, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50614
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50627
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50630: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50630, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50638
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50651
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                                   | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                      & (((0U == (0x1ffff000U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                                          | (0U == 
                                             (0x1fff0000U 
                                              & (0x2000000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                                         | (0U == (0x1c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50654: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50654, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50662
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50675
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50678: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50678, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50686
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50699
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50702: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50702, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50710
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50723
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50726: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50726, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50734
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50747
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50750: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50750, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50758
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50771
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50774: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50774, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50782
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50795
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50798: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50798, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50806
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50819
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50822: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50822, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50830
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50843
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50846: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50846, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50854
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50867
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50870: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50870, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50878
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50891
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                   & (0U == (0x1ffff000U 
                                             & (0x3000U 
                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50894: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50894, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50902
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50915
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50918: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50918, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50926
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50939
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50942: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50942, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50950
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50963
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50966: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50966, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50974
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50987
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:50990: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 50990, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:50998
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51011
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_84) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_398)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51014: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51014, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51022
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51035
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51038: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51038, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51046
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51059
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7ffffffU 
                                                     & ((IData)(0xfffU) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51062: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51062, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51070
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51083
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51086: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51086, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51094
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51107
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51110: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51110, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51118
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51131
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))) 
                         & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51134: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51134, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51142
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51155
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51158: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51158, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51166
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51179
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51182: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51182, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51190
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51203
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51206: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51206, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51214
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51227
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51230: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51230, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51238
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51251
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51254: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51254, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51262
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51275
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51278: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51278, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51286
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51299
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51302: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51302, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51310
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51323
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51326: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51326, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51334
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51347
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51350: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51350, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51358
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51371
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51374: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51374, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51382
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51395
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51398: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51398, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51406
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51419
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51422: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51422, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51430
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51443
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51446: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51446, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51454
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51467
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51470: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51470, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51478
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51491
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51494: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51494, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51502
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51515
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51518: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51518, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51526
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51539
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51542: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51542, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51550
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51563
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51566: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51566, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51574
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51587
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51590: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51590, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51598
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51611
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51614: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51614, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51622
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51635
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51638: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51638, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51646
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51659
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51662: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51662, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51670
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51683
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51686: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51686, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51694
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51707
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51710: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51710, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51718
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51731
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 3U))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 3U)))) 
                                  | (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x11U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x12U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51734: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51734, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51742
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51755
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51758: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51758, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51766
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51779
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51782: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51782, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51790
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51803
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51806: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51806, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51814
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51827
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51830: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51830, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51838
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51851
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51854: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51854, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51862
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51875
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51878: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51878, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51886
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51899
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51902: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51902, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51910
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51923
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51926: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51926, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51934
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51947
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51950: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51950, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51958
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51971
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51974: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51974, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51982
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:51995
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:51998: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 51998, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52006
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52019
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__sink)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52022: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52022, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52030
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52043
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__denied)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52046: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52046, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52054
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52067
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ ((~ (0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                                               >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52070: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52070, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52078
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                                             >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52091
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                                             >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52094: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52094, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52102
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52115
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52118: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52118, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52126
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52139
done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52142: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52142, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52150
verbose&&done_reset        
    ) {
        __Vtemp5878[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5878[1U] = 0U;
        __Vtemp5878[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5879, __Vtemp5878);
        __Vtemp5884[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5884[1U] = 0U;
        __Vtemp5884[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5885, __Vtemp5884);
        __Vtemp5890[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5890[1U] = 0U;
        __Vtemp5890[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5891, __Vtemp5890);
        __Vtemp5896[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5896[1U] = 0U;
        __Vtemp5896[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5897, __Vtemp5896);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp5879[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp5885[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp5891[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp5897[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52163
done_reset        
    ) {
        __Vtemp5902[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5902[1U] = 0U;
        __Vtemp5902[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5903, __Vtemp5902);
        __Vtemp5908[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5908[1U] = 0U;
        __Vtemp5908[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5909, __Vtemp5908);
        __Vtemp5914[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5914[1U] = 0U;
        __Vtemp5914[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5915, __Vtemp5914);
        __Vtemp5920[0U] = (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp5920[1U] = 0U;
        __Vtemp5920[2U] = 0U;
        VL_EXTEND_WW(76,75, __Vtemp5921, __Vtemp5920);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                 == ((7U == (7U & __Vtemp5903[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp5909[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                   == ((7U == (7U & 
                                               __Vtemp5915[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp5921[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_46))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52166: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52166, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52174
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5924, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp5927[0U] = (0x7fU & (__Vtemp5924[0U] 
                                    >> 1U));
        __Vtemp5927[1U] = 0U;
        __Vtemp5927[2U] = 0U;
        __Vtemp5927[3U] = 0U;
        __Vtemp5927[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5928, __Vtemp5927);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xffU & __Vtemp5928[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52187
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5931, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp5934[0U] = (0x7fU & (__Vtemp5931[0U] 
                                    >> 1U));
        __Vtemp5934[1U] = 0U;
        __Vtemp5934[2U] = 0U;
        __Vtemp5934[3U] = 0U;
        __Vtemp5934[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5935, __Vtemp5934);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xffU & __Vtemp5935[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52190: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52190, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52198
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52209
done_reset        
    ) {
        if (VL_UNLIKELY((((((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid)) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                              == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_d_ready)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52212: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52212, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52220
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x7ffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x7ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52233
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (0x7ffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
                                      : 0U) != ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                 ? 
                                                (0x7ffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                 : 0U)) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
                                                   : 0U))))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52236: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52236, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52244
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52257
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52260: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52260, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52268
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1 
                                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52281
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x7ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1 
                                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52284: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52284, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52292
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5938, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp5941[0U] = (0x7fU & (__Vtemp5938[0U] 
                                    >> 1U));
        __Vtemp5941[1U] = 0U;
        __Vtemp5941[2U] = 0U;
        __Vtemp5941[3U] = 0U;
        __Vtemp5941[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5942, __Vtemp5941);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xffU & __Vtemp5942[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52305
done_reset        
    ) {
        VL_SHIFTR_WWI(152,152,8, __Vtemp5945, vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp5948[0U] = (0x7fU & (__Vtemp5945[0U] 
                                    >> 1U));
        __Vtemp5948[1U] = 0U;
        __Vtemp5948[2U] = 0U;
        __Vtemp5948[3U] = 0U;
        __Vtemp5948[4U] = 0U;
        VL_EXTEND_WW(152,151, __Vtemp5949, __Vtemp5948);
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                == (0xffU & __Vtemp5949[0U])) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52308: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52308, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52316
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:55:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:52329
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:52332: Assertion failed in %NTestHarness.ldut.subsystem_cbus.buffer.monitor\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 52332, "");
        }
    }
}
