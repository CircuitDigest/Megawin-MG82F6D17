/**
 ******************************************************************************
 *
 * @file        MG82F6D17_KBI_DRV.H
 *
 * @brief       This is the C code format driver head file.
 *
 * @par         Project
 *              MG82F6D17
 * @version     V0.02
 * @date        2020/01/07
 * @copyright   Copyright (c) 2019 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par         Disclaimer
 *      The Demo software is provided "AS IF"  without any warranty, either
 *      expressed or implied, including, but not limited to, the implied warranties
 *      of merchantability and fitness for a particular purpose.  The author will
 *      not be liable for any special, incidental, consequential or indirect
 *      damages due to loss of data or any other reason.
 *      These statements agree with the world wide and local dictated laws about
 *      authorship and violence against these laws.
 ******************************************************************************
 ******************************************************************************
 */

 
#ifndef _MG82F6D17_KBI_DRV_H
#define _MG82F6D17_KBI_DRV_H

/// @cond DRV_KBI_Wizard
//*** <<< Use Configuration Wizard in Context Menu >>> ***
// <h> Initialize Keypad Interrupt
//  <i> KBI Keypad Interrupt enable or disable by "MG82F6D17_WIZARD.c" option
//    <o0> KBI Pin01Mux Select <0x00=> KBI0=P1.0, KBI1=P1.1 (Default) <0x08=> KBI0=P4.7, KBI1=P3.3
//     <i> The setting only change the parameter of "__DRV_KBI01_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally 
//    <o1> KBI Pin23Mux Select <0x00=> KBI2=P3.0, KBI3=P3.1 (Default) <0x10=> KBI2=P2.2, KBI3=P2.4
//     <i> The setting only change the parameter of "__DRV_KBI23_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally 
//    <o2> KBI Pin45Mux Select <0x00=> KBI4=P3.3, KBI5=P1.5 (Default) <0x40=> KBI4=P3.4, KBI5=P3.5 <0x80=> KBI4=P6.0, KBI5=P6.1 <0xC0=> KBI4=P1.5, KBI5=P3.3
//     <i> The setting only change the parameter of "__DRV_KBI45_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally 
//    <o3> KBI Pin67Mux Select <0x00=> KBI6=P1.6, KBI7=P1.7 (Default) <0x20=> KBI6=P3.0, KBI7=P3.1
//     <i> The setting only change the parameter of "__DRV_KBI67_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally 
//    <o4> KBI Matching Polarity Select <0x00=> Not equal (Default) <0x02=> Equal
//     <i> The setting only change the parameter of "__DRV_KBI_PatternMatchingType_Select(__SELECT__);"
//    <o5> KBI TriggerType Select <0x00=> Level (Default) <0x20=> Edge
//     <i> The setting only change the parameter of "__DRV_KBI_TriggerType_Select(__SELECT__);"
//    <o6> KBI FilterMode Select <0x00=> Disabled (Default) <0x40=> SYSCLK x 3 <0x80=> SYSCLK/6 x 3 <0xC0=> S0TOF x 3
//     <i> The setting only change the parameter of "__DRV_KBI_FilterMode_Select(KBI_FILTER_MODE_TYPE);"
    #define KBI_INPUT_PIN01_SELECTION        0x00
    #define KBI_INPUT_PIN23_SELECTION        0x00
    #define KBI_INPUT_PIN45_SELECTION        0x00
    #define KBI_INPUT_PIN67_SELECTION        0x00
    #define KBI_PATTERN_MATCHING_SELECTION   0x00
    #define KBI_TRIGGER_TYPE                 0x00
    #define KBI_FILTER_MODE_TYPE             0x00
//    <e0> KBI Pin0 Enable
//      <i> KBI Pin0 enable or disable by user option
    #define KBI_PIN0_SELECT        0
//      <o0> KBI_Pin0 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin0 pattern type select
        #define KBI_PIN0_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin1 Enable
//      <i> KBI Pin1 enable or disable by user option
        #define KBI_PIN1_SELECT        0
//      <o0> KBI_Pin1 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin1 pattern type select
        #define KBI_PIN1_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin2 Enable
//      <i> KBI Pin2 enable or disable by user option
        #define KBI_PIN2_SELECT        0
//      <o0> KBI_Pin2 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin2 pattern type select
        #define KBI_PIN2_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin3 Enable
//      <i> KBI Pin3 enable or disable by user option
        #define KBI_PIN3_SELECT        0
//      <o0> KBI_Pin3 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin3 pattern type select
        #define KBI_PIN3_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin4 Enable
//      <i> KBI Pin4 enable or disable by user option
        #define KBI_PIN4_SELECT        0
//      <o0> KBI_Pin4 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin4 pattern type select
        #define KBI_PIN4_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin5 Enable
//      <i> KBI Pin5 enable or disable by user option
        #define KBI_PIN5_SELECT        0
//      <o0> KBI_Pin5 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin5 pattern type select
        #define KBI_PIN5_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin6 Enable
//      <i> KBI Pin6 enable or disable by user option
        #define KBI_PIN6_SELECT        0
//      <o0> KBI_Pin6 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin6 pattern type select
        #define KBI_PIN6_PATTERN_TYPE        0x01
//    </e>
//    <e0> KBI Pin7 Enable
//      <i> KBI Pin7 enable or disable by user option
        #define KBI_PIN7_SELECT        0
//      <o0> KBI_Pin7 Pattern  <0x00=> 0 <0x01=> 1 (Default)
//       <i> KBI pin7 pattern type select
        #define KBI_PIN7_PATTERN_TYPE        0x01
//    </e>
// </h>
// <<< end of configuration section >>>
/// @endcond

/// @cond __DRV_KBI_Pin01Mux_Select
#define KBI0_P10_KBI1_P11     0x00
#define KBI0_P47_KBI1_P33     0x08
/// @endcond

/// @cond __DRV_KBI_Pin23Mux_Select
#define KBI2_P30_KBI3_P31     0x00
#define KBI2_P22_KBI3_P24     0x10
/// @endcond

/// @cond __DRV_KBI_Pin45Mux_Select
#define KBI4_P33_KBI5_P15     0x00
#define KBI4_P34_KBI5_P35     0x40
#define KBI4_P60_KBI5_P61     0x80
#define KBI4_P15_KBI5_P33     0xC0
/// @endcond

/// @cond __DRV_KBI_Pin67Mux_Select
#define KBI6_P16_KBI7_P17     0x00
#define KBI6_P30_KBI7_P31     0x20
/// @endcond

/// @cond __DRV_KBI_TriggerType_Select
#define KBI_TRIGGER_TYPE_LEVEL    0x00
#define KBI_TRIGGER_TYPE_EDGE     0x20
/// @endcond

/// @cond __DRV_KBI_PatternMatchingType_Select
#define KBI_MATCHING_TYPE_NOT_EQUAL_PATTERN    0x00
#define KBI_MATCHING_TYPE_EQUAL_PATTERN        0x02
/// @endcond

/// @cond __DRV_KBI_Priority_Select
#define KBI_PRIORITY_LOWEST           0x0000
#define KBI_PRIORITY_MIDDLE_LOW       0x0020
#define KBI_PRIORITY_MIDDLE_HIGH      0x2000
#define KBI_PRIORITY_HIGHEST          0x2020
/// @endcond

/// @cond __DRV_KBI_FilterMode_Select
#define KBI_FILTER_DISABLE          0x00
#define KBI_FILTER_SYSCLK_X3        0x40
#define KBI_FILTER_SYSCLK_DIV6X3    0x80
#define KBI_FILTER_S0TOF            0xC0
/// @endcond

/**
 *******************************************************************************
 * @brief       Enable KBI interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_IT_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_IT_Enable()\
    MWT(\
        EIE1 |= EKB;\
    )


/**
 *******************************************************************************
 * @brief       Disable KBI interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_IT_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_IT_Disable()\
    MWT(\
        EIE1 &= ~EKB;\
    )


/**
 *******************************************************************************
 * @brief       Enable/Disable KBI interrupt
 * @details
 * @param[in]   \_\_STATE\_\_ : config inversion control bit
 *  @arg\b      DISABLE : Set KBI interrupt disable (default)
 *  @arg\b      ENABLE : Set KBI interrupt enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_IT_Cmd(__STATE__)\
    (__STATE__==ENABLE?(EIE1 |= EKB):(EIE1 &= ~EKB))


/**
 *******************************************************************************
 * @brief       Set KBI interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_SetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_SetFlag()\
    MWT(\
        KBCON |= KBIF;\
    )


/**
 *******************************************************************************
 * @brief       Get KBI interrupt flag
 * @details
 * @return      return KBIF status
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_GetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_GetFlag()    (KBCON & KBIF)



/**
 *******************************************************************************
 * @brief       Clear KBI interrupt flag
 * @details 
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_ClearFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_ClearFlag()\
    MWT(\
        KBCON &= ~KBIF;\
    )



/**
 *******************************************************************************
 * @brief       Set KBI0&KBI1 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI0 and KBI1 input pin source
 *  @arg\b      KBI0_P10_KBI1_P11: Set KBI0 and KBI1 input pin source to P10 and P11 (default)
 *  @arg\b      KBI0_P47_KBI1_P33: Set KBI0 and KBI1 input pin source to P47 and P33
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Pin01Mux_Select(KBI0_P10_KBI1_P11);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Pin01Mux_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(5);\
        AUXR8 &= ~KBI0PS0;\
        AUXR8 |= __SELECT__;\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Set KBI2&KBI3 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI2 and KBI3 input pin source
 *  @arg\b      KBI2_P30_KBI3_P31: Set KBI2 and KBI3 input pin source to P30 and P31 (default)
 *  @arg\b      KBI2_P22_KBI3_P24: Set KBI2 and KBI3 input pin source to P22 and P24
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Pin23Mux_Select(KBI2_P22_KBI3_P24);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Pin23Mux_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(3);\
        AUXR6 &= ~KBI2PS0;\
        AUXR6 |= __SELECT__;\
        __DRV_SFR_PageIndex(0);\
    )

/**
 *******************************************************************************
 * @brief       Set KBI4&KBI5 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI4 and KBI5 input pin source
 *  @arg\b      KBI4_P33_KBI5_P15: Set KBI4 and KBI5 input pin source to P33 and P15 (default)
 *  @arg\b      KBI4_P34_KBI5_P35: Set KBI4 and KBI5 input pin source to P34 and P35
 *  @arg\b      KBI4_P60_KBI5_P61: Set KBI4 and KBI5 input pin source to P60 and P61
 *  @arg\b      KBI4_P15_KBI5_P33: Set KBI4 and KBI5 input pin source to P15 and P33
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Pin45Mux_Select(KBI4_P34_KBI5_P35);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Pin45Mux_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(3);\
        AUXR6 &= ~(KBI4PS1 | KBI4PS0);\
        AUXR6 |= __SELECT__;\
        __DRV_SFR_PageIndex(0);\
    )

/**
 *******************************************************************************
 * @brief       Set KBI6&KBI7 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI6 and KBI7 input pin source
 *  @arg\b      KBI6_P16_KBI7_P17: Set KBI6 and KBI7 input pin source to P16 and P17 (default)
 *  @arg\b      KBI6_P30_KBI7_P31: Set KBI6 and KBI7 input pin source to P30 and P31
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI67_PinMux_Select(KBI6_P16_KBI7_P17);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Pin67Mux_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(3);\
        AUXR6 &= ~KBI6PS0;\
        AUXR6 |= __SELECT__;\
        __DRV_SFR_PageIndex(0);\
    )

/**
 *******************************************************************************
 * @brief       Set KBI event trigger type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI event trigger type
 *  @arg\b      KBI_TRIGGER_TYPE_LEVEL: Set KBI event trigger type to level trigger (default)
 *  @arg\b      KBI_TRIGGER_TYPE_EDGE: Set KBI event trigger type to edge trigger
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_TriggerType_Select(KBI_TRIGGER_TYPE_EDGE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_TriggerType_Select(__SELECT__)\
    MWT(\
        KBCON &= ~KBES;\
        KBCON |= __SELECT__;\
    )


/**
 *******************************************************************************
 * @brief       Set KBI pattern matching polarity type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI pattern matching polarity type
 *  @arg\b      KBI_MATCHING_TYPE_NOT_EQUAL_PATTERN: Set to not equal pattern trigger KBI interrupt (default)
 *  @arg\b      KBI_MATCHING_TYPE_EQUAL_PATTERN: Set to equal pattern trigger KBI interrupt
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_PatternMatchingType_Select(KBI_MATCHING_TYPE_EQUAL_PATTERN);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_PatternMatchingType_Select(__SELECT__)\
    MWT(\
        KBCON &= ~PATN_SEL;\
        KBCON |= __SELECT__;\
    )

/**
 *******************************************************************************
 * @brief       Set KBI interrupt priority
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI interrupt priority level
 *  @arg\b      KBI_PRIORITY_LOWEST: Set KBI interrupt priority to lowest level (default)
 *  @arg\b      KBI_PRIORITY_MIDDLE_LOW: Set KBI interrupt priority to middle low level
 *  @arg\b      KBI_PRIORITY_MIDDLE_HIGH: Set KBI interrupt priority to middle high level
 *  @arg\b      KBI_PRIORITY_HIGHEST: Set KBI interrupt priority to highest level
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Priority_Select(KBI_PRIORITY_LOWEST);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Priority_Select(__SELECT__)\
    MWT(\
        EIP1L &= ~PKBL;\
        EIP1L |= LOBYTE(__SELECT__);\
        EIP1H &= ~PKBH;\
        EIP1H |= HIBYTE(__SELECT__);\
    )

/**
 *******************************************************************************
 * @brief       Set KBI filter mode type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set KBI filter mode type
 *  @arg\b      KBI_FILTER_DISABLE: Disable KBI filter mode type (default)
 *  @arg\b      KBI_FILTER_SYSCLKx3: Set KBI filter mode type to SYSCLKx3
 *  @arg\b      KBI_FILTER_SYSCLKDIV6x3: Set KBI filter mode type to SYSCLK/6x3
 *  @arg\b      KBI_FILTER_S0TOF: Set KBI filter mode type to S0TOF
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_FilterMode_Select(KBI_FILTER_DISABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_FilterMode_Select(__SELECT__)\
    MWT(\
        KBCON &= ~(KBCS1 | KBCS0);\	 
        KBCON |= __SELECT__;\
    )




/**
 *******************************************************************************
 * @brief       Set KBI pattern
 * @details
 * @param[in]   \_\_PATTERN\_\_ : Set KBI pattern to KBPATN (0x00 ~ 0xFF)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_SetPattern(0xFF);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_SetPattern(__PATTERN__)\
    MWT(\
        KBPATN = __PATTERN__;\
    )




/**
 *******************************************************************************
 * @brief       Set KBI port pin mask
 * @details
 * @param[in]   \_\_MASK\_\_ : Set KBI interrupt mask bit to KBMASK (0x00 ~ 0xFF)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_SetPortPinMask(0xF0);
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_SetPortPinMask(__MASK__)\
    MWT(\
        KBMASK = __MASK__;\
    )


/**
 *******************************************************************************
 * @brief       Set KBI pattern base on Wizard
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Pattern_Wizard_Config();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Pattern_Wizard_Config()\
    MWT(\
        (KBI_PIN0_SELECT==ENABLE?(KBPATN |= GF_0):(KBPATN &= ~GF_0));\
        (KBI_PIN1_SELECT==ENABLE?(KBPATN |= GF_1):(KBPATN &= ~GF_1));\
        (KBI_PIN2_SELECT==ENABLE?(KBPATN |= GF_2):(KBPATN &= ~GF_2));\
        (KBI_PIN3_SELECT==ENABLE?(KBPATN |= GF_3):(KBPATN &= ~GF_3));\
        (KBI_PIN4_SELECT==ENABLE?(KBPATN |= GF_4):(KBPATN &= ~GF_4));\
        (KBI_PIN5_SELECT==ENABLE?(KBPATN |= GF_5):(KBPATN &= ~GF_5));\
        (KBI_PIN6_SELECT==ENABLE?(KBPATN |= GF_6):(KBPATN &= ~GF_6));\
        (KBI_PIN7_SELECT==ENABLE?(KBPATN |= GF_7):(KBPATN &= ~GF_7));\
    )

/**
 *******************************************************************************
 * @brief       Set KBI Port Pin Mask on Wizard
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_PortPinMask_Wizard_Config();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_PortPinMask_Wizard_Config()\
    MWT(\
        (KBI_PIN0_PATTERN_TYPE==ENABLE?(KBMASK |= GF_0):(KBMASK &= ~GF_0));\
        (KBI_PIN1_PATTERN_TYPE==ENABLE?(KBMASK |= GF_1):(KBMASK &= ~GF_1));\
        (KBI_PIN2_PATTERN_TYPE==ENABLE?(KBMASK |= GF_2):(KBMASK &= ~GF_2));\
        (KBI_PIN3_PATTERN_TYPE==ENABLE?(KBMASK |= GF_3):(KBMASK &= ~GF_3));\
        (KBI_PIN4_PATTERN_TYPE==ENABLE?(KBMASK |= GF_4):(KBMASK &= ~GF_4));\
        (KBI_PIN5_PATTERN_TYPE==ENABLE?(KBMASK |= GF_5):(KBMASK &= ~GF_5));\
        (KBI_PIN6_PATTERN_TYPE==ENABLE?(KBMASK |= GF_6):(KBMASK &= ~GF_6));\
        (KBI_PIN7_PATTERN_TYPE==ENABLE?(KBMASK |= GF_7):(KBMASK &= ~GF_7));\
    )


/**
 *******************************************************************************
 * @brief       KBI interrupt Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_KBI_Wizard_Config();
 * @endcode
 *******************************************************************************
 */
#define __DRV_KBI_Wizard_Init()\
    MWT(\
        __DRV_KBI_Pin01Mux_Select(KBI_INPUT_PIN01_SELECTION);\
        __DRV_KBI_Pin23Mux_Select(KBI_INPUT_PIN23_SELECTION);\
        __DRV_KBI_Pin45Mux_Select(KBI_INPUT_PIN45_SELECTION);\
        __DRV_KBI_Pin67Mux_Select(KBI_INPUT_PIN67_SELECTION);\
        __DRV_KBI_Pattern_Wizard_Config();\
        __DRV_KBI_PortPinMask_Wizard_Config();\
        __DRV_KBI_PatternMatchingType_Select(KBI_PATTERN_MATCHING_SELECTION);\
        __DRV_KBI_TriggerType_Select(KBI_TRIGGER_TYPE);\
        __DRV_KBI_FilterMode_Select(KBI_FILTER_MODE_TYPE);\
    )




#endif  //_MG82F6D17_KBI_DRV_H
