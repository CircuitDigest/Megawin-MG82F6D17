/**
 ******************************************************************************
 *
 * @file        MG82F6D17_INT_DRV.H
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

 
#ifndef _MG82F6D17_INT_DRV_H
#define _MG82F6D17_INT_DRV_H

/// @cond DRV_INT_Wizard
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize External Interrupt
// <i> This only changes the parameters of "__DRV_INTx_Wizard_Init(), x=0~2"
//  <h> External Interrupt 0
//   <i> External Interrupt 0 enable or disable by "MG82F6D17_WIZARD.c" option 
//    <o0.0..15> nINT0 PinMux Select <0x0000=> P4.5 (Default) <0x0010=> P3.0 <0x0020=> P3.4 <0x0030=> P4.7 <0x4000=> P6.0 <0x4010=> P1.1 <0x4020=> P1.7 <0x4030=> P2.2
//     <i> The setting only change the parameter of "__DRV_INT0_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally 
//    <o1.0..15> nINT0 Trigger Type Select <0x0000=> Low Level (Default) <0x0001=> High Level <0x0100=> Falling Edge <0x0101=> Rising Edge
//     <i> The setting only change the parameter of "__DRV_INT0_TriggerType_Select(__SELECT__);" 
//    <o2.0..15> nINT0 FilterMode Type Select <0x0000=> Disable (Default) <0x0001=> SYSCLK X 3 <0x0100=> SYSCLK/6 X 3 <0x0101=> S0TOF X 3
//     <i> The setting only change the parameter of "__DRV_INT0_FilterMode_Select(__SELECT__);"
//  </h>
    #define nINT0_INPUT_PIN_SELECTION   0x0000
    #define nINT0_TRIGGER_TYPE          0x0000
    #define nINT0_FILTER_MODE_TYPE      0x0000
        
//  <h> External Interrupt 1
//   <i> External Interrupt 1 enable or disable by "MG82F6D17_WIZARD.c" option 
//    <o0.0..15> nINT1 PinMux Select <0x0000=> P3.3 (Default) <0x0040=> P3.1 <0x0080=> P3.5 <0x00C0=> P1.0 <0x8000=> P6.1 <0x8040=> P3.4 <0x8080=> P1.5 <0x80C0=> P2.4
//     <i> The setting only change the parameter of "__DRV_INT1_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally
//    <o1.0..15> nINT1 Trigger Type Select <0x0000=> Low Level (Default) <0x0002=> High Level <0x0400=> Falling Edge <0x0402=> Rising Edge
//     <i> The setting only change the parameter of "__DRV_INT1_TriggerType_Select(__SELECT__);"
//    <o2.0..15> nINT1 FilterMode Type Select <0x0000=> Disable (Default) <0x0002=> SYSCLK X 3 <0x0200=> SYSCLK/6 X 3 <0x0202=> S0TOF X 3
//     <i> The setting only change the parameter of "__DRV_INT1_FilterMode_Select(__SELECT__);"
//  </h>
    #define nINT1_INPUT_PIN_SELECTION   0x0000
    #define nINT1_TRIGGER_TYPE          0x0000
    #define nINT1_FILTER_MODE_TYPE      0x0000

//  <h> External Interrupt 2
//   <i> External Interrupt 2 enable or disable by "MG82F6D17_WIZARD.c" option 
//    <o0> nINT2 PinMux Select <0x00=> P4.4 (Default) <0x10=> P3.0 <0x20=> P1.1 <0x30=> P1.6
//     <i> The setting only change the parameter of "__DRV_INT2_PinMux_Select(__SELECT__);"    
//     <i> GPIO mode must be set up additionally
//    <o1> nINT2 Trigger Type Select <0x00=> Low Level (Default) <0x08=> High Level <0x01=> Falling Edge <0x09=> Rising Edge
//     <i> The setting only change the parameter of "__DRV_INT2_TriggerType_Select(__SELECT__);"
//    <o2.0..15> nINT2 FilterMode Type Select <0x0000=> Disable (Default) <0x0004=> SYSCLK X 3 <0x0400=> SYSCLK/6 X 3 <0x0404=> S0TOF X 3
//     <i> The setting only change the parameter of "__DRV_INT2_FilterMode_Select(__SELECT__);"
//  </h>
    #define nINT2_INPUT_PIN_SELECTION   0x00
    #define nINT2_TRIGGER_TYPE          0x00
    #define nINT2_FILTER_MODE_TYPE      0x0000
//</h>

// <<< end of configuration section >>>
/// @endcond

/// @cond __DRV_INT_ITEA_Cmd
#define DISABLE     0
#define ENABLE      1
/// @endcond

/// @cond __DRV_INT0_PinMux_Select
#define INT0_INPUT_PIN_SELECT_P45     0x0000
#define INT0_INPUT_PIN_SELECT_P30     0x0010
#define INT0_INPUT_PIN_SELECT_P34     0x0020
#define INT0_INPUT_PIN_SELECT_P47     0x0030
#define INT0_INPUT_PIN_SELECT_P60     0x4000
#define INT0_INPUT_PIN_SELECT_P11     0x4010
#define INT0_INPUT_PIN_SELECT_P17     0x4020
#define INT0_INPUT_PIN_SELECT_P22     0x4030
/// @endcond

/// @cond __DRV_INT0_TriggerType_Select
#define INT0_TRIGGER_TYPE_LOW_LEVEL       0x0000
#define INT0_TRIGGER_TYPE_HIGH_LEVEL      0x0001
#define INT0_TRIGGER_TYPE_FALLING_EDGE    0x0100
#define INT0_TRIGGER_TYPE_RISING_EDGE     0x0101
/// @endcond

/// @cond __DRV_INT0_Priority_Select
#define INT0_PRIORITY_LOWEST          0x0000
#define INT0_PRIORITY_MIDDLE_LOW      0x0001
#define INT0_PRIORITY_MIDDLE_HIGH     0x0100
#define INT0_PRIORITY_HIGHEST         0x0101
/// @endcond

/// @cond __DRV_INT0_FilterMode_Select
#define INT0_FILTER_DISABLE       0x0000
#define INT0_FILTER_SYSCLK_X3     0x0001
#define INT0_FILTER_SYSCLK_DIV6X3 0x0100
#define INT0_FILTER_S0TOF         0x0101
/// @endcond

/// @cond __DRV_INT1_PinMux_Select
#define INT1_INPUT_PIN_SELECT_P33     0x0000
#define INT1_INPUT_PIN_SELECT_P31     0x0040
#define INT1_INPUT_PIN_SELECT_P35     0x0080
#define INT1_INPUT_PIN_SELECT_P10     0x00C0
#define INT1_INPUT_PIN_SELECT_P61     0x8000
#define INT1_INPUT_PIN_SELECT_P34     0x8040
#define INT1_INPUT_PIN_SELECT_P15     0x8080
#define INT1_INPUT_PIN_SELECT_P24     0x80C0
/// @endcond

/// @cond __DRV_INT1_TriggerType_Select
#define INT1_TRIGGER_TYPE_LOW_LEVEL       0x0000
#define INT1_TRIGGER_TYPE_HIGH_LEVEL      0x0002
#define INT1_TRIGGER_TYPE_FALLING_EDGE    0x0400
#define INT1_TRIGGER_TYPE_RISING_EDGE     0x0402
/// @endcond

/// @cond __DRV_INT1_Priority_Select
#define INT1_PRIORITY_LOWEST          0x0000
#define INT1_PRIORITY_MIDDLE_LOW      0x0004
#define INT1_PRIORITY_MIDDLE_HIGH     0x0400
#define INT1_PRIORITY_HIGHEST         0x0404
/// @endcond

/// @cond __DRV_INT1_FilterMode_Select
#define INT1_FILTER_DISABLE       0x0000
#define INT1_FILTER_SYSCLK_X3     0x0002
#define INT1_FILTER_SYSCLK_DIV6X3 0x0200
#define INT1_FILTER_S0TOF         0x0202
/// @endcond

/// @cond __DRV_INT2_PinMux_Select
#define INT2_INPUT_PIN_SELECT_P44     0x00
#define INT2_INPUT_PIN_SELECT_P30     0x10
#define INT2_INPUT_PIN_SELECT_P11     0x20
#define INT2_INPUT_PIN_SELECT_P16     0x30
/// @endcond

/// @cond __DRV_INT2_TriggerType_Select
#define INT2_TRIGGER_TYPE_LOW_LEVEL       0x00
#define INT2_TRIGGER_TYPE_HIGH_LEVEL      0x01
#define INT2_TRIGGER_TYPE_FALLING_EDGE    0x08
#define INT2_TRIGGER_TYPE_RISING_EDGE     0x09
/// @endcond

/// @cond __DRV_INT2_Priority_Select
#define INT2_PRIORITY_LOWEST          0x0000
#define INT2_PRIORITY_MIDDLE_LOW      0x0040
#define INT2_PRIORITY_MIDDLE_HIGH     0x4000
#define INT2_PRIORITY_HIGHEST         0x4040
/// @endcond

/// @cond __DRV_INT2_FilterMode_Select
#define INT2_FILTER_DISABLE       0x0000
#define INT2_FILTER_SYSCLK_X3     0x0004
#define INT2_FILTER_SYSCLK_DIV6X3 0x0400
#define INT2_FILTER_S0TOF         0x0404
/// @endcond


/**
 *******************************************************************************
 * @brief       Global Enables all interrupts
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_ITEA_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_ITEA_Enable()\
    MWT(\
        EA = 1;\
    )


/**
 *******************************************************************************
 * @brief       Global Disables all interrupts
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_ITEA_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_ITEA_Disable()\
    MWT(\
        EA = 0;\
    )


/**
 *******************************************************************************
 * @brief       Global Enable/Disable all interrupts
 * @details
 * @param[in]   \_\_STATE\_\_ : config EA control bit
 *  @arg\b      DISABLE : Set global interrupts disable (default)
 *  @arg\b      ENABLE : Set global interrupts enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_ITEA_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_ITEA_Cmd(__STATE__)\
    MWT(\
        EA = __STATE__;\
    )


/**
 *******************************************************************************
 * @brief       Enable nINT0 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_IT_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_IT_Enable()\
    MWT(\
        EX0 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Disable nINT0 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_IT_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_IT_Disable()\
    MWT(\
        EX0 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Enable/Disable nINT0 interrupt
 * @details
 * @param[in]   \_\_STATE\_\_ : config EX0 control bit
 *  @arg\b      DISABLE : Set external interrupt 0 disable (default)
 *  @arg\b      ENABLE : Set external interrupt 0 enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_IT_Cmd(__STATE__)\
    MWT(\
        EX0 = __STATE__;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT0 interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_SetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_SetFlag()\
    MWT(\
        IE0 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Get nINT0 interrupt flag
 * @details
 * @return      IE0 : return IE0 bit status
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_GetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_GetFlag()    IE0


/**
 *******************************************************************************
 * @brief       Clear nINT0 interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_ClearFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_ClearFlag()\
    MWT(\
        IE0 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT0 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 0 input pin source
 *  @arg\b      INT0_INPUT_PIN_SELECT_P45 : Set external interrupt 0 input pin source to P45 (default)
 *  @arg\b      INT0_INPUT_PIN_SELECT_P30 : Set external interrupt 0 input pin source to P30
 *  @arg\b      INT0_INPUT_PIN_SELECT_P34 : Set external interrupt 0 input pin source to P34
 *  @arg\b      INT0_INPUT_PIN_SELECT_P47 : Set external interrupt 0 input pin source to P47
 *  @arg\b      INT0_INPUT_PIN_SELECT_P60 : Set external interrupt 0 input pin source to P60
 *  @arg\b      INT0_INPUT_PIN_SELECT_P11 : Set external interrupt 0 input pin source to P11
 *  @arg\b      INT0_INPUT_PIN_SELECT_P17 : Set external interrupt 0 input pin source to P17
 *  @arg\b      INT0_INPUT_PIN_SELECT_P22 : Set external interrupt 0 input pin source to P22
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_PinMux_Select(INT0_INPUT_PIN_SELECT_P45);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_PinMux_Select(__SELECT__)\
    MWT(\
        XICFG &= ~(INT0IS1 | INT0IS0);\
        XICFG |= LOBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~INT0IS2;\
        XICFG1 |= HIBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT0 event trigger type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 0 event trigger type
 *  @arg\b      INT0_TRIGGER_TYPE_LOW_LEVEL : Set external interrupt 0 event trigger type to low level (default)
 *  @arg\b      INT0_TRIGGER_TYPE_HIGH_LEVEL : Set external interrupt 0 event trigger type to high level
 *  @arg\b      INT0_TRIGGER_TYPE_FALLING_EDGE : Set external interrupt 0 event trigger type to falling edge
 *  @arg\b      INT0_TRIGGER_TYPE_RISING_EDGE : Set external interrupt 0 event trigger type to rising edge
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_TriggerType_Select(INT0_TRIGGER_TYPE_FALLING_EDGE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_TriggerType_Select(__SELECT__)\
    MWT(\
        AUXR0 &= ~INT0H;\
        AUXR0 |= LOBYTE(__SELECT__);\
        TCON &= ~IT0;\
        TCON |= HIBYTE(__SELECT__);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT0 interrupt priority level
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 0 priority level
 *  @arg\b      INT0_PRIORITY_LOWEST : Set external interrupt 0 priority to lowest level (default)
 *  @arg\b      INT0_PRIORITY_MIDDLE_LOW : Set external interrupt 0 priority to middle low level
 *  @arg\b      INT0_PRIORITY_MIDDLE_HIGH : Set external interrupt 0 priority to middle high level
 *  @arg\b      INT0_PRIORITY_HIGHEST : Set external interrupt 0 priority to highest level
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_Priority_Select(INT0_PRIORITY_HIGHEST);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_Priority_Select(__SELECT__)\
    MWT(\
        IP0L &= ~PX0L;\
        IP0L |= LOBYTE(__SELECT__);\
        IP0H &= ~PX0H;\
        IP0H |= HIBYTE(__SELECT__);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT0 filter mode type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 0 filter mode type
 *  @arg\b      INT0_FILTER_DISABLE : Disable external interrupt 0 filter mode type (default)
 *  @arg\b      INT0_FILTER_SYSCLKx3 : Set external interrupt 0 filter mode type to SYSCLKx3
 *  @arg\b      INT0_FILTER_SYSCLKDIV6x3 : Set external interrupt 0 filter mode type to SYSCLK/6x3
 *  @arg\b      INT0_FILTER_S0TOF : Set external interrupt 0 filter mode type to S0TOF
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_FilterMode_Select(INT0_FILTER_SYSCLKx3);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_FilterMode_Select(__SELECT__)\
    MWT(\
        XICFG &= ~X0FLT;\
        XICFG |= LOBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~X0FLT1;\
        XICFG1 |= HIBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Enable nINT1 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_IT_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_IT_Enable()\
    MWT(\
        EX1 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Disable nINT1 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_IT_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_IT_Disable()\
    MWT(\
        EX1 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Enable/Disable nINT1 interrupt
 * @details
 * @param[in]   \_\_STATE\_\_ : config EX1 control bit
 *  @arg\b      DISABLE : Set external interrupt 1 disable (default)
 *  @arg\b      ENABLE : Set external interrupt 1 enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_IT_Cmd(__STATE__)\
    MWT(\
        EX1 = __STATE__;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT1 interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_SetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_SetFlag()\
    MWT(\
        IE1 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Get nINT1 interrupt flag
 * @details
 * @return      IE1 : return IE1 bit status
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_GetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_GetFlag()    IE1


/**
 *******************************************************************************
 * @brief       Clear nINT1 interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    DRV_INT1_ClearFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_ClearFlag()\
    MWT(\
        IE1 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT1 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 1 input pin source
 *  @arg\b      INT1_INPUT_PIN_SELECT_P33 : Set external interrupt 1 input pin source to P33 (default)
 *  @arg\b      INT1_INPUT_PIN_SELECT_P31 : Set external interrupt 1 input pin source to P31
 *  @arg\b      INT1_INPUT_PIN_SELECT_P35 : Set external interrupt 1 input pin source to P35
 *  @arg\b      INT1_INPUT_PIN_SELECT_P10 : Set external interrupt 1 input pin source to P10
 *  @arg\b      INT1_INPUT_PIN_SELECT_P61 : Set external interrupt 1 input pin source to P61
 *  @arg\b      INT1_INPUT_PIN_SELECT_P34 : Set external interrupt 1 input pin source to P34
 *  @arg\b      INT1_INPUT_PIN_SELECT_P15 : Set external interrupt 1 input pin source to P15
 *  @arg\b      INT1_INPUT_PIN_SELECT_P24 : Set external interrupt 1 input pin source to P24
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_PinMux_Select(INT1_INPUT_PIN_SELECT_P31);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_PinMux_Select(__SELECT__)\
    MWT(\
        XICFG &= ~(INT1IS1 | INT1IS0);\
        XICFG |= LOBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~INT1IS2;\
        XICFG1 |= HIBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT1 event trigger type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 1 event trigger type
 *  @arg\b      INT1_TRIGGER_TYPE_LOW_LEVEL : Set external interrupt 1 event trigger type to low level (default)
 *  @arg\b      INT1_TRIGGER_TYPE_HIGH_LEVEL : Set external interrupt 1 event trigger type to high level
 *  @arg\b      INT1_TRIGGER_TYPE_FALLING_EDGE : Set external interrupt 1 event trigger type to falling edge
 *  @arg\b      INT1_TRIGGER_TYPE_RISING_EDGE : Set external interrupt 1 event trigger type to rising edge
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_TriggerType_Select(INT1_TRIGGER_TYPE_RISING_EDGE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_TriggerType_Select(__SELECT__)\
    MWT(\
        AUXR0 &= ~INT1H;\
        AUXR0 |= LOBYTE(__SELECT__);\
        TCON &= ~IT1;\
        TCON |= HIBYTE(__SELECT__);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT1 interrupt priority level
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 1 priority level
 *  @arg\b      INT1_PRIORITY_LOWEST : Set external interrupt 1 priority to lowest level (default)
 *  @arg\b      INT1_PRIORITY_MIDDLE_LOW : Set external interrupt 1 priority to middle low level
 *  @arg\b      INT1_PRIORITY_MIDDLE_HIGH : Set external interrupt 1 priority to middle high level
 *  @arg\b      INT1_PRIORITY_HIGHEST : Set external interrupt 1 priority to highest level
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_Priority_Select(INT1_PRIORITY_MIDDLE_LOW);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_Priority_Select(__SELECT__)\
    MWT(\
        IP0L &= ~PX1L;\
        IP0L |= LOBYTE(__SELECT__);\
        IP0H &= ~PX1H;\
        IP0H |= HIBYTE(__SELECT__);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT1 filter mode type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 1 filter mode type
 *  @arg\b      INT1_FILTER_DISABLE : Disable external interrupt 1 filter mode type (default)
 *  @arg\b      INT1_FILTER_SYSCLKx3 : Set external interrupt 1 filter mode type to SYSCLKx3
 *  @arg\b      INT1_FILTER_SYSCLKDIV6x3 : Set external interrupt 1 filter mode type to SYSCLK/6x3
 *  @arg\b      INT1_FILTER_S0TOF : Set external interrupt 1 filter mode type to S0TOF
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_FilterMode_Select(INT1_FILTER_DISABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_FilterMode_Select(__SELECT__)\
    MWT(\
        XICFG &= ~X1FLT;\
        XICFG |= LOBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~X1FLT1;\
        XICFG1 |= HIBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Enable nINT2 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_IT_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_IT_Enable()\
    MWT(\
        EX2 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Disable nINT2 interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_IT_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_IT_Disable()\
    MWT(\
        EX2 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Enable/Disable nINT2 interrupt
 * @details
 * @param[in]   \_\_STATE\_\_ : config EX2 control bit
 *  @arg\b      DISABLE : Set external interrupt 2 disable (default)
 *  @arg\b      ENABLE : Set external interrupt 2 enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_IT_Cmd(DISABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_IT_Cmd(__STATE__)\
    MWT(\
        EX2 = __STATE__;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT2 interrupt flag
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_SetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_SetFlag()\
    MWT(\
        IE2 = 1;\
    )


/**
 *******************************************************************************
 * @brief       Get nINT2 interrupt flag
 * @details 
 * @return      IE2 : return IE2 bit status
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_GetFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_GetFlag()    IE2


/**
 *******************************************************************************
 * @brief       Clear nINT2 interrupt flag
 * @details 
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_ClearFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_ClearFlag()\
    MWT(\
        IE2 = 0;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT2 input pin source
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 2 input pin source
 *  @arg\b      INT2_INPUT_PIN_SELECT_P44 : Set external interrupt 2 input pin source to P44 (default)
 *  @arg\b      INT2_INPUT_PIN_SELECT_P30 : Set external interrupt 2 input pin source to P30
 *  @arg\b      INT2_INPUT_PIN_SELECT_P11 : Set external interrupt 2 input pin source to P11
 *  @arg\b      INT2_INPUT_PIN_SELECT_P16 : Set external interrupt 2 input pin source to P16
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_PinMux_Select(INT2_INPUT_PIN_SELECT_P16);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_PinMux_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~(INT2IS1 | INT2IS0);\
        XICFG1 |= __SELECT__;\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT2 event trigger type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 2 event trigger type
 *  @arg\b      INT2_TRIGGER_TYPE_LOW_LEVEL : Set external interrupt 2 event trigger type to low level (default)
 *  @arg\b      INT2_TRIGGER_TYPE_HIGH_LEVEL : Set external interrupt 2 event trigger type to high level
 *  @arg\b      INT2_TRIGGER_TYPE_FALLING_EDGE : Set external interrupt 2 event trigger type to falling edge
 *  @arg\b      INT2_TRIGGER_TYPE_RISING_EDGE : Set external interrupt 2 event trigger type to rising edge
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_TriggerType_Select(INT2_TRIGGER_TYPE_HIGH_LEVEL);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_TriggerType_Select(__SELECT__)\
    MWT(\
        XICON &= ~(INT2H | IT2);\
        XICON |= __SELECT__;\
    )


/**
 *******************************************************************************
 * @brief       Set nINT2 interrupt priority level
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 2 priority level
 *  @arg\b      INT2_PRIORITY_LOWEST : Set external interrupt 2 priority to lowest level (default)
 *  @arg\b      INT2_PRIORITY_MIDDLE_LOW : Set external interrupt 2 priority to middle low level
 *  @arg\b      INT2_PRIORITY_MIDDLE_HIGH : Set external interrupt 2 priority to middle high level
 *  @arg\b      INT2_PRIORITY_HIGHEST : Set external interrupt 2 priority to highest level
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_Priority_Select(INT2_PRIORITY_LOWEST);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_Priority_Select(__SELECT__)\
    MWT(\
        IP0L &= ~PX2L;\
        IP0L |= LOBYTE(__SELECT__);\
        IP0H &= ~PX2H;\
        IP0H |= HIBYTE(__SELECT__);\
    )


/**
 *******************************************************************************
 * @brief       Set nINT2 filter mode type
 * @details
 * @param[in]   \_\_SELECT\_\_ : Set external interrupt 2 filter mode type
 *  @arg\b      INT2_FILTER_DISABLE : Disable external interrupt 2 filter mode type (default)
 *  @arg\b      INT2_FILTER_SYSCLKx3 : Set external interrupt 2 filter mode type to SYSCLKx3
 *  @arg\b      INT2_FILTER_SYSCLKDIV6x3 : Set external interrupt 2 filter mode type to SYSCLK/6x3
 *  @arg\b      INT2_FILTER_S0TOF : Set external interrupt 2 filter mode type to S0TOF
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_FilterMode_Select(INT2_FILTER_SYSCLKDIV6x3);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_FilterMode_Select(__SELECT__)\
    MWT(\
        XICFG &= ~X2FLT;\
        XICFG |= LOBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(1);\
        XICFG1 &= ~X2FLT1;\
        XICFG1 |= HIBYTE(__SELECT__);\
        __DRV_SFR_PageIndex(0);\
    )


/**
 *******************************************************************************
 * @brief       Enable system flag interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_SystemFlag_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_SystemFlag_Enable()\
    MWT(\
        EIE1 |= ESF;\
    )


/**
 *******************************************************************************
 * @brief       Disable system flag interrupt
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_SystemFlag_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_SystemFlag_Disable()\
    MWT(\
        EIE1 &= ~ESF;\
    )


/**
 *******************************************************************************
 * @brief       Enable/Disable system flag interrupt
 * @details
 * @param[in]   \_\_STATE\_\_ : config system interrupt control bit
 *  @arg\b      DISABLE : Set system interrupt disable (default)
 *  @arg\b      ENABLE : Set system interrupt enable
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_SystemFlag_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_SystemFlag_Cmd(__STATE__)\
    MWT(\
        if (__STATE__)\
        EIE1 |= ESF;\
        else\
        EIE1 &= ~ESF;\
    )


/**
 *******************************************************************************
 * @brief       nINT0 Interrupt Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT0_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT0_Wizard_Init()\
    MWT(\
        __DRV_INT0_PinMux_Select(nINT0_INPUT_PIN_SELECTION);\
        __DRV_INT0_TriggerType_Select(nINT0_TRIGGER_TYPE);\
        __DRV_INT0_FilterMode_Select(nINT0_FILTER_MODE_TYPE);\
    )


/**
 *******************************************************************************
 * @brief       nINT1 Interrupt Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT1_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT1_Wizard_Init()\
    MWT(\
        __DRV_INT1_PinMux_Select(nINT1_INPUT_PIN_SELECTION);\
        __DRV_INT1_TriggerType_Select(nINT1_TRIGGER_TYPE);\
        __DRV_INT1_FilterMode_Select(nINT1_FILTER_MODE_TYPE);\
    )


/**
 *******************************************************************************
 * @brief       nINT2 interrupt Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT2_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT2_Wizard_Init()\
    MWT(\
        __DRV_INT2_PinMux_Select(nINT2_INPUT_PIN_SELECTION);\
        __DRV_INT2_TriggerType_Select(nINT2_TRIGGER_TYPE);\
        __DRV_INT2_FilterMode_Select(nINT2_FILTER_MODE_TYPE);\
    )


#endif  //_MG82F6D17_INT_DRV_H
