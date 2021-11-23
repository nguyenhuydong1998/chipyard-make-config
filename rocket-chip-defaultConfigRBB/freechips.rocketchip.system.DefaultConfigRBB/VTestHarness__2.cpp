// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__66(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__66\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__67(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__67\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp3108[4];
    WData/*127:0*/ __Vtemp3109[4];
    WData/*127:0*/ __Vtemp3110[4];
    WData/*127:0*/ __Vtemp3111[4];
    WData/*127:0*/ __Vtemp3112[4];
    WData/*127:0*/ __Vtemp3113[4];
    WData/*127:0*/ __Vtemp3114[4];
    WData/*127:0*/ __Vtemp3115[4];
    WData/*127:0*/ __Vtemp3116[4];
    WData/*127:0*/ __Vtemp3117[4];
    WData/*127:0*/ __Vtemp3118[4];
    WData/*127:0*/ __Vtemp3119[4];
    WData/*127:0*/ __Vtemp3120[4];
    WData/*127:0*/ __Vtemp3121[4];
    WData/*127:0*/ __Vtemp3122[4];
    WData/*127:0*/ __Vtemp3123[4];
    WData/*127:0*/ __Vtemp3124[4];
    WData/*127:0*/ __Vtemp3125[4];
    WData/*127:0*/ __Vtemp3126[4];
    WData/*127:0*/ __Vtemp3127[4];
    WData/*127:0*/ __Vtemp3128[4];
    WData/*127:0*/ __Vtemp3129[4];
    WData/*127:0*/ __Vtemp3130[4];
    WData/*127:0*/ __Vtemp3131[4];
    WData/*127:0*/ __Vtemp3132[4];
    WData/*127:0*/ __Vtemp3133[4];
    WData/*127:0*/ __Vtemp3134[4];
    WData/*127:0*/ __Vtemp3135[4];
    WData/*127:0*/ __Vtemp3136[4];
    WData/*127:0*/ __Vtemp3137[4];
    WData/*127:0*/ __Vtemp3138[4];
    WData/*127:0*/ __Vtemp3139[4];
    WData/*127:0*/ __Vtemp3140[4];
    WData/*127:0*/ __Vtemp3141[4];
    WData/*127:0*/ __Vtemp3142[4];
    WData/*127:0*/ __Vtemp3143[4];
    WData/*127:0*/ __Vtemp3144[4];
    WData/*127:0*/ __Vtemp3145[4];
    WData/*127:0*/ __Vtemp3146[4];
    WData/*127:0*/ __Vtemp3147[4];
    WData/*127:0*/ __Vtemp3148[4];
    WData/*127:0*/ __Vtemp3149[4];
    WData/*127:0*/ __Vtemp3150[4];
    WData/*127:0*/ __Vtemp3151[4];
    WData/*127:0*/ __Vtemp3152[4];
    WData/*127:0*/ __Vtemp3153[4];
    WData/*127:0*/ __Vtemp3154[4];
    WData/*127:0*/ __Vtemp3155[4];
    WData/*127:0*/ __Vtemp3156[4];
    WData/*127:0*/ __Vtemp3157[4];
    WData/*127:0*/ __Vtemp3158[4];
    WData/*127:0*/ __Vtemp3159[4];
    WData/*127:0*/ __Vtemp3160[4];
    WData/*127:0*/ __Vtemp3161[4];
    WData/*127:0*/ __Vtemp3162[4];
    WData/*127:0*/ __Vtemp3163[4];
    WData/*127:0*/ __Vtemp3164[4];
    WData/*127:0*/ __Vtemp3165[4];
    WData/*127:0*/ __Vtemp3166[4];
    WData/*127:0*/ __Vtemp3167[4];
    WData/*127:0*/ __Vtemp3168[4];
    WData/*127:0*/ __Vtemp3169[4];
    WData/*127:0*/ __Vtemp3170[4];
    WData/*127:0*/ __Vtemp3171[4];
    WData/*127:0*/ __Vtemp3172[4];
    WData/*127:0*/ __Vtemp3173[4];
    WData/*127:0*/ __Vtemp3174[4];
    WData/*127:0*/ __Vtemp3175[4];
    WData/*127:0*/ __Vtemp3176[4];
    WData/*127:0*/ __Vtemp3177[4];
    WData/*127:0*/ __Vtemp3178[4];
    WData/*127:0*/ __Vtemp3179[4];
    WData/*127:0*/ __Vtemp3180[4];
    WData/*127:0*/ __Vtemp3181[4];
    WData/*127:0*/ __Vtemp3182[4];
    WData/*127:0*/ __Vtemp3183[4];
    WData/*127:0*/ __Vtemp3184[4];
    WData/*127:0*/ __Vtemp3185[4];
    WData/*127:0*/ __Vtemp3186[4];
    WData/*127:0*/ __Vtemp3187[4];
    WData/*127:0*/ __Vtemp3188[4];
    WData/*127:0*/ __Vtemp3189[4];
    WData/*127:0*/ __Vtemp3190[4];
    WData/*127:0*/ __Vtemp3191[4];
    WData/*127:0*/ __Vtemp3192[4];
    WData/*127:0*/ __Vtemp3193[4];
    WData/*127:0*/ __Vtemp3194[4];
    WData/*127:0*/ __Vtemp3195[4];
    WData/*127:0*/ __Vtemp3196[4];
    WData/*127:0*/ __Vtemp3197[4];
    WData/*127:0*/ __Vtemp3198[4];
    WData/*127:0*/ __Vtemp3199[4];
    WData/*127:0*/ __Vtemp3200[4];
    WData/*127:0*/ __Vtemp3201[4];
    WData/*127:0*/ __Vtemp3202[4];
    WData/*127:0*/ __Vtemp3203[4];
    WData/*127:0*/ __Vtemp3204[4];
    WData/*127:0*/ __Vtemp3205[4];
    WData/*127:0*/ __Vtemp3206[4];
    WData/*127:0*/ __Vtemp3207[4];
    WData/*127:0*/ __Vtemp3208[4];
    WData/*127:0*/ __Vtemp3209[4];
    WData/*127:0*/ __Vtemp3210[4];
    WData/*127:0*/ __Vtemp3211[4];
    WData/*127:0*/ __Vtemp3212[4];
    WData/*127:0*/ __Vtemp3213[4];
    WData/*127:0*/ __Vtemp3214[4];
    WData/*127:0*/ __Vtemp3215[4];
    WData/*127:0*/ __Vtemp3216[4];
    WData/*127:0*/ __Vtemp3217[4];
    WData/*127:0*/ __Vtemp3218[4];
    WData/*127:0*/ __Vtemp3219[4];
    WData/*127:0*/ __Vtemp3220[4];
    WData/*127:0*/ __Vtemp3221[4];
    WData/*127:0*/ __Vtemp3222[4];
    WData/*127:0*/ __Vtemp3223[4];
    WData/*127:0*/ __Vtemp3224[4];
    WData/*127:0*/ __Vtemp3225[4];
    WData/*127:0*/ __Vtemp3226[4];
    WData/*127:0*/ __Vtemp3227[4];
    WData/*127:0*/ __Vtemp3228[4];
    WData/*127:0*/ __Vtemp3229[4];
    WData/*127:0*/ __Vtemp3230[4];
    WData/*127:0*/ __Vtemp3231[4];
    WData/*127:0*/ __Vtemp3232[4];
    WData/*127:0*/ __Vtemp3233[4];
    WData/*127:0*/ __Vtemp3234[4];
    WData/*127:0*/ __Vtemp3235[4];
    WData/*127:0*/ __Vtemp3236[4];
    WData/*127:0*/ __Vtemp3237[4];
    WData/*127:0*/ __Vtemp3238[4];
    WData/*127:0*/ __Vtemp3239[4];
    WData/*127:0*/ __Vtemp3240[4];
    WData/*127:0*/ __Vtemp3241[4];
    WData/*127:0*/ __Vtemp3242[4];
    WData/*127:0*/ __Vtemp3243[4];
    WData/*127:0*/ __Vtemp3244[4];
    WData/*127:0*/ __Vtemp3245[4];
    WData/*127:0*/ __Vtemp3246[4];
    WData/*127:0*/ __Vtemp3247[4];
    WData/*127:0*/ __Vtemp3248[4];
    WData/*127:0*/ __Vtemp3249[4];
    WData/*127:0*/ __Vtemp3250[4];
    WData/*127:0*/ __Vtemp3251[4];
    WData/*127:0*/ __Vtemp3252[4];
    WData/*127:0*/ __Vtemp3253[4];
    WData/*127:0*/ __Vtemp3254[4];
    WData/*127:0*/ __Vtemp3255[4];
    WData/*127:0*/ __Vtemp3256[4];
    WData/*127:0*/ __Vtemp3257[4];
    WData/*127:0*/ __Vtemp3258[4];
    WData/*127:0*/ __Vtemp3259[4];
    WData/*127:0*/ __Vtemp3260[4];
    WData/*127:0*/ __Vtemp3261[4];
    WData/*127:0*/ __Vtemp3262[4];
    WData/*127:0*/ __Vtemp3263[4];
    WData/*127:0*/ __Vtemp3264[4];
    WData/*127:0*/ __Vtemp3265[4];
    WData/*127:0*/ __Vtemp3266[4];
    WData/*127:0*/ __Vtemp3267[4];
    WData/*127:0*/ __Vtemp3268[4];
    WData/*127:0*/ __Vtemp3269[4];
    WData/*127:0*/ __Vtemp3270[4];
    WData/*127:0*/ __Vtemp3271[4];
    WData/*127:0*/ __Vtemp3272[4];
    WData/*127:0*/ __Vtemp3273[4];
    WData/*127:0*/ __Vtemp3274[4];
    WData/*127:0*/ __Vtemp3275[4];
    WData/*127:0*/ __Vtemp3276[4];
    WData/*127:0*/ __Vtemp3277[4];
    WData/*127:0*/ __Vtemp3278[4];
    WData/*127:0*/ __Vtemp3279[4];
    WData/*127:0*/ __Vtemp3280[4];
    WData/*127:0*/ __Vtemp3281[4];
    WData/*127:0*/ __Vtemp3282[4];
    WData/*127:0*/ __Vtemp3283[4];
    WData/*127:0*/ __Vtemp3284[4];
    WData/*127:0*/ __Vtemp3285[4];
    WData/*127:0*/ __Vtemp3286[4];
    WData/*127:0*/ __Vtemp3287[4];
    WData/*127:0*/ __Vtemp3288[4];
    WData/*127:0*/ __Vtemp3289[4];
    WData/*127:0*/ __Vtemp3290[4];
    WData/*127:0*/ __Vtemp3291[4];
    WData/*127:0*/ __Vtemp3292[4];
    WData/*127:0*/ __Vtemp3293[4];
    WData/*127:0*/ __Vtemp3294[4];
    WData/*127:0*/ __Vtemp3295[4];
    WData/*127:0*/ __Vtemp3296[4];
    WData/*127:0*/ __Vtemp3297[4];
    WData/*127:0*/ __Vtemp3298[4];
    WData/*127:0*/ __Vtemp3299[4];
    WData/*127:0*/ __Vtemp3300[4];
    WData/*127:0*/ __Vtemp3301[4];
    WData/*127:0*/ __Vtemp3302[4];
    WData/*127:0*/ __Vtemp3303[4];
    WData/*127:0*/ __Vtemp3304[4];
    WData/*127:0*/ __Vtemp3305[4];
    WData/*127:0*/ __Vtemp3306[4];
    WData/*127:0*/ __Vtemp3307[4];
    WData/*127:0*/ __Vtemp3308[4];
    WData/*127:0*/ __Vtemp3309[4];
    WData/*127:0*/ __Vtemp3310[4];
    WData/*127:0*/ __Vtemp3311[4];
    WData/*127:0*/ __Vtemp3312[4];
    WData/*127:0*/ __Vtemp3313[4];
    WData/*127:0*/ __Vtemp3314[4];
    WData/*127:0*/ __Vtemp3315[4];
    WData/*127:0*/ __Vtemp3316[4];
    WData/*127:0*/ __Vtemp3317[4];
    WData/*127:0*/ __Vtemp3318[4];
    WData/*127:0*/ __Vtemp3319[4];
    WData/*127:0*/ __Vtemp3320[4];
    WData/*127:0*/ __Vtemp3321[4];
    WData/*127:0*/ __Vtemp3322[4];
    WData/*127:0*/ __Vtemp3323[4];
    WData/*127:0*/ __Vtemp3324[4];
    WData/*127:0*/ __Vtemp3325[4];
    WData/*127:0*/ __Vtemp3326[4];
    WData/*127:0*/ __Vtemp3327[4];
    WData/*127:0*/ __Vtemp3328[4];
    WData/*127:0*/ __Vtemp3329[4];
    WData/*127:0*/ __Vtemp3330[4];
    WData/*127:0*/ __Vtemp3331[4];
    WData/*127:0*/ __Vtemp3332[4];
    WData/*127:0*/ __Vtemp3333[4];
    WData/*127:0*/ __Vtemp3334[4];
    WData/*127:0*/ __Vtemp3335[4];
    WData/*127:0*/ __Vtemp3336[4];
    WData/*127:0*/ __Vtemp3337[4];
    WData/*127:0*/ __Vtemp3338[4];
    WData/*127:0*/ __Vtemp3339[4];
    WData/*127:0*/ __Vtemp3340[4];
    WData/*127:0*/ __Vtemp3341[4];
    WData/*127:0*/ __Vtemp3342[4];
    WData/*127:0*/ __Vtemp3343[4];
    WData/*127:0*/ __Vtemp3344[4];
    WData/*127:0*/ __Vtemp3345[4];
    WData/*127:0*/ __Vtemp3346[4];
    WData/*127:0*/ __Vtemp3347[4];
    WData/*127:0*/ __Vtemp3348[4];
    WData/*127:0*/ __Vtemp3349[4];
    WData/*127:0*/ __Vtemp3350[4];
    WData/*127:0*/ __Vtemp3351[4];
    WData/*127:0*/ __Vtemp3352[4];
    WData/*127:0*/ __Vtemp3353[4];
    WData/*127:0*/ __Vtemp3354[4];
    WData/*127:0*/ __Vtemp3355[4];
    WData/*127:0*/ __Vtemp3356[4];
    WData/*127:0*/ __Vtemp3357[4];
    WData/*127:0*/ __Vtemp3358[4];
    WData/*127:0*/ __Vtemp3359[4];
    WData/*127:0*/ __Vtemp3360[4];
    WData/*127:0*/ __Vtemp3361[4];
    WData/*127:0*/ __Vtemp3362[4];
    WData/*127:0*/ __Vtemp3363[4];
    WData/*127:0*/ __Vtemp3364[4];
    WData/*127:0*/ __Vtemp3365[4];
    WData/*127:0*/ __Vtemp3366[4];
    WData/*127:0*/ __Vtemp3367[4];
    WData/*127:0*/ __Vtemp3368[4];
    WData/*127:0*/ __Vtemp3369[4];
    WData/*127:0*/ __Vtemp3370[4];
    WData/*127:0*/ __Vtemp3371[4];
    WData/*127:0*/ __Vtemp3372[4];
    WData/*127:0*/ __Vtemp3373[4];
    WData/*127:0*/ __Vtemp3374[4];
    WData/*127:0*/ __Vtemp3375[4];
    WData/*127:0*/ __Vtemp3376[4];
    WData/*127:0*/ __Vtemp3377[4];
    WData/*127:0*/ __Vtemp3378[4];
    WData/*127:0*/ __Vtemp3379[4];
    WData/*127:0*/ __Vtemp3380[4];
    WData/*127:0*/ __Vtemp3381[4];
    WData/*127:0*/ __Vtemp3382[4];
    WData/*127:0*/ __Vtemp3383[4];
    WData/*127:0*/ __Vtemp3384[4];
    WData/*127:0*/ __Vtemp3385[4];
    WData/*127:0*/ __Vtemp3386[4];
    WData/*127:0*/ __Vtemp3387[4];
    WData/*127:0*/ __Vtemp3388[4];
    WData/*127:0*/ __Vtemp3389[4];
    WData/*127:0*/ __Vtemp3390[4];
    WData/*127:0*/ __Vtemp3391[4];
    WData/*127:0*/ __Vtemp3392[4];
    WData/*127:0*/ __Vtemp3393[4];
    WData/*127:0*/ __Vtemp3394[4];
    WData/*127:0*/ __Vtemp3395[4];
    WData/*127:0*/ __Vtemp3396[4];
    WData/*127:0*/ __Vtemp3397[4];
    WData/*127:0*/ __Vtemp3398[4];
    WData/*127:0*/ __Vtemp3399[4];
    WData/*127:0*/ __Vtemp3400[4];
    WData/*127:0*/ __Vtemp3401[4];
    WData/*127:0*/ __Vtemp3402[4];
    WData/*127:0*/ __Vtemp3403[4];
    WData/*127:0*/ __Vtemp3404[4];
    WData/*127:0*/ __Vtemp3405[4];
    WData/*127:0*/ __Vtemp3406[4];
    WData/*127:0*/ __Vtemp3407[4];
    WData/*127:0*/ __Vtemp3408[4];
    WData/*127:0*/ __Vtemp3409[4];
    WData/*127:0*/ __Vtemp3410[4];
    WData/*127:0*/ __Vtemp3411[4];
    WData/*127:0*/ __Vtemp3412[4];
    WData/*127:0*/ __Vtemp3413[4];
    WData/*127:0*/ __Vtemp3414[4];
    WData/*127:0*/ __Vtemp3415[4];
    WData/*127:0*/ __Vtemp3416[4];
    WData/*127:0*/ __Vtemp3417[4];
    WData/*127:0*/ __Vtemp3418[4];
    WData/*127:0*/ __Vtemp3419[4];
    WData/*127:0*/ __Vtemp3420[4];
    WData/*127:0*/ __Vtemp3421[4];
    WData/*127:0*/ __Vtemp3422[4];
    WData/*127:0*/ __Vtemp3423[4];
    WData/*127:0*/ __Vtemp3424[4];
    WData/*127:0*/ __Vtemp3425[4];
    WData/*127:0*/ __Vtemp3426[4];
    WData/*127:0*/ __Vtemp3427[4];
    WData/*127:0*/ __Vtemp3428[4];
    WData/*127:0*/ __Vtemp3429[4];
    WData/*127:0*/ __Vtemp3430[4];
    WData/*127:0*/ __Vtemp3431[4];
    WData/*127:0*/ __Vtemp3432[4];
    WData/*127:0*/ __Vtemp3433[4];
    WData/*127:0*/ __Vtemp3434[4];
    WData/*127:0*/ __Vtemp3435[4];
    WData/*127:0*/ __Vtemp3436[4];
    WData/*127:0*/ __Vtemp3437[4];
    WData/*127:0*/ __Vtemp3438[4];
    WData/*127:0*/ __Vtemp3439[4];
    WData/*127:0*/ __Vtemp3440[4];
    WData/*127:0*/ __Vtemp3441[4];
    WData/*127:0*/ __Vtemp3442[4];
    WData/*127:0*/ __Vtemp3443[4];
    WData/*127:0*/ __Vtemp3444[4];
    WData/*127:0*/ __Vtemp3445[4];
    WData/*127:0*/ __Vtemp3446[4];
    WData/*127:0*/ __Vtemp3447[4];
    WData/*127:0*/ __Vtemp3448[4];
    WData/*127:0*/ __Vtemp3449[4];
    WData/*127:0*/ __Vtemp3450[4];
    WData/*127:0*/ __Vtemp3451[4];
    WData/*127:0*/ __Vtemp3452[4];
    WData/*127:0*/ __Vtemp3453[4];
    WData/*127:0*/ __Vtemp3454[4];
    WData/*127:0*/ __Vtemp3455[4];
    WData/*127:0*/ __Vtemp3456[4];
    WData/*127:0*/ __Vtemp3457[4];
    WData/*127:0*/ __Vtemp3458[4];
    WData/*127:0*/ __Vtemp3459[4];
    WData/*127:0*/ __Vtemp3460[4];
    WData/*127:0*/ __Vtemp3461[4];
    WData/*127:0*/ __Vtemp3462[4];
    WData/*127:0*/ __Vtemp3463[4];
    WData/*127:0*/ __Vtemp3464[4];
    WData/*127:0*/ __Vtemp3465[4];
    WData/*127:0*/ __Vtemp3466[4];
    WData/*127:0*/ __Vtemp3467[4];
    WData/*127:0*/ __Vtemp3468[4];
    WData/*127:0*/ __Vtemp3469[4];
    WData/*127:0*/ __Vtemp3470[4];
    WData/*127:0*/ __Vtemp3471[4];
    WData/*127:0*/ __Vtemp3472[4];
    WData/*127:0*/ __Vtemp3473[4];
    WData/*127:0*/ __Vtemp3474[4];
    WData/*127:0*/ __Vtemp3475[4];
    WData/*127:0*/ __Vtemp3476[4];
    WData/*127:0*/ __Vtemp3477[4];
    WData/*127:0*/ __Vtemp3478[4];
    WData/*127:0*/ __Vtemp3479[4];
    WData/*127:0*/ __Vtemp3480[4];
    WData/*127:0*/ __Vtemp3481[4];
    WData/*127:0*/ __Vtemp3482[4];
    WData/*127:0*/ __Vtemp3483[4];
    WData/*127:0*/ __Vtemp3484[4];
    WData/*127:0*/ __Vtemp3485[4];
    WData/*127:0*/ __Vtemp3486[4];
    WData/*127:0*/ __Vtemp3487[4];
    WData/*127:0*/ __Vtemp3488[4];
    WData/*127:0*/ __Vtemp3489[4];
    WData/*127:0*/ __Vtemp3490[4];
    WData/*127:0*/ __Vtemp3491[4];
    WData/*127:0*/ __Vtemp3492[4];
    WData/*127:0*/ __Vtemp3493[4];
    WData/*127:0*/ __Vtemp3494[4];
    WData/*127:0*/ __Vtemp3495[4];
    WData/*127:0*/ __Vtemp3496[4];
    WData/*127:0*/ __Vtemp3497[4];
    WData/*127:0*/ __Vtemp3498[4];
    WData/*127:0*/ __Vtemp3499[4];
    WData/*127:0*/ __Vtemp3500[4];
    WData/*127:0*/ __Vtemp3501[4];
    WData/*127:0*/ __Vtemp3502[4];
    WData/*127:0*/ __Vtemp3503[4];
    WData/*127:0*/ __Vtemp3504[4];
    WData/*127:0*/ __Vtemp3505[4];
    WData/*127:0*/ __Vtemp3506[4];
    WData/*127:0*/ __Vtemp3507[4];
    WData/*127:0*/ __Vtemp3508[4];
    WData/*127:0*/ __Vtemp3509[4];
    WData/*127:0*/ __Vtemp3510[4];
    WData/*127:0*/ __Vtemp3511[4];
    WData/*127:0*/ __Vtemp3512[4];
    WData/*127:0*/ __Vtemp3513[4];
    WData/*127:0*/ __Vtemp3514[4];
    WData/*127:0*/ __Vtemp3515[4];
    WData/*127:0*/ __Vtemp3516[4];
    WData/*127:0*/ __Vtemp3517[4];
    WData/*127:0*/ __Vtemp3518[4];
    WData/*127:0*/ __Vtemp3519[4];
    WData/*127:0*/ __Vtemp3520[4];
    WData/*127:0*/ __Vtemp3521[4];
    WData/*127:0*/ __Vtemp3522[4];
    WData/*127:0*/ __Vtemp3523[4];
    WData/*127:0*/ __Vtemp3524[4];
    WData/*127:0*/ __Vtemp3525[4];
    WData/*127:0*/ __Vtemp3526[4];
    WData/*127:0*/ __Vtemp3527[4];
    WData/*127:0*/ __Vtemp3528[4];
    WData/*127:0*/ __Vtemp3529[4];
    WData/*127:0*/ __Vtemp3530[4];
    WData/*127:0*/ __Vtemp3531[4];
    WData/*127:0*/ __Vtemp3532[4];
    WData/*127:0*/ __Vtemp3533[4];
    WData/*127:0*/ __Vtemp3534[4];
    WData/*127:0*/ __Vtemp3535[4];
    WData/*127:0*/ __Vtemp3536[4];
    WData/*127:0*/ __Vtemp3537[4];
    WData/*127:0*/ __Vtemp3538[4];
    WData/*127:0*/ __Vtemp3539[4];
    WData/*127:0*/ __Vtemp3540[4];
    WData/*127:0*/ __Vtemp3541[4];
    WData/*127:0*/ __Vtemp3542[4];
    WData/*127:0*/ __Vtemp3543[4];
    WData/*127:0*/ __Vtemp3544[4];
    WData/*127:0*/ __Vtemp3545[4];
    WData/*127:0*/ __Vtemp3546[4];
    WData/*127:0*/ __Vtemp3547[4];
    WData/*127:0*/ __Vtemp3548[4];
    WData/*127:0*/ __Vtemp3549[4];
    WData/*127:0*/ __Vtemp3550[4];
    WData/*127:0*/ __Vtemp3551[4];
    WData/*127:0*/ __Vtemp3552[4];
    WData/*127:0*/ __Vtemp3553[4];
    WData/*127:0*/ __Vtemp3554[4];
    WData/*127:0*/ __Vtemp3555[4];
    WData/*127:0*/ __Vtemp3556[4];
    WData/*127:0*/ __Vtemp3557[4];
    WData/*127:0*/ __Vtemp3558[4];
    WData/*127:0*/ __Vtemp3559[4];
    WData/*127:0*/ __Vtemp3560[4];
    WData/*127:0*/ __Vtemp3561[4];
    WData/*127:0*/ __Vtemp3562[4];
    WData/*127:0*/ __Vtemp3563[4];
    WData/*127:0*/ __Vtemp3564[4];
    WData/*127:0*/ __Vtemp3565[4];
    WData/*127:0*/ __Vtemp3566[4];
    WData/*127:0*/ __Vtemp3567[4];
    WData/*127:0*/ __Vtemp3568[4];
    WData/*127:0*/ __Vtemp3569[4];
    WData/*127:0*/ __Vtemp3570[4];
    WData/*127:0*/ __Vtemp3571[4];
    WData/*127:0*/ __Vtemp3572[4];
    WData/*127:0*/ __Vtemp3573[4];
    WData/*127:0*/ __Vtemp3574[4];
    WData/*127:0*/ __Vtemp3575[4];
    WData/*127:0*/ __Vtemp3576[4];
    WData/*127:0*/ __Vtemp3577[4];
    WData/*127:0*/ __Vtemp3578[4];
    WData/*127:0*/ __Vtemp3579[4];
    WData/*127:0*/ __Vtemp3580[4];
    WData/*127:0*/ __Vtemp3581[4];
    WData/*127:0*/ __Vtemp3582[4];
    WData/*127:0*/ __Vtemp3583[4];
    WData/*127:0*/ __Vtemp3584[4];
    WData/*127:0*/ __Vtemp3585[4];
    WData/*127:0*/ __Vtemp3586[4];
    WData/*127:0*/ __Vtemp3587[4];
    WData/*127:0*/ __Vtemp3588[4];
    WData/*127:0*/ __Vtemp3589[4];
    WData/*127:0*/ __Vtemp3590[4];
    WData/*127:0*/ __Vtemp3591[4];
    WData/*127:0*/ __Vtemp3592[4];
    WData/*127:0*/ __Vtemp3593[4];
    WData/*127:0*/ __Vtemp3594[4];
    WData/*127:0*/ __Vtemp3595[4];
    WData/*127:0*/ __Vtemp3596[4];
    WData/*127:0*/ __Vtemp3597[4];
    WData/*127:0*/ __Vtemp3598[4];
    WData/*127:0*/ __Vtemp3599[4];
    WData/*127:0*/ __Vtemp3600[4];
    WData/*127:0*/ __Vtemp3601[4];
    WData/*127:0*/ __Vtemp3602[4];
    WData/*127:0*/ __Vtemp3603[4];
    WData/*127:0*/ __Vtemp3604[4];
    WData/*127:0*/ __Vtemp3605[4];
    WData/*127:0*/ __Vtemp3606[4];
    WData/*127:0*/ __Vtemp3607[4];
    WData/*127:0*/ __Vtemp3608[4];
    WData/*127:0*/ __Vtemp3609[4];
    WData/*127:0*/ __Vtemp3610[4];
    WData/*127:0*/ __Vtemp3611[4];
    WData/*127:0*/ __Vtemp3612[4];
    WData/*127:0*/ __Vtemp3613[4];
    WData/*127:0*/ __Vtemp3614[4];
    WData/*127:0*/ __Vtemp3615[4];
    WData/*127:0*/ __Vtemp3616[4];
    WData/*127:0*/ __Vtemp3617[4];
    WData/*127:0*/ __Vtemp3618[4];
    WData/*127:0*/ __Vtemp3619[4];
    WData/*127:0*/ __Vtemp3620[4];
    WData/*127:0*/ __Vtemp3621[4];
    WData/*127:0*/ __Vtemp3622[4];
    WData/*127:0*/ __Vtemp3623[4];
    WData/*127:0*/ __Vtemp3624[4];
    WData/*127:0*/ __Vtemp3625[4];
    WData/*127:0*/ __Vtemp3626[4];
    WData/*127:0*/ __Vtemp3627[4];
    WData/*127:0*/ __Vtemp3628[4];
    WData/*127:0*/ __Vtemp3629[4];
    WData/*127:0*/ __Vtemp3630[4];
    WData/*127:0*/ __Vtemp3631[4];
    WData/*127:0*/ __Vtemp3632[4];
    WData/*127:0*/ __Vtemp3633[4];
    WData/*127:0*/ __Vtemp3634[4];
    WData/*127:0*/ __Vtemp3635[4];
    WData/*127:0*/ __Vtemp3636[4];
    WData/*127:0*/ __Vtemp3637[4];
    WData/*127:0*/ __Vtemp3638[4];
    WData/*127:0*/ __Vtemp3639[4];
    WData/*127:0*/ __Vtemp3640[4];
    WData/*127:0*/ __Vtemp3641[4];
    WData/*127:0*/ __Vtemp3642[4];
    WData/*127:0*/ __Vtemp3643[4];
    WData/*127:0*/ __Vtemp3644[4];
    WData/*127:0*/ __Vtemp3645[4];
    WData/*127:0*/ __Vtemp3646[4];
    WData/*127:0*/ __Vtemp3647[4];
    WData/*127:0*/ __Vtemp3648[4];
    WData/*127:0*/ __Vtemp3649[4];
    WData/*127:0*/ __Vtemp3650[4];
    WData/*127:0*/ __Vtemp3651[4];
    WData/*127:0*/ __Vtemp3652[4];
    WData/*127:0*/ __Vtemp3653[4];
    WData/*127:0*/ __Vtemp3654[4];
    WData/*127:0*/ __Vtemp3655[4];
    WData/*127:0*/ __Vtemp3656[4];
    WData/*127:0*/ __Vtemp3657[4];
    WData/*127:0*/ __Vtemp3658[4];
    WData/*127:0*/ __Vtemp3659[4];
    WData/*127:0*/ __Vtemp3660[4];
    WData/*127:0*/ __Vtemp3661[4];
    WData/*127:0*/ __Vtemp3662[4];
    WData/*127:0*/ __Vtemp3663[4];
    WData/*127:0*/ __Vtemp3664[4];
    WData/*127:0*/ __Vtemp3665[4];
    WData/*127:0*/ __Vtemp3666[4];
    WData/*127:0*/ __Vtemp3667[4];
    WData/*127:0*/ __Vtemp3668[4];
    WData/*127:0*/ __Vtemp3669[4];
    WData/*127:0*/ __Vtemp3670[4];
    WData/*127:0*/ __Vtemp3671[4];
    WData/*127:0*/ __Vtemp3672[4];
    WData/*127:0*/ __Vtemp3673[4];
    WData/*127:0*/ __Vtemp3674[4];
    WData/*127:0*/ __Vtemp3675[4];
    WData/*127:0*/ __Vtemp3676[4];
    WData/*127:0*/ __Vtemp3677[4];
    WData/*127:0*/ __Vtemp3678[4];
    WData/*127:0*/ __Vtemp3679[4];
    WData/*127:0*/ __Vtemp3680[4];
    WData/*127:0*/ __Vtemp3681[4];
    WData/*127:0*/ __Vtemp3682[4];
    WData/*127:0*/ __Vtemp3683[4];
    WData/*127:0*/ __Vtemp3684[4];
    WData/*127:0*/ __Vtemp3685[4];
    WData/*127:0*/ __Vtemp3686[4];
    WData/*127:0*/ __Vtemp3687[4];
    WData/*127:0*/ __Vtemp3688[4];
    WData/*127:0*/ __Vtemp3689[4];
    WData/*127:0*/ __Vtemp3690[4];
    WData/*127:0*/ __Vtemp3691[4];
    WData/*127:0*/ __Vtemp3692[4];
    WData/*127:0*/ __Vtemp3693[4];
    WData/*127:0*/ __Vtemp3694[4];
    WData/*127:0*/ __Vtemp3695[4];
    WData/*127:0*/ __Vtemp3696[4];
    WData/*127:0*/ __Vtemp3697[4];
    WData/*127:0*/ __Vtemp3698[4];
    WData/*127:0*/ __Vtemp3699[4];
    WData/*127:0*/ __Vtemp3700[4];
    WData/*127:0*/ __Vtemp3701[4];
    WData/*127:0*/ __Vtemp3702[4];
    WData/*127:0*/ __Vtemp3703[4];
    WData/*127:0*/ __Vtemp3704[4];
    WData/*127:0*/ __Vtemp3705[4];
    WData/*127:0*/ __Vtemp3706[4];
    WData/*127:0*/ __Vtemp3707[4];
    WData/*127:0*/ __Vtemp3708[4];
    WData/*127:0*/ __Vtemp3709[4];
    WData/*127:0*/ __Vtemp3710[4];
    WData/*127:0*/ __Vtemp3711[4];
    WData/*127:0*/ __Vtemp3712[4];
    WData/*127:0*/ __Vtemp3713[4];
    WData/*127:0*/ __Vtemp3714[4];
    WData/*127:0*/ __Vtemp3715[4];
    WData/*127:0*/ __Vtemp3716[4];
    WData/*127:0*/ __Vtemp3717[4];
    WData/*127:0*/ __Vtemp3718[4];
    WData/*127:0*/ __Vtemp3719[4];
    WData/*127:0*/ __Vtemp3720[4];
    WData/*127:0*/ __Vtemp3721[4];
    WData/*127:0*/ __Vtemp3722[4];
    WData/*127:0*/ __Vtemp3723[4];
    WData/*127:0*/ __Vtemp3724[4];
    WData/*127:0*/ __Vtemp3725[4];
    WData/*127:0*/ __Vtemp3726[4];
    WData/*127:0*/ __Vtemp3727[4];
    WData/*127:0*/ __Vtemp3728[4];
    WData/*127:0*/ __Vtemp3729[4];
    WData/*127:0*/ __Vtemp3730[4];
    WData/*127:0*/ __Vtemp3731[4];
    WData/*127:0*/ __Vtemp3732[4];
    WData/*127:0*/ __Vtemp3733[4];
    WData/*127:0*/ __Vtemp3734[4];
    WData/*127:0*/ __Vtemp3735[4];
    WData/*127:0*/ __Vtemp3736[4];
    WData/*127:0*/ __Vtemp3737[4];
    WData/*127:0*/ __Vtemp3738[4];
    WData/*127:0*/ __Vtemp3739[4];
    WData/*127:0*/ __Vtemp3740[4];
    WData/*127:0*/ __Vtemp3741[4];
    WData/*127:0*/ __Vtemp3742[4];
    WData/*127:0*/ __Vtemp3743[4];
    WData/*127:0*/ __Vtemp3744[4];
    WData/*127:0*/ __Vtemp3745[4];
    WData/*127:0*/ __Vtemp3746[4];
    WData/*127:0*/ __Vtemp3747[4];
    WData/*127:0*/ __Vtemp3748[4];
    WData/*127:0*/ __Vtemp3749[4];
    WData/*127:0*/ __Vtemp3750[4];
    WData/*127:0*/ __Vtemp3751[4];
    WData/*127:0*/ __Vtemp3752[4];
    WData/*127:0*/ __Vtemp3753[4];
    WData/*127:0*/ __Vtemp3754[4];
    WData/*127:0*/ __Vtemp3755[4];
    WData/*127:0*/ __Vtemp3756[4];
    WData/*127:0*/ __Vtemp3757[4];
    WData/*127:0*/ __Vtemp3758[4];
    WData/*127:0*/ __Vtemp3759[4];
    WData/*127:0*/ __Vtemp3760[4];
    WData/*127:0*/ __Vtemp3761[4];
    WData/*127:0*/ __Vtemp3762[4];
    WData/*127:0*/ __Vtemp3763[4];
    WData/*127:0*/ __Vtemp3764[4];
    WData/*127:0*/ __Vtemp3765[4];
    WData/*127:0*/ __Vtemp3766[4];
    WData/*127:0*/ __Vtemp3767[4];
    WData/*127:0*/ __Vtemp3768[4];
    WData/*127:0*/ __Vtemp3769[4];
    WData/*127:0*/ __Vtemp3770[4];
    WData/*127:0*/ __Vtemp3771[4];
    WData/*127:0*/ __Vtemp3772[4];
    WData/*127:0*/ __Vtemp3773[4];
    WData/*127:0*/ __Vtemp3774[4];
    WData/*127:0*/ __Vtemp3775[4];
    WData/*127:0*/ __Vtemp3776[4];
    WData/*127:0*/ __Vtemp3777[4];
    WData/*127:0*/ __Vtemp3778[4];
    WData/*127:0*/ __Vtemp3779[4];
    WData/*127:0*/ __Vtemp3780[4];
    WData/*127:0*/ __Vtemp3781[4];
    WData/*127:0*/ __Vtemp3782[4];
    WData/*127:0*/ __Vtemp3783[4];
    WData/*127:0*/ __Vtemp3784[4];
    WData/*127:0*/ __Vtemp3785[4];
    WData/*127:0*/ __Vtemp3786[4];
    WData/*127:0*/ __Vtemp3787[4];
    WData/*127:0*/ __Vtemp3788[4];
    WData/*127:0*/ __Vtemp3789[4];
    WData/*127:0*/ __Vtemp3790[4];
    WData/*127:0*/ __Vtemp3791[4];
    WData/*127:0*/ __Vtemp3792[4];
    WData/*127:0*/ __Vtemp3793[4];
    WData/*127:0*/ __Vtemp3794[4];
    WData/*127:0*/ __Vtemp3795[4];
    WData/*127:0*/ __Vtemp3796[4];
    WData/*127:0*/ __Vtemp3797[4];
    WData/*127:0*/ __Vtemp3798[4];
    WData/*127:0*/ __Vtemp3799[4];
    WData/*127:0*/ __Vtemp3800[4];
    WData/*127:0*/ __Vtemp3801[4];
    WData/*127:0*/ __Vtemp3802[4];
    WData/*127:0*/ __Vtemp3803[4];
    WData/*127:0*/ __Vtemp3804[4];
    WData/*127:0*/ __Vtemp3805[4];
    WData/*127:0*/ __Vtemp3806[4];
    WData/*127:0*/ __Vtemp3807[4];
    WData/*127:0*/ __Vtemp3808[4];
    WData/*127:0*/ __Vtemp3809[4];
    WData/*127:0*/ __Vtemp3810[4];
    WData/*127:0*/ __Vtemp3811[4];
    WData/*127:0*/ __Vtemp3812[4];
    WData/*127:0*/ __Vtemp3813[4];
    WData/*127:0*/ __Vtemp3814[4];
    WData/*127:0*/ __Vtemp3815[4];
    WData/*127:0*/ __Vtemp3816[4];
    WData/*127:0*/ __Vtemp3817[4];
    WData/*127:0*/ __Vtemp3818[4];
    WData/*127:0*/ __Vtemp3819[4];
    WData/*127:0*/ __Vtemp3820[4];
    WData/*127:0*/ __Vtemp3821[4];
    WData/*127:0*/ __Vtemp3822[4];
    WData/*127:0*/ __Vtemp3823[4];
    WData/*127:0*/ __Vtemp3824[4];
    WData/*127:0*/ __Vtemp3825[4];
    WData/*127:0*/ __Vtemp3826[4];
    WData/*127:0*/ __Vtemp3827[4];
    WData/*127:0*/ __Vtemp3828[4];
    WData/*127:0*/ __Vtemp3829[4];
    WData/*127:0*/ __Vtemp3830[4];
    WData/*127:0*/ __Vtemp3831[4];
    WData/*127:0*/ __Vtemp3832[4];
    WData/*127:0*/ __Vtemp3833[4];
    WData/*127:0*/ __Vtemp3834[4];
    WData/*127:0*/ __Vtemp3835[4];
    WData/*127:0*/ __Vtemp3836[4];
    WData/*127:0*/ __Vtemp3837[4];
    WData/*127:0*/ __Vtemp3838[4];
    WData/*127:0*/ __Vtemp3839[4];
    WData/*127:0*/ __Vtemp3840[4];
    WData/*127:0*/ __Vtemp3841[4];
    WData/*127:0*/ __Vtemp3842[4];
    WData/*127:0*/ __Vtemp3843[4];
    WData/*127:0*/ __Vtemp3844[4];
    WData/*127:0*/ __Vtemp3845[4];
    WData/*127:0*/ __Vtemp3846[4];
    WData/*127:0*/ __Vtemp3847[4];
    WData/*127:0*/ __Vtemp3848[4];
    WData/*127:0*/ __Vtemp3849[4];
    WData/*127:0*/ __Vtemp3850[4];
    WData/*127:0*/ __Vtemp3851[4];
    WData/*127:0*/ __Vtemp3852[4];
    WData/*127:0*/ __Vtemp3853[4];
    WData/*127:0*/ __Vtemp3854[4];
    WData/*127:0*/ __Vtemp3855[4];
    WData/*127:0*/ __Vtemp3856[4];
    WData/*127:0*/ __Vtemp3857[4];
    WData/*127:0*/ __Vtemp3858[4];
    WData/*127:0*/ __Vtemp3859[4];
    WData/*127:0*/ __Vtemp3860[4];
    WData/*127:0*/ __Vtemp3861[4];
    WData/*127:0*/ __Vtemp3862[4];
    WData/*127:0*/ __Vtemp3863[4];
    WData/*127:0*/ __Vtemp3864[4];
    WData/*127:0*/ __Vtemp3865[4];
    WData/*127:0*/ __Vtemp3866[4];
    WData/*127:0*/ __Vtemp3867[4];
    WData/*127:0*/ __Vtemp3868[4];
    WData/*127:0*/ __Vtemp3869[4];
    WData/*127:0*/ __Vtemp3870[4];
    WData/*127:0*/ __Vtemp3871[4];
    WData/*127:0*/ __Vtemp3872[4];
    WData/*127:0*/ __Vtemp3873[4];
    WData/*127:0*/ __Vtemp3874[4];
    WData/*127:0*/ __Vtemp3875[4];
    WData/*127:0*/ __Vtemp3876[4];
    WData/*127:0*/ __Vtemp3877[4];
    WData/*127:0*/ __Vtemp3878[4];
    WData/*127:0*/ __Vtemp3879[4];
    WData/*127:0*/ __Vtemp3880[4];
    WData/*127:0*/ __Vtemp3881[4];
    WData/*127:0*/ __Vtemp3882[4];
    WData/*127:0*/ __Vtemp3883[4];
    WData/*127:0*/ __Vtemp3884[4];
    WData/*127:0*/ __Vtemp3885[4];
    WData/*127:0*/ __Vtemp3886[4];
    WData/*127:0*/ __Vtemp3887[4];
    WData/*127:0*/ __Vtemp3888[4];
    WData/*127:0*/ __Vtemp3889[4];
    WData/*127:0*/ __Vtemp3890[4];
    WData/*127:0*/ __Vtemp3891[4];
    WData/*127:0*/ __Vtemp3892[4];
    WData/*127:0*/ __Vtemp3893[4];
    WData/*127:0*/ __Vtemp3894[4];
    WData/*127:0*/ __Vtemp3895[4];
    WData/*127:0*/ __Vtemp3896[4];
    WData/*127:0*/ __Vtemp3897[4];
    WData/*127:0*/ __Vtemp3898[4];
    WData/*127:0*/ __Vtemp3899[4];
    WData/*127:0*/ __Vtemp3900[4];
    WData/*127:0*/ __Vtemp3901[4];
    WData/*127:0*/ __Vtemp3902[4];
    WData/*127:0*/ __Vtemp3903[4];
    WData/*127:0*/ __Vtemp3904[4];
    WData/*127:0*/ __Vtemp3905[4];
    WData/*127:0*/ __Vtemp3906[4];
    WData/*127:0*/ __Vtemp3907[4];
    WData/*127:0*/ __Vtemp3908[4];
    WData/*127:0*/ __Vtemp3909[4];
    WData/*127:0*/ __Vtemp3910[4];
    WData/*127:0*/ __Vtemp3911[4];
    WData/*127:0*/ __Vtemp3912[4];
    WData/*127:0*/ __Vtemp3913[4];
    WData/*127:0*/ __Vtemp3914[4];
    WData/*127:0*/ __Vtemp3915[4];
    WData/*127:0*/ __Vtemp3916[4];
    WData/*127:0*/ __Vtemp3917[4];
    WData/*127:0*/ __Vtemp3918[4];
    WData/*127:0*/ __Vtemp3919[4];
    WData/*127:0*/ __Vtemp3920[4];
    WData/*127:0*/ __Vtemp3921[4];
    WData/*127:0*/ __Vtemp3922[4];
    WData/*127:0*/ __Vtemp3923[4];
    WData/*127:0*/ __Vtemp3924[4];
    WData/*127:0*/ __Vtemp3925[4];
    WData/*127:0*/ __Vtemp3926[4];
    WData/*127:0*/ __Vtemp3927[4];
    WData/*127:0*/ __Vtemp3928[4];
    WData/*127:0*/ __Vtemp3929[4];
    WData/*127:0*/ __Vtemp3930[4];
    WData/*127:0*/ __Vtemp3931[4];
    WData/*127:0*/ __Vtemp3932[4];
    WData/*127:0*/ __Vtemp3933[4];
    WData/*127:0*/ __Vtemp3934[4];
    WData/*127:0*/ __Vtemp3935[4];
    WData/*127:0*/ __Vtemp3936[4];
    WData/*127:0*/ __Vtemp3937[4];
    WData/*127:0*/ __Vtemp3938[4];
    WData/*127:0*/ __Vtemp3939[4];
    WData/*127:0*/ __Vtemp3940[4];
    WData/*127:0*/ __Vtemp3941[4];
    WData/*127:0*/ __Vtemp3942[4];
    WData/*127:0*/ __Vtemp3943[4];
    WData/*127:0*/ __Vtemp3944[4];
    WData/*127:0*/ __Vtemp3945[4];
    WData/*127:0*/ __Vtemp3946[4];
    WData/*127:0*/ __Vtemp3947[4];
    WData/*127:0*/ __Vtemp3948[4];
    WData/*127:0*/ __Vtemp3949[4];
    WData/*127:0*/ __Vtemp3950[4];
    WData/*127:0*/ __Vtemp3951[4];
    WData/*127:0*/ __Vtemp3952[4];
    WData/*127:0*/ __Vtemp3953[4];
    WData/*127:0*/ __Vtemp3954[4];
    WData/*127:0*/ __Vtemp3955[4];
    WData/*127:0*/ __Vtemp3956[4];
    WData/*127:0*/ __Vtemp3957[4];
    WData/*127:0*/ __Vtemp3958[4];
    WData/*127:0*/ __Vtemp3959[4];
    WData/*127:0*/ __Vtemp3960[4];
    WData/*127:0*/ __Vtemp3961[4];
    WData/*127:0*/ __Vtemp3962[4];
    WData/*127:0*/ __Vtemp3963[4];
    WData/*127:0*/ __Vtemp3964[4];
    WData/*127:0*/ __Vtemp3965[4];
    WData/*127:0*/ __Vtemp3966[4];
    WData/*127:0*/ __Vtemp3967[4];
    WData/*127:0*/ __Vtemp3968[4];
    WData/*127:0*/ __Vtemp3969[4];
    WData/*127:0*/ __Vtemp3970[4];
    WData/*127:0*/ __Vtemp3971[4];
    WData/*127:0*/ __Vtemp3972[4];
    WData/*127:0*/ __Vtemp3973[4];
    WData/*127:0*/ __Vtemp3974[4];
    WData/*127:0*/ __Vtemp3975[4];
    WData/*127:0*/ __Vtemp3976[4];
    WData/*127:0*/ __Vtemp3977[4];
    WData/*127:0*/ __Vtemp3978[4];
    WData/*127:0*/ __Vtemp3979[4];
    WData/*127:0*/ __Vtemp3980[4];
    WData/*127:0*/ __Vtemp3981[4];
    WData/*127:0*/ __Vtemp3982[4];
    WData/*127:0*/ __Vtemp3983[4];
    WData/*127:0*/ __Vtemp3984[4];
    WData/*127:0*/ __Vtemp3985[4];
    WData/*127:0*/ __Vtemp3986[4];
    WData/*127:0*/ __Vtemp3987[4];
    WData/*127:0*/ __Vtemp3988[4];
    WData/*127:0*/ __Vtemp3989[4];
    WData/*127:0*/ __Vtemp3990[4];
    WData/*127:0*/ __Vtemp3991[4];
    WData/*127:0*/ __Vtemp3992[4];
    WData/*127:0*/ __Vtemp3993[4];
    WData/*127:0*/ __Vtemp3994[4];
    WData/*127:0*/ __Vtemp3995[4];
    WData/*127:0*/ __Vtemp3996[4];
    WData/*127:0*/ __Vtemp3997[4];
    WData/*127:0*/ __Vtemp3998[4];
    WData/*127:0*/ __Vtemp3999[4];
    WData/*127:0*/ __Vtemp4000[4];
    WData/*127:0*/ __Vtemp4001[4];
    WData/*127:0*/ __Vtemp4002[4];
    WData/*127:0*/ __Vtemp4003[4];
    WData/*127:0*/ __Vtemp4004[4];
    WData/*127:0*/ __Vtemp4005[4];
    WData/*127:0*/ __Vtemp4006[4];
    WData/*127:0*/ __Vtemp4007[4];
    WData/*127:0*/ __Vtemp4008[4];
    WData/*127:0*/ __Vtemp4009[4];
    WData/*127:0*/ __Vtemp4010[4];
    WData/*127:0*/ __Vtemp4011[4];
    WData/*127:0*/ __Vtemp4012[4];
    WData/*127:0*/ __Vtemp4013[4];
    WData/*127:0*/ __Vtemp4014[4];
    WData/*127:0*/ __Vtemp4015[4];
    WData/*127:0*/ __Vtemp4016[4];
    WData/*127:0*/ __Vtemp4017[4];
    WData/*127:0*/ __Vtemp4018[4];
    WData/*127:0*/ __Vtemp4019[4];
    WData/*127:0*/ __Vtemp4020[4];
    WData/*127:0*/ __Vtemp4021[4];
    WData/*127:0*/ __Vtemp4022[4];
    WData/*127:0*/ __Vtemp4023[4];
    WData/*127:0*/ __Vtemp4024[4];
    WData/*127:0*/ __Vtemp4025[4];
    WData/*127:0*/ __Vtemp4026[4];
    WData/*127:0*/ __Vtemp4027[4];
    WData/*127:0*/ __Vtemp4028[4];
    WData/*127:0*/ __Vtemp4029[4];
    WData/*127:0*/ __Vtemp4030[4];
    WData/*127:0*/ __Vtemp4031[4];
    WData/*127:0*/ __Vtemp4032[4];
    WData/*127:0*/ __Vtemp4033[4];
    WData/*127:0*/ __Vtemp4034[4];
    WData/*127:0*/ __Vtemp4035[4];
    WData/*127:0*/ __Vtemp4036[4];
    WData/*127:0*/ __Vtemp4037[4];
    WData/*127:0*/ __Vtemp4038[4];
    WData/*127:0*/ __Vtemp4039[4];
    WData/*127:0*/ __Vtemp4040[4];
    WData/*127:0*/ __Vtemp4041[4];
    WData/*127:0*/ __Vtemp4042[4];
    WData/*127:0*/ __Vtemp4043[4];
    WData/*127:0*/ __Vtemp4044[4];
    WData/*127:0*/ __Vtemp4045[4];
    WData/*127:0*/ __Vtemp4046[4];
    WData/*127:0*/ __Vtemp4047[4];
    WData/*127:0*/ __Vtemp4048[4];
    WData/*127:0*/ __Vtemp4049[4];
    WData/*127:0*/ __Vtemp4050[4];
    WData/*127:0*/ __Vtemp4051[4];
    WData/*127:0*/ __Vtemp4052[4];
    WData/*127:0*/ __Vtemp4053[4];
    WData/*127:0*/ __Vtemp4054[4];
    WData/*127:0*/ __Vtemp4055[4];
    WData/*127:0*/ __Vtemp4056[4];
    WData/*127:0*/ __Vtemp4057[4];
    WData/*127:0*/ __Vtemp4058[4];
    WData/*127:0*/ __Vtemp4059[4];
    WData/*127:0*/ __Vtemp4060[4];
    WData/*127:0*/ __Vtemp4061[4];
    WData/*127:0*/ __Vtemp4062[4];
    WData/*127:0*/ __Vtemp4063[4];
    WData/*127:0*/ __Vtemp4064[4];
    WData/*127:0*/ __Vtemp4065[4];
    WData/*127:0*/ __Vtemp4066[4];
    WData/*127:0*/ __Vtemp4067[4];
    WData/*127:0*/ __Vtemp4068[4];
    WData/*127:0*/ __Vtemp4069[4];
    WData/*127:0*/ __Vtemp4070[4];
    WData/*127:0*/ __Vtemp4071[4];
    WData/*127:0*/ __Vtemp4072[4];
    WData/*127:0*/ __Vtemp4073[4];
    WData/*127:0*/ __Vtemp4074[4];
    WData/*127:0*/ __Vtemp4075[4];
    WData/*127:0*/ __Vtemp4076[4];
    WData/*127:0*/ __Vtemp4077[4];
    WData/*127:0*/ __Vtemp4078[4];
    WData/*127:0*/ __Vtemp4079[4];
    WData/*127:0*/ __Vtemp4080[4];
    WData/*127:0*/ __Vtemp4081[4];
    WData/*127:0*/ __Vtemp4082[4];
    WData/*127:0*/ __Vtemp4083[4];
    WData/*127:0*/ __Vtemp4084[4];
    WData/*127:0*/ __Vtemp4085[4];
    WData/*127:0*/ __Vtemp4086[4];
    WData/*127:0*/ __Vtemp4087[4];
    WData/*127:0*/ __Vtemp4088[4];
    WData/*127:0*/ __Vtemp4089[4];
    WData/*127:0*/ __Vtemp4090[4];
    WData/*127:0*/ __Vtemp4091[4];
    WData/*127:0*/ __Vtemp4092[4];
    WData/*127:0*/ __Vtemp4093[4];
    WData/*127:0*/ __Vtemp4094[4];
    WData/*127:0*/ __Vtemp4095[4];
    WData/*127:0*/ __Vtemp4096[4];
    WData/*127:0*/ __Vtemp4097[4];
    WData/*127:0*/ __Vtemp4098[4];
    WData/*127:0*/ __Vtemp4099[4];
    WData/*127:0*/ __Vtemp4100[4];
    WData/*127:0*/ __Vtemp4101[4];
    WData/*127:0*/ __Vtemp4102[4];
    WData/*127:0*/ __Vtemp4103[4];
    WData/*127:0*/ __Vtemp4104[4];
    WData/*127:0*/ __Vtemp4105[4];
    WData/*127:0*/ __Vtemp4106[4];
    WData/*127:0*/ __Vtemp4107[4];
    WData/*127:0*/ __Vtemp4108[4];
    WData/*127:0*/ __Vtemp4109[4];
    WData/*127:0*/ __Vtemp4110[4];
    WData/*127:0*/ __Vtemp4111[4];
    WData/*127:0*/ __Vtemp4112[4];
    WData/*127:0*/ __Vtemp4113[4];
    WData/*127:0*/ __Vtemp4114[4];
    WData/*127:0*/ __Vtemp4115[4];
    WData/*127:0*/ __Vtemp4116[4];
    WData/*127:0*/ __Vtemp4117[4];
    WData/*127:0*/ __Vtemp4118[4];
    WData/*127:0*/ __Vtemp4119[4];
    WData/*127:0*/ __Vtemp4120[4];
    WData/*127:0*/ __Vtemp4121[4];
    WData/*127:0*/ __Vtemp4122[4];
    WData/*127:0*/ __Vtemp4123[4];
    WData/*127:0*/ __Vtemp4124[4];
    WData/*127:0*/ __Vtemp4125[4];
    WData/*127:0*/ __Vtemp4126[4];
    WData/*127:0*/ __Vtemp4127[4];
    WData/*127:0*/ __Vtemp4128[4];
    WData/*127:0*/ __Vtemp4129[4];
    WData/*127:0*/ __Vtemp4130[4];
    WData/*127:0*/ __Vtemp4131[4];
    // Body
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88527
verbose&&done_reset        
    ) {
        __Vtemp3108[0U] = 1U;
        __Vtemp3108[1U] = 0U;
        __Vtemp3108[2U] = 0U;
        __Vtemp3108[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3109, __Vtemp3108, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3109[0U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88539
done_reset        
    ) {
        __Vtemp3110[0U] = 1U;
        __Vtemp3110[1U] = 0U;
        __Vtemp3110[2U] = 0U;
        __Vtemp3110[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3111, __Vtemp3110, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3111[0U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88542: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88542, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88550
verbose&&done_reset        
    ) {
        __Vtemp3112[0U] = 1U;
        __Vtemp3112[1U] = 0U;
        __Vtemp3112[2U] = 0U;
        __Vtemp3112[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3113, __Vtemp3112, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3113[0U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88562
done_reset        
    ) {
        __Vtemp3114[0U] = 1U;
        __Vtemp3114[1U] = 0U;
        __Vtemp3114[2U] = 0U;
        __Vtemp3114[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3115, __Vtemp3114, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3115[0U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88565: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88565, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88573
verbose&&done_reset        
    ) {
        __Vtemp3116[0U] = 1U;
        __Vtemp3116[1U] = 0U;
        __Vtemp3116[2U] = 0U;
        __Vtemp3116[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3117, __Vtemp3116, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3117[0U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88585
done_reset        
    ) {
        __Vtemp3118[0U] = 1U;
        __Vtemp3118[1U] = 0U;
        __Vtemp3118[2U] = 0U;
        __Vtemp3118[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3119, __Vtemp3118, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3119[0U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88588: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88588, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88596
verbose&&done_reset        
    ) {
        __Vtemp3120[0U] = 1U;
        __Vtemp3120[1U] = 0U;
        __Vtemp3120[2U] = 0U;
        __Vtemp3120[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3121, __Vtemp3120, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3121[0U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88608
done_reset        
    ) {
        __Vtemp3122[0U] = 1U;
        __Vtemp3122[1U] = 0U;
        __Vtemp3122[2U] = 0U;
        __Vtemp3122[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3123, __Vtemp3122, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3123[0U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88611: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88611, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88619
verbose&&done_reset        
    ) {
        __Vtemp3124[0U] = 1U;
        __Vtemp3124[1U] = 0U;
        __Vtemp3124[2U] = 0U;
        __Vtemp3124[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3125, __Vtemp3124, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3125[0U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88631
done_reset        
    ) {
        __Vtemp3126[0U] = 1U;
        __Vtemp3126[1U] = 0U;
        __Vtemp3126[2U] = 0U;
        __Vtemp3126[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3127, __Vtemp3126, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3127[0U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88634: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88634, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88642
verbose&&done_reset        
    ) {
        __Vtemp3128[0U] = 1U;
        __Vtemp3128[1U] = 0U;
        __Vtemp3128[2U] = 0U;
        __Vtemp3128[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3129, __Vtemp3128, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3129[0U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88654
done_reset        
    ) {
        __Vtemp3130[0U] = 1U;
        __Vtemp3130[1U] = 0U;
        __Vtemp3130[2U] = 0U;
        __Vtemp3130[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3131, __Vtemp3130, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3131[0U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88657: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88657, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88665
verbose&&done_reset        
    ) {
        __Vtemp3132[0U] = 1U;
        __Vtemp3132[1U] = 0U;
        __Vtemp3132[2U] = 0U;
        __Vtemp3132[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3133, __Vtemp3132, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3133[0U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88677
done_reset        
    ) {
        __Vtemp3134[0U] = 1U;
        __Vtemp3134[1U] = 0U;
        __Vtemp3134[2U] = 0U;
        __Vtemp3134[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3135, __Vtemp3134, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3135[0U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88680: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88680, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88688
verbose&&done_reset        
    ) {
        __Vtemp3136[0U] = 1U;
        __Vtemp3136[1U] = 0U;
        __Vtemp3136[2U] = 0U;
        __Vtemp3136[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3137, __Vtemp3136, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3137[0U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88700
done_reset        
    ) {
        __Vtemp3138[0U] = 1U;
        __Vtemp3138[1U] = 0U;
        __Vtemp3138[2U] = 0U;
        __Vtemp3138[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3139, __Vtemp3138, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3139[0U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88703: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88703, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88711
verbose&&done_reset        
    ) {
        __Vtemp3140[0U] = 1U;
        __Vtemp3140[1U] = 0U;
        __Vtemp3140[2U] = 0U;
        __Vtemp3140[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3141, __Vtemp3140, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3141[0U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88723
done_reset        
    ) {
        __Vtemp3142[0U] = 1U;
        __Vtemp3142[1U] = 0U;
        __Vtemp3142[2U] = 0U;
        __Vtemp3142[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3143, __Vtemp3142, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3143[0U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88726: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88726, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88734
verbose&&done_reset        
    ) {
        __Vtemp3144[0U] = 1U;
        __Vtemp3144[1U] = 0U;
        __Vtemp3144[2U] = 0U;
        __Vtemp3144[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3145, __Vtemp3144, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3145[0U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88746
done_reset        
    ) {
        __Vtemp3146[0U] = 1U;
        __Vtemp3146[1U] = 0U;
        __Vtemp3146[2U] = 0U;
        __Vtemp3146[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3147, __Vtemp3146, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3147[0U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88749: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88749, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88757
verbose&&done_reset        
    ) {
        __Vtemp3148[0U] = 1U;
        __Vtemp3148[1U] = 0U;
        __Vtemp3148[2U] = 0U;
        __Vtemp3148[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3149, __Vtemp3148, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3149[0U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88769
done_reset        
    ) {
        __Vtemp3150[0U] = 1U;
        __Vtemp3150[1U] = 0U;
        __Vtemp3150[2U] = 0U;
        __Vtemp3150[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3151, __Vtemp3150, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3151[0U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88772: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88772, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88780
verbose&&done_reset        
    ) {
        __Vtemp3152[0U] = 1U;
        __Vtemp3152[1U] = 0U;
        __Vtemp3152[2U] = 0U;
        __Vtemp3152[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3153, __Vtemp3152, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3153[0U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88792
done_reset        
    ) {
        __Vtemp3154[0U] = 1U;
        __Vtemp3154[1U] = 0U;
        __Vtemp3154[2U] = 0U;
        __Vtemp3154[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3155, __Vtemp3154, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3155[0U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88795: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88795, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88803
verbose&&done_reset        
    ) {
        __Vtemp3156[0U] = 1U;
        __Vtemp3156[1U] = 0U;
        __Vtemp3156[2U] = 0U;
        __Vtemp3156[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3157, __Vtemp3156, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3157[0U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88815
done_reset        
    ) {
        __Vtemp3158[0U] = 1U;
        __Vtemp3158[1U] = 0U;
        __Vtemp3158[2U] = 0U;
        __Vtemp3158[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3159, __Vtemp3158, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3159[0U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88818: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88818, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88826
verbose&&done_reset        
    ) {
        __Vtemp3160[0U] = 1U;
        __Vtemp3160[1U] = 0U;
        __Vtemp3160[2U] = 0U;
        __Vtemp3160[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3161, __Vtemp3160, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3161[0U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88838
done_reset        
    ) {
        __Vtemp3162[0U] = 1U;
        __Vtemp3162[1U] = 0U;
        __Vtemp3162[2U] = 0U;
        __Vtemp3162[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3163, __Vtemp3162, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3163[0U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88841: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88841, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88849
verbose&&done_reset        
    ) {
        __Vtemp3164[0U] = 1U;
        __Vtemp3164[1U] = 0U;
        __Vtemp3164[2U] = 0U;
        __Vtemp3164[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3165, __Vtemp3164, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3165[0U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88861
done_reset        
    ) {
        __Vtemp3166[0U] = 1U;
        __Vtemp3166[1U] = 0U;
        __Vtemp3166[2U] = 0U;
        __Vtemp3166[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3167, __Vtemp3166, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3167[0U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88864: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88864, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88872
verbose&&done_reset        
    ) {
        __Vtemp3168[0U] = 1U;
        __Vtemp3168[1U] = 0U;
        __Vtemp3168[2U] = 0U;
        __Vtemp3168[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3169, __Vtemp3168, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3169[0U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88884
done_reset        
    ) {
        __Vtemp3170[0U] = 1U;
        __Vtemp3170[1U] = 0U;
        __Vtemp3170[2U] = 0U;
        __Vtemp3170[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3171, __Vtemp3170, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3171[0U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88887: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88887, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88895
verbose&&done_reset        
    ) {
        __Vtemp3172[0U] = 1U;
        __Vtemp3172[1U] = 0U;
        __Vtemp3172[2U] = 0U;
        __Vtemp3172[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3173, __Vtemp3172, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3173[0U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88907
done_reset        
    ) {
        __Vtemp3174[0U] = 1U;
        __Vtemp3174[1U] = 0U;
        __Vtemp3174[2U] = 0U;
        __Vtemp3174[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3175, __Vtemp3174, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3175[0U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88910: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88910, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88918
verbose&&done_reset        
    ) {
        __Vtemp3176[0U] = 1U;
        __Vtemp3176[1U] = 0U;
        __Vtemp3176[2U] = 0U;
        __Vtemp3176[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3177, __Vtemp3176, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3177[0U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88930
done_reset        
    ) {
        __Vtemp3178[0U] = 1U;
        __Vtemp3178[1U] = 0U;
        __Vtemp3178[2U] = 0U;
        __Vtemp3178[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3179, __Vtemp3178, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3179[0U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88933: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88933, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88941
verbose&&done_reset        
    ) {
        __Vtemp3180[0U] = 1U;
        __Vtemp3180[1U] = 0U;
        __Vtemp3180[2U] = 0U;
        __Vtemp3180[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3181, __Vtemp3180, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3181[0U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88953
done_reset        
    ) {
        __Vtemp3182[0U] = 1U;
        __Vtemp3182[1U] = 0U;
        __Vtemp3182[2U] = 0U;
        __Vtemp3182[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3183, __Vtemp3182, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3183[0U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88956: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88956, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88964
verbose&&done_reset        
    ) {
        __Vtemp3184[0U] = 1U;
        __Vtemp3184[1U] = 0U;
        __Vtemp3184[2U] = 0U;
        __Vtemp3184[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3185, __Vtemp3184, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3185[0U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88976
done_reset        
    ) {
        __Vtemp3186[0U] = 1U;
        __Vtemp3186[1U] = 0U;
        __Vtemp3186[2U] = 0U;
        __Vtemp3186[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3187, __Vtemp3186, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3187[0U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:88979: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 88979, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88987
verbose&&done_reset        
    ) {
        __Vtemp3188[0U] = 1U;
        __Vtemp3188[1U] = 0U;
        __Vtemp3188[2U] = 0U;
        __Vtemp3188[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3189, __Vtemp3188, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3189[0U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:88999
done_reset        
    ) {
        __Vtemp3190[0U] = 1U;
        __Vtemp3190[1U] = 0U;
        __Vtemp3190[2U] = 0U;
        __Vtemp3190[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3191, __Vtemp3190, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3191[0U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89002: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89002, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89010
verbose&&done_reset        
    ) {
        __Vtemp3192[0U] = 1U;
        __Vtemp3192[1U] = 0U;
        __Vtemp3192[2U] = 0U;
        __Vtemp3192[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3193, __Vtemp3192, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3193[0U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89022
done_reset        
    ) {
        __Vtemp3194[0U] = 1U;
        __Vtemp3194[1U] = 0U;
        __Vtemp3194[2U] = 0U;
        __Vtemp3194[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3195, __Vtemp3194, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3195[0U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89025: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89025, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89033
verbose&&done_reset        
    ) {
        __Vtemp3196[0U] = 1U;
        __Vtemp3196[1U] = 0U;
        __Vtemp3196[2U] = 0U;
        __Vtemp3196[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3197, __Vtemp3196, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3197[0U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89045
done_reset        
    ) {
        __Vtemp3198[0U] = 1U;
        __Vtemp3198[1U] = 0U;
        __Vtemp3198[2U] = 0U;
        __Vtemp3198[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3199, __Vtemp3198, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3199[0U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89048: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89048, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89056
verbose&&done_reset        
    ) {
        __Vtemp3200[0U] = 1U;
        __Vtemp3200[1U] = 0U;
        __Vtemp3200[2U] = 0U;
        __Vtemp3200[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3201, __Vtemp3200, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3201[0U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89068
done_reset        
    ) {
        __Vtemp3202[0U] = 1U;
        __Vtemp3202[1U] = 0U;
        __Vtemp3202[2U] = 0U;
        __Vtemp3202[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3203, __Vtemp3202, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3203[0U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89071: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89071, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89079
verbose&&done_reset        
    ) {
        __Vtemp3204[0U] = 1U;
        __Vtemp3204[1U] = 0U;
        __Vtemp3204[2U] = 0U;
        __Vtemp3204[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3205, __Vtemp3204, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3205[0U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89091
done_reset        
    ) {
        __Vtemp3206[0U] = 1U;
        __Vtemp3206[1U] = 0U;
        __Vtemp3206[2U] = 0U;
        __Vtemp3206[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3207, __Vtemp3206, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3207[0U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89094: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89094, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89102
verbose&&done_reset        
    ) {
        __Vtemp3208[0U] = 1U;
        __Vtemp3208[1U] = 0U;
        __Vtemp3208[2U] = 0U;
        __Vtemp3208[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3209, __Vtemp3208, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3209[0U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89114
done_reset        
    ) {
        __Vtemp3210[0U] = 1U;
        __Vtemp3210[1U] = 0U;
        __Vtemp3210[2U] = 0U;
        __Vtemp3210[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3211, __Vtemp3210, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3211[0U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89117: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89117, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89125
verbose&&done_reset        
    ) {
        __Vtemp3212[0U] = 1U;
        __Vtemp3212[1U] = 0U;
        __Vtemp3212[2U] = 0U;
        __Vtemp3212[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3213, __Vtemp3212, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3213[0U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89137
done_reset        
    ) {
        __Vtemp3214[0U] = 1U;
        __Vtemp3214[1U] = 0U;
        __Vtemp3214[2U] = 0U;
        __Vtemp3214[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3215, __Vtemp3214, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3215[0U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89140: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89140, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89148
verbose&&done_reset        
    ) {
        __Vtemp3216[0U] = 1U;
        __Vtemp3216[1U] = 0U;
        __Vtemp3216[2U] = 0U;
        __Vtemp3216[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3217, __Vtemp3216, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3217[0U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89160
done_reset        
    ) {
        __Vtemp3218[0U] = 1U;
        __Vtemp3218[1U] = 0U;
        __Vtemp3218[2U] = 0U;
        __Vtemp3218[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3219, __Vtemp3218, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3219[0U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89163: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89163, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89171
verbose&&done_reset        
    ) {
        __Vtemp3220[0U] = 1U;
        __Vtemp3220[1U] = 0U;
        __Vtemp3220[2U] = 0U;
        __Vtemp3220[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3221, __Vtemp3220, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3221[0U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89183
done_reset        
    ) {
        __Vtemp3222[0U] = 1U;
        __Vtemp3222[1U] = 0U;
        __Vtemp3222[2U] = 0U;
        __Vtemp3222[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3223, __Vtemp3222, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3223[0U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89186: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89186, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89194
verbose&&done_reset        
    ) {
        __Vtemp3224[0U] = 1U;
        __Vtemp3224[1U] = 0U;
        __Vtemp3224[2U] = 0U;
        __Vtemp3224[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3225, __Vtemp3224, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3225[0U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89206
done_reset        
    ) {
        __Vtemp3226[0U] = 1U;
        __Vtemp3226[1U] = 0U;
        __Vtemp3226[2U] = 0U;
        __Vtemp3226[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3227, __Vtemp3226, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3227[0U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89209: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89209, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89217
verbose&&done_reset        
    ) {
        __Vtemp3228[0U] = 1U;
        __Vtemp3228[1U] = 0U;
        __Vtemp3228[2U] = 0U;
        __Vtemp3228[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3229, __Vtemp3228, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3229[0U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89229
done_reset        
    ) {
        __Vtemp3230[0U] = 1U;
        __Vtemp3230[1U] = 0U;
        __Vtemp3230[2U] = 0U;
        __Vtemp3230[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3231, __Vtemp3230, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3231[0U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89232: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89232, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89240
verbose&&done_reset        
    ) {
        __Vtemp3232[0U] = 1U;
        __Vtemp3232[1U] = 0U;
        __Vtemp3232[2U] = 0U;
        __Vtemp3232[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3233, __Vtemp3232, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3233[0U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89252
done_reset        
    ) {
        __Vtemp3234[0U] = 1U;
        __Vtemp3234[1U] = 0U;
        __Vtemp3234[2U] = 0U;
        __Vtemp3234[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3235, __Vtemp3234, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3235[0U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89255: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89255, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89263
verbose&&done_reset        
    ) {
        __Vtemp3236[0U] = 1U;
        __Vtemp3236[1U] = 0U;
        __Vtemp3236[2U] = 0U;
        __Vtemp3236[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3237, __Vtemp3236, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3237[0U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89275
done_reset        
    ) {
        __Vtemp3238[0U] = 1U;
        __Vtemp3238[1U] = 0U;
        __Vtemp3238[2U] = 0U;
        __Vtemp3238[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3239, __Vtemp3238, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3239[0U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89278: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89278, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89286
verbose&&done_reset        
    ) {
        __Vtemp3240[0U] = 1U;
        __Vtemp3240[1U] = 0U;
        __Vtemp3240[2U] = 0U;
        __Vtemp3240[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3241, __Vtemp3240, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3241[0U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89298
done_reset        
    ) {
        __Vtemp3242[0U] = 1U;
        __Vtemp3242[1U] = 0U;
        __Vtemp3242[2U] = 0U;
        __Vtemp3242[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3243, __Vtemp3242, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3243[0U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89301: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89301, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89309
verbose&&done_reset        
    ) {
        __Vtemp3244[0U] = 1U;
        __Vtemp3244[1U] = 0U;
        __Vtemp3244[2U] = 0U;
        __Vtemp3244[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3245, __Vtemp3244, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3245[0U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89321
done_reset        
    ) {
        __Vtemp3246[0U] = 1U;
        __Vtemp3246[1U] = 0U;
        __Vtemp3246[2U] = 0U;
        __Vtemp3246[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3247, __Vtemp3246, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3247[0U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89324: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89324, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89332
verbose&&done_reset        
    ) {
        __Vtemp3248[0U] = 1U;
        __Vtemp3248[1U] = 0U;
        __Vtemp3248[2U] = 0U;
        __Vtemp3248[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3249, __Vtemp3248, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3249[0U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89344
done_reset        
    ) {
        __Vtemp3250[0U] = 1U;
        __Vtemp3250[1U] = 0U;
        __Vtemp3250[2U] = 0U;
        __Vtemp3250[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3251, __Vtemp3250, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3251[0U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89347: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89347, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89355
verbose&&done_reset        
    ) {
        __Vtemp3252[0U] = 1U;
        __Vtemp3252[1U] = 0U;
        __Vtemp3252[2U] = 0U;
        __Vtemp3252[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3253, __Vtemp3252, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3253[0U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89367
done_reset        
    ) {
        __Vtemp3254[0U] = 1U;
        __Vtemp3254[1U] = 0U;
        __Vtemp3254[2U] = 0U;
        __Vtemp3254[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3255, __Vtemp3254, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3255[0U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89370: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89370, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89378
verbose&&done_reset        
    ) {
        __Vtemp3256[0U] = 1U;
        __Vtemp3256[1U] = 0U;
        __Vtemp3256[2U] = 0U;
        __Vtemp3256[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3257, __Vtemp3256, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3257[0U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89390
done_reset        
    ) {
        __Vtemp3258[0U] = 1U;
        __Vtemp3258[1U] = 0U;
        __Vtemp3258[2U] = 0U;
        __Vtemp3258[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3259, __Vtemp3258, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3259[0U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89393: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89393, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89401
verbose&&done_reset        
    ) {
        __Vtemp3260[0U] = 1U;
        __Vtemp3260[1U] = 0U;
        __Vtemp3260[2U] = 0U;
        __Vtemp3260[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3261, __Vtemp3260, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3261[0U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89413
done_reset        
    ) {
        __Vtemp3262[0U] = 1U;
        __Vtemp3262[1U] = 0U;
        __Vtemp3262[2U] = 0U;
        __Vtemp3262[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3263, __Vtemp3262, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3263[0U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89416: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89416, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89424
verbose&&done_reset        
    ) {
        __Vtemp3264[0U] = 1U;
        __Vtemp3264[1U] = 0U;
        __Vtemp3264[2U] = 0U;
        __Vtemp3264[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3265, __Vtemp3264, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3265[0U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89436
done_reset        
    ) {
        __Vtemp3266[0U] = 1U;
        __Vtemp3266[1U] = 0U;
        __Vtemp3266[2U] = 0U;
        __Vtemp3266[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3267, __Vtemp3266, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3267[0U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89439: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89439, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89447
verbose&&done_reset        
    ) {
        __Vtemp3268[0U] = 1U;
        __Vtemp3268[1U] = 0U;
        __Vtemp3268[2U] = 0U;
        __Vtemp3268[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3269, __Vtemp3268, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3269[0U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89459
done_reset        
    ) {
        __Vtemp3270[0U] = 1U;
        __Vtemp3270[1U] = 0U;
        __Vtemp3270[2U] = 0U;
        __Vtemp3270[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3271, __Vtemp3270, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3271[0U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89462: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89462, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89470
verbose&&done_reset        
    ) {
        __Vtemp3272[0U] = 1U;
        __Vtemp3272[1U] = 0U;
        __Vtemp3272[2U] = 0U;
        __Vtemp3272[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3273, __Vtemp3272, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3273[0U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89482
done_reset        
    ) {
        __Vtemp3274[0U] = 1U;
        __Vtemp3274[1U] = 0U;
        __Vtemp3274[2U] = 0U;
        __Vtemp3274[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3275, __Vtemp3274, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3275[0U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89485: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89485, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89493
verbose&&done_reset        
    ) {
        __Vtemp3276[0U] = 1U;
        __Vtemp3276[1U] = 0U;
        __Vtemp3276[2U] = 0U;
        __Vtemp3276[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3277, __Vtemp3276, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3277[0U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89505
done_reset        
    ) {
        __Vtemp3278[0U] = 1U;
        __Vtemp3278[1U] = 0U;
        __Vtemp3278[2U] = 0U;
        __Vtemp3278[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3279, __Vtemp3278, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3279[0U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89508: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89508, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89516
verbose&&done_reset        
    ) {
        __Vtemp3280[0U] = 1U;
        __Vtemp3280[1U] = 0U;
        __Vtemp3280[2U] = 0U;
        __Vtemp3280[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3281, __Vtemp3280, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3281[0U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89528
done_reset        
    ) {
        __Vtemp3282[0U] = 1U;
        __Vtemp3282[1U] = 0U;
        __Vtemp3282[2U] = 0U;
        __Vtemp3282[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3283, __Vtemp3282, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3283[0U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89531: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89531, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89539
verbose&&done_reset        
    ) {
        __Vtemp3284[0U] = 1U;
        __Vtemp3284[1U] = 0U;
        __Vtemp3284[2U] = 0U;
        __Vtemp3284[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3285, __Vtemp3284, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3285[0U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89551
done_reset        
    ) {
        __Vtemp3286[0U] = 1U;
        __Vtemp3286[1U] = 0U;
        __Vtemp3286[2U] = 0U;
        __Vtemp3286[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3287, __Vtemp3286, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3287[0U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89554: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89554, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89562
verbose&&done_reset        
    ) {
        __Vtemp3288[0U] = 1U;
        __Vtemp3288[1U] = 0U;
        __Vtemp3288[2U] = 0U;
        __Vtemp3288[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3289, __Vtemp3288, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3289[0U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89574
done_reset        
    ) {
        __Vtemp3290[0U] = 1U;
        __Vtemp3290[1U] = 0U;
        __Vtemp3290[2U] = 0U;
        __Vtemp3290[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3291, __Vtemp3290, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3291[0U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89577: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89577, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89585
verbose&&done_reset        
    ) {
        __Vtemp3292[0U] = 1U;
        __Vtemp3292[1U] = 0U;
        __Vtemp3292[2U] = 0U;
        __Vtemp3292[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3293, __Vtemp3292, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3293[0U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89597
done_reset        
    ) {
        __Vtemp3294[0U] = 1U;
        __Vtemp3294[1U] = 0U;
        __Vtemp3294[2U] = 0U;
        __Vtemp3294[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3295, __Vtemp3294, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3295[0U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89600: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89600, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89608
verbose&&done_reset        
    ) {
        __Vtemp3296[0U] = 1U;
        __Vtemp3296[1U] = 0U;
        __Vtemp3296[2U] = 0U;
        __Vtemp3296[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3297, __Vtemp3296, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3297[0U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89620
done_reset        
    ) {
        __Vtemp3298[0U] = 1U;
        __Vtemp3298[1U] = 0U;
        __Vtemp3298[2U] = 0U;
        __Vtemp3298[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3299, __Vtemp3298, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3299[0U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89623: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89623, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89631
verbose&&done_reset        
    ) {
        __Vtemp3300[0U] = 1U;
        __Vtemp3300[1U] = 0U;
        __Vtemp3300[2U] = 0U;
        __Vtemp3300[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3301, __Vtemp3300, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3301[0U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89643
done_reset        
    ) {
        __Vtemp3302[0U] = 1U;
        __Vtemp3302[1U] = 0U;
        __Vtemp3302[2U] = 0U;
        __Vtemp3302[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3303, __Vtemp3302, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3303[0U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89646: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89646, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89654
verbose&&done_reset        
    ) {
        __Vtemp3304[0U] = 1U;
        __Vtemp3304[1U] = 0U;
        __Vtemp3304[2U] = 0U;
        __Vtemp3304[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3305, __Vtemp3304, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3305[0U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89666
done_reset        
    ) {
        __Vtemp3306[0U] = 1U;
        __Vtemp3306[1U] = 0U;
        __Vtemp3306[2U] = 0U;
        __Vtemp3306[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3307, __Vtemp3306, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3307[0U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89669: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89669, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89677
verbose&&done_reset        
    ) {
        __Vtemp3308[0U] = 1U;
        __Vtemp3308[1U] = 0U;
        __Vtemp3308[2U] = 0U;
        __Vtemp3308[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3309, __Vtemp3308, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3309[0U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89689
done_reset        
    ) {
        __Vtemp3310[0U] = 1U;
        __Vtemp3310[1U] = 0U;
        __Vtemp3310[2U] = 0U;
        __Vtemp3310[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3311, __Vtemp3310, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3311[0U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89692: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89692, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89700
verbose&&done_reset        
    ) {
        __Vtemp3312[0U] = 1U;
        __Vtemp3312[1U] = 0U;
        __Vtemp3312[2U] = 0U;
        __Vtemp3312[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3313, __Vtemp3312, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3313[0U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89712
done_reset        
    ) {
        __Vtemp3314[0U] = 1U;
        __Vtemp3314[1U] = 0U;
        __Vtemp3314[2U] = 0U;
        __Vtemp3314[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3315, __Vtemp3314, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3315[0U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89715: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89715, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89723
verbose&&done_reset        
    ) {
        __Vtemp3316[0U] = 1U;
        __Vtemp3316[1U] = 0U;
        __Vtemp3316[2U] = 0U;
        __Vtemp3316[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3317, __Vtemp3316, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3317[0U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89735
done_reset        
    ) {
        __Vtemp3318[0U] = 1U;
        __Vtemp3318[1U] = 0U;
        __Vtemp3318[2U] = 0U;
        __Vtemp3318[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3319, __Vtemp3318, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3319[0U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89738: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89738, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89746
verbose&&done_reset        
    ) {
        __Vtemp3320[0U] = 1U;
        __Vtemp3320[1U] = 0U;
        __Vtemp3320[2U] = 0U;
        __Vtemp3320[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3321, __Vtemp3320, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3321[0U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89758
done_reset        
    ) {
        __Vtemp3322[0U] = 1U;
        __Vtemp3322[1U] = 0U;
        __Vtemp3322[2U] = 0U;
        __Vtemp3322[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3323, __Vtemp3322, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3323[0U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89761: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89761, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89769
verbose&&done_reset        
    ) {
        __Vtemp3324[0U] = 1U;
        __Vtemp3324[1U] = 0U;
        __Vtemp3324[2U] = 0U;
        __Vtemp3324[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3325, __Vtemp3324, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3325[0U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89781
done_reset        
    ) {
        __Vtemp3326[0U] = 1U;
        __Vtemp3326[1U] = 0U;
        __Vtemp3326[2U] = 0U;
        __Vtemp3326[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3327, __Vtemp3326, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3327[0U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89784: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89784, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89792
verbose&&done_reset        
    ) {
        __Vtemp3328[0U] = 1U;
        __Vtemp3328[1U] = 0U;
        __Vtemp3328[2U] = 0U;
        __Vtemp3328[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3329, __Vtemp3328, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3329[0U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89804
done_reset        
    ) {
        __Vtemp3330[0U] = 1U;
        __Vtemp3330[1U] = 0U;
        __Vtemp3330[2U] = 0U;
        __Vtemp3330[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3331, __Vtemp3330, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3331[0U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89807: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89807, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89815
verbose&&done_reset        
    ) {
        __Vtemp3332[0U] = 1U;
        __Vtemp3332[1U] = 0U;
        __Vtemp3332[2U] = 0U;
        __Vtemp3332[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3333, __Vtemp3332, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3333[0U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89827
done_reset        
    ) {
        __Vtemp3334[0U] = 1U;
        __Vtemp3334[1U] = 0U;
        __Vtemp3334[2U] = 0U;
        __Vtemp3334[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3335, __Vtemp3334, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3335[0U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89830: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89830, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89838
verbose&&done_reset        
    ) {
        __Vtemp3336[0U] = 1U;
        __Vtemp3336[1U] = 0U;
        __Vtemp3336[2U] = 0U;
        __Vtemp3336[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3337, __Vtemp3336, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3337[0U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89850
done_reset        
    ) {
        __Vtemp3338[0U] = 1U;
        __Vtemp3338[1U] = 0U;
        __Vtemp3338[2U] = 0U;
        __Vtemp3338[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3339, __Vtemp3338, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3339[0U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89853: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89853, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89861
verbose&&done_reset        
    ) {
        __Vtemp3340[0U] = 1U;
        __Vtemp3340[1U] = 0U;
        __Vtemp3340[2U] = 0U;
        __Vtemp3340[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3341, __Vtemp3340, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3341[0U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89873
done_reset        
    ) {
        __Vtemp3342[0U] = 1U;
        __Vtemp3342[1U] = 0U;
        __Vtemp3342[2U] = 0U;
        __Vtemp3342[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3343, __Vtemp3342, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3343[0U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89876: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89876, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89884
verbose&&done_reset        
    ) {
        __Vtemp3344[0U] = 1U;
        __Vtemp3344[1U] = 0U;
        __Vtemp3344[2U] = 0U;
        __Vtemp3344[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3345, __Vtemp3344, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3345[0U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89896
done_reset        
    ) {
        __Vtemp3346[0U] = 1U;
        __Vtemp3346[1U] = 0U;
        __Vtemp3346[2U] = 0U;
        __Vtemp3346[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3347, __Vtemp3346, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3347[0U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89899: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89899, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89907
verbose&&done_reset        
    ) {
        __Vtemp3348[0U] = 1U;
        __Vtemp3348[1U] = 0U;
        __Vtemp3348[2U] = 0U;
        __Vtemp3348[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3349, __Vtemp3348, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3349[0U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89919
done_reset        
    ) {
        __Vtemp3350[0U] = 1U;
        __Vtemp3350[1U] = 0U;
        __Vtemp3350[2U] = 0U;
        __Vtemp3350[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3351, __Vtemp3350, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3351[0U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89922: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89922, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89930
verbose&&done_reset        
    ) {
        __Vtemp3352[0U] = 1U;
        __Vtemp3352[1U] = 0U;
        __Vtemp3352[2U] = 0U;
        __Vtemp3352[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3353, __Vtemp3352, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3353[0U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89942
done_reset        
    ) {
        __Vtemp3354[0U] = 1U;
        __Vtemp3354[1U] = 0U;
        __Vtemp3354[2U] = 0U;
        __Vtemp3354[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3355, __Vtemp3354, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3355[0U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89945: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89945, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89953
verbose&&done_reset        
    ) {
        __Vtemp3356[0U] = 1U;
        __Vtemp3356[1U] = 0U;
        __Vtemp3356[2U] = 0U;
        __Vtemp3356[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3357, __Vtemp3356, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3357[0U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89965
done_reset        
    ) {
        __Vtemp3358[0U] = 1U;
        __Vtemp3358[1U] = 0U;
        __Vtemp3358[2U] = 0U;
        __Vtemp3358[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3359, __Vtemp3358, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3359[0U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89968: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89968, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89976
verbose&&done_reset        
    ) {
        __Vtemp3360[0U] = 1U;
        __Vtemp3360[1U] = 0U;
        __Vtemp3360[2U] = 0U;
        __Vtemp3360[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3361, __Vtemp3360, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3361[0U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89988
done_reset        
    ) {
        __Vtemp3362[0U] = 1U;
        __Vtemp3362[1U] = 0U;
        __Vtemp3362[2U] = 0U;
        __Vtemp3362[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3363, __Vtemp3362, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3363[0U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:89991: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 89991, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:89999
verbose&&done_reset        
    ) {
        __Vtemp3364[0U] = 1U;
        __Vtemp3364[1U] = 0U;
        __Vtemp3364[2U] = 0U;
        __Vtemp3364[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3365, __Vtemp3364, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3365[1U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90011
done_reset        
    ) {
        __Vtemp3366[0U] = 1U;
        __Vtemp3366[1U] = 0U;
        __Vtemp3366[2U] = 0U;
        __Vtemp3366[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3367, __Vtemp3366, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3367[1U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90014: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90014, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90022
verbose&&done_reset        
    ) {
        __Vtemp3368[0U] = 1U;
        __Vtemp3368[1U] = 0U;
        __Vtemp3368[2U] = 0U;
        __Vtemp3368[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3369, __Vtemp3368, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3369[1U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90034
done_reset        
    ) {
        __Vtemp3370[0U] = 1U;
        __Vtemp3370[1U] = 0U;
        __Vtemp3370[2U] = 0U;
        __Vtemp3370[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3371, __Vtemp3370, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3371[1U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90037: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90037, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90045
verbose&&done_reset        
    ) {
        __Vtemp3372[0U] = 1U;
        __Vtemp3372[1U] = 0U;
        __Vtemp3372[2U] = 0U;
        __Vtemp3372[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3373, __Vtemp3372, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3373[1U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90057
done_reset        
    ) {
        __Vtemp3374[0U] = 1U;
        __Vtemp3374[1U] = 0U;
        __Vtemp3374[2U] = 0U;
        __Vtemp3374[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3375, __Vtemp3374, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3375[1U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90060: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90060, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90068
verbose&&done_reset        
    ) {
        __Vtemp3376[0U] = 1U;
        __Vtemp3376[1U] = 0U;
        __Vtemp3376[2U] = 0U;
        __Vtemp3376[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3377, __Vtemp3376, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3377[1U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90080
done_reset        
    ) {
        __Vtemp3378[0U] = 1U;
        __Vtemp3378[1U] = 0U;
        __Vtemp3378[2U] = 0U;
        __Vtemp3378[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3379, __Vtemp3378, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3379[1U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90083: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90083, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90091
verbose&&done_reset        
    ) {
        __Vtemp3380[0U] = 1U;
        __Vtemp3380[1U] = 0U;
        __Vtemp3380[2U] = 0U;
        __Vtemp3380[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3381, __Vtemp3380, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3381[1U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90103
done_reset        
    ) {
        __Vtemp3382[0U] = 1U;
        __Vtemp3382[1U] = 0U;
        __Vtemp3382[2U] = 0U;
        __Vtemp3382[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3383, __Vtemp3382, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3383[1U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90106: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90106, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90114
verbose&&done_reset        
    ) {
        __Vtemp3384[0U] = 1U;
        __Vtemp3384[1U] = 0U;
        __Vtemp3384[2U] = 0U;
        __Vtemp3384[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3385, __Vtemp3384, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3385[1U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90126
done_reset        
    ) {
        __Vtemp3386[0U] = 1U;
        __Vtemp3386[1U] = 0U;
        __Vtemp3386[2U] = 0U;
        __Vtemp3386[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3387, __Vtemp3386, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3387[1U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90129: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90129, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90137
verbose&&done_reset        
    ) {
        __Vtemp3388[0U] = 1U;
        __Vtemp3388[1U] = 0U;
        __Vtemp3388[2U] = 0U;
        __Vtemp3388[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3389, __Vtemp3388, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3389[1U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90149
done_reset        
    ) {
        __Vtemp3390[0U] = 1U;
        __Vtemp3390[1U] = 0U;
        __Vtemp3390[2U] = 0U;
        __Vtemp3390[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3391, __Vtemp3390, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3391[1U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90152: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90152, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90160
verbose&&done_reset        
    ) {
        __Vtemp3392[0U] = 1U;
        __Vtemp3392[1U] = 0U;
        __Vtemp3392[2U] = 0U;
        __Vtemp3392[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3393, __Vtemp3392, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3393[1U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90172
done_reset        
    ) {
        __Vtemp3394[0U] = 1U;
        __Vtemp3394[1U] = 0U;
        __Vtemp3394[2U] = 0U;
        __Vtemp3394[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3395, __Vtemp3394, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3395[1U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90175: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90175, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90183
verbose&&done_reset        
    ) {
        __Vtemp3396[0U] = 1U;
        __Vtemp3396[1U] = 0U;
        __Vtemp3396[2U] = 0U;
        __Vtemp3396[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3397, __Vtemp3396, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3397[1U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90195
done_reset        
    ) {
        __Vtemp3398[0U] = 1U;
        __Vtemp3398[1U] = 0U;
        __Vtemp3398[2U] = 0U;
        __Vtemp3398[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3399, __Vtemp3398, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3399[1U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90198: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90198, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90206
verbose&&done_reset        
    ) {
        __Vtemp3400[0U] = 1U;
        __Vtemp3400[1U] = 0U;
        __Vtemp3400[2U] = 0U;
        __Vtemp3400[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3401, __Vtemp3400, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3401[1U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90218
done_reset        
    ) {
        __Vtemp3402[0U] = 1U;
        __Vtemp3402[1U] = 0U;
        __Vtemp3402[2U] = 0U;
        __Vtemp3402[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3403, __Vtemp3402, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3403[1U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90221: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90221, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90229
verbose&&done_reset        
    ) {
        __Vtemp3404[0U] = 1U;
        __Vtemp3404[1U] = 0U;
        __Vtemp3404[2U] = 0U;
        __Vtemp3404[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3405, __Vtemp3404, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3405[1U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90241
done_reset        
    ) {
        __Vtemp3406[0U] = 1U;
        __Vtemp3406[1U] = 0U;
        __Vtemp3406[2U] = 0U;
        __Vtemp3406[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3407, __Vtemp3406, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3407[1U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90244: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90244, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90252
verbose&&done_reset        
    ) {
        __Vtemp3408[0U] = 1U;
        __Vtemp3408[1U] = 0U;
        __Vtemp3408[2U] = 0U;
        __Vtemp3408[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3409, __Vtemp3408, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3409[1U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90264
done_reset        
    ) {
        __Vtemp3410[0U] = 1U;
        __Vtemp3410[1U] = 0U;
        __Vtemp3410[2U] = 0U;
        __Vtemp3410[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3411, __Vtemp3410, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3411[1U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90267: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90267, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90275
verbose&&done_reset        
    ) {
        __Vtemp3412[0U] = 1U;
        __Vtemp3412[1U] = 0U;
        __Vtemp3412[2U] = 0U;
        __Vtemp3412[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3413, __Vtemp3412, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3413[1U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90287
done_reset        
    ) {
        __Vtemp3414[0U] = 1U;
        __Vtemp3414[1U] = 0U;
        __Vtemp3414[2U] = 0U;
        __Vtemp3414[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3415, __Vtemp3414, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3415[1U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90290: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90290, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90298
verbose&&done_reset        
    ) {
        __Vtemp3416[0U] = 1U;
        __Vtemp3416[1U] = 0U;
        __Vtemp3416[2U] = 0U;
        __Vtemp3416[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3417, __Vtemp3416, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3417[1U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90310
done_reset        
    ) {
        __Vtemp3418[0U] = 1U;
        __Vtemp3418[1U] = 0U;
        __Vtemp3418[2U] = 0U;
        __Vtemp3418[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3419, __Vtemp3418, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3419[1U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90313: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90313, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90321
verbose&&done_reset        
    ) {
        __Vtemp3420[0U] = 1U;
        __Vtemp3420[1U] = 0U;
        __Vtemp3420[2U] = 0U;
        __Vtemp3420[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3421, __Vtemp3420, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3421[1U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90333
done_reset        
    ) {
        __Vtemp3422[0U] = 1U;
        __Vtemp3422[1U] = 0U;
        __Vtemp3422[2U] = 0U;
        __Vtemp3422[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3423, __Vtemp3422, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3423[1U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90336: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90336, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90344
verbose&&done_reset        
    ) {
        __Vtemp3424[0U] = 1U;
        __Vtemp3424[1U] = 0U;
        __Vtemp3424[2U] = 0U;
        __Vtemp3424[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3425, __Vtemp3424, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3425[1U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90356
done_reset        
    ) {
        __Vtemp3426[0U] = 1U;
        __Vtemp3426[1U] = 0U;
        __Vtemp3426[2U] = 0U;
        __Vtemp3426[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3427, __Vtemp3426, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3427[1U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90359: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90359, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90367
verbose&&done_reset        
    ) {
        __Vtemp3428[0U] = 1U;
        __Vtemp3428[1U] = 0U;
        __Vtemp3428[2U] = 0U;
        __Vtemp3428[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3429, __Vtemp3428, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3429[1U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90379
done_reset        
    ) {
        __Vtemp3430[0U] = 1U;
        __Vtemp3430[1U] = 0U;
        __Vtemp3430[2U] = 0U;
        __Vtemp3430[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3431, __Vtemp3430, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3431[1U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90382: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90382, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90390
verbose&&done_reset        
    ) {
        __Vtemp3432[0U] = 1U;
        __Vtemp3432[1U] = 0U;
        __Vtemp3432[2U] = 0U;
        __Vtemp3432[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3433, __Vtemp3432, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3433[1U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90402
done_reset        
    ) {
        __Vtemp3434[0U] = 1U;
        __Vtemp3434[1U] = 0U;
        __Vtemp3434[2U] = 0U;
        __Vtemp3434[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3435, __Vtemp3434, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3435[1U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90405: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90405, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90413
verbose&&done_reset        
    ) {
        __Vtemp3436[0U] = 1U;
        __Vtemp3436[1U] = 0U;
        __Vtemp3436[2U] = 0U;
        __Vtemp3436[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3437, __Vtemp3436, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3437[1U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90425
done_reset        
    ) {
        __Vtemp3438[0U] = 1U;
        __Vtemp3438[1U] = 0U;
        __Vtemp3438[2U] = 0U;
        __Vtemp3438[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3439, __Vtemp3438, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3439[1U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90428: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90428, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90436
verbose&&done_reset        
    ) {
        __Vtemp3440[0U] = 1U;
        __Vtemp3440[1U] = 0U;
        __Vtemp3440[2U] = 0U;
        __Vtemp3440[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3441, __Vtemp3440, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3441[1U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90448
done_reset        
    ) {
        __Vtemp3442[0U] = 1U;
        __Vtemp3442[1U] = 0U;
        __Vtemp3442[2U] = 0U;
        __Vtemp3442[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3443, __Vtemp3442, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3443[1U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90451: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90451, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90459
verbose&&done_reset        
    ) {
        __Vtemp3444[0U] = 1U;
        __Vtemp3444[1U] = 0U;
        __Vtemp3444[2U] = 0U;
        __Vtemp3444[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3445, __Vtemp3444, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3445[1U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90471
done_reset        
    ) {
        __Vtemp3446[0U] = 1U;
        __Vtemp3446[1U] = 0U;
        __Vtemp3446[2U] = 0U;
        __Vtemp3446[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3447, __Vtemp3446, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3447[1U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90474: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90474, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90482
verbose&&done_reset        
    ) {
        __Vtemp3448[0U] = 1U;
        __Vtemp3448[1U] = 0U;
        __Vtemp3448[2U] = 0U;
        __Vtemp3448[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3449, __Vtemp3448, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3449[1U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90494
done_reset        
    ) {
        __Vtemp3450[0U] = 1U;
        __Vtemp3450[1U] = 0U;
        __Vtemp3450[2U] = 0U;
        __Vtemp3450[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3451, __Vtemp3450, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3451[1U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90497: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90497, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90505
verbose&&done_reset        
    ) {
        __Vtemp3452[0U] = 1U;
        __Vtemp3452[1U] = 0U;
        __Vtemp3452[2U] = 0U;
        __Vtemp3452[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3453, __Vtemp3452, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3453[1U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90517
done_reset        
    ) {
        __Vtemp3454[0U] = 1U;
        __Vtemp3454[1U] = 0U;
        __Vtemp3454[2U] = 0U;
        __Vtemp3454[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3455, __Vtemp3454, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3455[1U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90520: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90520, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90528
verbose&&done_reset        
    ) {
        __Vtemp3456[0U] = 1U;
        __Vtemp3456[1U] = 0U;
        __Vtemp3456[2U] = 0U;
        __Vtemp3456[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3457, __Vtemp3456, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3457[1U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90540
done_reset        
    ) {
        __Vtemp3458[0U] = 1U;
        __Vtemp3458[1U] = 0U;
        __Vtemp3458[2U] = 0U;
        __Vtemp3458[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3459, __Vtemp3458, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3459[1U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90543: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90543, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90551
verbose&&done_reset        
    ) {
        __Vtemp3460[0U] = 1U;
        __Vtemp3460[1U] = 0U;
        __Vtemp3460[2U] = 0U;
        __Vtemp3460[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3461, __Vtemp3460, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3461[1U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90563
done_reset        
    ) {
        __Vtemp3462[0U] = 1U;
        __Vtemp3462[1U] = 0U;
        __Vtemp3462[2U] = 0U;
        __Vtemp3462[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3463, __Vtemp3462, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3463[1U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90566: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90566, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90574
verbose&&done_reset        
    ) {
        __Vtemp3464[0U] = 1U;
        __Vtemp3464[1U] = 0U;
        __Vtemp3464[2U] = 0U;
        __Vtemp3464[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3465, __Vtemp3464, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3465[1U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90586
done_reset        
    ) {
        __Vtemp3466[0U] = 1U;
        __Vtemp3466[1U] = 0U;
        __Vtemp3466[2U] = 0U;
        __Vtemp3466[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3467, __Vtemp3466, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3467[1U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90589: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90589, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90597
verbose&&done_reset        
    ) {
        __Vtemp3468[0U] = 1U;
        __Vtemp3468[1U] = 0U;
        __Vtemp3468[2U] = 0U;
        __Vtemp3468[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3469, __Vtemp3468, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3469[1U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90609
done_reset        
    ) {
        __Vtemp3470[0U] = 1U;
        __Vtemp3470[1U] = 0U;
        __Vtemp3470[2U] = 0U;
        __Vtemp3470[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3471, __Vtemp3470, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3471[1U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90612: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90612, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90620
verbose&&done_reset        
    ) {
        __Vtemp3472[0U] = 1U;
        __Vtemp3472[1U] = 0U;
        __Vtemp3472[2U] = 0U;
        __Vtemp3472[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3473, __Vtemp3472, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3473[1U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90632
done_reset        
    ) {
        __Vtemp3474[0U] = 1U;
        __Vtemp3474[1U] = 0U;
        __Vtemp3474[2U] = 0U;
        __Vtemp3474[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3475, __Vtemp3474, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3475[1U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90635: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90635, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90643
verbose&&done_reset        
    ) {
        __Vtemp3476[0U] = 1U;
        __Vtemp3476[1U] = 0U;
        __Vtemp3476[2U] = 0U;
        __Vtemp3476[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3477, __Vtemp3476, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3477[1U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90655
done_reset        
    ) {
        __Vtemp3478[0U] = 1U;
        __Vtemp3478[1U] = 0U;
        __Vtemp3478[2U] = 0U;
        __Vtemp3478[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3479, __Vtemp3478, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3479[1U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90658: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90658, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90666
verbose&&done_reset        
    ) {
        __Vtemp3480[0U] = 1U;
        __Vtemp3480[1U] = 0U;
        __Vtemp3480[2U] = 0U;
        __Vtemp3480[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3481, __Vtemp3480, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3481[1U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90678
done_reset        
    ) {
        __Vtemp3482[0U] = 1U;
        __Vtemp3482[1U] = 0U;
        __Vtemp3482[2U] = 0U;
        __Vtemp3482[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3483, __Vtemp3482, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3483[1U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90681: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90681, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90689
verbose&&done_reset        
    ) {
        __Vtemp3484[0U] = 1U;
        __Vtemp3484[1U] = 0U;
        __Vtemp3484[2U] = 0U;
        __Vtemp3484[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3485, __Vtemp3484, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3485[1U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90701
done_reset        
    ) {
        __Vtemp3486[0U] = 1U;
        __Vtemp3486[1U] = 0U;
        __Vtemp3486[2U] = 0U;
        __Vtemp3486[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3487, __Vtemp3486, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3487[1U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90704: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90704, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90712
verbose&&done_reset        
    ) {
        __Vtemp3488[0U] = 1U;
        __Vtemp3488[1U] = 0U;
        __Vtemp3488[2U] = 0U;
        __Vtemp3488[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3489, __Vtemp3488, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3489[1U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90724
done_reset        
    ) {
        __Vtemp3490[0U] = 1U;
        __Vtemp3490[1U] = 0U;
        __Vtemp3490[2U] = 0U;
        __Vtemp3490[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3491, __Vtemp3490, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3491[1U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90727: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90727, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90735
verbose&&done_reset        
    ) {
        __Vtemp3492[0U] = 1U;
        __Vtemp3492[1U] = 0U;
        __Vtemp3492[2U] = 0U;
        __Vtemp3492[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3493, __Vtemp3492, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3493[1U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90747
done_reset        
    ) {
        __Vtemp3494[0U] = 1U;
        __Vtemp3494[1U] = 0U;
        __Vtemp3494[2U] = 0U;
        __Vtemp3494[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3495, __Vtemp3494, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3495[1U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90750: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90750, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90758
verbose&&done_reset        
    ) {
        __Vtemp3496[0U] = 1U;
        __Vtemp3496[1U] = 0U;
        __Vtemp3496[2U] = 0U;
        __Vtemp3496[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3497, __Vtemp3496, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3497[1U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90770
done_reset        
    ) {
        __Vtemp3498[0U] = 1U;
        __Vtemp3498[1U] = 0U;
        __Vtemp3498[2U] = 0U;
        __Vtemp3498[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3499, __Vtemp3498, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3499[1U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90773: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90773, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90781
verbose&&done_reset        
    ) {
        __Vtemp3500[0U] = 1U;
        __Vtemp3500[1U] = 0U;
        __Vtemp3500[2U] = 0U;
        __Vtemp3500[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3501, __Vtemp3500, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3501[1U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90793
done_reset        
    ) {
        __Vtemp3502[0U] = 1U;
        __Vtemp3502[1U] = 0U;
        __Vtemp3502[2U] = 0U;
        __Vtemp3502[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3503, __Vtemp3502, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3503[1U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90796: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90796, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90804
verbose&&done_reset        
    ) {
        __Vtemp3504[0U] = 1U;
        __Vtemp3504[1U] = 0U;
        __Vtemp3504[2U] = 0U;
        __Vtemp3504[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3505, __Vtemp3504, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3505[1U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90816
done_reset        
    ) {
        __Vtemp3506[0U] = 1U;
        __Vtemp3506[1U] = 0U;
        __Vtemp3506[2U] = 0U;
        __Vtemp3506[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3507, __Vtemp3506, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3507[1U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90819: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90819, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90827
verbose&&done_reset        
    ) {
        __Vtemp3508[0U] = 1U;
        __Vtemp3508[1U] = 0U;
        __Vtemp3508[2U] = 0U;
        __Vtemp3508[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3509, __Vtemp3508, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3509[1U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90839
done_reset        
    ) {
        __Vtemp3510[0U] = 1U;
        __Vtemp3510[1U] = 0U;
        __Vtemp3510[2U] = 0U;
        __Vtemp3510[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3511, __Vtemp3510, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3511[1U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90842: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90842, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90850
verbose&&done_reset        
    ) {
        __Vtemp3512[0U] = 1U;
        __Vtemp3512[1U] = 0U;
        __Vtemp3512[2U] = 0U;
        __Vtemp3512[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3513, __Vtemp3512, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3513[1U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90862
done_reset        
    ) {
        __Vtemp3514[0U] = 1U;
        __Vtemp3514[1U] = 0U;
        __Vtemp3514[2U] = 0U;
        __Vtemp3514[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3515, __Vtemp3514, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3515[1U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90865: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90865, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90873
verbose&&done_reset        
    ) {
        __Vtemp3516[0U] = 1U;
        __Vtemp3516[1U] = 0U;
        __Vtemp3516[2U] = 0U;
        __Vtemp3516[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3517, __Vtemp3516, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3517[1U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90885
done_reset        
    ) {
        __Vtemp3518[0U] = 1U;
        __Vtemp3518[1U] = 0U;
        __Vtemp3518[2U] = 0U;
        __Vtemp3518[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3519, __Vtemp3518, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3519[1U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90888: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90888, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90896
verbose&&done_reset        
    ) {
        __Vtemp3520[0U] = 1U;
        __Vtemp3520[1U] = 0U;
        __Vtemp3520[2U] = 0U;
        __Vtemp3520[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3521, __Vtemp3520, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3521[1U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90908
done_reset        
    ) {
        __Vtemp3522[0U] = 1U;
        __Vtemp3522[1U] = 0U;
        __Vtemp3522[2U] = 0U;
        __Vtemp3522[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3523, __Vtemp3522, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3523[1U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90911: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90911, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90919
verbose&&done_reset        
    ) {
        __Vtemp3524[0U] = 1U;
        __Vtemp3524[1U] = 0U;
        __Vtemp3524[2U] = 0U;
        __Vtemp3524[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3525, __Vtemp3524, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3525[1U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90931
done_reset        
    ) {
        __Vtemp3526[0U] = 1U;
        __Vtemp3526[1U] = 0U;
        __Vtemp3526[2U] = 0U;
        __Vtemp3526[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3527, __Vtemp3526, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3527[1U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90934: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90934, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90942
verbose&&done_reset        
    ) {
        __Vtemp3528[0U] = 1U;
        __Vtemp3528[1U] = 0U;
        __Vtemp3528[2U] = 0U;
        __Vtemp3528[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3529, __Vtemp3528, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3529[1U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90954
done_reset        
    ) {
        __Vtemp3530[0U] = 1U;
        __Vtemp3530[1U] = 0U;
        __Vtemp3530[2U] = 0U;
        __Vtemp3530[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3531, __Vtemp3530, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3531[1U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90957: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90957, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90965
verbose&&done_reset        
    ) {
        __Vtemp3532[0U] = 1U;
        __Vtemp3532[1U] = 0U;
        __Vtemp3532[2U] = 0U;
        __Vtemp3532[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3533, __Vtemp3532, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3533[1U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90977
done_reset        
    ) {
        __Vtemp3534[0U] = 1U;
        __Vtemp3534[1U] = 0U;
        __Vtemp3534[2U] = 0U;
        __Vtemp3534[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3535, __Vtemp3534, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3535[1U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:90980: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 90980, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:90988
verbose&&done_reset        
    ) {
        __Vtemp3536[0U] = 1U;
        __Vtemp3536[1U] = 0U;
        __Vtemp3536[2U] = 0U;
        __Vtemp3536[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3537, __Vtemp3536, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3537[1U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91000
done_reset        
    ) {
        __Vtemp3538[0U] = 1U;
        __Vtemp3538[1U] = 0U;
        __Vtemp3538[2U] = 0U;
        __Vtemp3538[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3539, __Vtemp3538, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3539[1U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91003: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91003, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91011
verbose&&done_reset        
    ) {
        __Vtemp3540[0U] = 1U;
        __Vtemp3540[1U] = 0U;
        __Vtemp3540[2U] = 0U;
        __Vtemp3540[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3541, __Vtemp3540, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3541[1U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91023
done_reset        
    ) {
        __Vtemp3542[0U] = 1U;
        __Vtemp3542[1U] = 0U;
        __Vtemp3542[2U] = 0U;
        __Vtemp3542[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3543, __Vtemp3542, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3543[1U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91026: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91026, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91034
verbose&&done_reset        
    ) {
        __Vtemp3544[0U] = 1U;
        __Vtemp3544[1U] = 0U;
        __Vtemp3544[2U] = 0U;
        __Vtemp3544[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3545, __Vtemp3544, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3545[1U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91046
done_reset        
    ) {
        __Vtemp3546[0U] = 1U;
        __Vtemp3546[1U] = 0U;
        __Vtemp3546[2U] = 0U;
        __Vtemp3546[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3547, __Vtemp3546, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3547[1U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91049: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91049, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91057
verbose&&done_reset        
    ) {
        __Vtemp3548[0U] = 1U;
        __Vtemp3548[1U] = 0U;
        __Vtemp3548[2U] = 0U;
        __Vtemp3548[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3549, __Vtemp3548, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3549[1U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91069
done_reset        
    ) {
        __Vtemp3550[0U] = 1U;
        __Vtemp3550[1U] = 0U;
        __Vtemp3550[2U] = 0U;
        __Vtemp3550[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3551, __Vtemp3550, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3551[1U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91072: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91072, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91080
verbose&&done_reset        
    ) {
        __Vtemp3552[0U] = 1U;
        __Vtemp3552[1U] = 0U;
        __Vtemp3552[2U] = 0U;
        __Vtemp3552[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3553, __Vtemp3552, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3553[1U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91092
done_reset        
    ) {
        __Vtemp3554[0U] = 1U;
        __Vtemp3554[1U] = 0U;
        __Vtemp3554[2U] = 0U;
        __Vtemp3554[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3555, __Vtemp3554, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3555[1U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91095: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91095, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91103
verbose&&done_reset        
    ) {
        __Vtemp3556[0U] = 1U;
        __Vtemp3556[1U] = 0U;
        __Vtemp3556[2U] = 0U;
        __Vtemp3556[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3557, __Vtemp3556, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3557[1U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91115
done_reset        
    ) {
        __Vtemp3558[0U] = 1U;
        __Vtemp3558[1U] = 0U;
        __Vtemp3558[2U] = 0U;
        __Vtemp3558[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3559, __Vtemp3558, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3559[1U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91118: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91118, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91126
verbose&&done_reset        
    ) {
        __Vtemp3560[0U] = 1U;
        __Vtemp3560[1U] = 0U;
        __Vtemp3560[2U] = 0U;
        __Vtemp3560[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3561, __Vtemp3560, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3561[1U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91138
done_reset        
    ) {
        __Vtemp3562[0U] = 1U;
        __Vtemp3562[1U] = 0U;
        __Vtemp3562[2U] = 0U;
        __Vtemp3562[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3563, __Vtemp3562, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3563[1U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91141: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91141, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91149
verbose&&done_reset        
    ) {
        __Vtemp3564[0U] = 1U;
        __Vtemp3564[1U] = 0U;
        __Vtemp3564[2U] = 0U;
        __Vtemp3564[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3565, __Vtemp3564, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3565[1U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91161
done_reset        
    ) {
        __Vtemp3566[0U] = 1U;
        __Vtemp3566[1U] = 0U;
        __Vtemp3566[2U] = 0U;
        __Vtemp3566[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3567, __Vtemp3566, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3567[1U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91164: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91164, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91172
verbose&&done_reset        
    ) {
        __Vtemp3568[0U] = 1U;
        __Vtemp3568[1U] = 0U;
        __Vtemp3568[2U] = 0U;
        __Vtemp3568[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3569, __Vtemp3568, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3569[1U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91184
done_reset        
    ) {
        __Vtemp3570[0U] = 1U;
        __Vtemp3570[1U] = 0U;
        __Vtemp3570[2U] = 0U;
        __Vtemp3570[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3571, __Vtemp3570, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3571[1U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91187: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91187, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91195
verbose&&done_reset        
    ) {
        __Vtemp3572[0U] = 1U;
        __Vtemp3572[1U] = 0U;
        __Vtemp3572[2U] = 0U;
        __Vtemp3572[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3573, __Vtemp3572, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3573[1U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91207
done_reset        
    ) {
        __Vtemp3574[0U] = 1U;
        __Vtemp3574[1U] = 0U;
        __Vtemp3574[2U] = 0U;
        __Vtemp3574[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3575, __Vtemp3574, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3575[1U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91210: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91210, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91218
verbose&&done_reset        
    ) {
        __Vtemp3576[0U] = 1U;
        __Vtemp3576[1U] = 0U;
        __Vtemp3576[2U] = 0U;
        __Vtemp3576[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3577, __Vtemp3576, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3577[1U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91230
done_reset        
    ) {
        __Vtemp3578[0U] = 1U;
        __Vtemp3578[1U] = 0U;
        __Vtemp3578[2U] = 0U;
        __Vtemp3578[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3579, __Vtemp3578, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3579[1U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91233: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91233, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91241
verbose&&done_reset        
    ) {
        __Vtemp3580[0U] = 1U;
        __Vtemp3580[1U] = 0U;
        __Vtemp3580[2U] = 0U;
        __Vtemp3580[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3581, __Vtemp3580, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3581[1U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91253
done_reset        
    ) {
        __Vtemp3582[0U] = 1U;
        __Vtemp3582[1U] = 0U;
        __Vtemp3582[2U] = 0U;
        __Vtemp3582[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3583, __Vtemp3582, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3583[1U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91256: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91256, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91264
verbose&&done_reset        
    ) {
        __Vtemp3584[0U] = 1U;
        __Vtemp3584[1U] = 0U;
        __Vtemp3584[2U] = 0U;
        __Vtemp3584[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3585, __Vtemp3584, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3585[1U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91276
done_reset        
    ) {
        __Vtemp3586[0U] = 1U;
        __Vtemp3586[1U] = 0U;
        __Vtemp3586[2U] = 0U;
        __Vtemp3586[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3587, __Vtemp3586, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3587[1U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91279: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91279, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91287
verbose&&done_reset        
    ) {
        __Vtemp3588[0U] = 1U;
        __Vtemp3588[1U] = 0U;
        __Vtemp3588[2U] = 0U;
        __Vtemp3588[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3589, __Vtemp3588, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3589[1U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91299
done_reset        
    ) {
        __Vtemp3590[0U] = 1U;
        __Vtemp3590[1U] = 0U;
        __Vtemp3590[2U] = 0U;
        __Vtemp3590[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3591, __Vtemp3590, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3591[1U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91302: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91302, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91310
verbose&&done_reset        
    ) {
        __Vtemp3592[0U] = 1U;
        __Vtemp3592[1U] = 0U;
        __Vtemp3592[2U] = 0U;
        __Vtemp3592[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3593, __Vtemp3592, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3593[1U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91322
done_reset        
    ) {
        __Vtemp3594[0U] = 1U;
        __Vtemp3594[1U] = 0U;
        __Vtemp3594[2U] = 0U;
        __Vtemp3594[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3595, __Vtemp3594, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3595[1U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91325: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91325, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91333
verbose&&done_reset        
    ) {
        __Vtemp3596[0U] = 1U;
        __Vtemp3596[1U] = 0U;
        __Vtemp3596[2U] = 0U;
        __Vtemp3596[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3597, __Vtemp3596, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3597[1U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91345
done_reset        
    ) {
        __Vtemp3598[0U] = 1U;
        __Vtemp3598[1U] = 0U;
        __Vtemp3598[2U] = 0U;
        __Vtemp3598[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3599, __Vtemp3598, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3599[1U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91348: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91348, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91356
verbose&&done_reset        
    ) {
        __Vtemp3600[0U] = 1U;
        __Vtemp3600[1U] = 0U;
        __Vtemp3600[2U] = 0U;
        __Vtemp3600[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3601, __Vtemp3600, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3601[1U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91368
done_reset        
    ) {
        __Vtemp3602[0U] = 1U;
        __Vtemp3602[1U] = 0U;
        __Vtemp3602[2U] = 0U;
        __Vtemp3602[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3603, __Vtemp3602, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3603[1U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91371: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91371, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91379
verbose&&done_reset        
    ) {
        __Vtemp3604[0U] = 1U;
        __Vtemp3604[1U] = 0U;
        __Vtemp3604[2U] = 0U;
        __Vtemp3604[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3605, __Vtemp3604, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3605[1U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91391
done_reset        
    ) {
        __Vtemp3606[0U] = 1U;
        __Vtemp3606[1U] = 0U;
        __Vtemp3606[2U] = 0U;
        __Vtemp3606[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3607, __Vtemp3606, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3607[1U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91394: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91394, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91402
verbose&&done_reset        
    ) {
        __Vtemp3608[0U] = 1U;
        __Vtemp3608[1U] = 0U;
        __Vtemp3608[2U] = 0U;
        __Vtemp3608[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3609, __Vtemp3608, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3609[1U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91414
done_reset        
    ) {
        __Vtemp3610[0U] = 1U;
        __Vtemp3610[1U] = 0U;
        __Vtemp3610[2U] = 0U;
        __Vtemp3610[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3611, __Vtemp3610, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3611[1U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91417: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91417, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91425
verbose&&done_reset        
    ) {
        __Vtemp3612[0U] = 1U;
        __Vtemp3612[1U] = 0U;
        __Vtemp3612[2U] = 0U;
        __Vtemp3612[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3613, __Vtemp3612, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3613[1U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91437
done_reset        
    ) {
        __Vtemp3614[0U] = 1U;
        __Vtemp3614[1U] = 0U;
        __Vtemp3614[2U] = 0U;
        __Vtemp3614[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3615, __Vtemp3614, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3615[1U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91440: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91440, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91448
verbose&&done_reset        
    ) {
        __Vtemp3616[0U] = 1U;
        __Vtemp3616[1U] = 0U;
        __Vtemp3616[2U] = 0U;
        __Vtemp3616[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3617, __Vtemp3616, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3617[1U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91460
done_reset        
    ) {
        __Vtemp3618[0U] = 1U;
        __Vtemp3618[1U] = 0U;
        __Vtemp3618[2U] = 0U;
        __Vtemp3618[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3619, __Vtemp3618, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3619[1U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91463: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91463, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91471
verbose&&done_reset        
    ) {
        __Vtemp3620[0U] = 1U;
        __Vtemp3620[1U] = 0U;
        __Vtemp3620[2U] = 0U;
        __Vtemp3620[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3621, __Vtemp3620, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3621[2U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91483
done_reset        
    ) {
        __Vtemp3622[0U] = 1U;
        __Vtemp3622[1U] = 0U;
        __Vtemp3622[2U] = 0U;
        __Vtemp3622[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3623, __Vtemp3622, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3623[2U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91486: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91486, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91494
verbose&&done_reset        
    ) {
        __Vtemp3624[0U] = 1U;
        __Vtemp3624[1U] = 0U;
        __Vtemp3624[2U] = 0U;
        __Vtemp3624[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3625, __Vtemp3624, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3625[2U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91506
done_reset        
    ) {
        __Vtemp3626[0U] = 1U;
        __Vtemp3626[1U] = 0U;
        __Vtemp3626[2U] = 0U;
        __Vtemp3626[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3627, __Vtemp3626, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3627[2U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91509: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91509, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91517
verbose&&done_reset        
    ) {
        __Vtemp3628[0U] = 1U;
        __Vtemp3628[1U] = 0U;
        __Vtemp3628[2U] = 0U;
        __Vtemp3628[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3629, __Vtemp3628, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3629[2U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91529
done_reset        
    ) {
        __Vtemp3630[0U] = 1U;
        __Vtemp3630[1U] = 0U;
        __Vtemp3630[2U] = 0U;
        __Vtemp3630[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3631, __Vtemp3630, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3631[2U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91532: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91532, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91540
verbose&&done_reset        
    ) {
        __Vtemp3632[0U] = 1U;
        __Vtemp3632[1U] = 0U;
        __Vtemp3632[2U] = 0U;
        __Vtemp3632[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3633, __Vtemp3632, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3633[2U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91552
done_reset        
    ) {
        __Vtemp3634[0U] = 1U;
        __Vtemp3634[1U] = 0U;
        __Vtemp3634[2U] = 0U;
        __Vtemp3634[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3635, __Vtemp3634, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3635[2U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91555: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91555, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91563
verbose&&done_reset        
    ) {
        __Vtemp3636[0U] = 1U;
        __Vtemp3636[1U] = 0U;
        __Vtemp3636[2U] = 0U;
        __Vtemp3636[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3637, __Vtemp3636, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3637[2U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91575
done_reset        
    ) {
        __Vtemp3638[0U] = 1U;
        __Vtemp3638[1U] = 0U;
        __Vtemp3638[2U] = 0U;
        __Vtemp3638[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3639, __Vtemp3638, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3639[2U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91578: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91578, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91586
verbose&&done_reset        
    ) {
        __Vtemp3640[0U] = 1U;
        __Vtemp3640[1U] = 0U;
        __Vtemp3640[2U] = 0U;
        __Vtemp3640[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3641, __Vtemp3640, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3641[2U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91598
done_reset        
    ) {
        __Vtemp3642[0U] = 1U;
        __Vtemp3642[1U] = 0U;
        __Vtemp3642[2U] = 0U;
        __Vtemp3642[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3643, __Vtemp3642, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3643[2U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91601: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91601, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91609
verbose&&done_reset        
    ) {
        __Vtemp3644[0U] = 1U;
        __Vtemp3644[1U] = 0U;
        __Vtemp3644[2U] = 0U;
        __Vtemp3644[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3645, __Vtemp3644, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3645[2U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91621
done_reset        
    ) {
        __Vtemp3646[0U] = 1U;
        __Vtemp3646[1U] = 0U;
        __Vtemp3646[2U] = 0U;
        __Vtemp3646[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3647, __Vtemp3646, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3647[2U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91624: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91624, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91632
verbose&&done_reset        
    ) {
        __Vtemp3648[0U] = 1U;
        __Vtemp3648[1U] = 0U;
        __Vtemp3648[2U] = 0U;
        __Vtemp3648[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3649, __Vtemp3648, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3649[2U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91644
done_reset        
    ) {
        __Vtemp3650[0U] = 1U;
        __Vtemp3650[1U] = 0U;
        __Vtemp3650[2U] = 0U;
        __Vtemp3650[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3651, __Vtemp3650, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3651[2U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91647: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91647, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91655
verbose&&done_reset        
    ) {
        __Vtemp3652[0U] = 1U;
        __Vtemp3652[1U] = 0U;
        __Vtemp3652[2U] = 0U;
        __Vtemp3652[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3653, __Vtemp3652, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3653[2U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91667
done_reset        
    ) {
        __Vtemp3654[0U] = 1U;
        __Vtemp3654[1U] = 0U;
        __Vtemp3654[2U] = 0U;
        __Vtemp3654[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3655, __Vtemp3654, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3655[2U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91670: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91670, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91678
verbose&&done_reset        
    ) {
        __Vtemp3656[0U] = 1U;
        __Vtemp3656[1U] = 0U;
        __Vtemp3656[2U] = 0U;
        __Vtemp3656[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3657, __Vtemp3656, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3657[2U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91690
done_reset        
    ) {
        __Vtemp3658[0U] = 1U;
        __Vtemp3658[1U] = 0U;
        __Vtemp3658[2U] = 0U;
        __Vtemp3658[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3659, __Vtemp3658, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3659[2U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91693: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91693, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91701
verbose&&done_reset        
    ) {
        __Vtemp3660[0U] = 1U;
        __Vtemp3660[1U] = 0U;
        __Vtemp3660[2U] = 0U;
        __Vtemp3660[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3661, __Vtemp3660, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3661[2U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91713
done_reset        
    ) {
        __Vtemp3662[0U] = 1U;
        __Vtemp3662[1U] = 0U;
        __Vtemp3662[2U] = 0U;
        __Vtemp3662[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3663, __Vtemp3662, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3663[2U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91716: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91716, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91724
verbose&&done_reset        
    ) {
        __Vtemp3664[0U] = 1U;
        __Vtemp3664[1U] = 0U;
        __Vtemp3664[2U] = 0U;
        __Vtemp3664[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3665, __Vtemp3664, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3665[2U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91736
done_reset        
    ) {
        __Vtemp3666[0U] = 1U;
        __Vtemp3666[1U] = 0U;
        __Vtemp3666[2U] = 0U;
        __Vtemp3666[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3667, __Vtemp3666, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3667[2U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91739: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91739, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91747
verbose&&done_reset        
    ) {
        __Vtemp3668[0U] = 1U;
        __Vtemp3668[1U] = 0U;
        __Vtemp3668[2U] = 0U;
        __Vtemp3668[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3669, __Vtemp3668, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3669[2U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91759
done_reset        
    ) {
        __Vtemp3670[0U] = 1U;
        __Vtemp3670[1U] = 0U;
        __Vtemp3670[2U] = 0U;
        __Vtemp3670[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3671, __Vtemp3670, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3671[2U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91762: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91762, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91770
verbose&&done_reset        
    ) {
        __Vtemp3672[0U] = 1U;
        __Vtemp3672[1U] = 0U;
        __Vtemp3672[2U] = 0U;
        __Vtemp3672[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3673, __Vtemp3672, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3673[2U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91782
done_reset        
    ) {
        __Vtemp3674[0U] = 1U;
        __Vtemp3674[1U] = 0U;
        __Vtemp3674[2U] = 0U;
        __Vtemp3674[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3675, __Vtemp3674, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3675[2U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91785: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91785, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91793
verbose&&done_reset        
    ) {
        __Vtemp3676[0U] = 1U;
        __Vtemp3676[1U] = 0U;
        __Vtemp3676[2U] = 0U;
        __Vtemp3676[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3677, __Vtemp3676, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3677[2U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91805
done_reset        
    ) {
        __Vtemp3678[0U] = 1U;
        __Vtemp3678[1U] = 0U;
        __Vtemp3678[2U] = 0U;
        __Vtemp3678[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3679, __Vtemp3678, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3679[2U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91808: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91808, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91816
verbose&&done_reset        
    ) {
        __Vtemp3680[0U] = 1U;
        __Vtemp3680[1U] = 0U;
        __Vtemp3680[2U] = 0U;
        __Vtemp3680[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3681, __Vtemp3680, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3681[2U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91828
done_reset        
    ) {
        __Vtemp3682[0U] = 1U;
        __Vtemp3682[1U] = 0U;
        __Vtemp3682[2U] = 0U;
        __Vtemp3682[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3683, __Vtemp3682, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3683[2U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91831: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91831, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91839
verbose&&done_reset        
    ) {
        __Vtemp3684[0U] = 1U;
        __Vtemp3684[1U] = 0U;
        __Vtemp3684[2U] = 0U;
        __Vtemp3684[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3685, __Vtemp3684, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3685[2U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91851
done_reset        
    ) {
        __Vtemp3686[0U] = 1U;
        __Vtemp3686[1U] = 0U;
        __Vtemp3686[2U] = 0U;
        __Vtemp3686[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3687, __Vtemp3686, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3687[2U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91854: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91854, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91862
verbose&&done_reset        
    ) {
        __Vtemp3688[0U] = 1U;
        __Vtemp3688[1U] = 0U;
        __Vtemp3688[2U] = 0U;
        __Vtemp3688[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3689, __Vtemp3688, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3689[2U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91874
done_reset        
    ) {
        __Vtemp3690[0U] = 1U;
        __Vtemp3690[1U] = 0U;
        __Vtemp3690[2U] = 0U;
        __Vtemp3690[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3691, __Vtemp3690, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3691[2U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91877: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91877, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91885
verbose&&done_reset        
    ) {
        __Vtemp3692[0U] = 1U;
        __Vtemp3692[1U] = 0U;
        __Vtemp3692[2U] = 0U;
        __Vtemp3692[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3693, __Vtemp3692, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3693[2U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91897
done_reset        
    ) {
        __Vtemp3694[0U] = 1U;
        __Vtemp3694[1U] = 0U;
        __Vtemp3694[2U] = 0U;
        __Vtemp3694[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3695, __Vtemp3694, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3695[2U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91900: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91900, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91908
verbose&&done_reset        
    ) {
        __Vtemp3696[0U] = 1U;
        __Vtemp3696[1U] = 0U;
        __Vtemp3696[2U] = 0U;
        __Vtemp3696[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3697, __Vtemp3696, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3697[2U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91920
done_reset        
    ) {
        __Vtemp3698[0U] = 1U;
        __Vtemp3698[1U] = 0U;
        __Vtemp3698[2U] = 0U;
        __Vtemp3698[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3699, __Vtemp3698, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3699[2U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91923: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91923, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91931
verbose&&done_reset        
    ) {
        __Vtemp3700[0U] = 1U;
        __Vtemp3700[1U] = 0U;
        __Vtemp3700[2U] = 0U;
        __Vtemp3700[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3701, __Vtemp3700, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3701[2U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91943
done_reset        
    ) {
        __Vtemp3702[0U] = 1U;
        __Vtemp3702[1U] = 0U;
        __Vtemp3702[2U] = 0U;
        __Vtemp3702[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3703, __Vtemp3702, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3703[2U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91946: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91946, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91954
verbose&&done_reset        
    ) {
        __Vtemp3704[0U] = 1U;
        __Vtemp3704[1U] = 0U;
        __Vtemp3704[2U] = 0U;
        __Vtemp3704[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3705, __Vtemp3704, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3705[2U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91966
done_reset        
    ) {
        __Vtemp3706[0U] = 1U;
        __Vtemp3706[1U] = 0U;
        __Vtemp3706[2U] = 0U;
        __Vtemp3706[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3707, __Vtemp3706, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3707[2U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91969: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91969, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91977
verbose&&done_reset        
    ) {
        __Vtemp3708[0U] = 1U;
        __Vtemp3708[1U] = 0U;
        __Vtemp3708[2U] = 0U;
        __Vtemp3708[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3709, __Vtemp3708, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3709[2U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:91989
done_reset        
    ) {
        __Vtemp3710[0U] = 1U;
        __Vtemp3710[1U] = 0U;
        __Vtemp3710[2U] = 0U;
        __Vtemp3710[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3711, __Vtemp3710, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3711[2U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:91992: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 91992, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92000
verbose&&done_reset        
    ) {
        __Vtemp3712[0U] = 1U;
        __Vtemp3712[1U] = 0U;
        __Vtemp3712[2U] = 0U;
        __Vtemp3712[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3713, __Vtemp3712, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3713[2U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92012
done_reset        
    ) {
        __Vtemp3714[0U] = 1U;
        __Vtemp3714[1U] = 0U;
        __Vtemp3714[2U] = 0U;
        __Vtemp3714[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3715, __Vtemp3714, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3715[2U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92015: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92015, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92023
verbose&&done_reset        
    ) {
        __Vtemp3716[0U] = 1U;
        __Vtemp3716[1U] = 0U;
        __Vtemp3716[2U] = 0U;
        __Vtemp3716[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3717, __Vtemp3716, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3717[2U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92035
done_reset        
    ) {
        __Vtemp3718[0U] = 1U;
        __Vtemp3718[1U] = 0U;
        __Vtemp3718[2U] = 0U;
        __Vtemp3718[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3719, __Vtemp3718, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3719[2U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92038: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92038, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92046
verbose&&done_reset        
    ) {
        __Vtemp3720[0U] = 1U;
        __Vtemp3720[1U] = 0U;
        __Vtemp3720[2U] = 0U;
        __Vtemp3720[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3721, __Vtemp3720, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3721[2U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92058
done_reset        
    ) {
        __Vtemp3722[0U] = 1U;
        __Vtemp3722[1U] = 0U;
        __Vtemp3722[2U] = 0U;
        __Vtemp3722[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3723, __Vtemp3722, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3723[2U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92061: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92061, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92069
verbose&&done_reset        
    ) {
        __Vtemp3724[0U] = 1U;
        __Vtemp3724[1U] = 0U;
        __Vtemp3724[2U] = 0U;
        __Vtemp3724[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3725, __Vtemp3724, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3725[2U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92081
done_reset        
    ) {
        __Vtemp3726[0U] = 1U;
        __Vtemp3726[1U] = 0U;
        __Vtemp3726[2U] = 0U;
        __Vtemp3726[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3727, __Vtemp3726, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3727[2U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92084: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92084, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92092
verbose&&done_reset        
    ) {
        __Vtemp3728[0U] = 1U;
        __Vtemp3728[1U] = 0U;
        __Vtemp3728[2U] = 0U;
        __Vtemp3728[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3729, __Vtemp3728, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3729[2U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92104
done_reset        
    ) {
        __Vtemp3730[0U] = 1U;
        __Vtemp3730[1U] = 0U;
        __Vtemp3730[2U] = 0U;
        __Vtemp3730[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3731, __Vtemp3730, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3731[2U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92107: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92107, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92115
verbose&&done_reset        
    ) {
        __Vtemp3732[0U] = 1U;
        __Vtemp3732[1U] = 0U;
        __Vtemp3732[2U] = 0U;
        __Vtemp3732[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3733, __Vtemp3732, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3733[2U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92127
done_reset        
    ) {
        __Vtemp3734[0U] = 1U;
        __Vtemp3734[1U] = 0U;
        __Vtemp3734[2U] = 0U;
        __Vtemp3734[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3735, __Vtemp3734, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3735[2U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92130: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92130, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92138
verbose&&done_reset        
    ) {
        __Vtemp3736[0U] = 1U;
        __Vtemp3736[1U] = 0U;
        __Vtemp3736[2U] = 0U;
        __Vtemp3736[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3737, __Vtemp3736, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3737[2U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92150
done_reset        
    ) {
        __Vtemp3738[0U] = 1U;
        __Vtemp3738[1U] = 0U;
        __Vtemp3738[2U] = 0U;
        __Vtemp3738[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3739, __Vtemp3738, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3739[2U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92153: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92153, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92161
verbose&&done_reset        
    ) {
        __Vtemp3740[0U] = 1U;
        __Vtemp3740[1U] = 0U;
        __Vtemp3740[2U] = 0U;
        __Vtemp3740[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3741, __Vtemp3740, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3741[2U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92173
done_reset        
    ) {
        __Vtemp3742[0U] = 1U;
        __Vtemp3742[1U] = 0U;
        __Vtemp3742[2U] = 0U;
        __Vtemp3742[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3743, __Vtemp3742, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3743[2U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92176: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92176, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92184
verbose&&done_reset        
    ) {
        __Vtemp3744[0U] = 1U;
        __Vtemp3744[1U] = 0U;
        __Vtemp3744[2U] = 0U;
        __Vtemp3744[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3745, __Vtemp3744, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3745[2U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92196
done_reset        
    ) {
        __Vtemp3746[0U] = 1U;
        __Vtemp3746[1U] = 0U;
        __Vtemp3746[2U] = 0U;
        __Vtemp3746[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3747, __Vtemp3746, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3747[2U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92199: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92199, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92207
verbose&&done_reset        
    ) {
        __Vtemp3748[0U] = 1U;
        __Vtemp3748[1U] = 0U;
        __Vtemp3748[2U] = 0U;
        __Vtemp3748[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3749, __Vtemp3748, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3749[2U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92219
done_reset        
    ) {
        __Vtemp3750[0U] = 1U;
        __Vtemp3750[1U] = 0U;
        __Vtemp3750[2U] = 0U;
        __Vtemp3750[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3751, __Vtemp3750, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3751[2U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92222: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92222, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92230
verbose&&done_reset        
    ) {
        __Vtemp3752[0U] = 1U;
        __Vtemp3752[1U] = 0U;
        __Vtemp3752[2U] = 0U;
        __Vtemp3752[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3753, __Vtemp3752, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3753[2U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92242
done_reset        
    ) {
        __Vtemp3754[0U] = 1U;
        __Vtemp3754[1U] = 0U;
        __Vtemp3754[2U] = 0U;
        __Vtemp3754[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3755, __Vtemp3754, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3755[2U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92245: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92245, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92253
verbose&&done_reset        
    ) {
        __Vtemp3756[0U] = 1U;
        __Vtemp3756[1U] = 0U;
        __Vtemp3756[2U] = 0U;
        __Vtemp3756[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3757, __Vtemp3756, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3757[2U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92265
done_reset        
    ) {
        __Vtemp3758[0U] = 1U;
        __Vtemp3758[1U] = 0U;
        __Vtemp3758[2U] = 0U;
        __Vtemp3758[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3759, __Vtemp3758, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3759[2U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92268: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92268, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92276
verbose&&done_reset        
    ) {
        __Vtemp3760[0U] = 1U;
        __Vtemp3760[1U] = 0U;
        __Vtemp3760[2U] = 0U;
        __Vtemp3760[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3761, __Vtemp3760, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3761[2U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92288
done_reset        
    ) {
        __Vtemp3762[0U] = 1U;
        __Vtemp3762[1U] = 0U;
        __Vtemp3762[2U] = 0U;
        __Vtemp3762[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3763, __Vtemp3762, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3763[2U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92291: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92291, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92299
verbose&&done_reset        
    ) {
        __Vtemp3764[0U] = 1U;
        __Vtemp3764[1U] = 0U;
        __Vtemp3764[2U] = 0U;
        __Vtemp3764[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3765, __Vtemp3764, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3765[2U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92311
done_reset        
    ) {
        __Vtemp3766[0U] = 1U;
        __Vtemp3766[1U] = 0U;
        __Vtemp3766[2U] = 0U;
        __Vtemp3766[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3767, __Vtemp3766, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3767[2U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92314: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92314, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92322
verbose&&done_reset        
    ) {
        __Vtemp3768[0U] = 1U;
        __Vtemp3768[1U] = 0U;
        __Vtemp3768[2U] = 0U;
        __Vtemp3768[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3769, __Vtemp3768, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3769[2U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92334
done_reset        
    ) {
        __Vtemp3770[0U] = 1U;
        __Vtemp3770[1U] = 0U;
        __Vtemp3770[2U] = 0U;
        __Vtemp3770[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3771, __Vtemp3770, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3771[2U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92337: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92337, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92345
verbose&&done_reset        
    ) {
        __Vtemp3772[0U] = 1U;
        __Vtemp3772[1U] = 0U;
        __Vtemp3772[2U] = 0U;
        __Vtemp3772[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3773, __Vtemp3772, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3773[2U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92357
done_reset        
    ) {
        __Vtemp3774[0U] = 1U;
        __Vtemp3774[1U] = 0U;
        __Vtemp3774[2U] = 0U;
        __Vtemp3774[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3775, __Vtemp3774, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3775[2U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92360: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92360, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92368
verbose&&done_reset        
    ) {
        __Vtemp3776[0U] = 1U;
        __Vtemp3776[1U] = 0U;
        __Vtemp3776[2U] = 0U;
        __Vtemp3776[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3777, __Vtemp3776, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3777[2U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92380
done_reset        
    ) {
        __Vtemp3778[0U] = 1U;
        __Vtemp3778[1U] = 0U;
        __Vtemp3778[2U] = 0U;
        __Vtemp3778[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3779, __Vtemp3778, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3779[2U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92383: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92383, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92391
verbose&&done_reset        
    ) {
        __Vtemp3780[0U] = 1U;
        __Vtemp3780[1U] = 0U;
        __Vtemp3780[2U] = 0U;
        __Vtemp3780[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3781, __Vtemp3780, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3781[2U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92403
done_reset        
    ) {
        __Vtemp3782[0U] = 1U;
        __Vtemp3782[1U] = 0U;
        __Vtemp3782[2U] = 0U;
        __Vtemp3782[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3783, __Vtemp3782, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3783[2U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92406: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92406, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92414
verbose&&done_reset        
    ) {
        __Vtemp3784[0U] = 1U;
        __Vtemp3784[1U] = 0U;
        __Vtemp3784[2U] = 0U;
        __Vtemp3784[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3785, __Vtemp3784, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3785[2U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92426
done_reset        
    ) {
        __Vtemp3786[0U] = 1U;
        __Vtemp3786[1U] = 0U;
        __Vtemp3786[2U] = 0U;
        __Vtemp3786[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3787, __Vtemp3786, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3787[2U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92429: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92429, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92437
verbose&&done_reset        
    ) {
        __Vtemp3788[0U] = 1U;
        __Vtemp3788[1U] = 0U;
        __Vtemp3788[2U] = 0U;
        __Vtemp3788[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3789, __Vtemp3788, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3789[2U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92449
done_reset        
    ) {
        __Vtemp3790[0U] = 1U;
        __Vtemp3790[1U] = 0U;
        __Vtemp3790[2U] = 0U;
        __Vtemp3790[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3791, __Vtemp3790, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3791[2U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92452: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92452, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92460
verbose&&done_reset        
    ) {
        __Vtemp3792[0U] = 1U;
        __Vtemp3792[1U] = 0U;
        __Vtemp3792[2U] = 0U;
        __Vtemp3792[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3793, __Vtemp3792, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3793[2U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92472
done_reset        
    ) {
        __Vtemp3794[0U] = 1U;
        __Vtemp3794[1U] = 0U;
        __Vtemp3794[2U] = 0U;
        __Vtemp3794[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3795, __Vtemp3794, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3795[2U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92475: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92475, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92483
verbose&&done_reset        
    ) {
        __Vtemp3796[0U] = 1U;
        __Vtemp3796[1U] = 0U;
        __Vtemp3796[2U] = 0U;
        __Vtemp3796[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3797, __Vtemp3796, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3797[2U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92495
done_reset        
    ) {
        __Vtemp3798[0U] = 1U;
        __Vtemp3798[1U] = 0U;
        __Vtemp3798[2U] = 0U;
        __Vtemp3798[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3799, __Vtemp3798, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3799[2U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92498: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92498, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92506
verbose&&done_reset        
    ) {
        __Vtemp3800[0U] = 1U;
        __Vtemp3800[1U] = 0U;
        __Vtemp3800[2U] = 0U;
        __Vtemp3800[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3801, __Vtemp3800, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3801[2U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92518
done_reset        
    ) {
        __Vtemp3802[0U] = 1U;
        __Vtemp3802[1U] = 0U;
        __Vtemp3802[2U] = 0U;
        __Vtemp3802[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3803, __Vtemp3802, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3803[2U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92521: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92521, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92529
verbose&&done_reset        
    ) {
        __Vtemp3804[0U] = 1U;
        __Vtemp3804[1U] = 0U;
        __Vtemp3804[2U] = 0U;
        __Vtemp3804[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3805, __Vtemp3804, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3805[2U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92541
done_reset        
    ) {
        __Vtemp3806[0U] = 1U;
        __Vtemp3806[1U] = 0U;
        __Vtemp3806[2U] = 0U;
        __Vtemp3806[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3807, __Vtemp3806, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3807[2U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92544: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92544, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92552
verbose&&done_reset        
    ) {
        __Vtemp3808[0U] = 1U;
        __Vtemp3808[1U] = 0U;
        __Vtemp3808[2U] = 0U;
        __Vtemp3808[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3809, __Vtemp3808, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3809[2U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92564
done_reset        
    ) {
        __Vtemp3810[0U] = 1U;
        __Vtemp3810[1U] = 0U;
        __Vtemp3810[2U] = 0U;
        __Vtemp3810[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3811, __Vtemp3810, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3811[2U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92567: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92567, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92575
verbose&&done_reset        
    ) {
        __Vtemp3812[0U] = 1U;
        __Vtemp3812[1U] = 0U;
        __Vtemp3812[2U] = 0U;
        __Vtemp3812[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3813, __Vtemp3812, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3813[2U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92587
done_reset        
    ) {
        __Vtemp3814[0U] = 1U;
        __Vtemp3814[1U] = 0U;
        __Vtemp3814[2U] = 0U;
        __Vtemp3814[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3815, __Vtemp3814, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3815[2U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92590: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92590, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92598
verbose&&done_reset        
    ) {
        __Vtemp3816[0U] = 1U;
        __Vtemp3816[1U] = 0U;
        __Vtemp3816[2U] = 0U;
        __Vtemp3816[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3817, __Vtemp3816, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3817[2U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92610
done_reset        
    ) {
        __Vtemp3818[0U] = 1U;
        __Vtemp3818[1U] = 0U;
        __Vtemp3818[2U] = 0U;
        __Vtemp3818[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3819, __Vtemp3818, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3819[2U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92613: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92613, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92621
verbose&&done_reset        
    ) {
        __Vtemp3820[0U] = 1U;
        __Vtemp3820[1U] = 0U;
        __Vtemp3820[2U] = 0U;
        __Vtemp3820[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3821, __Vtemp3820, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3821[2U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92633
done_reset        
    ) {
        __Vtemp3822[0U] = 1U;
        __Vtemp3822[1U] = 0U;
        __Vtemp3822[2U] = 0U;
        __Vtemp3822[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3823, __Vtemp3822, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3823[2U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92636: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92636, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92644
verbose&&done_reset        
    ) {
        __Vtemp3824[0U] = 1U;
        __Vtemp3824[1U] = 0U;
        __Vtemp3824[2U] = 0U;
        __Vtemp3824[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3825, __Vtemp3824, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3825[2U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92656
done_reset        
    ) {
        __Vtemp3826[0U] = 1U;
        __Vtemp3826[1U] = 0U;
        __Vtemp3826[2U] = 0U;
        __Vtemp3826[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3827, __Vtemp3826, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3827[2U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92659: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92659, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92667
verbose&&done_reset        
    ) {
        __Vtemp3828[0U] = 1U;
        __Vtemp3828[1U] = 0U;
        __Vtemp3828[2U] = 0U;
        __Vtemp3828[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3829, __Vtemp3828, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3829[2U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92679
done_reset        
    ) {
        __Vtemp3830[0U] = 1U;
        __Vtemp3830[1U] = 0U;
        __Vtemp3830[2U] = 0U;
        __Vtemp3830[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3831, __Vtemp3830, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3831[2U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92682: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92682, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92690
verbose&&done_reset        
    ) {
        __Vtemp3832[0U] = 1U;
        __Vtemp3832[1U] = 0U;
        __Vtemp3832[2U] = 0U;
        __Vtemp3832[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3833, __Vtemp3832, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3833[2U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92702
done_reset        
    ) {
        __Vtemp3834[0U] = 1U;
        __Vtemp3834[1U] = 0U;
        __Vtemp3834[2U] = 0U;
        __Vtemp3834[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3835, __Vtemp3834, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3835[2U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92705: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92705, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92713
verbose&&done_reset        
    ) {
        __Vtemp3836[0U] = 1U;
        __Vtemp3836[1U] = 0U;
        __Vtemp3836[2U] = 0U;
        __Vtemp3836[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3837, __Vtemp3836, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3837[2U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92725
done_reset        
    ) {
        __Vtemp3838[0U] = 1U;
        __Vtemp3838[1U] = 0U;
        __Vtemp3838[2U] = 0U;
        __Vtemp3838[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3839, __Vtemp3838, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3839[2U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92728: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92728, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92736
verbose&&done_reset        
    ) {
        __Vtemp3840[0U] = 1U;
        __Vtemp3840[1U] = 0U;
        __Vtemp3840[2U] = 0U;
        __Vtemp3840[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3841, __Vtemp3840, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3841[2U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92748
done_reset        
    ) {
        __Vtemp3842[0U] = 1U;
        __Vtemp3842[1U] = 0U;
        __Vtemp3842[2U] = 0U;
        __Vtemp3842[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3843, __Vtemp3842, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3843[2U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92751: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92751, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92759
verbose&&done_reset        
    ) {
        __Vtemp3844[0U] = 1U;
        __Vtemp3844[1U] = 0U;
        __Vtemp3844[2U] = 0U;
        __Vtemp3844[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3845, __Vtemp3844, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3845[2U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92771
done_reset        
    ) {
        __Vtemp3846[0U] = 1U;
        __Vtemp3846[1U] = 0U;
        __Vtemp3846[2U] = 0U;
        __Vtemp3846[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3847, __Vtemp3846, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3847[2U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92774: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92774, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92782
verbose&&done_reset        
    ) {
        __Vtemp3848[0U] = 1U;
        __Vtemp3848[1U] = 0U;
        __Vtemp3848[2U] = 0U;
        __Vtemp3848[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3849, __Vtemp3848, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3849[2U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92794
done_reset        
    ) {
        __Vtemp3850[0U] = 1U;
        __Vtemp3850[1U] = 0U;
        __Vtemp3850[2U] = 0U;
        __Vtemp3850[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3851, __Vtemp3850, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3851[2U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92797: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92797, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92805
verbose&&done_reset        
    ) {
        __Vtemp3852[0U] = 1U;
        __Vtemp3852[1U] = 0U;
        __Vtemp3852[2U] = 0U;
        __Vtemp3852[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3853, __Vtemp3852, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3853[2U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92817
done_reset        
    ) {
        __Vtemp3854[0U] = 1U;
        __Vtemp3854[1U] = 0U;
        __Vtemp3854[2U] = 0U;
        __Vtemp3854[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3855, __Vtemp3854, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3855[2U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92820: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92820, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92828
verbose&&done_reset        
    ) {
        __Vtemp3856[0U] = 1U;
        __Vtemp3856[1U] = 0U;
        __Vtemp3856[2U] = 0U;
        __Vtemp3856[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3857, __Vtemp3856, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3857[2U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92840
done_reset        
    ) {
        __Vtemp3858[0U] = 1U;
        __Vtemp3858[1U] = 0U;
        __Vtemp3858[2U] = 0U;
        __Vtemp3858[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3859, __Vtemp3858, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3859[2U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92843: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92843, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92851
verbose&&done_reset        
    ) {
        __Vtemp3860[0U] = 1U;
        __Vtemp3860[1U] = 0U;
        __Vtemp3860[2U] = 0U;
        __Vtemp3860[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3861, __Vtemp3860, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3861[2U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92863
done_reset        
    ) {
        __Vtemp3862[0U] = 1U;
        __Vtemp3862[1U] = 0U;
        __Vtemp3862[2U] = 0U;
        __Vtemp3862[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3863, __Vtemp3862, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3863[2U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92866: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92866, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92874
verbose&&done_reset        
    ) {
        __Vtemp3864[0U] = 1U;
        __Vtemp3864[1U] = 0U;
        __Vtemp3864[2U] = 0U;
        __Vtemp3864[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3865, __Vtemp3864, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3865[2U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92886
done_reset        
    ) {
        __Vtemp3866[0U] = 1U;
        __Vtemp3866[1U] = 0U;
        __Vtemp3866[2U] = 0U;
        __Vtemp3866[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3867, __Vtemp3866, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3867[2U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92889: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92889, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92897
verbose&&done_reset        
    ) {
        __Vtemp3868[0U] = 1U;
        __Vtemp3868[1U] = 0U;
        __Vtemp3868[2U] = 0U;
        __Vtemp3868[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3869, __Vtemp3868, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3869[2U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92909
done_reset        
    ) {
        __Vtemp3870[0U] = 1U;
        __Vtemp3870[1U] = 0U;
        __Vtemp3870[2U] = 0U;
        __Vtemp3870[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3871, __Vtemp3870, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3871[2U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92912: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92912, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92920
verbose&&done_reset        
    ) {
        __Vtemp3872[0U] = 1U;
        __Vtemp3872[1U] = 0U;
        __Vtemp3872[2U] = 0U;
        __Vtemp3872[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3873, __Vtemp3872, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3873[2U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92932
done_reset        
    ) {
        __Vtemp3874[0U] = 1U;
        __Vtemp3874[1U] = 0U;
        __Vtemp3874[2U] = 0U;
        __Vtemp3874[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3875, __Vtemp3874, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3875[2U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92935: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92935, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92943
verbose&&done_reset        
    ) {
        __Vtemp3876[0U] = 1U;
        __Vtemp3876[1U] = 0U;
        __Vtemp3876[2U] = 0U;
        __Vtemp3876[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3877, __Vtemp3876, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3877[3U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92955
done_reset        
    ) {
        __Vtemp3878[0U] = 1U;
        __Vtemp3878[1U] = 0U;
        __Vtemp3878[2U] = 0U;
        __Vtemp3878[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3879, __Vtemp3878, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3879[3U] 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92958: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92958, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92966
verbose&&done_reset        
    ) {
        __Vtemp3880[0U] = 1U;
        __Vtemp3880[1U] = 0U;
        __Vtemp3880[2U] = 0U;
        __Vtemp3880[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3881, __Vtemp3880, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3881[3U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92978
done_reset        
    ) {
        __Vtemp3882[0U] = 1U;
        __Vtemp3882[1U] = 0U;
        __Vtemp3882[2U] = 0U;
        __Vtemp3882[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3883, __Vtemp3882, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ (__Vtemp3883[3U] 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:92981: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 92981, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:92989
verbose&&done_reset        
    ) {
        __Vtemp3884[0U] = 1U;
        __Vtemp3884[1U] = 0U;
        __Vtemp3884[2U] = 0U;
        __Vtemp3884[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3885, __Vtemp3884, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3885[3U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93001
done_reset        
    ) {
        __Vtemp3886[0U] = 1U;
        __Vtemp3886[1U] = 0U;
        __Vtemp3886[2U] = 0U;
        __Vtemp3886[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3887, __Vtemp3886, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3887[3U] 
                                         >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93004: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93004, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93012
verbose&&done_reset        
    ) {
        __Vtemp3888[0U] = 1U;
        __Vtemp3888[1U] = 0U;
        __Vtemp3888[2U] = 0U;
        __Vtemp3888[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3889, __Vtemp3888, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3889[3U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93024
done_reset        
    ) {
        __Vtemp3890[0U] = 1U;
        __Vtemp3890[1U] = 0U;
        __Vtemp3890[2U] = 0U;
        __Vtemp3890[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3891, __Vtemp3890, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3891[3U] 
                                        >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93027: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93027, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93035
verbose&&done_reset        
    ) {
        __Vtemp3892[0U] = 1U;
        __Vtemp3892[1U] = 0U;
        __Vtemp3892[2U] = 0U;
        __Vtemp3892[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3893, __Vtemp3892, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3893[3U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93047
done_reset        
    ) {
        __Vtemp3894[0U] = 1U;
        __Vtemp3894[1U] = 0U;
        __Vtemp3894[2U] = 0U;
        __Vtemp3894[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3895, __Vtemp3894, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3895[3U] 
                                         >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93050: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93050, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93058
verbose&&done_reset        
    ) {
        __Vtemp3896[0U] = 1U;
        __Vtemp3896[1U] = 0U;
        __Vtemp3896[2U] = 0U;
        __Vtemp3896[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3897, __Vtemp3896, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3897[3U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93070
done_reset        
    ) {
        __Vtemp3898[0U] = 1U;
        __Vtemp3898[1U] = 0U;
        __Vtemp3898[2U] = 0U;
        __Vtemp3898[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3899, __Vtemp3898, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3899[3U] 
                                        >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93073: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93073, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93081
verbose&&done_reset        
    ) {
        __Vtemp3900[0U] = 1U;
        __Vtemp3900[1U] = 0U;
        __Vtemp3900[2U] = 0U;
        __Vtemp3900[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3901, __Vtemp3900, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3901[3U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93093
done_reset        
    ) {
        __Vtemp3902[0U] = 1U;
        __Vtemp3902[1U] = 0U;
        __Vtemp3902[2U] = 0U;
        __Vtemp3902[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3903, __Vtemp3902, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3903[3U] 
                                         >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93096: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93096, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93104
verbose&&done_reset        
    ) {
        __Vtemp3904[0U] = 1U;
        __Vtemp3904[1U] = 0U;
        __Vtemp3904[2U] = 0U;
        __Vtemp3904[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3905, __Vtemp3904, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3905[3U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93116
done_reset        
    ) {
        __Vtemp3906[0U] = 1U;
        __Vtemp3906[1U] = 0U;
        __Vtemp3906[2U] = 0U;
        __Vtemp3906[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3907, __Vtemp3906, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3907[3U] 
                                        >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93119: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93119, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93127
verbose&&done_reset        
    ) {
        __Vtemp3908[0U] = 1U;
        __Vtemp3908[1U] = 0U;
        __Vtemp3908[2U] = 0U;
        __Vtemp3908[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3909, __Vtemp3908, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3909[3U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93139
done_reset        
    ) {
        __Vtemp3910[0U] = 1U;
        __Vtemp3910[1U] = 0U;
        __Vtemp3910[2U] = 0U;
        __Vtemp3910[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3911, __Vtemp3910, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3911[3U] 
                                         >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93142: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93142, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93150
verbose&&done_reset        
    ) {
        __Vtemp3912[0U] = 1U;
        __Vtemp3912[1U] = 0U;
        __Vtemp3912[2U] = 0U;
        __Vtemp3912[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3913, __Vtemp3912, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3913[3U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93162
done_reset        
    ) {
        __Vtemp3914[0U] = 1U;
        __Vtemp3914[1U] = 0U;
        __Vtemp3914[2U] = 0U;
        __Vtemp3914[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3915, __Vtemp3914, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3915[3U] 
                                        >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93165: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93165, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93173
verbose&&done_reset        
    ) {
        __Vtemp3916[0U] = 1U;
        __Vtemp3916[1U] = 0U;
        __Vtemp3916[2U] = 0U;
        __Vtemp3916[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3917, __Vtemp3916, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3917[3U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93185
done_reset        
    ) {
        __Vtemp3918[0U] = 1U;
        __Vtemp3918[1U] = 0U;
        __Vtemp3918[2U] = 0U;
        __Vtemp3918[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3919, __Vtemp3918, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3919[3U] 
                                         >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93188: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93188, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93196
verbose&&done_reset        
    ) {
        __Vtemp3920[0U] = 1U;
        __Vtemp3920[1U] = 0U;
        __Vtemp3920[2U] = 0U;
        __Vtemp3920[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3921, __Vtemp3920, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3921[3U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93208
done_reset        
    ) {
        __Vtemp3922[0U] = 1U;
        __Vtemp3922[1U] = 0U;
        __Vtemp3922[2U] = 0U;
        __Vtemp3922[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3923, __Vtemp3922, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3923[3U] 
                                        >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93211: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93211, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93219
verbose&&done_reset        
    ) {
        __Vtemp3924[0U] = 1U;
        __Vtemp3924[1U] = 0U;
        __Vtemp3924[2U] = 0U;
        __Vtemp3924[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3925, __Vtemp3924, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3925[3U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93231
done_reset        
    ) {
        __Vtemp3926[0U] = 1U;
        __Vtemp3926[1U] = 0U;
        __Vtemp3926[2U] = 0U;
        __Vtemp3926[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3927, __Vtemp3926, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3927[3U] 
                                         >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93234: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93234, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93242
verbose&&done_reset        
    ) {
        __Vtemp3928[0U] = 1U;
        __Vtemp3928[1U] = 0U;
        __Vtemp3928[2U] = 0U;
        __Vtemp3928[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3929, __Vtemp3928, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3929[3U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93254
done_reset        
    ) {
        __Vtemp3930[0U] = 1U;
        __Vtemp3930[1U] = 0U;
        __Vtemp3930[2U] = 0U;
        __Vtemp3930[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3931, __Vtemp3930, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3931[3U] 
                                        >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93257: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93257, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93265
verbose&&done_reset        
    ) {
        __Vtemp3932[0U] = 1U;
        __Vtemp3932[1U] = 0U;
        __Vtemp3932[2U] = 0U;
        __Vtemp3932[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3933, __Vtemp3932, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3933[3U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93277
done_reset        
    ) {
        __Vtemp3934[0U] = 1U;
        __Vtemp3934[1U] = 0U;
        __Vtemp3934[2U] = 0U;
        __Vtemp3934[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3935, __Vtemp3934, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3935[3U] 
                                         >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93280: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93280, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93288
verbose&&done_reset        
    ) {
        __Vtemp3936[0U] = 1U;
        __Vtemp3936[1U] = 0U;
        __Vtemp3936[2U] = 0U;
        __Vtemp3936[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3937, __Vtemp3936, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3937[3U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93300
done_reset        
    ) {
        __Vtemp3938[0U] = 1U;
        __Vtemp3938[1U] = 0U;
        __Vtemp3938[2U] = 0U;
        __Vtemp3938[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3939, __Vtemp3938, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3939[3U] 
                                        >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93303: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93303, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93311
verbose&&done_reset        
    ) {
        __Vtemp3940[0U] = 1U;
        __Vtemp3940[1U] = 0U;
        __Vtemp3940[2U] = 0U;
        __Vtemp3940[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3941, __Vtemp3940, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3941[3U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93323
done_reset        
    ) {
        __Vtemp3942[0U] = 1U;
        __Vtemp3942[1U] = 0U;
        __Vtemp3942[2U] = 0U;
        __Vtemp3942[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3943, __Vtemp3942, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3943[3U] 
                                         >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93326: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93326, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93334
verbose&&done_reset        
    ) {
        __Vtemp3944[0U] = 1U;
        __Vtemp3944[1U] = 0U;
        __Vtemp3944[2U] = 0U;
        __Vtemp3944[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3945, __Vtemp3944, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3945[3U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93346
done_reset        
    ) {
        __Vtemp3946[0U] = 1U;
        __Vtemp3946[1U] = 0U;
        __Vtemp3946[2U] = 0U;
        __Vtemp3946[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3947, __Vtemp3946, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3947[3U] 
                                        >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93349: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93349, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93357
verbose&&done_reset        
    ) {
        __Vtemp3948[0U] = 1U;
        __Vtemp3948[1U] = 0U;
        __Vtemp3948[2U] = 0U;
        __Vtemp3948[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3949, __Vtemp3948, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3949[3U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93369
done_reset        
    ) {
        __Vtemp3950[0U] = 1U;
        __Vtemp3950[1U] = 0U;
        __Vtemp3950[2U] = 0U;
        __Vtemp3950[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3951, __Vtemp3950, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3951[3U] 
                                         >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93372: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93372, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93380
verbose&&done_reset        
    ) {
        __Vtemp3952[0U] = 1U;
        __Vtemp3952[1U] = 0U;
        __Vtemp3952[2U] = 0U;
        __Vtemp3952[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3953, __Vtemp3952, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3953[3U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93392
done_reset        
    ) {
        __Vtemp3954[0U] = 1U;
        __Vtemp3954[1U] = 0U;
        __Vtemp3954[2U] = 0U;
        __Vtemp3954[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3955, __Vtemp3954, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3955[3U] 
                                        >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93395: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93395, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93403
verbose&&done_reset        
    ) {
        __Vtemp3956[0U] = 1U;
        __Vtemp3956[1U] = 0U;
        __Vtemp3956[2U] = 0U;
        __Vtemp3956[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3957, __Vtemp3956, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3957[3U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93415
done_reset        
    ) {
        __Vtemp3958[0U] = 1U;
        __Vtemp3958[1U] = 0U;
        __Vtemp3958[2U] = 0U;
        __Vtemp3958[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3959, __Vtemp3958, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3959[3U] 
                                         >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93418: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93418, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93426
verbose&&done_reset        
    ) {
        __Vtemp3960[0U] = 1U;
        __Vtemp3960[1U] = 0U;
        __Vtemp3960[2U] = 0U;
        __Vtemp3960[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3961, __Vtemp3960, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3961[3U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93438
done_reset        
    ) {
        __Vtemp3962[0U] = 1U;
        __Vtemp3962[1U] = 0U;
        __Vtemp3962[2U] = 0U;
        __Vtemp3962[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3963, __Vtemp3962, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3963[3U] 
                                        >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93441: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93441, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93449
verbose&&done_reset        
    ) {
        __Vtemp3964[0U] = 1U;
        __Vtemp3964[1U] = 0U;
        __Vtemp3964[2U] = 0U;
        __Vtemp3964[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3965, __Vtemp3964, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3965[3U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93461
done_reset        
    ) {
        __Vtemp3966[0U] = 1U;
        __Vtemp3966[1U] = 0U;
        __Vtemp3966[2U] = 0U;
        __Vtemp3966[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3967, __Vtemp3966, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3967[3U] 
                                         >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93464: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93464, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93472
verbose&&done_reset        
    ) {
        __Vtemp3968[0U] = 1U;
        __Vtemp3968[1U] = 0U;
        __Vtemp3968[2U] = 0U;
        __Vtemp3968[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3969, __Vtemp3968, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3969[3U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93484
done_reset        
    ) {
        __Vtemp3970[0U] = 1U;
        __Vtemp3970[1U] = 0U;
        __Vtemp3970[2U] = 0U;
        __Vtemp3970[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3971, __Vtemp3970, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3971[3U] 
                                        >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93487: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93487, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93495
verbose&&done_reset        
    ) {
        __Vtemp3972[0U] = 1U;
        __Vtemp3972[1U] = 0U;
        __Vtemp3972[2U] = 0U;
        __Vtemp3972[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3973, __Vtemp3972, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3973[3U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93507
done_reset        
    ) {
        __Vtemp3974[0U] = 1U;
        __Vtemp3974[1U] = 0U;
        __Vtemp3974[2U] = 0U;
        __Vtemp3974[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3975, __Vtemp3974, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3975[3U] 
                                         >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93510: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93510, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93518
verbose&&done_reset        
    ) {
        __Vtemp3976[0U] = 1U;
        __Vtemp3976[1U] = 0U;
        __Vtemp3976[2U] = 0U;
        __Vtemp3976[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3977, __Vtemp3976, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3977[3U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93530
done_reset        
    ) {
        __Vtemp3978[0U] = 1U;
        __Vtemp3978[1U] = 0U;
        __Vtemp3978[2U] = 0U;
        __Vtemp3978[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3979, __Vtemp3978, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3979[3U] 
                                        >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93533: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93533, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93541
verbose&&done_reset        
    ) {
        __Vtemp3980[0U] = 1U;
        __Vtemp3980[1U] = 0U;
        __Vtemp3980[2U] = 0U;
        __Vtemp3980[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3981, __Vtemp3980, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3981[3U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93553
done_reset        
    ) {
        __Vtemp3982[0U] = 1U;
        __Vtemp3982[1U] = 0U;
        __Vtemp3982[2U] = 0U;
        __Vtemp3982[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3983, __Vtemp3982, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3983[3U] 
                                         >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93556: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93556, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93564
verbose&&done_reset        
    ) {
        __Vtemp3984[0U] = 1U;
        __Vtemp3984[1U] = 0U;
        __Vtemp3984[2U] = 0U;
        __Vtemp3984[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3985, __Vtemp3984, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3985[3U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93576
done_reset        
    ) {
        __Vtemp3986[0U] = 1U;
        __Vtemp3986[1U] = 0U;
        __Vtemp3986[2U] = 0U;
        __Vtemp3986[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3987, __Vtemp3986, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3987[3U] 
                                        >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93579: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93579, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93587
verbose&&done_reset        
    ) {
        __Vtemp3988[0U] = 1U;
        __Vtemp3988[1U] = 0U;
        __Vtemp3988[2U] = 0U;
        __Vtemp3988[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3989, __Vtemp3988, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3989[3U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93599
done_reset        
    ) {
        __Vtemp3990[0U] = 1U;
        __Vtemp3990[1U] = 0U;
        __Vtemp3990[2U] = 0U;
        __Vtemp3990[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3991, __Vtemp3990, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3991[3U] 
                                         >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93602: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93602, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93610
verbose&&done_reset        
    ) {
        __Vtemp3992[0U] = 1U;
        __Vtemp3992[1U] = 0U;
        __Vtemp3992[2U] = 0U;
        __Vtemp3992[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3993, __Vtemp3992, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3993[3U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93622
done_reset        
    ) {
        __Vtemp3994[0U] = 1U;
        __Vtemp3994[1U] = 0U;
        __Vtemp3994[2U] = 0U;
        __Vtemp3994[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3995, __Vtemp3994, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp3995[3U] 
                                        >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93625: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93625, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93633
verbose&&done_reset        
    ) {
        __Vtemp3996[0U] = 1U;
        __Vtemp3996[1U] = 0U;
        __Vtemp3996[2U] = 0U;
        __Vtemp3996[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3997, __Vtemp3996, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3997[3U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93645
done_reset        
    ) {
        __Vtemp3998[0U] = 1U;
        __Vtemp3998[1U] = 0U;
        __Vtemp3998[2U] = 0U;
        __Vtemp3998[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp3999, __Vtemp3998, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp3999[3U] 
                                         >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93648: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93648, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93656
verbose&&done_reset        
    ) {
        __Vtemp4000[0U] = 1U;
        __Vtemp4000[1U] = 0U;
        __Vtemp4000[2U] = 0U;
        __Vtemp4000[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4001, __Vtemp4000, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4001[3U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93668
done_reset        
    ) {
        __Vtemp4002[0U] = 1U;
        __Vtemp4002[1U] = 0U;
        __Vtemp4002[2U] = 0U;
        __Vtemp4002[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4003, __Vtemp4002, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4003[3U] 
                                        >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93671: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93671, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93679
verbose&&done_reset        
    ) {
        __Vtemp4004[0U] = 1U;
        __Vtemp4004[1U] = 0U;
        __Vtemp4004[2U] = 0U;
        __Vtemp4004[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4005, __Vtemp4004, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4005[3U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93691
done_reset        
    ) {
        __Vtemp4006[0U] = 1U;
        __Vtemp4006[1U] = 0U;
        __Vtemp4006[2U] = 0U;
        __Vtemp4006[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4007, __Vtemp4006, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4007[3U] 
                                         >> 0x10U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93694: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93694, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93702
verbose&&done_reset        
    ) {
        __Vtemp4008[0U] = 1U;
        __Vtemp4008[1U] = 0U;
        __Vtemp4008[2U] = 0U;
        __Vtemp4008[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4009, __Vtemp4008, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4009[3U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93714
done_reset        
    ) {
        __Vtemp4010[0U] = 1U;
        __Vtemp4010[1U] = 0U;
        __Vtemp4010[2U] = 0U;
        __Vtemp4010[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4011, __Vtemp4010, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4011[3U] 
                                        >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93717: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93717, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93725
verbose&&done_reset        
    ) {
        __Vtemp4012[0U] = 1U;
        __Vtemp4012[1U] = 0U;
        __Vtemp4012[2U] = 0U;
        __Vtemp4012[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4013, __Vtemp4012, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4013[3U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93737
done_reset        
    ) {
        __Vtemp4014[0U] = 1U;
        __Vtemp4014[1U] = 0U;
        __Vtemp4014[2U] = 0U;
        __Vtemp4014[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4015, __Vtemp4014, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4015[3U] 
                                         >> 0x11U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93740: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93740, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93748
verbose&&done_reset        
    ) {
        __Vtemp4016[0U] = 1U;
        __Vtemp4016[1U] = 0U;
        __Vtemp4016[2U] = 0U;
        __Vtemp4016[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4017, __Vtemp4016, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4017[3U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93760
done_reset        
    ) {
        __Vtemp4018[0U] = 1U;
        __Vtemp4018[1U] = 0U;
        __Vtemp4018[2U] = 0U;
        __Vtemp4018[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4019, __Vtemp4018, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4019[3U] 
                                        >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93763: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93763, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93771
verbose&&done_reset        
    ) {
        __Vtemp4020[0U] = 1U;
        __Vtemp4020[1U] = 0U;
        __Vtemp4020[2U] = 0U;
        __Vtemp4020[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4021, __Vtemp4020, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4021[3U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93783
done_reset        
    ) {
        __Vtemp4022[0U] = 1U;
        __Vtemp4022[1U] = 0U;
        __Vtemp4022[2U] = 0U;
        __Vtemp4022[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4023, __Vtemp4022, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4023[3U] 
                                         >> 0x12U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93786: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93786, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93794
verbose&&done_reset        
    ) {
        __Vtemp4024[0U] = 1U;
        __Vtemp4024[1U] = 0U;
        __Vtemp4024[2U] = 0U;
        __Vtemp4024[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4025, __Vtemp4024, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4025[3U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93806
done_reset        
    ) {
        __Vtemp4026[0U] = 1U;
        __Vtemp4026[1U] = 0U;
        __Vtemp4026[2U] = 0U;
        __Vtemp4026[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4027, __Vtemp4026, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4027[3U] 
                                        >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93809: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93809, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93817
verbose&&done_reset        
    ) {
        __Vtemp4028[0U] = 1U;
        __Vtemp4028[1U] = 0U;
        __Vtemp4028[2U] = 0U;
        __Vtemp4028[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4029, __Vtemp4028, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4029[3U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93829
done_reset        
    ) {
        __Vtemp4030[0U] = 1U;
        __Vtemp4030[1U] = 0U;
        __Vtemp4030[2U] = 0U;
        __Vtemp4030[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4031, __Vtemp4030, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4031[3U] 
                                         >> 0x13U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93832: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93832, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93840
verbose&&done_reset        
    ) {
        __Vtemp4032[0U] = 1U;
        __Vtemp4032[1U] = 0U;
        __Vtemp4032[2U] = 0U;
        __Vtemp4032[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4033, __Vtemp4032, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4033[3U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93852
done_reset        
    ) {
        __Vtemp4034[0U] = 1U;
        __Vtemp4034[1U] = 0U;
        __Vtemp4034[2U] = 0U;
        __Vtemp4034[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4035, __Vtemp4034, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4035[3U] 
                                        >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93855: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93855, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93863
verbose&&done_reset        
    ) {
        __Vtemp4036[0U] = 1U;
        __Vtemp4036[1U] = 0U;
        __Vtemp4036[2U] = 0U;
        __Vtemp4036[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4037, __Vtemp4036, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4037[3U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93875
done_reset        
    ) {
        __Vtemp4038[0U] = 1U;
        __Vtemp4038[1U] = 0U;
        __Vtemp4038[2U] = 0U;
        __Vtemp4038[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4039, __Vtemp4038, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4039[3U] 
                                         >> 0x14U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93878: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93878, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93886
verbose&&done_reset        
    ) {
        __Vtemp4040[0U] = 1U;
        __Vtemp4040[1U] = 0U;
        __Vtemp4040[2U] = 0U;
        __Vtemp4040[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4041, __Vtemp4040, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4041[3U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93898
done_reset        
    ) {
        __Vtemp4042[0U] = 1U;
        __Vtemp4042[1U] = 0U;
        __Vtemp4042[2U] = 0U;
        __Vtemp4042[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4043, __Vtemp4042, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4043[3U] 
                                        >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93901: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93901, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93909
verbose&&done_reset        
    ) {
        __Vtemp4044[0U] = 1U;
        __Vtemp4044[1U] = 0U;
        __Vtemp4044[2U] = 0U;
        __Vtemp4044[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4045, __Vtemp4044, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4045[3U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93921
done_reset        
    ) {
        __Vtemp4046[0U] = 1U;
        __Vtemp4046[1U] = 0U;
        __Vtemp4046[2U] = 0U;
        __Vtemp4046[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4047, __Vtemp4046, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4047[3U] 
                                         >> 0x15U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93924: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93924, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93932
verbose&&done_reset        
    ) {
        __Vtemp4048[0U] = 1U;
        __Vtemp4048[1U] = 0U;
        __Vtemp4048[2U] = 0U;
        __Vtemp4048[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4049, __Vtemp4048, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4049[3U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93944
done_reset        
    ) {
        __Vtemp4050[0U] = 1U;
        __Vtemp4050[1U] = 0U;
        __Vtemp4050[2U] = 0U;
        __Vtemp4050[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4051, __Vtemp4050, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4051[3U] 
                                        >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93947: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93947, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93955
verbose&&done_reset        
    ) {
        __Vtemp4052[0U] = 1U;
        __Vtemp4052[1U] = 0U;
        __Vtemp4052[2U] = 0U;
        __Vtemp4052[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4053, __Vtemp4052, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4053[3U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93967
done_reset        
    ) {
        __Vtemp4054[0U] = 1U;
        __Vtemp4054[1U] = 0U;
        __Vtemp4054[2U] = 0U;
        __Vtemp4054[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4055, __Vtemp4054, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4055[3U] 
                                         >> 0x16U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93970: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93970, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93978
verbose&&done_reset        
    ) {
        __Vtemp4056[0U] = 1U;
        __Vtemp4056[1U] = 0U;
        __Vtemp4056[2U] = 0U;
        __Vtemp4056[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4057, __Vtemp4056, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4057[3U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:93990
done_reset        
    ) {
        __Vtemp4058[0U] = 1U;
        __Vtemp4058[1U] = 0U;
        __Vtemp4058[2U] = 0U;
        __Vtemp4058[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4059, __Vtemp4058, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4059[3U] 
                                        >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:93993: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 93993, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94001
verbose&&done_reset        
    ) {
        __Vtemp4060[0U] = 1U;
        __Vtemp4060[1U] = 0U;
        __Vtemp4060[2U] = 0U;
        __Vtemp4060[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4061, __Vtemp4060, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4061[3U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94013
done_reset        
    ) {
        __Vtemp4062[0U] = 1U;
        __Vtemp4062[1U] = 0U;
        __Vtemp4062[2U] = 0U;
        __Vtemp4062[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4063, __Vtemp4062, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4063[3U] 
                                         >> 0x17U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94016: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94016, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94024
verbose&&done_reset        
    ) {
        __Vtemp4064[0U] = 1U;
        __Vtemp4064[1U] = 0U;
        __Vtemp4064[2U] = 0U;
        __Vtemp4064[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4065, __Vtemp4064, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4065[3U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94036
done_reset        
    ) {
        __Vtemp4066[0U] = 1U;
        __Vtemp4066[1U] = 0U;
        __Vtemp4066[2U] = 0U;
        __Vtemp4066[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4067, __Vtemp4066, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4067[3U] 
                                        >> 0x17U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94039: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94039, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94047
verbose&&done_reset        
    ) {
        __Vtemp4068[0U] = 1U;
        __Vtemp4068[1U] = 0U;
        __Vtemp4068[2U] = 0U;
        __Vtemp4068[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4069, __Vtemp4068, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4069[3U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94059
done_reset        
    ) {
        __Vtemp4070[0U] = 1U;
        __Vtemp4070[1U] = 0U;
        __Vtemp4070[2U] = 0U;
        __Vtemp4070[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4071, __Vtemp4070, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4071[3U] 
                                         >> 0x18U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94062: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94062, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94070
verbose&&done_reset        
    ) {
        __Vtemp4072[0U] = 1U;
        __Vtemp4072[1U] = 0U;
        __Vtemp4072[2U] = 0U;
        __Vtemp4072[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4073, __Vtemp4072, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4073[3U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94082
done_reset        
    ) {
        __Vtemp4074[0U] = 1U;
        __Vtemp4074[1U] = 0U;
        __Vtemp4074[2U] = 0U;
        __Vtemp4074[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4075, __Vtemp4074, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4075[3U] 
                                        >> 0x18U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94085: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94085, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94093
verbose&&done_reset        
    ) {
        __Vtemp4076[0U] = 1U;
        __Vtemp4076[1U] = 0U;
        __Vtemp4076[2U] = 0U;
        __Vtemp4076[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4077, __Vtemp4076, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4077[3U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94105
done_reset        
    ) {
        __Vtemp4078[0U] = 1U;
        __Vtemp4078[1U] = 0U;
        __Vtemp4078[2U] = 0U;
        __Vtemp4078[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4079, __Vtemp4078, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4079[3U] 
                                         >> 0x19U) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94108: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94108, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94116
verbose&&done_reset        
    ) {
        __Vtemp4080[0U] = 1U;
        __Vtemp4080[1U] = 0U;
        __Vtemp4080[2U] = 0U;
        __Vtemp4080[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4081, __Vtemp4080, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4081[3U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94128
done_reset        
    ) {
        __Vtemp4082[0U] = 1U;
        __Vtemp4082[1U] = 0U;
        __Vtemp4082[2U] = 0U;
        __Vtemp4082[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4083, __Vtemp4082, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4083[3U] 
                                        >> 0x19U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94131: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94131, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94139
verbose&&done_reset        
    ) {
        __Vtemp4084[0U] = 1U;
        __Vtemp4084[1U] = 0U;
        __Vtemp4084[2U] = 0U;
        __Vtemp4084[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4085, __Vtemp4084, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4085[3U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94151
done_reset        
    ) {
        __Vtemp4086[0U] = 1U;
        __Vtemp4086[1U] = 0U;
        __Vtemp4086[2U] = 0U;
        __Vtemp4086[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4087, __Vtemp4086, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4087[3U] 
                                         >> 0x1aU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94154: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94154, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94162
verbose&&done_reset        
    ) {
        __Vtemp4088[0U] = 1U;
        __Vtemp4088[1U] = 0U;
        __Vtemp4088[2U] = 0U;
        __Vtemp4088[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4089, __Vtemp4088, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4089[3U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94174
done_reset        
    ) {
        __Vtemp4090[0U] = 1U;
        __Vtemp4090[1U] = 0U;
        __Vtemp4090[2U] = 0U;
        __Vtemp4090[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4091, __Vtemp4090, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4091[3U] 
                                        >> 0x1aU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94177: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94177, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94185
verbose&&done_reset        
    ) {
        __Vtemp4092[0U] = 1U;
        __Vtemp4092[1U] = 0U;
        __Vtemp4092[2U] = 0U;
        __Vtemp4092[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4093, __Vtemp4092, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4093[3U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94197
done_reset        
    ) {
        __Vtemp4094[0U] = 1U;
        __Vtemp4094[1U] = 0U;
        __Vtemp4094[2U] = 0U;
        __Vtemp4094[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4095, __Vtemp4094, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4095[3U] 
                                         >> 0x1bU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94200: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94200, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94208
verbose&&done_reset        
    ) {
        __Vtemp4096[0U] = 1U;
        __Vtemp4096[1U] = 0U;
        __Vtemp4096[2U] = 0U;
        __Vtemp4096[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4097, __Vtemp4096, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4097[3U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94220
done_reset        
    ) {
        __Vtemp4098[0U] = 1U;
        __Vtemp4098[1U] = 0U;
        __Vtemp4098[2U] = 0U;
        __Vtemp4098[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4099, __Vtemp4098, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4099[3U] 
                                        >> 0x1bU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94223: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94223, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94231
verbose&&done_reset        
    ) {
        __Vtemp4100[0U] = 1U;
        __Vtemp4100[1U] = 0U;
        __Vtemp4100[2U] = 0U;
        __Vtemp4100[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4101, __Vtemp4100, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4101[3U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94243
done_reset        
    ) {
        __Vtemp4102[0U] = 1U;
        __Vtemp4102[1U] = 0U;
        __Vtemp4102[2U] = 0U;
        __Vtemp4102[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4103, __Vtemp4102, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4103[3U] 
                                         >> 0x1cU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94246: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94246, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94254
verbose&&done_reset        
    ) {
        __Vtemp4104[0U] = 1U;
        __Vtemp4104[1U] = 0U;
        __Vtemp4104[2U] = 0U;
        __Vtemp4104[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4105, __Vtemp4104, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4105[3U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94266
done_reset        
    ) {
        __Vtemp4106[0U] = 1U;
        __Vtemp4106[1U] = 0U;
        __Vtemp4106[2U] = 0U;
        __Vtemp4106[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4107, __Vtemp4106, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4107[3U] 
                                        >> 0x1cU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94269: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94269, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94277
verbose&&done_reset        
    ) {
        __Vtemp4108[0U] = 1U;
        __Vtemp4108[1U] = 0U;
        __Vtemp4108[2U] = 0U;
        __Vtemp4108[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4109, __Vtemp4108, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4109[3U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94289
done_reset        
    ) {
        __Vtemp4110[0U] = 1U;
        __Vtemp4110[1U] = 0U;
        __Vtemp4110[2U] = 0U;
        __Vtemp4110[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4111, __Vtemp4110, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4111[3U] 
                                         >> 0x1dU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94292: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94292, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94300
verbose&&done_reset        
    ) {
        __Vtemp4112[0U] = 1U;
        __Vtemp4112[1U] = 0U;
        __Vtemp4112[2U] = 0U;
        __Vtemp4112[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4113, __Vtemp4112, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4113[3U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94312
done_reset        
    ) {
        __Vtemp4114[0U] = 1U;
        __Vtemp4114[1U] = 0U;
        __Vtemp4114[2U] = 0U;
        __Vtemp4114[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4115, __Vtemp4114, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4115[3U] 
                                        >> 0x1dU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94315: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94315, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94323
verbose&&done_reset        
    ) {
        __Vtemp4116[0U] = 1U;
        __Vtemp4116[1U] = 0U;
        __Vtemp4116[2U] = 0U;
        __Vtemp4116[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4117, __Vtemp4116, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4117[3U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94335
done_reset        
    ) {
        __Vtemp4118[0U] = 1U;
        __Vtemp4118[1U] = 0U;
        __Vtemp4118[2U] = 0U;
        __Vtemp4118[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4119, __Vtemp4118, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4119[3U] 
                                         >> 0x1eU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94338: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94338, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94346
verbose&&done_reset        
    ) {
        __Vtemp4120[0U] = 1U;
        __Vtemp4120[1U] = 0U;
        __Vtemp4120[2U] = 0U;
        __Vtemp4120[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4121, __Vtemp4120, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4121[3U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94358
done_reset        
    ) {
        __Vtemp4122[0U] = 1U;
        __Vtemp4122[1U] = 0U;
        __Vtemp4122[2U] = 0U;
        __Vtemp4122[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4123, __Vtemp4122, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4123[3U] 
                                        >> 0x1eU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94361: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94361, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94369
verbose&&done_reset        
    ) {
        __Vtemp4124[0U] = 1U;
        __Vtemp4124[1U] = 0U;
        __Vtemp4124[2U] = 0U;
        __Vtemp4124[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4125, __Vtemp4124, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4125[3U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94381
done_reset        
    ) {
        __Vtemp4126[0U] = 1U;
        __Vtemp4126[1U] = 0U;
        __Vtemp4126[2U] = 0U;
        __Vtemp4126[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4127, __Vtemp4126, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount));
        if (VL_UNLIKELY((1U & (~ (((~ (((__Vtemp4127[3U] 
                                         >> 0x1fU) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94384: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94384, "");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94392
verbose&&done_reset        
    ) {
        __Vtemp4128[0U] = 1U;
        __Vtemp4128[1U] = 0U;
        __Vtemp4128[2U] = 0U;
        __Vtemp4128[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4129, __Vtemp4128, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4129[3U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
        }
    }
    if (
        // $c function at /opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v:94404
done_reset        
    ) {
        __Vtemp4130[0U] = 1U;
        __Vtemp4130[1U] = 0U;
        __Vtemp4130[2U] = 0U;
        __Vtemp4130[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp4131, __Vtemp4130, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_bits_id));
        if (VL_UNLIKELY((1U & (~ (((~ ((__Vtemp4131[3U] 
                                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T))) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128))) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut_reset)))))) {
            VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.DefaultConfigRBB.v:94407: Assertion failed in %NTestHarness.ldut.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4\n",
                      64,VL_TIME_Q(),vlSymsp->name());
            VL_STOP_MT("/opt/shared/user/hoangvm/rocket-chip/emulator/generated-src/freechips.rocketchip.system.DefaultConfigRBB.v", 94407, "");
        }
    }
}
