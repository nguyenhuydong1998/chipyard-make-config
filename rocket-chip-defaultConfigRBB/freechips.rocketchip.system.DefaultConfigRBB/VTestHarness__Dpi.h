// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at /opt/shared/user/hoangvm/rocket-chip/src/main/resources/vsrc/SimJTAG.v:3
    extern int jtag_tick(unsigned char* jtag_TCK, unsigned char* jtag_TMS, unsigned char* jtag_TDI, unsigned char* jtag_TRSTn, unsigned char jtag_TDO);
    
#ifdef __cplusplus
}
#endif
