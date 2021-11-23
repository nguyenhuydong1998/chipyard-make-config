// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTESTHARNESS__SYMS_H_
#define _VTESTHARNESS__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestHarness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestHarness*                  TOPp;
    VTestHarness___024unit         TOP____024unit;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TestHarness;
    VerilatedScope __Vscope_TestHarness__ldut__bootROMDomainWrapper__bootrom__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__clint__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmInner__dmInner;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmInner__dmInner__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmInner__dmInner__monitor_1;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__asource__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmOuter__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmiBypass__bar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmiBypass__error;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmiBypass__error__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmiXbar;
    VerilatedScope __Vscope_TestHarness__ldut__debug_1__dmOuter__dmiXbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__dtm;
    VerilatedScope __Vscope_TestHarness__ldut__dtm__dmiAccessChain;
    VerilatedScope __Vscope_TestHarness__ldut__dtm__dtmInfoChain;
    VerilatedScope __Vscope_TestHarness__ldut__dtm__tapIO_bypassChain;
    VerilatedScope __Vscope_TestHarness__ldut__dtm__tapIO_controllerInternal__irChain;
    VerilatedScope __Vscope_TestHarness__ldut__dtm__tapIO_idcodeChain;
    VerilatedScope __Vscope_TestHarness__ldut__plicDomainWrapper__plic;
    VerilatedScope __Vscope_TestHarness__ldut__plicDomainWrapper__plic__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__atomics;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__atomics__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_bootrom__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_clint__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_debug__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__coupler_to_plic__fragmenter__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__out_xbar;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__wrapped_error_device__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_cbus__wrapped_error_device__error__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_buffer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_coupler_from_port_named_slave_port_axi4__axi42tl;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_coupler_from_port_named_slave_port_axi4__axi4frag;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_coupler_from_port_named_slave_port_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_coupler_from_port_named_slave_port_axi4__buffer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_fbus_coupler_from_port_named_slave_port_axi4__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__binder__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1__TLBroadcastTracker;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1__TLBroadcastTracker_1;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1__TLBroadcastTracker_2;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1__TLBroadcastTracker_3;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_l2_wrapper__broadcast_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_mbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_mbus__picker__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__axi4deint;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__axi4yank;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__fixer__monitor_1;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__system_bus_xbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__subsystem_sbus__system_bus_xbar__monitor_1;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__buffer_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__core__csr;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__core__ibuf;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__dcache;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__fpuOpt;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__frontend;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__frontend__icache;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__frontend__tlb;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__ptw;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestHarness__mem__axi4frag;
    VerilatedScope __Vscope_TestHarness__mem__axi4xbar;
    VerilatedScope __Vscope_TestHarness__mmio_mem__axi4frag;
    VerilatedScope __Vscope_TestHarness__mmio_mem__axi4xbar;
    
    // CREATORS
    VTestHarness__Syms(VTestHarness* topp, const char* namep);
    ~VTestHarness__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
