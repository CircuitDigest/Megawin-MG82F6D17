/**
 ******************************************************************************
 *
 * @file        MG82F6D17_WDT_DRV.h
 *
 * @brief       This is the C code format driver head file.
 *
 * @par         Project
 *              MG82F6D17
 * @version     V0.03
 * @date        2020/01/22
 * @author      Megawin Software Center
 * @copyright   Copyright (c) 2019 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par         Disclaimer
 *      The Demo software is provided "AS IS" without any warranty, either
 *      expressed or implied, including, but not limited to, the implied warranties
 *      of merchantability and fitness for a particular purpose.  The author will
 *      not be liable for any special, incidental, consequential or indirect
 *      damages due to loss of data or any other reason.
 *      These statements agree with the worldwide and local dictated laws about
 *      authorship and violence against these laws.
 ******************************************************************************
 ******************************************************************************
 */
 
#ifndef __MG82F6D17_WDT_DRV_H
#define __MG82F6D17_WDT_DRV_H

/// @cond WDT_Paramter
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize WDT
//<i> Users can customize WDT based on their demands by the following options.
//  <o0> WDT Clock Source Selection
//  <i> Select WDT clock source.
//  <0=>ILRCO (Default) <1=>P60 <2=>SYSCLK/12 <3=>S0TOF
        #define CKCON3_WDTCS    0

//  <o0> Non-Stopped WDT
//  <0=> Disable (Default) <1=> Enable
//  <i> This enables WDT to keep counting in power-down or idle mode.
        #define WDTCR_NSW       0

//  <o0> WDT Idle Control
//  <0=> Disable (Default) <1=> Enable
//  <i> This enables WDT to keep counting in the idle mode.
        #define WDTCR_WIDL      0

//  <o0> Select Prescaler Output for WDT
//  <i> Determine WDT time base input.
//  <0=> 1/2 <1=> 1/4 <2=> 1/8 <3=> 1/16 <4=> 1/32 <5=> 1/64 <6=> 1/128 <7=> 1/256 (Default)
        #define PreScaler       7

//  <o0> WDT Overflow Source Selection
//  <i> Determine WDT event source.
//  <0=> Select WDT bit-8 overflow as WDT event source (Default) <1=> Select WDT bit-0 overflow as WDT event source
        #define CKCON3_WDTFS    0

//  <o0> WDT Reset Enable
//  <i> Enable/Disable WDT reset.
//  <0=> Disable (Default) <1=> Enable
        #define WDTCR_WREN      0
//</h>

// <<< end of configuration section >>>

/*--------------------------------------------------------------
WDT Function :
    WDT Initialization -
        1.WDT Clock Source Selection , WDTCS : __DRV_WDT_ClockSource_Select(__SELECT__);
            __SELECT__ :
                WDT_CLK_ILRCO   WDT_CLK_P60   WDT_CLK_SYSCLK_DIV_12     WDT_CLK_S0TOF

        2.Non-Stopped WDT , NSW : __DRV_WDT_NonStopped_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

        3.WDT Idle Control , WIDL : __DRV_WDT_IdleControl_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

        4.WDT Overflow Source Selection , WDTFS : __DRV_WDT_Overflow_Select(__SOURCE__);
            __SOURCE__ :
                b7overflow  b0overflow

        5.Select Prescaler Output for WDT , PS0~PS2 : __DRV_WDT_SetPrescaler(__PRESCALER__);
            __PRESCALER__ :
                WDT_PRESCALER_DIV_2     WDT_PRESCALER_DIV_4     WDT_PRESCALER_DIV_8     WDT_PRESCALER_DIV_16
                WDT_PRESCALER_DIV_32    WDT_PRESCALER_DIV_64    WDT_PRESCALER_DIV_128   WDT_PRESCALER_DIV_256

        6.WDT Reset Enable , WREN  : __DRV_WDT_Reset_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

    WDT Counter -
        1.Enable WDT , ENW : __DRV_WDT_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

    Interrupt -
        1.WDT Idle Control , WIDL : __DRV_WDT_IT_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE
        2.Clearing WDTF Flag : __DRV_WDT_ClearFlag(void);

    Clear -
        1.Clearing WDT counter : __DRV_WDT_ClearCounter(void);
--------------------------------------------------------------*/



 //WDT CLK Source
#define WDT_CLK_ILRCO                       0
#define WDT_CLK_P60                         1
#define WDT_CLK_SYSCLK_DIV_12               2
#define WDT_CLK_S0TOF                       3

//WDT overflow source
#define b7overflow  0
#define b0overflow  1

//WDT 8bits prescaler
#define WDT_PRESCALER_DIV_2     0
#define WDT_PRESCALER_DIV_4     1
#define WDT_PRESCALER_DIV_8     2
#define WDT_PRESCALER_DIV_16    3
#define WDT_PRESCALER_DIV_32    4
#define WDT_PRESCALER_DIV_64    5
#define WDT_PRESCALER_DIV_128   6
#define WDT_PRESCALER_DIV_256   7
/// @endcond

/**
 *******************************************************************************
 * @brief       WDT clock source selection.
 * @details
 * @param[in]   \_\_SELECT\_\_ : clock source parameters including
 *  @arg\b      WDT_CLK_ILRCO        : WDT clock source selection, ILRCO.
 *  @arg\b      WDT_CLK_P60         : WDT clock source selection, P60.
 *  @arg\b      WDT_CLK_SYSCLK_DIV_12 : WDT clock source selection, SYSCLK/12.
 *  @arg\b      WDT_CLK_S0TOF        : WDT clock source selection, S0TOF.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_ClockSource_Select( WDT_CLK_ILRCO);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_ClockSource_Select(__SELECT__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(CKCON3_P);\
        P_data &= ~(WDTCS1_P|WDTCS0_P);\
        DRV_PageP_Write(CKCON3_P,P_data | __SELECT__);\
    )

/**
 *******************************************************************************
 * @brief       Non-stopped WDT.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables WDT counting in PD or idle mode.
 *  @arg\b      ENABLE : WDT always keeps counting while the MCU is in power-down mode or idle mode.
 *                      In PageP, software can modify it to "0" or "1".
 *  @arg\b      DISABLE : WDT will stop counting in power-down mode.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_NonStopped(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_NonStopped_Cmd(__STATE__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(WDTCR_P);\
        P_data &= ~(NSW_P);\
        __STATE__ == ENABLE ? DRV_PageP_Write(WDTCR_P,P_data | NSW_P) : DRV_PageP_Write(WDTCR_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       WDT idle control using Page P access.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables WDT idle control.
 *  @arg\b      ENABLE : WDT always keeps counting while the MCU is in idle mode.
 *  @arg\b      DISABLE : WDT stops counting in idle mode.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_IdleControl(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_IdleControl_Cmd(__STATE__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(WDTCR_P);\
        P_data &= ~(WIDL_P);\
        __STATE__ == ENABLE ? DRV_PageP_Write(WDTCR_P,P_data | WIDL_P) : DRV_PageP_Write(WDTCR_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       WDT overflow source selection.
 * @details
 * @param[in]   \_\_SOURCE\_\_ : WDT overflow source selection.
 *  @arg\b      DISABLE : selects WDT bit-7 overflow as WDT event source.
 *  @arg\b      ENABLE : selects WDT bit-0 overflow as WDT event source.
 * @return      None
 * @return None
 * @note
 * @code
 *  __DRV_WDT_Overflow_Select(b7overflow);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_Overflow_Select(__SOURCE__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(CKCON3_P);\
        P_data &= ~(WDTFS_P);\
        DRV_PageP_Write(CKCON3_P,P_data | __SOURCE__);\
    )

/**
 *******************************************************************************
 * @brief       Selecting prescaler output for WDT time base input.
 * @details
 * @param[in]   \_\_PRESCALER\_\_ : prescaler value.
 *  @arg\b      WDT_PRESCALER_DIV_2 : divides WDT clock source by 2.
 *  @arg\b      WDT_PRESCALER_DIV_4 : divides WDT clock source by 4.
 *  @arg\b      WDT_PRESCALER_DIV_8 : divides WDT clock source by 8.
 *  @arg\b      WDT_PRESCALER_DIV_16 : divides WDT clock source by 16.
 *  @arg\b      WDT_PRESCALER_DIV_32 : divides WDT clock source by 32.
 *  @arg\b      WDT_PRESCALER_DIV_64 : divides WDT clock source by 64.
 *  @arg\b      WDT_PRESCALER_DIV_128 : divides WDT clock source by 128.
 *  @arg\b      WDT_PRESCALER_DIV_256 : divides WDT clock source by 256.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_SetPrescaler(WDT_PRESCALER_DIV_2);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_SetPrescaler(__PRESCALER__)\
    MWT(\
        WDTCR &= ~(PS0|PS1|PS2);\
        WDTCR |= (__PRESCALER__);\
    )

/**
 *******************************************************************************
 * @brief       WDT reset enable.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables WDT reset.
 *  @arg\b      DISABLE : then the overflow of WDT will not trigger WDT reset.
 *  @arg\b      ENABLE : then the overflow of WDT will cause a system reset. In PageP, software can modify it to "0" or "1".
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_Reset_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_Reset_Cmd(__STATE__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(WDTCR_P);\
        P_data &= ~(WREN_P);\
        __STATE__ == ENABLE ? DRV_PageP_Write(WDTCR_P,P_data | WREN_P) : DRV_PageP_Write(WDTCR_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Enabling WDT counter.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables WDT counter.
 *  @arg\b      DISABLE : disables WDT running. This bit can only be cleared by POR.
 *  @arg\b      ENABLE : enables WDT. In PageP, software can modify it to "0" or "1".
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_Cmd(__STATE__)\
    MWT(\
        uint8_t P_data;\
        P_data = DRV_PageP_Read(WDTCR_P);\
        P_data &= ~(ENW_P);\
        __STATE__ == ENABLE ? DRV_PageP_Write(WDTCR_P,P_data | ENW_P) : DRV_PageP_Write(WDTCR_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Enabling WDT interrupt.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables WDT interrupt.
 *  @arg\b      DISABLE : then there won't be a WDT interrupt even the overflow occurs.
 *  @arg\b      ENABLE : then WDT interrupt will occur when the overflow occurs.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */

#define __DRV_WDT_IT_Cmd(__STATE__)\
    MWT(\
        __STATE__ == ENABLE ? (SFIE |=  WDTFIE) : (SFIE &=  ~WDTFIE);\
    )


/**
 *******************************************************************************
 * @brief       Clearing WDT counter.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_ClearCounter();
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_ClearCounter()\
    MWT(\
        WDTCR |= CLRW;\ 
    )       
 
/**
 *******************************************************************************
 * @brief       Clearing WDT flag.
 * @details
 * @return      None 
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_ClearFlag();
 * @endcode
 *******************************************************************************
 */ 
#define __DRV_WDT_ClearFlag()\
    MWT(\
        PCON1 |= WDTF;\ 
    )  
    

/// @cond WDT_Init_Macro
/**
 *******************************************************************************
 * @brief       Initializing WDT.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_WDT_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_WDT_Wizard_Init()\
    MWT(\
        __DRV_WDT_ClockSource_Select(CKCON3_WDTCS);\
        __DRV_WDT_NonStopped_Cmd(WDTCR_NSW);\
        __DRV_WDT_IdleControl_Cmd(WDTCR_WIDL);\
        __DRV_WDT_Overflow_Select(CKCON3_WDTFS);\
        __DRV_WDT_SetPrescaler(PreScaler);\
        __DRV_WDT_Reset_Cmd(WDTCR_WREN);\
    )
/// @endcond
#endif
