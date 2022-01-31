/**
 ******************************************************************************
 *
 * @file        MG82F6D17_BODx_DRV.h
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
#ifndef __MG82F6D17_BODx_DRV_H
#define __MG82F6D17_BODx_DRV_H

/// @cond BODx_Paramter
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize Brown-Out Detection
//<i> The following options can enable BOD0/BOD1 reset, enable BOD1 when VDD dropped to a specified level(which is also an option), and activate BOD1 in PD mode.
//  <h> Initialize BOD0
//  <i> Enable/Disable BOD0 Reset.
//      <o0> BOD0 Reset
//      <0=> Disable (Default)    <1=> Enable
        #define PCON2_BO0RE     0
//  </h>
//  <h> Initialize BOD1
//  <i> Enable/Disable BOD1, specify BOD1 monitored level, awake BOD1 in PD mode, enable/disable BOD1 reset.
//      <o0> BOD1 Enable
//      <i>Enable BOD1 that monitors VDD power dropped at a BO1S specified voltage level.
//      <0=> Disable    <1=> Enable (Default)
        #define PCON2_EBOD1     1

//      <o0> Brown-Out Detector 1 Level
//      <i> Brown-out detector 1 monitored level selection.
//      <0=> 2.0V     <1=> 2.4V    <2=> 3.7V    <3=> 4.2V(Default)
        #define PCON2_BO1S       3

//      <o0> Awake BOD1 in PD mode
//      <0=> Disable (Default) <1=> Enable
        #define PCON2_AWBOD1     0

//      <o0> BOD1 Reset
//      <i> Enable/Disable BOD1 Reset.
//      <0=> Disable (Default) <1=> Enable
        #define PCON2_BO1RE      0
//  </h>
//</h>
// <<< end of configuration section >>>

/*--------------------------------------------------------------
BODx Function :
    BODx Initialization -
    |----BOD0 Initialization
            1.BOD0 Reset : __DRV_BODx_SetBOD0RST_Cmd(__STATE__);
                __STATE__ :
                    ENABLE / DISABLE

    |----BOD1 Initialization
            1.BOD1 Enable : __DRV_BODx_BOD1_MonitorsVDD(__STATE__);
                __STATE__ :
                    ENABLE / DISABLE

            2.Brown-Out Detector 1 Level : __DRV_BODx_BOD1_MonitoredLevelSelect(__LEVEL__);
                __LEVEL__ :
                    BOD1_VoltageLevel_2V0   BOD1_VoltageLevel_2V4   BOD1_VoltageLevel_3V7   BOD1_VoltageLevel_4V2

            3.Awake BOD1 in PD mode  : __DRV_BODx_BOD1_AwakeBOD1inPD(__STATE__);
                __STATE__ :
                    ENABLE / DISABLE

            4.BOD1 Reset : __DRV_BODx_SetBOD1RST_Cmd(__STATE__);
                __STATE__ :
                    ENABLE / DISABLE

    Brown-Out Detection Interrupt -
        1. BOD0 Interrupt : __DRV_BODx_BOD0_IT_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

        2. BOD1 Interrupt : __DRV_BODx_BOD1_IT_Cmd(__STATE__);
            __STATE__ :
                ENABLE / DISABLE

        3. Clearing BOF0 Flag : __DRV_BODx_BOD0_ClearFlag(void);

        4. Clearing BOF1 Flag : __DRV_BODx_BOD1_ClearFlag(void);
--------------------------------------------------------------*/



#define BOD1_VoltageLevel_2V0     0
#define BOD1_VoltageLevel_2V4     1
#define BOD1_VoltageLevel_3V7     2
#define BOD1_VoltageLevel_4V2     3
/// @endcond
/**
 *******************************************************************************
 * @brief       Enabling BOD0 reset.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables BOD0 reset.
 *  @arg\b      ENABLE : enables BOD0 to trigger a system reset when BOF0 is set(VDD meets 1.7V).
 *  @arg\b      DISABLE : disables BOD0 to trigger a system reset when BOF0 is set.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_SetBOD0_RST(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_SetBOD0RST_Cmd(__STATE__)\
    MWT(\
       uint8_t P_data;\
       P_data = DRV_PageP_Read(PCON2_P);\
       P_data &= ~(BO0RE_P);\
       __STATE__ == ENABLE ? DRV_PageP_Write(PCON2_P,P_data | BO0RE_P) : DRV_PageP_Write(PCON2_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Enabling BOD1 reset.
 * @details
 * @param[in]   \_\_STATE\_\_ :  enables/disables BOD1 reset. 
 *  @arg\b      ENABLE : enables BOD1 to trigger a system reset when BOF1 is set.
 *  @arg\b      DISABLE : disables BOD1 to trigger a system reset when BOF1 is set.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_SetBOD1_RST(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_SetBOD1RST_Cmd(__STATE__)\
    MWT(\
       uint8_t P_data;\
       P_data = DRV_PageP_Read(PCON2_P);\
       P_data &= ~(BO1RE_P);\
       __STATE__ == ENABLE ? DRV_PageP_Write(PCON2_P,P_data | BO1RE_P) : DRV_PageP_Write(PCON2_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Monitoring the level selection of brown-out detector 1.
 * @details
 * @param[in]   \_\_LEVEL\_\_ : BOD1 detecting level.
 *  @arg\b      BOD1_VoltageLevel_2V0 : BOD1 detecting level equals 2.0V.
 *  @arg\b      BOD1_VoltageLevel_2V4 : BOD1 detecting level equals 2.4V.
 *  @arg\b      BOD1_VoltageLevel_3V7 : BOD1 detecting level equals 3.7V.
 *  @arg\b      BOD1_VoltageLevel_4V2 : BOD1 detecting level equals 4.2V.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD1_MonitoredLevelSelect(BOD1_VoltageLevel_2V0);
 * @endcode
 *******************************************************************************
 */

#define __DRV_BODx_BOD1_MonitoredLevelSelect(__LEVEL__)\
    MWT(\
       uint8_t P_data;\
       P_data = DRV_PageP_Read(PCON2_P);\
       P_data &= ~(BO1S1_P|BO1S0_P);\
       DRV_PageP_Write(PCON2_P,P_data | (__LEVEL__ << 4));\
    )


/**
 *******************************************************************************
 * @brief       Awaking BOD1 in PD mode.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables BOD1 in PD mode.
 *  @arg\b      ENABLE : BOD1 keeps operations in power-down mode.
 *  @arg\b      DISABLE : BOD1 is disabled in power-down mode.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD1_AwakeBOD1inPD(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_BOD1_AwakeBOD1inPD(__STATE__)\
    MWT(\
       uint8_t P_data;\
       P_data = DRV_PageP_Read(PCON2_P);\
       P_data &= ~(AWBOD1_P);\
       __STATE__ == ENABLE ? DRV_PageP_Write(PCON2_P,P_data | AWBOD1_P) : DRV_PageP_Write(PCON2_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Enabling BOD1 that monitors VDD power drop at a specified voltage level.
 * @details
 * @param[in]   \_\_STATE\_\_ : enables/disables BOD1 to monitor VDD power-drop.
 *  @arg\b      ENABLE : enables BOD1 to monitor VDD power drop.
 *  @arg\b      DISABLE : disables BOD1 to slow down the chip power consumption.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD1_MonitorsVDD(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_BOD1_MonitorsVDD(__STATE__)\
     MWT(\
       uint8_t P_data;\
       P_data = DRV_PageP_Read(PCON2_P);\
       P_data &= ~(EBOD1_P);\
       __STATE__ == ENABLE ? DRV_PageP_Write(PCON2_P,P_data | EBOD1_P) : DRV_PageP_Write(PCON2_P,P_data);\
    )

/**
 *******************************************************************************
 * @brief       Enabling BOD0 interrupt.
 * @details
 * @param[in]   \_\_STATE\_\_ :  enables/disables BOD0 interrupt.
 *  @arg\b      ENABLE : enables BOD0 interrupt.
 *  @arg\b      DISABLE : disables BOD0 interrupt.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD0_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
 #define __DRV_BODx_BOD0_IT_Cmd(__STATE__)\
    MWT(\
        __STATE__ == ENABLE ? (SFIE |=  BOF0IE) : (SFIE &=  ~BOF0IE);\
    )

/**
 *******************************************************************************
 * @brief       Enabling BOD1 interrupt.
 * @details
 * @param[in]   \_\_STATE\_\_ :  enables/disables BOD1 interrupt.
 *  @arg\b      ENABLE : enables BOD1 interrupt.
 *  @arg\b      DISABLE : disables BOD1 interrupt.
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD1_IT_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_BOD1_IT_Cmd(__STATE__)\
    MWT(\
        __STATE__ == ENABLE ? (SFIE |=  BOF1IE) : (SFIE &=  ~BOF1IE);\
    )


/**
 *******************************************************************************
 * @brief       Clearing BOD1 flag.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD1_ClearFlag();
 * @endcode
 *******************************************************************************
 */
#define __DRV_BODx_BOD1_ClearFlag()\
    MWT(\
        PCON1 |= BOF1;\
    )

/**
 *******************************************************************************
 * @brief       Clearing BOD0 flag.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_BOD0_ClearFlag();
 * @endcode
 *******************************************************************************
 */

#define __DRV_BODx_BOD0_ClearFlag()\
    MWT(\
        PCON1 |= BOF0;\
    )


/// @cond BODx_Init_Macro
/**
 *******************************************************************************
 * @brief       Initializing BODx.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_BODx_Wizard_Init();
 * @endcode
 *******************************************************************************
 */

#define __DRV_BODx_Wizard_Init()\
    MWT(\
        __DRV_BODx_SetBOD0RST_Cmd(PCON2_BO0RE);\
        __DRV_BODx_SetBOD1RST_Cmd(PCON2_BO1RE);\
        __DRV_BODx_BOD1_MonitoredLevelSelect(PCON2_BO1S);\
        __DRV_BODx_BOD1_AwakeBOD1inPD(PCON2_AWBOD1);\
        __DRV_BODx_BOD1_MonitorsVDD(PCON2_EBOD1);\
    )
/// @endcond
#endif
