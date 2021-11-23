// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__109(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__109\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] = VL_ULL(0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0] = 1U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__ram_strb__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst[0U] = 1U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v1);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v2);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v3);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v1);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v2);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3) {
        VL_ASSIGNSEL_WIII(32,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram__v3);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v0)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v1)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v2)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v3)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v4)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v5)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v6)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7] 
            = (((~ (VL_ULL(0xff) << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7))) 
                & vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
                [vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7]) 
               | ((QData)((IData)(vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7)) 
                  << (IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram__v7)));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v0) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v0), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v0], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v1) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v1), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v1], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v1);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v2) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v2), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v2], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v2);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v3) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v3), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v3], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v3);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v4) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v4), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v4], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v4);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v5) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v5), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v5], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v5);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v6) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v6), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v6], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v6);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v7) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v7), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v7], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v7);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v8) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v8), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v8], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v8);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v9) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v9), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v9], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v9);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v10) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v10), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v10], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v10);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v11) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v11), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v11], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v11);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v12) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v12), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v12], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v12);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v13) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v13), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v13], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v13);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v14) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v14), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v14], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v14);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v15) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v15), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v15], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v15);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v16) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v16), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v16], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v16);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v17) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v17), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v17], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v17);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v18) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v18), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v18], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v18);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v19) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v19), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v19], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v19);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v20) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v20), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v20], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v20);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v21) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v21), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v21], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v21);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v22) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v22), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v22], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v22);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v23) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v23), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v23], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v23);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v24) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v24), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v24], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v24);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v25) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v25), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v25], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v25);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v26) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v26), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v26], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v26);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v27) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v27), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v27], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v27);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v28) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v28), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v28], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v28);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v29) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v29), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v29], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v29);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v30) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v30), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v30], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v30);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v31) {
        VL_ASSIGNSEL_WIII(8,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v31), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v31], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v31);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0) {
        VL_ASSIGNSEL_WIII(22,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v1) {
        VL_ASSIGNSEL_WIII(22,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v1), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v1], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v1);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v2) {
        VL_ASSIGNSEL_WIII(22,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v2), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v2], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v2);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v3) {
        VL_ASSIGNSEL_WIII(22,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v3), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v3], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v3);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v0[2U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile__v1[2U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0) {
        VL_ASSIGNSEL_WIII(21,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1) {
        VL_ASSIGNSEL_WIII(21,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v1);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2) {
        VL_ASSIGNSEL_WIII(21,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v2);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3) {
        VL_ASSIGNSEL_WIII(21,(IData)(vlTOPp->__Vdlyvlsb__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3), 
                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
                          [vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3], vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram__v3);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0] = 1U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last__v0;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___w_counter_T_2));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len__v0;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U];
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table___v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_id__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? VL_ULL(0) : (VL_ULL(0x3ffffffffffffff) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                               ? ((0xb00U == (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x14U)))
                                   ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata 
                                      >> 6U) : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_3)
                               : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_3)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___w_counter_T_2));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__subsystem_fbus_buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__bundleOut_1_0_REG 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_4)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_2)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__bundleOut_0_0_REG 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_4)
                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_2)
                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_2)));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__112(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_combo__TOP__112\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->clock)))) {
        vlTOPp->TestHarness__DOT__gated_clock_debug_clock_gate__DOT__en_latched 
            = vlTOPp->TestHarness__DOT__clock_en;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_data 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg) 
                    | (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))
                    ? 0U : (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                    >> 2U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_addr 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg) 
                    | (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))
                    ? 0U : (0x7fU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                             >> 0x22U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__stickyBusyReg)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiReqReg_op 
                = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__downgradeOpReg) 
                    | (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))
                    ? 0U : (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset) 
         | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___next_flight_T_5) 
                         - (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___next_flight_T_8)))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass_io_bypass;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___next_flight_T_5) 
                                                - (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___next_flight_T_8))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_resumereq) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_ackhavereset) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_opcodes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T) 
                                          & (~ vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_valid) 
                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1_3));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1) 
                                          & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2))) 
                                                 & (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                                                 ? 0xfU
                                                 : 0U))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1) 
                                          & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                 & (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                                                 ? 0xfU
                                                 : 0U))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1) 
                                          & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                                 & (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                                 ? 
                                                (0x7fffffffU 
                                                 & ((IData)(0xfU) 
                                                    << 
                                                    ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)))
                                                 : 0U))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 1U
                                                    : 0U)))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 1U
                                                    : 0U)))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 1U
                                                    : 0U)))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
                                                    : 0U)))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                            + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                                + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1))) 
                                            != (1U 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__latch)) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft) 
                                                  - (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___beatsLeft_T_2)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                         & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) 
                                                & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                                   >> 2U))) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___GEN_23))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) {
                vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
                    = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                             >> 0x1fU));
            }
        } else {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) {
                vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
                    = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                             >> 1U));
            }
        } else {
            vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) {
            vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
                = (1U & vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data);
        } else {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)))) {
                vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1) 
                                          & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2))) 
                                                 & (6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                >> 0x28U)))))
                                                 ? 
                                                (0x7fffffffU 
                                                 & ((IData)(0xfU) 
                                                    << 
                                                    (4U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                 >> 0x23U)) 
                                                        << 2U))))
                                                 : 0U))));
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x28U)))))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x23U)))))
                                                    : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_mip_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource_1__DOT__reg___DOT__reg_) 
            << 0xbU) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource_2__DOT__reg___DOT__reg_)) 
                         << 9U) | ((0x80U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource__DOT__reg___DOT__reg_) 
                                             << 6U)) 
                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                       << 5U) | ((8U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource__DOT__reg___DOT__reg_) 
                                                     << 3U)) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
                                                    << 1U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5508[3];
    WData/*95:0*/ __Vtemp5509[3];
    WData/*95:0*/ __Vtemp5522[3];
    WData/*95:0*/ __Vtemp5523[3];
    WData/*95:0*/ __Vtemp5526[3];
    WData/*95:0*/ __Vtemp5527[3];
    WData/*95:0*/ __Vtemp5530[3];
    WData/*95:0*/ __Vtemp5531[3];
    WData/*95:0*/ __Vtemp5534[3];
    WData/*95:0*/ __Vtemp5535[3];
    WData/*127:0*/ __Vtemp5537[4];
    WData/*127:0*/ __Vtemp5538[4];
    WData/*127:0*/ __Vtemp5539[4];
    WData/*95:0*/ __Vtemp5541[3];
    WData/*95:0*/ __Vtemp5542[3];
    WData/*95:0*/ __Vtemp5545[3];
    WData/*95:0*/ __Vtemp5546[3];
    WData/*95:0*/ __Vtemp5549[3];
    WData/*95:0*/ __Vtemp5550[3];
    WData/*95:0*/ __Vtemp5553[3];
    WData/*95:0*/ __Vtemp5554[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__fixer__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___value_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___value_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___value_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___b_delay_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__b_delay)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_count_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___r_count_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_count_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___w_count_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___b_count_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___b_count_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__fixer__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_183 
        = (7U & ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount))
                  ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount) 
                     - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___invalidate_refill_T 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___count_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___nextPos_T_3 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos 
        = ((5U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
            ? (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos)))
            : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_410 
        = (7U & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count))
                  ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count) 
                     - (IData)(1U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___count_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_strb
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ram_last
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_resp
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_349 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__REG) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_411 
        = (7U & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__count))
                  ? ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
                      ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos) 
                         - (IData)(1U)) : 5U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][0U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][1U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][2U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][3U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][0U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][1U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][2U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_rdata[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr][3U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_15 
        = ((0xfU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                   (0xfU & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                               >> 2U)))) 
                    >> 5U)) | (0xf0U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                       (0xfU 
                                                        & (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                            >> 2U)))) 
                                        << 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_1915 
        = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
                     >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_and 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)) 
           | (0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_xor 
        = ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)) 
           | (0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)));
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_14) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_sel1 
            = (0U == (0xfffff000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_2;
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_2;
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_sel1 
            = (0U == (0xfffff000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_hi_hi_hi 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x38U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_hi_hi_lo 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x30U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_hi_lo_hi 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x28U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_lo_lo_hi 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 8U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_lo_lo_lo 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_hi_lo_lo 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x20U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_lo_hi_hi 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x18U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_storegen_data_lo_hi_lo 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu_io_out 
                                >> 0x10U)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_0 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT___T_4)
            ? (4U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
            : 2U);
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__maxDevs_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT___T_4)
            ? (4U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
            : 2U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                            >> 1U)));
    __Vtemp5508[0U] = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp5508[1U] = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp5508[2U] = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp5509, __Vtemp5508, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U] 
        = __Vtemp5509[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U] 
        = __Vtemp5509[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U] 
        = (1U & __Vtemp5509[2U]);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNAOrB 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_23 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_46 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                      << 0x18U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                   >> 8U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                        << 0x18U) | 
                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                        >> 8U)))) ? 
                      (((IData)((0U != (0xfU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                 << 0x14U) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                   >> 0xcU))))) 
                        << 2U) | ((0U != (0xfU & ((
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                     >> 0xcU))))
                                   ? ((0x8000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                       ? 3U : ((0x4000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 0xdU))))
                                   : ((0x800U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                       ? 3U : ((0x400U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 9U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 4U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                               << 0x1cU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 4U))))
                                      ? ((0x80U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((0x40U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 5U))))
                                      : ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                          ? 3U : ((4U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                      >> 1U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_70 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_93 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                      << 0x18U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                   >> 8U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                        << 0x18U) | 
                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                        >> 8U)))) ? 
                      (((IData)((0U != (0xfU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 << 0x14U) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                   >> 0xcU))))) 
                        << 2U) | ((0U != (0xfU & ((
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                     >> 0xcU))))
                                   ? ((0x8000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                       ? 3U : ((0x4000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 0xdU))))
                                   : ((0x800U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                       ? 3U : ((0x400U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 9U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 4U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                               << 0x1cU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                 >> 4U))))
                                      ? ((0x80U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((0x40U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 5U))))
                                      : ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                          ? 3U : ((4U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                      >> 1U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_23 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_46 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                      << 0x18U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                   >> 8U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                        << 0x18U) | 
                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                        >> 8U)))) ? 
                      (((IData)((0U != (0xfU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                 << 0x14U) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                   >> 0xcU))))) 
                        << 2U) | ((0U != (0xfU & ((
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                     >> 0xcU))))
                                   ? ((0x8000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                       ? 3U : ((0x4000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 0xdU))))
                                   : ((0x800U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                       ? 3U : ((0x400U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 9U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 4U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                               << 0x1cU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 4U))))
                                      ? ((0x80U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((0x40U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 5U))))
                                      : ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                          ? 3U : ((4U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                      >> 1U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_70 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                      << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                        << 8U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                  >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                    << 4U) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                               << 4U) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                 >> 0x1cU))))
                                      ? ((0x80000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((0x40000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x1dU))))
                                      : ((0x8000000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((0x4000000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x19U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                               << 0xcU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                 >> 0x14U))))
                                      ? ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((0x400000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x15U))))
                                      : ((0x80000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((0x40000U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_93 
        = (((IData)((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                      << 0x18U) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                   >> 8U))))) 
            << 3U) | ((0U != (0xffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                        << 0x18U) | 
                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                        >> 8U)))) ? 
                      (((IData)((0U != (0xfU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 << 0x14U) 
                                                | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                   >> 0xcU))))) 
                        << 2U) | ((0U != (0xfU & ((
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                   << 0x14U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                     >> 0xcU))))
                                   ? ((0x8000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                       ? 3U : ((0x4000U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 0xdU))))
                                   : ((0x800U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                       ? 3U : ((0x400U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                ? 2U
                                                : (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 9U))))))
                       : (((IData)((0U != (0xfU & (
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 4U))))) 
                           << 2U) | ((0U != (0xfU & 
                                             ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                               << 0x1cU) 
                                              | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                 >> 4U))))
                                      ? ((0x80U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((0x40U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 5U))))
                                      : ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                          ? 3U : ((4U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                      >> 1U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp
        [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][0U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][1U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext_RW0_rdata[2U] 
        = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_ren)
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__ram
                       [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__reg_RW0_addr][2U]
                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__RW0_random[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_replay 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__replay_ex));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___T_36) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__cmdHi;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_decode_0_fp_illegal 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)) 
                 | (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                               >> 5U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN_8 
        = ((6U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                           [0U]) ? 2U : ((4U == vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                          [0U]) ? 1U
                                          : ((3U == 
                                              vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((2U == 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : 0U)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_cmd_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_way 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_hit_way;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last 
        = (vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_last
           [vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1] 
           & vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_echo_real_last
           [vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1]);
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_1 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 8U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_2 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x10U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_3 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x18U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_4 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x20U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_5 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x28U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_6 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x30U)));
    }
    if (vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_7 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x38U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 8U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x10U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x18U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x20U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x28U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x30U)));
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
                                >> 0x38U)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[0U] 
        = (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[2U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U] 
            << 0x1fU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                         >> 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[3U] 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U] 
            << 0x1fU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U] 
                         >> 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[4U] 
        = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U] 
                 >> 1U));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_csr_stall 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_wfi) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_cease_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_2 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_8 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_14 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_20 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_26 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_32 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_38 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_44 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_2 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_8 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_14 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_20 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_26 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_32 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_38 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_44 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__result 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__resHi)
            ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U])) 
                << 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])) 
                                           >> 1U)))
            : (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    if (((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_1)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_2)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_3)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_4)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_5)) 
          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_6)) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_7))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__timecmp_0 
            = vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___timecmp_0_T;
    }
    vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT___GEN_41));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_41));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__value_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_6 = 0U;
    } else {
        if ((0x3ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_6 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_6_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_5 = 0U;
    } else {
        if ((0x7ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_5 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_5_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_3 = 0U;
    } else {
        if ((0x1fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_3 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_3_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_2 = 0U;
    } else {
        if ((0x3fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_2 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_2_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_4 = 0U;
    } else {
        if ((0xfffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_4 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_4_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_1 = 0U;
    } else {
        if ((0x7fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_1 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_1_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_7 = 0U;
    } else {
        if ((0x1ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_7 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_7_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_0 = 0U;
    } else {
        if ((0xffffU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_0 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_0_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_10 = 0U;
    } else {
        if ((0x3fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_10 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_10_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_8 = 0U;
    } else {
        if ((0xffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 8U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_8 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_8_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_9 = 0U;
    } else {
        if ((0x7fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 9U) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_9 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_9_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_11 = 0U;
    } else {
        if ((0x1fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_11 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_11_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_12 = 0U;
    } else {
        if ((0xfU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_12 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_12_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_13 = 0U;
    } else {
        if ((7U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_13 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_13_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_14 = 0U;
    } else {
        if ((3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_14 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_14_T));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_15 = 0U;
    } else {
        if ((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40)))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_15 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_15_T));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_11) 
         & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                            [0U]));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_14) 
         & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__threshold_0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                            [0U]));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___newEntry_sr_T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_v) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_r) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_x) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_w))))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_a));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FnewEntry_sr_T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_v) 
            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_r) 
               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_x) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_w))))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_a));
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_14) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_id 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_14) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_echo_real_last 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T))
                    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_toint_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wb_ctrl_toint));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_req_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s0_fq_has_space));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_id 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    }
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT___T_1) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_echo_real_last 
            = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last
            [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T))
                    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                               << 1U)) 
                   | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                           >> 0x30U)))
                             ? ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC)
                             : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC) 
                           << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                                      << 1U)) 
                                                  | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC))) 
                                                 >> 0x20U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC)
                       : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC) 
                     >> 0xfU));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_400 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_4
            : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_3
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_2
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__pos))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_1
                        : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_0))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_23) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_30) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_vec_0 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fstate_vec_0_T_16;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__flushCounter 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0xc0U : (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_351)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__valid_stage0_v 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T))
                    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_b) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isNaN));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ = VL_ULL(0);
    } else {
        if (((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_8) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_9)) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_10)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_11)) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_12)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_13)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_14)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_f_woready_15))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                = vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___time_T_2;
        } else {
            if ((0x63U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_value))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_ 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___time_T_1;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_1 = 0U;
    } else {
        if ((1U & ((3U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__claiming)) 
                          >> 2U)) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain_io_q) 
                                      >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_1 
                = (1U & (~ (3U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__claiming)) 
                                  >> 2U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0 = 0U;
    } else {
        if ((1U & ((7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__claiming)) 
                          >> 1U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain_io_q) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT__inFlight)))))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0 
                = (1U & (~ (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__claiming)) 
                                  >> 1U))));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__resetting) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___reset_waddr_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_singleStepped 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_singleStep) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_50));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
        = (((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_typeTag))
             ? VL_ULL(0) : VL_ULL(0xffffffff00000000)) 
           | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_data);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_39 
        = (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_sepc) 
                                   | (QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                  >> 2U)))
                                                       ? 1U
                                                       : 3U)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[1U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                       >> 0x1dU))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_infiniteExc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in2[2U];
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___value_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_release_data_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb___05Fgrant_T)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_2_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__read_stvec_lo 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stvec 
           & (~ (QData)((IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stvec))
                                  ? 0xfeU : 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_kill_REG 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_req_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_infiniteExc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__majorExc_Z) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__roundingMode_Z)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sign_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi 
            << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_397)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))
                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__empty)
                    ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full) 
                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T))
                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT___do_enq_T));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_15 
        = (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mepc) 
                                   | (QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                  >> 2U)))
                                                       ? 1U
                                                       : 3U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_26 
        = (VL_ULL(0xffffffffff) & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dpc) 
                                   | (QData)((IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                  >> 2U)))
                                                       ? 1U
                                                       : 3U)))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_bits_size;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_1 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_2 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_3 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_4 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_5 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_6 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_7 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
            << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___intValue_res_T_3 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ))
            ? (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1))
            : (((QData)((IData)((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1 
                                               >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___T_7 
        = (VL_ULL(0x2080000000000000) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                          << 0x3bU) 
                                         | (QData)((IData)(
                                                           (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action) 
                                                             << 0xcU) 
                                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
                                                                << 7U) 
                                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
                                                                   << 6U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
                                                                      << 4U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u) 
                                                                         << 3U) 
                                                                        | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
                                                                            << 2U) 
                                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w) 
                                                                               << 1U) 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__read_mtvec_lo 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtvec 
           & (~ ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtvec)
                  ? 0xfeU : 2U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U];
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_297) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_297) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__c_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typeTagIn 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[1U];
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_bits_in1[2U];
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter 
                = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__a_first)
                             ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_opcode))
                                 ? 0U : (~ (0xfffffU 
                                            & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_2_a_bits_size)) 
                                               >> 3U))))
                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_b 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache_io_resp_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_redirect)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__value_1));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum = 0U;
    } else {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum = 0U;
    } else {
        if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle)) 
                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___cycleNum_T_17;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__inReady 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___GEN_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_rawOut_sig 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
            << 1U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notZeroRem_Z)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb_io_req_valid) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__vm_enabled))) {
            if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_30) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__state_vec_0 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___state_vec_0_T_16;
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_rw_cmd 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid)
                  ? 0U : 4U)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___value_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__entering) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt;
    }
    __Vtemp5522[0U] = 0U;
    __Vtemp5522[1U] = 0U;
    __Vtemp5522[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5523, __Vtemp5522, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5526[0U] = 0U;
    __Vtemp5526[1U] = 0U;
    __Vtemp5526[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5527, __Vtemp5526, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xffU & ((0x4000U & (__Vtemp5523[2U] << 0xeU)) 
                     | (__Vtemp5523[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp5527[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp5527[1U] 
                                           >> 2U)))));
    __Vtemp5530[0U] = 0U;
    __Vtemp5530[1U] = 0U;
    __Vtemp5530[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5531, __Vtemp5530, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5534[0U] = 0U;
    __Vtemp5534[1U] = 0U;
    __Vtemp5534[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5535, __Vtemp5534, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xffU & ((0x4000U & (__Vtemp5531[2U] << 0xeU)) 
                     | (__Vtemp5531[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp5535[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp5535[1U] 
                                           >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch)
                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__earlyWinner_0)
                                   ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_opcode))
                                       ? 0U : (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_auto_out_a_bits_size)) 
                                                     >> 3U))))
                                   : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT___beatsLeft_T_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__beatsLeft 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__latch)
                     ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__earlyWinner_1)
                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_bits_len)
                         : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___beatsLeft_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0x3fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                      ? ((0xb00U == 
                                          (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                            >> 0x14U)))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata
                                          : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_2)))
                                      : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_2))))));
    VL_EXTEND_WQ(103,64, __Vtemp5537, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                     ? ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                              >> 0x14U)))
                         ? (__Vtemp5537[0U] >> 0x11U)
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_172))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_172))));
    VL_EXTEND_WQ(103,64, __Vtemp5538, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    VL_EXTEND_WQ(103,64, __Vtemp5539, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__wdata);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 3U : (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen)
                           ? ((0x300U == (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                           >> 0x14U)))
                               ? ((2U == (3U & ((__Vtemp5538[1U] 
                                                 << 0x15U) 
                                                | (__Vtemp5538[0U] 
                                                   >> 0xbU))))
                                   ? 0U : ((__Vtemp5539[1U] 
                                            << 0x15U) 
                                           | (__Vtemp5539[0U] 
                                              >> 0xbU)))
                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_170))
                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_170))));
    __Vtemp5541[0U] = 0U;
    __Vtemp5541[1U] = 0U;
    __Vtemp5541[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5542, __Vtemp5541, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5545[0U] = 0U;
    __Vtemp5545[1U] = 0U;
    __Vtemp5545[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5546, __Vtemp5545, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62 
        = ((0xffU & ((0x800U & (__Vtemp5542[2U] << 0xbU)) 
                     | (__Vtemp5542[1U] >> 0x15U))) 
           | (0xff00U & ((0x8000000U & (__Vtemp5546[2U] 
                                        << 0x1bU)) 
                         | (0x7ffff00U & (__Vtemp5546[1U] 
                                          >> 5U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__latch)
                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1)
                                   ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                       ? 0U : (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                                     >> 3U))))
                                   : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___beatsLeft_T_4))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_dmem_resp_val) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_tag 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_tag) 
                        >> 2U));
    }
    __Vtemp5549[0U] = 0U;
    __Vtemp5549[1U] = 0U;
    __Vtemp5549[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5550, __Vtemp5549, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5553[0U] = 0U;
    __Vtemp5553[1U] = 0U;
    __Vtemp5553[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5554, __Vtemp5553, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xffffU & ((__Vtemp5550[1U] << 3U) | (__Vtemp5550[0U] 
                                                  >> 0x1dU))) 
           | (0xffff0000U & (__Vtemp5554[0U] << 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_271)
            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_61)
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)
                    ? ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size)
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_61))
                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_61)))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_61));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_lo_hi 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_vm_enabled 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_satp_mode) 
             >> 3U) & (1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__io_status_dprv_REG))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_passthrough)));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full = 0U;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_id 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq__DOT__ram_id
           [0U]);
    if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid) 
          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback)) 
         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_replay_next))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
            = ((((((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_data_T_1))
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[0U])))
                    : VL_ULL(0)) | ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_data_T_1))
                                     ? (((QData)((IData)(
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[2U])))
                                     : VL_ULL(0))) 
                 | ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_data_T_1))
                     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[4U])))
                     : VL_ULL(0))) | ((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_data_T_1))
                                       ? (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[7U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[6U])))
                                       : VL_ULL(0))) 
               | ((0x10U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_data_T_1))
                   ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data
                   : VL_ULL(0)));
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__old_gennum1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle 
                    = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                             [0U] >> 3U));
            }
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    if (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
               [0U])) & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                         >> 1U)) & (0U == (0x7bf9eeU 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                           [0U]))) 
         & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                            [0U]));
    }
    if (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
               [0U])) & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex))) 
          & (0U == (0x7bf9eeU & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                    [0U]))) & (3U == (3U & (IData)(
                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                    >> 0x20U)))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__priority_0 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                             [0U] >> 0x20U)));
    }
    if (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
               [0U])) & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                         >> 8U)) & (0U == (0x7bf9eeU 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                           [0U]))) 
         & (3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                 >> 1U)))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                             [0U] >> 1U)));
    }
    if (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
            & (~ vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
               [0U])) & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex)) 
                         >> 0xaU)) & (0U == (0x7bf9eeU 
                                             & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                             [0U]))) 
         & (3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                 >> 1U)))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0 
            = (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                             [0U] >> 1U)));
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__ipi_0 = 0U;
    } else {
        if ((0xfU & ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                        & (4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                       & ((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 0xeU)))) 
                      & (0U == (0x7ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                          >> 3U)))) 
                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__out_backMask)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__ipi_0 
                = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_42) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag 
            = (0x7ffffffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__invalidated 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___GEN_30));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_request_refill_REG 
        = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_miss) 
                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_valid))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__imem_might_request_reg 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) 
                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid)) 
                 | (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                            >> 1U))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_263) {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_pma_cacheable)))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_signed 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed;
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_pf_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_st 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_pf_st));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_st 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ae_st));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_st 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_ma_st));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_cmd_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb__DOT__s1_id)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_fp)
                    ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3
                        : (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3)) 
                            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___store_T_3))))
                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2)
                : VL_ULL(0));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_241;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_164;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_60;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous) {
            if ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))) {
                if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr))) {
                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1 
                        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_240;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__120(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__120\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_sizes_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xaU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xaU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xbU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xbU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xcU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xcU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xdU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xdU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xeU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xeU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0xfU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0xfU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x10U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x10U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x11U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x11U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x12U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x12U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x13U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x13U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x14U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x14U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x15U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x15U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x16U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x16U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x17U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x17U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x18U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x18U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x19U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x19U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1aU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1aU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1bU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1bU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1cU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1cU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1dU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1dU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1eU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1eU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x1fU] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x1fU];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x20U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x20U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x21U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x21U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x22U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x22U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x23U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x23U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x24U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x24U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___inflight_sizes_T_5[0x25U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1[0x25U];
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype) 
            << 0x18U) | vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control);
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs)) 
            << 0x39U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                          << 0x38U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs)) 
                                        << 0x31U) | 
                                       (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs)) 
                                            << 0x29U) 
                                           | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                        << 0x19U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                                                                           << 0x18U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg))))))))))))))))));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq) 
                << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset) 
                             << 3U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset 
        = vlTOPp->reset;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pending_interrupts 
        = ((QData)((IData)((0xaaaU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_mip_T)))) 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5560[3];
    WData/*95:0*/ __Vtemp5561[3];
    WData/*95:0*/ __Vtemp5563[3];
    WData/*95:0*/ __Vtemp5564[3];
    WData/*95:0*/ __Vtemp5565[3];
    WData/*95:0*/ __Vtemp5569[3];
    WData/*95:0*/ __Vtemp5570[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_size;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_id
        [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1];
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_echo_real_last__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_id__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_echo_real_last__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][0U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][1U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][2U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][3U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][4U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][5U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[5U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][6U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[6U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr][7U]
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random[7U]);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext_R0_data 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_ren)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__ram
           [vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__reg_R0_addr]
            : vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_0_ext__DOT__R0_random);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr_valids 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_44) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_38) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_32) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_26) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_20) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_14) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_8) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsector_hits_T_2))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_44) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_38) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_32) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_26) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_20) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_14) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_8) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sector_hits_T_2))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_25 
        = ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_15) 
                     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_15) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain_io_q 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___in_aw_ready_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full));
    VL_EXTENDS_WI(74,9, __Vtemp5560, ((0x100U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                 << 8U)) 
                                      | (0xffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[0U])));
    __Vtemp5561[0U] = __Vtemp5560[0U];
    __Vtemp5561[1U] = __Vtemp5560[1U];
    __Vtemp5561[2U] = (0x3ffU & __Vtemp5560[2U]);
    VL_EXTENDS_WW(74,65, __Vtemp5563, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor);
    __Vtemp5564[0U] = __Vtemp5563[0U];
    __Vtemp5564[1U] = __Vtemp5563[1U];
    __Vtemp5564[2U] = (0x3ffU & __Vtemp5563[2U]);
    VL_MULS_WWW(74,74,74, __Vtemp5565, __Vtemp5561, __Vtemp5564);
    __Vtemp5569[0U] = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[2U];
    __Vtemp5569[1U] = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[3U];
    __Vtemp5569[2U] = ((0x3feU & (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[4U]))) 
                                  << 1U)) | (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[4U]));
    VL_ADD_W(3, __Vtemp5570, __Vtemp5565, __Vtemp5569);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[0U] 
        = (IData)((VL_ULL(0xffffffffffffff) & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[2U])) 
                                                << 0x38U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[0U])) 
                                                     >> 8U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[1U] 
        = ((0xff000000U & (__Vtemp5570[0U] << 0x18U)) 
           | (IData)(((VL_ULL(0xffffffffffffff) & (
                                                   ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[2U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[0U])) 
                                                         >> 8U)))) 
                      >> 0x20U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[2U] 
        = ((0xffffffU & (__Vtemp5570[0U] >> 8U)) | 
           (0xff000000U & (__Vtemp5570[1U] << 0x18U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[3U] 
        = ((0xffffffU & (__Vtemp5570[1U] >> 8U)) | 
           (0xff000000U & (__Vtemp5570[2U] << 0x18U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[4U] 
        = (3U & (__Vtemp5570[2U] >> 8U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divby0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
           & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U]));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last
        [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___eOutPos_T_1 
        = (0x3fU & ((((IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                      << 5U) | ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                                 ? (((IData)((0U != 
                                              (0xffffU 
                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                     >> 0x10U))))) 
                                     << 4U) | ((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                       >> 0x10U))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_23)
                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_46)))
                                 : (((IData)((0U != 
                                              (0xffffU 
                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                     >> 0x10U))))) 
                                     << 4U) | ((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                       >> 0x10U))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_70)
                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___dividendMSB_T_93))))) 
                    - (((IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])) 
                        << 5U) | ((0U != vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U])
                                   ? (((IData)((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                       >> 0x10U))))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                         >> 0x10U))))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_23)
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_46)))
                                   : (((IData)((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                       >> 0x10U))))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                         >> 0x10U))))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_70)
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___divisorMSB_T_93)))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_isZero_1 
        = ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                    >> 0x17U)))) & 
           (0U == (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_isZero 
        = ((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                     >> 0x34U)))) & 
           (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
        = (((QData)((IData)(((((0x80U & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                [0U]) ? 0xffU : 0U) 
                              << 0x18U) | ((((0x40U 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                              [0U])
                                              ? 0xffU
                                              : 0U) 
                                            << 0x10U) 
                                           | ((((0x20U 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                                 [0U])
                                                 ? 0xffU
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x10U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                            [0U]) ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                               [0U])
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                                  [0U])
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask
                                                   [0U])
                                                   ? 0xffU
                                                   : 0U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_141 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                          >> 0x11U))) ? 5U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                             >> 0x10U)))
                                               ? 6U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                              >> 0xfU)))
                                                   ? 7U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0xeU)))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0xdU)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                 >> 0xcU)))
                                                      ? 0xaU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                  >> 0xbU)))
                                                       ? 0xbU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                   >> 0xaU)))
                                                        ? 0xcU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                    >> 9U)))
                                                         ? 0xdU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                     >> 8U)))
                                                          ? 0xeU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                      >> 7U)))
                                                           ? 0xfU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                       >> 6U)))
                                                            ? 0x10U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                        >> 5U)))
                                                             ? 0x11U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                         >> 4U)))
                                                              ? 0x12U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                          >> 3U)))
                                                               ? 0x13U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                           >> 2U)))
                                                                ? 0x14U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                            >> 1U)))
                                                                 ? 0x15U
                                                                 : 0x16U)))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_11)
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_1_T_6)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_68 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                          >> 0x11U))) ? 0x22U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                             >> 0x10U)))
                                                  ? 0x23U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                              >> 0xfU)))
                                                   ? 0x24U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0xeU)))
                                                    ? 0x25U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0xdU)))
                                                     ? 0x26U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                 >> 0xcU)))
                                                      ? 0x27U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                  >> 0xbU)))
                                                       ? 0x28U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                   >> 0xaU)))
                                                        ? 0x29U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                    >> 9U)))
                                                         ? 0x2aU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                     >> 8U)))
                                                          ? 0x2bU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                      >> 7U)))
                                                           ? 0x2cU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                       >> 6U)))
                                                            ? 0x2dU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                        >> 5U)))
                                                             ? 0x2eU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                         >> 4U)))
                                                              ? 0x2fU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                          >> 3U)))
                                                               ? 0x30U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                           >> 2U)))
                                                                ? 0x31U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                            >> 1U)))
                                                                 ? 0x32U
                                                                 : 0x33U)))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isInf))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isZero))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit_addr)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_repl_addr));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_invalidExc) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_infiniteExc) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__read_stvec 
        = (((QData)((IData)(((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__read_stvec_lo 
                                            >> 0x26U)))
                              ? 0x1ffffffU : 0U))) 
            << 0x27U) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__read_stvec_lo);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_invalidExc) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_infiniteExc) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isInf_Z));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state;
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_io_in 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1
            : (((QData)((IData)((0x7fffffffU & VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___intValue_res_T_3 
                                                                               >> 0x20U)))))))) 
                << 0x21U) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___intValue_res_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_1 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_1 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_2 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_2 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_3 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_3 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_4 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_4 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_5 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_5)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_6 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_6 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1_io_in 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1
            : (((QData)((IData)((0x7fffffffU & VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___intValue_res_T_3 
                                                                               >> 0x20U)))))))) 
                << 0x21U) | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___intValue_res_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_hi_7 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_7 
           & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__pmp_mask_base_7)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_94 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_86 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_88 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_st));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_90 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_92 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_83) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_st));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_84 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_st));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_taken 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_taken));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xff00ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
                         >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
                                                   << 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_hi_lo 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_lo_hi) 
           & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                      >> 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_signed;
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___in_aw_ready_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
                    | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
                       | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
                          | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
                             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_s2_xcpt_ae_st))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__accessRegIsGPR 
        = (((0x1000U <= (0xffffU & vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T)) 
            & (0x101fU >= (0xffffU & vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T))) 
           & ((2U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T 
                            >> 0x14U))) | (3U == (7U 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T 
                                                     >> 0x14U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT___T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_resumereq;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset 
            = vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_ackhavereset;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1) {
        vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) 
                      & (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                         >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___GEN_23)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1_3 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp5573[5];
    WData/*95:0*/ __Vtemp5579[3];
    WData/*95:0*/ __Vtemp5580[3];
    WData/*95:0*/ __Vtemp5583[3];
    WData/*95:0*/ __Vtemp5584[3];
    WData/*127:0*/ __Vtemp5587[4];
    WData/*127:0*/ __Vtemp5588[4];
    WData/*95:0*/ __Vtemp5591[3];
    WData/*95:0*/ __Vtemp5592[3];
    WData/*95:0*/ __Vtemp5595[3];
    WData/*95:0*/ __Vtemp5596[3];
    WData/*95:0*/ __Vtemp5599[3];
    WData/*95:0*/ __Vtemp5601[3];
    WData/*95:0*/ __Vtemp5603[3];
    WData/*95:0*/ __Vtemp5604[3];
    WData/*95:0*/ __Vtemp5610[3];
    WData/*95:0*/ __Vtemp5611[3];
    WData/*95:0*/ __Vtemp5614[3];
    WData/*95:0*/ __Vtemp5615[3];
    WData/*95:0*/ __Vtemp5618[3];
    WData/*95:0*/ __Vtemp5619[3];
    WData/*95:0*/ __Vtemp5622[3];
    WData/*95:0*/ __Vtemp5623[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Finvalidate_refill_T 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscValid 
        = (3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___lrscBackingOff_T 
        = (0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___lrscCount_T_2 
        = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1_1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_perf_release_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__resetting 
        = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                    >> 9U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___reset_waddr_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__idle 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum));
    vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT___time_T_1 
        = (VL_ULL(1) + vlTOPp->TestHarness__DOT__ldut__DOT__clint__DOT__time_);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst
           [0U] : 1U);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_351 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting)
                      ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__flushCounter))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__flushCounter)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_signProd) 
           ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfB));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_0) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_1) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_2_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_2) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_3_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_3) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_4_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_4) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_5_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_5) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_6_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_6) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_7_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_7) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_8_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_8) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_9_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_9) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_10_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_10) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_11_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_11) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_12_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_12) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_13_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_13) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_14_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_14) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___error_15_T 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__error_15) 
           | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroB)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroC));
    VL_EXTEND_WQ(130,64, __Vtemp5573, VL_NEGATE_Q(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__result));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[0U] 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                ? __Vtemp5573[0U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[1U] 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                ? __Vtemp5573[1U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[2U] 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                ? __Vtemp5573[2U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[3U] 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                ? __Vtemp5573[3U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_2[4U] 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? ((0x80000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])
                ? __Vtemp5573[4U] : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U])
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[4U]);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_deq 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_40 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_burst
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_burst_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_burst_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2 
        = ((0x800U & ((0xfffff000U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                      << 0xcU)) | (0x800U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                      >> 0x14U)))) 
           | (0x7ffU & (~ (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                  >> 0x14U))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_in_b_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__empty)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                 & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_io_in 
                            >> 0x3fU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__divby0))) 
           & (1U <= (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___eOutPos_T_1)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_7 
        = ((5U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__resHi));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_hi_lo 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x10U)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_hi_lo 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x30U)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)(((((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (VL_ULL(0x3ffffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags)
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                   >> 0x19U))))
                                       : (((QData)((IData)(
                                                           (3U 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_highAlignedSigC 
                                                               >> 0x18U)))) 
                                           << 0x2fU) 
                                          | (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
                                                      >> 0x1aU)))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_size_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_size_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1 
        = (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1) 
                    + (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_csr_stall)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid;
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_addr
           [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_addr_io_deq_bits_MPORT_data);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_addr_io_deq_bits_MPORT_data);
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_2 
        = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource_3__DOT__reg___DOT__reg_));
    vlTOPp->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__intsource_3__DOT__reg___DOT__reg_) 
                 >> 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
              >> 0x19U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__skipCycle2 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__cycleNum)) 
           & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sigX_Z 
                      >> 0x36U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__excSign 
        = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                 & (~ (IData)((7U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                             << 3U) 
                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x1dU))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_6 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? 7U : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
                     ? 3U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT___do_enq_T 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_lo_lo 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_lo_lo 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x20U)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT___less_T_12 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data) 
           < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN_io_in_sign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                 & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1_io_in 
                            >> 0x3fU))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty)) 
                 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_io_deq_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_w_deq__DOT__empty)) 
                 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__invalidExc 
        = (((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
             >> 0x1dU)) | ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                          << 2U) | 
                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x1eU)))) 
                           & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                 >> 0x1dU))));
    __Vtemp5579[0U] = 0U;
    __Vtemp5579[1U] = 0U;
    __Vtemp5579[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5580, __Vtemp5579, 
                   (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                             << 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut 
        = ((((7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi))) 
           & (VL_ULL(0) == ((((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg[0U]))) 
                            & (~ (((QData)((IData)(
                                                   __Vtemp5580[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp5580[0U])))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf_1 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal_1 
        = (((1U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (2U <= (0x3ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                               << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x14U))))) 
           | (2U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                      >> 0x1eU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal_1 
        = ((1U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1dU)))) | 
           ((1U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1eU)))) & 
            (2U > (0x3ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                          >> 0x14U))))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNAOrB 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA___05FisNaN) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB___05FisNaN));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__loOut 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__req_dw)) 
            & (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))))
            ? (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__result 
                       >> 0x20U)) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__result));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros 
        = ((0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1dU)))) & 
           (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG 
        = ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__srams__DOT__in_ar_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__in_ar_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                          >> 0x16U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                             >> 0x15U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                              >> 0x14U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0x13U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0x12U)))
                                                     ? 4U
                                                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_141))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_len 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__ram_len
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ram_len_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ram_len_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_a_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_d_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
              & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05FisInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05Fsig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_oindex 
        = ((0x10U & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                     [0U] >> 0xeU)) | ((8U & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                              [0U] 
                                              >> 7U)) 
                                       | ((4U & (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                 [0U] 
                                                 >> 7U)) 
                                          | ((2U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                               [0U] 
                                               >> 3U)) 
                                             | (1U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index
                                                [0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pendingUInt 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_1) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pending_0));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA___05FisNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_way 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_hit_way;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
               >> 0x1dU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty)) 
                 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_85 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                          >> 0x22U))) ? 0x11U : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                             >> 0x21U)))
                                                  ? 0x12U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                              >> 0x20U)))
                                                   ? 0x13U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0x1fU)))
                                                    ? 0x14U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0x1eU)))
                                                     ? 0x15U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                 >> 0x1dU)))
                                                      ? 0x16U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                  >> 0x1cU)))
                                                       ? 0x17U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                   >> 0x1bU)))
                                                        ? 0x18U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                    >> 0x1aU)))
                                                         ? 0x19U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                     >> 0x19U)))
                                                          ? 0x1aU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                      >> 0x18U)))
                                                           ? 0x1bU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                       >> 0x17U)))
                                                            ? 0x1cU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                        >> 0x16U)))
                                                             ? 0x1dU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                         >> 0x15U)))
                                                              ? 0x1eU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                          >> 0x14U)))
                                                               ? 0x1fU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                           >> 0x13U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                            >> 0x12U)))
                                                                 ? 0x21U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_68))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_typeTag 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__rawOutValid) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sqrtOp_Z)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                  >> 0x1dU)))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__rawIn___05FisNaN 
        = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                          << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                    >> 0x1eU)))) & 
           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            >> 0x1dU));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_b) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isNaN));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA___05Fsig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB___05Fsig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps 
        = ((0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                       << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                   >> 0x14U))) == (0xfffU 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                         >> 0x14U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr_io_exception 
        = (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_84)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_86)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_88)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_90)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_92)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_94));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
                                       ? (~ (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
                                       : ((((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
                                          + (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
        = (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              << 0xbU)) 
                              | (0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                   << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              >> 0x1fU)))) 
           & (0x7ffU == (0x7ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                    << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x14U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
        = (((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typeTagIn))
             ? VL_ULL(0) : VL_ULL(0xffffffff00000000)) 
           | vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U] 
                                                  >> 0x1dU)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
           | ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign))));
    vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_value 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__int_rtc_tick_wrap_wrap)
                     ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT___int_rtc_tick_wrap_value_T_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT__inFlight 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__completedDevs) 
                  >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__completedDevs) 
                  >> 2U)) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__gateways_gateway_1__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_v 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__isZero_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__magJustBelowOne 
        = ((~ (1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                   << 1U)) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                              >> 0x1fU)))) 
           & (0x7ffU == (0x7ffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                    << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x14U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((0U 
                                                == 
                                                (7U 
                                                 & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                       >> 0x1dU)))) 
                                               | (6U 
                                                  <= 
                                                  (7U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1dU)))))
                                               ? ((0x1c0U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 9U) 
                                                      | (0x1c0U 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x17U)))) 
                                                  | (0x3fU 
                                                     & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                         << 0xcU) 
                                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                           >> 0x14U))))
                                               : ((IData)(0x100U) 
                                                  + 
                                                  ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                      >> 0x14U)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                << 3U) 
                                               | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                  >> 0x1dU)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__block_probe_for_core_progress 
        = ((0U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockProbeAfterGrantCount)) 
           | (3U < (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div_io_resp_valid 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                  & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_io_in 
                             >> 0x3fU)))) ? VL_NEGATE_Q(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_io_in)
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_io_in);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN_io_in_sig 
        = (((QData)((IData)((0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                           << 3U) | 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                           >> 0x1dU)))))) 
            << 0x34U) | (VL_ULL(0xfffffffffffff) & 
                         (((QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])))));
    VL_EXTEND_WQ(84,53, __Vtemp5583, (((QData)((IData)(
                                                       (1U 
                                                        & ((0x1ffffeU 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                               << 1U)) 
                                                           | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                              >> 0x1fU))))) 
                                       << 0x34U) | 
                                      (VL_ULL(0xfffffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(84,84,5, __Vtemp5584, __Vtemp5583, 
                  ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                        << 1U)) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1fU)))
                    ? (0x1fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                 << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))
                    : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[0U] 
        = __Vtemp5584[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
        = __Vtemp5584[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
        = (0xfffffU & __Vtemp5584[2U]);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_7) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___acknum_T_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_104 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_84)
            ? 6U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_86)
                     ? 4U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_88)
                              ? 0xfU : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_90)
                                         ? 0xdU : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_92)
                                                    ? 7U
                                                    : 5U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
        = ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ)) 
                  & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1_io_in 
                             >> 0x3fU)))) ? VL_NEGATE_Q(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1_io_in)
            : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1_io_in);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA 
            = ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                              << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                        >> 0x1eU)))) 
               & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                     >> 0x1dU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                       >> 0x1dU))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_1 
        = ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1 
            << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1)));
    VL_EXTEND_WQ(116,53, __Vtemp5587, (((QData)((IData)(
                                                        (1U 
                                                         & ((0x1ffffeU 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                                << 1U)) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                               >> 0x1fU))))) 
                                        << 0x34U) | 
                                       (VL_ULL(0xfffffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))));
    VL_SHIFTL_WWI(116,116,6, __Vtemp5588, __Vtemp5587, 
                  ((1U & ((0x1ffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                        << 1U)) | (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1fU)))
                    ? (0x3fU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                 << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U)))
                    : 0U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[0U] 
        = __Vtemp5588[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
        = __Vtemp5588[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
        = __Vtemp5588[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
        = (0xfffffU & __Vtemp5588[3U]);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng_io_increment) {
            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13 
                = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12;
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_req_addr;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt 
        = (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_84)) 
               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_86)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_88)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_90)) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_92)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_94));
    __Vtemp5591[0U] = 0U;
    __Vtemp5591[1U] = 0U;
    __Vtemp5591[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5592, __Vtemp5591, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    __Vtemp5595[0U] = 0U;
    __Vtemp5595[1U] = 0U;
    __Vtemp5595[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5596, __Vtemp5595, 
                   (0x3fU & (~ (0x3fffU & VL_EXTENDS_II(14,13, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                               >> 0x14U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xffU & ((0x4000U & (__Vtemp5592[2U] << 0xeU)) 
                     | (__Vtemp5592[1U] >> 0x12U))) 
           | (0xff00U & ((0x40000000U & (__Vtemp5596[2U] 
                                         << 0x1eU)) 
                         | (0x3fffff00U & (__Vtemp5596[1U] 
                                           >> 2U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_param) 
            << 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_killed 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_inValid) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__killm)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_fpu_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn 
            = (((((((0U == (0x40U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)) 
                    | (0x2000000U == (0x42000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                   | (0x2000000U == (0x2000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                  | (0x12000000U == (0x12000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                 | (0x40000010U == (0xd2000010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
                | (0x60000010U == (0x70001010U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits))) 
               | (0x82000000U == (0x82000000U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_bits)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd 
            = (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                      >> 2U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_fmaCmd_T_3)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        VL_EXTEND_WQ(65,33, __Vtemp5599, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_in2_T_1);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0x80000000U : __Vtemp5599[0U]);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0U : __Vtemp5599[1U]);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23)
                ? 0U : __Vtemp5599[2U]);
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_rm 
            = (7U & ((7U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                                   >> 0xcU))) ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm)
                      : (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
                         >> 0xcU)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_b 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_b 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma_io_in_valid) {
        VL_EXTEND_WQ(65,33, __Vtemp5601, ((((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U] 
                                                                >> 0x1fU)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
                                                                  << 0xbU)) 
                                                              | (0x7fffffffU 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[0U]))))) 
                                          | ((0x1fU 
                                              == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[2U] 
                                                      << 4U) 
                                                     | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ex_rs_2_data[1U] 
                                                        >> 0x1cU))))
                                              ? VL_ULL(0)
                                              : VL_ULL(0xe0400000))));
        VL_EXTEND_WQ(65,33, __Vtemp5603, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_in1_T_1);
        VL_EXTEND_WQ(65,33, __Vtemp5604, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___sfma_io_in_bits_req_in2_T_1);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp5601[0U] : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp5601[1U] : (1U & (__Vtemp5603[1U] 
                                           ^ __Vtemp5604[1U])));
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[2U] 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? __Vtemp5601[2U] : 0U);
    }
    __Vtemp5610[0U] = 0U;
    __Vtemp5610[1U] = 0U;
    __Vtemp5610[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5611, __Vtemp5610, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5614[0U] = 0U;
    __Vtemp5614[1U] = 0U;
    __Vtemp5614[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5615, __Vtemp5614, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62 
        = ((0xffU & ((0x800U & (__Vtemp5611[2U] << 0xbU)) 
                     | (__Vtemp5611[1U] >> 0x15U))) 
           | (0xff00U & ((0x8000000U & (__Vtemp5615[2U] 
                                        << 0x1bU)) 
                         | (0x7ffff00U & (__Vtemp5615[1U] 
                                          >> 5U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value));
    __Vtemp5618[0U] = 0U;
    __Vtemp5618[1U] = 0U;
    __Vtemp5618[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5619, __Vtemp5618, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5622[0U] = 0U;
    __Vtemp5622[1U] = 0U;
    __Vtemp5622[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5623, __Vtemp5622, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
        = ((0xffffU & ((__Vtemp5619[1U] << 3U) | (__Vtemp5619[0U] 
                                                  >> 0x1dU))) 
           | (0xffff0000U & (__Vtemp5623[0U] << 3U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_82 
        = ((0x3333U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72) 
                       >> 2U)) | (0xccccU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72) 
                                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__killx))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_reg_inst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fromint 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_toint 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_fma 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_div 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_div;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_ctrl_wflags 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__write_port_busy 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen) 
                & (0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__memLatencyMask) 
                          & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe)
                                 ? 2U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint)
                                                ? 2U
                                                : 0U)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_3)
                                  ? 4U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_6)
                                                  ? 8U
                                                  : 0U))))) 
               | (0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe)
                                ? 4U : 0U) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint)
                                               ? 4U
                                               : 0U)) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_3)
                                 ? 8U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___write_port_busy_T_6)
                                                 ? 0x10U
                                                 : 0U)))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
        = ((0xf0f0f0fU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
                          >> 4U)) | (0xf0f0f0f0U & 
                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
                                      << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___r_T_9 
        = ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_hi_lo) 
             & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_hi_lo) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT__r_lo_hi) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
           [0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__ram_size
           [0U] : 0U);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_42) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr 
            = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr_valids))
                ? ((2U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1) 
                          >> 1U)) | (1U & ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1))
                                            ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1) 
                                               >> 1U)
                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_state_reg_1))))
                : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr_valids))
                    ? ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr_valids))
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr_valids))
                            ? 3U : 2U) : 1U) : 0U));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache_io_cpu_req_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb_io_mem_req_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut_reset)) 
                 & ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))
                     ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb___05Fgrant_T_3)) 
                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe_x12))
                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe_x12))));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst)
                          ? vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                         [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___acknum_T_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcacheArb__DOT__s1_id 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw_io_mem_req_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___in_aw_ready_T));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_latched)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn_valid) 
           & (3U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : 0U);
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___acknum_T_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_req_addr;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__ram_id
           [0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1__DOT__ram_len
           [0U] : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 = VL_ULL(0x208);
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7c1U == (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                    = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_custom_0_T_3;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_pma_cacheable 
            = (0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_c_array) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_hits)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_pc 
            = (VL_ULL(0x7fffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid)
                                        ? (VL_ULL(0x7fffffffff) 
                                           & (~ (VL_ULL(3) 
                                                 | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_2))))
                                        : (~ (VL_ULL(3) 
                                              | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc)))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_br_pc 
            = (VL_ULL(0x7fffffffff) & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid)
                                        ? (VL_ULL(0x7fffffffff) 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_2)
                                        : ((~ (VL_ULL(3) 
                                               | (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc))) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)) 
                                                                 << 1U)))))));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_cfiType 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core_io_imem_btb_update_valid)
                ? ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr)) 
                    & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                       >> 7U)) ? 2U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr) 
                                        & (1U == (0x1bU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                     >> 0xfU))))
                                        ? 3U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr))))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb_io_ras_update_bits_cfiType));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported 
        = (1U & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
                 | (~ ((~ (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T 
                           >> 0x11U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__accessRegIsGPR)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
           & (((~ (vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___accessRegisterCommandReg_T 
                   >> 0x11U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__accessRegIsGPR)) 
              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5626[3];
    WData/*95:0*/ __Vtemp5627[3];
    WData/*127:0*/ __Vtemp5630[4];
    WData/*127:0*/ __Vtemp5631[4];
    WData/*127:0*/ __Vtemp5632[4];
    WData/*159:0*/ __Vtemp5633[5];
    WData/*159:0*/ __Vtemp5641[5];
    WData/*159:0*/ __Vtemp5642[5];
    WData/*159:0*/ __Vtemp5643[5];
    WData/*95:0*/ __Vtemp5651[3];
    WData/*95:0*/ __Vtemp5652[3];
    WData/*95:0*/ __Vtemp5655[3];
    WData/*95:0*/ __Vtemp5656[3];
    WData/*95:0*/ __Vtemp5659[3];
    WData/*95:0*/ __Vtemp5660[3];
    WData/*95:0*/ __Vtemp5663[3];
    WData/*95:0*/ __Vtemp5664[3];
    WData/*95:0*/ __Vtemp5667[3];
    WData/*95:0*/ __Vtemp5668[3];
    WData/*95:0*/ __Vtemp5671[3];
    WData/*95:0*/ __Vtemp5672[3];
    WData/*95:0*/ __Vtemp5675[3];
    WData/*95:0*/ __Vtemp5676[3];
    WData/*95:0*/ __Vtemp5679[3];
    WData/*95:0*/ __Vtemp5680[3];
    WData/*95:0*/ __Vtemp5683[3];
    WData/*95:0*/ __Vtemp5684[3];
    WData/*95:0*/ __Vtemp5687[3];
    WData/*95:0*/ __Vtemp5688[3];
    WData/*95:0*/ __Vtemp5691[3];
    WData/*95:0*/ __Vtemp5692[3];
    WData/*95:0*/ __Vtemp5695[3];
    WData/*95:0*/ __Vtemp5696[3];
    WData/*95:0*/ __Vtemp5699[3];
    WData/*95:0*/ __Vtemp5700[3];
    WData/*95:0*/ __Vtemp5703[3];
    WData/*95:0*/ __Vtemp5704[3];
    WData/*95:0*/ __Vtemp5707[3];
    WData/*95:0*/ __Vtemp5708[3];
    WData/*95:0*/ __Vtemp5711[3];
    WData/*95:0*/ __Vtemp5712[3];
    WData/*95:0*/ __Vtemp5715[3];
    WData/*95:0*/ __Vtemp5716[3];
    WData/*95:0*/ __Vtemp5719[3];
    WData/*95:0*/ __Vtemp5720[3];
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_in_b_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    VL_EXTEND_WQ(81,50, __Vtemp5626, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(81,81,5, __Vtemp5627, __Vtemp5626, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
        = __Vtemp5627[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
        = __Vtemp5627[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[2U] 
        = (0x1ffffU & __Vtemp5627[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_reduced4SigExtra_T_11 
        = ((((IData)((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                           >> 0x15U))))) 
             << 6U) | (((IData)((0U != (0xfU & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                        >> 0x11U))))) 
                        << 5U) | (((IData)((0U != (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                              >> 0xdU))))) 
                                   << 4U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                   >> 9U))))) 
                                              << 3U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                      >> 5U))))) 
                                                 << 2U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                                                                         >> 1U))))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum)))))))) 
           & ((0x20U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                       (7U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                 >> 2U)))) 
                        << 4U)) | ((0x10U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                            (7U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                                 >> 2U)))) 
                                             << 2U)) 
                                   | ((8U & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                           (7U 
                                                            & (~ 
                                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                                >> 2U))))) 
                                      | ((4U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                               (7U 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                                    >> 2U)))) 
                                                >> 2U)) 
                                         | ((2U & (
                                                   VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                  (7U 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                                       >> 2U)))) 
                                                   >> 4U)) 
                                            | (1U & 
                                               (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                               (7U 
                                                                & (~ 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CDom_CAlignDist) 
                                                                    >> 2U)))) 
                                                >> 6U))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_sqrt 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN)) 
            & (0U != (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                       >> 0x1dU))))) 
           & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___majorExc_S_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN) 
           & (~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
                         >> 0x33U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExpQuot_S_div 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
                                            & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                << 0xcU) 
                                               | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x14U)))) 
                      + VL_EXTENDS_II(14,13, ((0x1000U 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2) 
                                                  << 1U)) 
                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_2 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_lo_1)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_3 
        = (VL_ULL(0x3ffffffffffffff) & ((1U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1) 
                                                >> 6U) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))))
                                         ? (VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1)
                                         : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__value_hi_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_superpage_repl_addr_valids 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_valid_0) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_valid_0) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_valid_0) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_valid_0))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__notSigNaNIn_invalidExc_S_div 
        = (((0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                           << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                     >> 0x1dU)))) & 
            (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                           << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                     >> 0x1dU))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf) 
              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf)));
    VL_EXTEND_WQ(127,64, __Vtemp5630, (((QData)((IData)(
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))));
    VL_SHIFTL_WWI(127,127,6, __Vtemp5631, __Vtemp5630, 
                  (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___eOutPos_T_1))));
    __Vtemp5632[0U] = __Vtemp5631[0U];
    __Vtemp5632[1U] = __Vtemp5631[1U];
    __Vtemp5632[2U] = __Vtemp5631[2U];
    __Vtemp5632[3U] = (0x7fffffffU & __Vtemp5631[3U]);
    VL_EXTEND_WW(129,127, __Vtemp5633, __Vtemp5632);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
            ? __Vtemp5633[0U] : ((0xfffffffeU & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
                                                 << 1U)) 
                                 | (1U & (~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U]))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
            ? __Vtemp5633[1U] : ((1U & ((IData)((((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
            ? __Vtemp5633[2U] : ((1U & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
                                                 >> 0x20U)) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((1U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])))
                                                             : 
                                                            (((QData)((IData)(
                                                                              vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U]))))) 
                                                   << 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
            ? __Vtemp5633[3U] : ((1U & ((IData)(((1U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U]))))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           (((1U 
                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U])))) 
                                                            >> 0x20U)) 
                                                   << 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_16[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut_1)
            ? __Vtemp5633[4U] : (1U & ((IData)((((1U 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[2U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__subtractor[0U])))) 
                                                >> 0x20U)) 
                                       >> 0x1fU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_13 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
                | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)))
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_7))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_7));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT___sExpQuot_S_div_T_2 
        = ((0x100U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                              >> 0x17U))) | (0xffU 
                                             & (~ (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                              >> 0x17U))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag_auto_out_aw_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___in_aw_ready_T));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr
            : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy_1)
            ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr_1
            : vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_isZero 
        = ((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                     >> 0x34U)))) & 
           (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_isZero_1 
        = ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                    >> 0x17U)))) & 
           (0U == (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2))));
    VL_SHIFTR_WWI(129,129,6, __Vtemp5641, vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__mulReg, 
                  (0x3fU & VL_NEGATE_I((0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                                                  << 3U)))));
    __Vtemp5642[0U] = __Vtemp5641[0U];
    __Vtemp5642[1U] = __Vtemp5641[1U];
    __Vtemp5642[2U] = __Vtemp5641[2U];
    __Vtemp5642[3U] = __Vtemp5641[3U];
    __Vtemp5642[4U] = (1U & __Vtemp5641[4U]);
    VL_EXTEND_WW(130,129, __Vtemp5643, __Vtemp5642);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[0U] 
        = (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut)
                                      ? __Vtemp5643[1U]
                                      : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[1U]))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut)
                                                  ? 
                                                 __Vtemp5643[0U]
                                                  : 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[0U])))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[1U] 
        = (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut)
                                       ? __Vtemp5643[1U]
                                       : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[1U]))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut)
                                                   ? 
                                                  __Vtemp5643[0U]
                                                   : 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[0U])))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[2U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[3U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg1[4U] 
        = (1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__nextMulReg[4U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_12 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
                | (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)))
                ? 6U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_6))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_6));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_lo_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__logic_out_hi_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_report_param 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
            ? 3U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                     ? 3U : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                              ? 4U : ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                       ? 5U : ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                ? 0U
                                                : (
                                                   (6U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                      ? 5U
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                       ? 1U
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                        ? 1U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                         ? 2U
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))
                                                          ? 5U
                                                          : 0U))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT___out_T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_and) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_xor))
            ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_and)
                 ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                    & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data)
                 : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT__logic_xor)
                                  ? (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                     ^ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data)
                                  : VL_ULL(0))) : (
                                                   ((1U 
                                                     & ((0x10U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask))
                                                         ? 
                                                        (((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                      >> 0x3fU))) 
                                                          == 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                      >> 0x3fU))))
                                                          ? 
                                                         (((IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                    >> 0x20U)) 
                                                           < (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                      >> 0x20U))) 
                                                          | (((IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                       >> 0x20U)) 
                                                              == (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                          >> 0x20U))) 
                                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT___less_T_12)))
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (2U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)))
                                                           ? (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                      >> 0x3fU))
                                                           : (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                      >> 0x3fU))))
                                                         : 
                                                        (((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                      >> 0x1fU))) 
                                                          == 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                      >> 0x1fU))))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__amoalu__DOT___less_T_12)
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (2U 
                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)))
                                                           ? (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                                                      >> 0x1fU))
                                                           : (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data 
                                                                      >> 0x1fU))))))
                                                     ? 
                                                    ((0xcU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)) 
                                                     | (0xeU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)))
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd)) 
                                                     | (0xfU 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_cmd))))
                                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data
                                                    : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__in_ar_ready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__full)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1 
        = (0x1ffU & (((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                               >> 0x17U))))
                       ? (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1))
                       : (0xffU & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                           >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                          >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_cause 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_104)));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_io_ip 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_0_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pendingUInt));
    vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1_io_ip 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__enables_1_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__plicDomainWrapper__DOT__plic__DOT__pendingUInt));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal 
        = (((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                  >> 0x1eU)))) & (2U 
                                                  <= 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                              >> 0x17U))))) 
           | (2U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                   >> 0x1eU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal 
        = ((1U == (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                 >> 0x1dU)))) | ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                              >> 0x1eU)))) 
                                                 & (2U 
                                                    > 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT___classify_out_T 
                                                                >> 0x17U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__excSign 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__rawIn___05FisNaN)) 
                 & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy)
            ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len)
            : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundIncr_T) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_sig 
        = (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                  >> 0x1dU)))) << 0x17U) 
           | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_ar_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_sig 
        = (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                  >> 0x1dU)))) << 0x17U) 
           | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags 
        = (VL_LTS_III(1,13,13, (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                           << 0xcU) 
                                          | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                             >> 0x14U))), 
                      (0xfffU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                              >> 0x14U)))) 
           | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
              & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA___05Fsig 
                 < vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB___05Fsig)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05FisInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevUnrecoded_rawIn___05Fsig 
        = (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded 
                                  >> 0x1dU)))) << 0x17U) 
           | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_prevRecoded)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded 
        = (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
            << 0x3fU) | (((QData)((IData)((0x7ffU & 
                                           ((VL_GTS_III(1,13,13, 0x402U, 
                                                        (0xfffU 
                                                         & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                             << 0xcU) 
                                                            | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                               >> 0x14U))))
                                              ? 0U : 
                                             ((0xfffU 
                                               & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                     >> 0x14U))) 
                                              - (IData)(0x401U))) 
                                            | ((((3U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                       << 2U) 
                                                      | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                         >> 0x1eU)))) 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                    >> 0x1dU)) 
                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05FisInf))
                                                ? 0x7ffU
                                                : 0U))))) 
                          << 0x34U) | (VL_ULL(0xfffffffffffff) 
                                       & (VL_GTS_III(1,13,13, 0x402U, 
                                                     (0xfffU 
                                                      & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x14U))))
                                           ? (VL_ULL(0x1fffffffffffff) 
                                              & ((VL_ULL(0x1fffffffffffff) 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05Fsig 
                                                     >> 1U)) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (0xfffU 
                                                      & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x14U)))))))
                                           : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05FisInf)
                                               ? VL_ULL(0)
                                               : vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_rawIn___05Fsig)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
           & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA___05Fsig 
              == vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB___05Fsig));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__specialCaseA_S 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf)) 
           | (0U == (7U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                            << 3U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                      >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_b_isInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__invalidExc 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__rawIn___05FisNaN) 
           | ((3U == (3U & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                             << 2U) | (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                       >> 0x1eU)))) 
              & (~ (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                          >> 0x33U))) ? 0U : ((1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                             >> 0x32U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                              >> 0x31U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                               >> 0x30U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                >> 0x2fU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                 >> 0x2eU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                  >> 0x2dU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                   >> 0x2cU)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                    >> 0x2bU)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                     >> 0x2aU)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                      >> 0x29U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                       >> 0x28U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                        >> 0x27U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                         >> 0x26U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                          >> 0x25U)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                           >> 0x24U)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                            >> 0x23U)))
                                                                 ? 0x10U
                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_normDist_T_85))))))))))))))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleOut_0_aw_deq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isInf))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isZero))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x2000000U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                   >> 0x32U)) << 0x19U)) 
           | (((IData)((0U != (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                             >> 0x30U))))) 
               << 0x18U) | (((IData)((0U != (3U & (IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x2eU))))) 
                             << 0x17U) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2cU))))) 
                                           << 0x16U) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x2aU))))) 
                                              << 0x15U) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                      >> 0x28U))))) 
                                                 << 0x14U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                         >> 0x26U))))) 
                                                    << 0x13U) 
                                                   | (((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                              >> 0x24U))))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x22U))))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x20U))))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x1eU))))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x1cU))))) 
                                                                     << 1U) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x1aU))))))))) 
                                                       << 0xdU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                               >> 0x18U))))) 
                                                          << 0xcU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x16U))))) 
                                                             << 0xbU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x14U))))) 
                                                                << 0xaU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x12U))))) 
                                                                   << 9U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0x10U))))) 
                                                                      << 8U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xeU))))) 
                                                                         << 7U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))) 
                                                                            << 6U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))) 
                                                                               << 5U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 2U))))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isInf 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                 >> 0x1eU)))) & (~ (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                            >> 0x1dU))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___05Fio_a_isNaN 
        = ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                 >> 0x1eU)))) & (IData)(
                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                                         >> 0x1dU)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_2 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_reset)) 
           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf_io_imem_ready)
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___wen_T_19)
               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT___valid_2_T_6)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_adjustedNormDist_T_80 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x11U))) ? 0x2eU : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x10U)))
                                                  ? 0x2fU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0xfU)))
                                                   ? 0x30U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0xeU)))
                                                    ? 0x31U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0xdU)))
                                                     ? 0x32U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0xcU)))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0xbU)))
                                                       ? 0x34U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0xaU)))
                                                        ? 0x35U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 9U)))
                                                         ? 0x36U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 8U)))
                                                          ? 0x37U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 7U)))
                                                           ? 0x38U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 6U)))
                                                            ? 0x39U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 5U)))
                                                             ? 0x3aU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 4U)))
                                                              ? 0x3bU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 3U)))
                                                               ? 0x3cU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 2U)))
                                                                ? 0x3dU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_extAbsIn_lo 
                                                                            >> 1U)))
                                                                 ? 0x3eU
                                                                 : 0x3fU)))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN_io_in_sig 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN_io_in_sig))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__alignedSig 
        = ((VL_ULL(0x3fffffffe) & (((QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U])) 
                                    << 0xeU) | (VL_ULL(0x3ffffffffffe) 
                                                & ((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U])) 
                                                   >> 0x12U)))) 
           | (QData)((IData)((0U != (VL_ULL(0x7ffffffffffff) 
                                     & (((QData)((IData)(
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[0U]))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_adjustedNormDist_T_80 
        = ((1U & (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                          >> 0x11U))) ? 0x2eU : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                             >> 0x10U)))
                                                  ? 0x2fU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                              >> 0xfU)))
                                                   ? 0x30U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                               >> 0xeU)))
                                                    ? 0x31U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                >> 0xdU)))
                                                     ? 0x32U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                 >> 0xcU)))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                  >> 0xbU)))
                                                       ? 0x34U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                   >> 0xaU)))
                                                        ? 0x35U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                    >> 9U)))
                                                         ? 0x36U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                     >> 8U)))
                                                          ? 0x37U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                      >> 7U)))
                                                           ? 0x38U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                       >> 6U)))
                                                            ? 0x39U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                        >> 5U)))
                                                             ? 0x3aU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                         >> 4U)))
                                                              ? 0x3bU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                          >> 3U)))
                                                               ? 0x3cU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                           >> 2U)))
                                                                ? 0x3dU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_extAbsIn_lo 
                                                                            >> 1U)))
                                                                 ? 0x3eU
                                                                 : 0x3fU)))))))))))))))));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_bypass_1 
            = vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[0U] 
        = ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
                            << 0xeU) | (0x3ffeU & (
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                                   >> 0x12U)))) 
           | (0U != (VL_ULL(0x7ffffffffffff) & (((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[0U]))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[1U] 
        = ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
                  >> 0x12U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
                                                     >> 0x12U)))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__alignedSig[2U] 
        = ((1U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
                  >> 0x12U)) | (2U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
                                      >> 0x12U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12) 
                                            << 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
           | ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
              & ((1U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                 & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                    & ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                       | ((6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                          & ((5U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                             & ((4U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118)) 
                                & (0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_118))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen;
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_1 
            = (3U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_6) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass_1)))
                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_1)
                      : ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2))
                          ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_1_1)
                                   ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_1_2)
                                            ? 2U : 3U)))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_72 
        = ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62) 
                      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_62) 
                                            << 4U)));
    __Vtemp5651[0U] = 0U;
    __Vtemp5651[1U] = 0U;
    __Vtemp5651[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5652, __Vtemp5651, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5655[0U] = 0U;
    __Vtemp5655[1U] = 0U;
    __Vtemp5655[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5656, __Vtemp5655, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5659[0U] = 0U;
    __Vtemp5659[1U] = 0U;
    __Vtemp5659[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5660, __Vtemp5659, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5663[0U] = 0U;
    __Vtemp5663[1U] = 0U;
    __Vtemp5663[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5664, __Vtemp5663, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5667[0U] = 0U;
    __Vtemp5667[1U] = 0U;
    __Vtemp5667[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5668, __Vtemp5667, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5671[0U] = 0U;
    __Vtemp5671[1U] = 0U;
    __Vtemp5671[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5672, __Vtemp5671, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5675[0U] = 0U;
    __Vtemp5675[1U] = 0U;
    __Vtemp5675[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5676, __Vtemp5675, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5679[0U] = 0U;
    __Vtemp5679[1U] = 0U;
    __Vtemp5679[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5680, __Vtemp5679, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp5683[0U] = 0U;
    __Vtemp5683[1U] = 0U;
    __Vtemp5683[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5684, __Vtemp5683, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_55 
        = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
            ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                ? 0U : ((4U & (__Vtemp5652[0U] << 2U)) 
                        | ((2U & __Vtemp5656[0U]) | 
                           (1U & (__Vtemp5660[0U] >> 2U)))))
            : (7U | (0x1fffff8U & ((~ ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                                        ? (~ (((0x155540U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                               | (0x2aaa80U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                     << 7U))) 
                                              | ((0x20U 
                                                  & (__Vtemp5664[1U] 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (__Vtemp5668[1U] 
                                                        >> 0x17U)) 
                                                    | ((8U 
                                                        & (__Vtemp5672[1U] 
                                                           >> 0x19U)) 
                                                       | ((4U 
                                                           & (__Vtemp5676[1U] 
                                                              >> 0x1bU)) 
                                                          | ((2U 
                                                              & (__Vtemp5680[1U] 
                                                                 >> 0x1dU)) 
                                                             | (1U 
                                                                & (__Vtemp5684[1U] 
                                                                   >> 0x1fU)))))))))
                                        : 0U)) << 3U))));
    __Vtemp5687[0U] = 0U;
    __Vtemp5687[1U] = 0U;
    __Vtemp5687[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5688, __Vtemp5687, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5691[0U] = 0U;
    __Vtemp5691[1U] = 0U;
    __Vtemp5691[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5692, __Vtemp5691, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5695[0U] = 0U;
    __Vtemp5695[1U] = 0U;
    __Vtemp5695[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5696, __Vtemp5695, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5699[0U] = 0U;
    __Vtemp5699[1U] = 0U;
    __Vtemp5699[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5700, __Vtemp5699, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5703[0U] = 0U;
    __Vtemp5703[1U] = 0U;
    __Vtemp5703[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5704, __Vtemp5703, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5707[0U] = 0U;
    __Vtemp5707[1U] = 0U;
    __Vtemp5707[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5708, __Vtemp5707, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5711[0U] = 0U;
    __Vtemp5711[1U] = 0U;
    __Vtemp5711[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5712, __Vtemp5711, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5715[0U] = 0U;
    __Vtemp5715[1U] = 0U;
    __Vtemp5715[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5716, __Vtemp5715, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    __Vtemp5719[0U] = 0U;
    __Vtemp5719[1U] = 0U;
    __Vtemp5719[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp5720, __Vtemp5719, 
                   (0x3fU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_55 
        = ((0x80U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
            ? ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                ? 0U : ((4U & (__Vtemp5688[0U] << 2U)) 
                        | ((2U & __Vtemp5692[0U]) | 
                           (1U & (__Vtemp5696[0U] >> 2U)))))
            : (7U | (0x1fffff8U & ((~ ((0x40U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN___DOT__sExp_Z))
                                        ? (~ (((0x155540U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                   << 5U)) 
                                               | (0x2aaa80U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32) 
                                                     << 7U))) 
                                              | ((0x20U 
                                                  & (__Vtemp5700[1U] 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (__Vtemp5704[1U] 
                                                        >> 0x17U)) 
                                                    | ((8U 
                                                        & (__Vtemp5708[1U] 
                                                           >> 0x19U)) 
                                                       | ((4U 
                                                           & (__Vtemp5712[1U] 
                                                              >> 0x1bU)) 
                                                          | ((2U 
                                                              & (__Vtemp5716[1U] 
                                                                 >> 0x1dU)) 
                                                             | (1U 
                                                                & (__Vtemp5720[1U] 
                                                                   >> 0x1fU)))))))))
                                        : 0U)) << 3U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_22 
        = ((0xff00ffU & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
                         >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_12 
                                                   << 8U)));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_bypass_0 
            = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_illegal_insn)) 
               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___r_T_16 
        = (VL_ULL(0x7fffffffff) & ((~ vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
                                   | (QData)((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___r_T_9))));
    vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_42 
        = ((0x33333333U & (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
                           >> 2U)) | (0xccccccccU & 
                                      (vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_32 
                                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__bad_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
           | (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_lsb_0 
            = (3U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_illegal_insn)
                      ? vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__inst
                      : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_ctrl_decoder_7) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__do_bypass)))
                          ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_rs_0)
                          : ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1))
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_0_1)
                                       ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__id_bypass_src_0_2)
                                                ? 2U
                                                : 3U))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank_auto_out_ar_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_w_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq__DOT__maybe_full) 
           & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_valid)));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy_1)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_addr_1
            : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full));
}
