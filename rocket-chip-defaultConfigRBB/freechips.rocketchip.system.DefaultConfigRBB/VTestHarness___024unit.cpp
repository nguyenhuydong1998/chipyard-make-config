// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness___024unit.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/(&  jtag_TCK), CData/*0:0*/(&  jtag_TMS), CData/*0:0*/(&  jtag_TDI), CData/*0:0*/(&  jtag_TRSTn), const CData/*0:0*/ jtag_TDO, IData/*31:0*/(&  jtag_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    unsigned char jtag_TCK__Vcvt;
    unsigned char jtag_TMS__Vcvt;
    unsigned char jtag_TDI__Vcvt;
    unsigned char jtag_TRSTn__Vcvt;
    unsigned char jtag_TDO__Vcvt;
    jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}
