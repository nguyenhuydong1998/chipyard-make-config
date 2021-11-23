// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestHarness.h for the primary calling header

#ifndef _VTESTHARNESS___024UNIT_H_
#define _VTESTHARNESS___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VTestHarness__Dpi.h"

//==========

class VTestHarness__Syms;

//----------

VL_MODULE(VTestHarness___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VTestHarness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTestHarness___024unit);  ///< Copying not allowed
  public:
    VTestHarness___024unit(const char* name = "TOP");
    ~VTestHarness___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VTestHarness__Syms* symsp, bool first);
    void __Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/(&  jtag_TCK), CData/*0:0*/(&  jtag_TMS), CData/*0:0*/(&  jtag_TDI), CData/*0:0*/(&  jtag_TRSTn), const CData/*0:0*/ jtag_TDO, IData/*31:0*/(&  jtag_tick__Vfuncrtn));
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
