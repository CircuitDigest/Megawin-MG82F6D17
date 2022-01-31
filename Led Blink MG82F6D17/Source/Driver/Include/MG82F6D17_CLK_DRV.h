/**
 ******************************************************************************
 *
 * @file        MG82F6D17_CLK_DRV.H
 *
 * @brief       This is the C code format driver head file.
 *
 * @par         Project
 *              MG82F6D17
 * @version     v0.03
 * @date        2020/01/22
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

#ifndef _MG82F6D17_CLK_DRV_H
#define _MG82F6D17_CLK_DRV_H

/// @cond DRV_CLK_Wizard_Parameters
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize System Clock
//  <i> This only changes the parameters of "__DRV_CLK_SystemClock_Wizard_Init();"
//  <i> System clock 50MHz max. CPU clock 36MHz max.
//  <o0> Select Config Mode
//      <1=> Easy Mode
//      <2=> Advanced Mode
    #define DRV_CLK_Wizard_Mode                 1
//  <e0>  Easy Mode
//  <i> The setting only change the parameter of "__DRV_CLK_SystemClock_Wizard_Init ();"
    #define DRV_CLK_Wizard_Easy_Check           1
//  <O0>  Select System Clock and CPU Clock
//  <i> Easy select clock by "__DRV_CLK_Easy_Select(__SELECT__);"
//      <0x801010=> SYSCLK=CPUCLK=12MHz (Default)
//      <0x801090=> SYSCLK=CPUCLK=11.059MHz
//      <0x800310=> SYSCLK=CPUCLK=ECKI (External clock input (P6.0) as OSCin.)
//      <0x000210=> SYSCLK=CPUCLK=32KHz
//      <0x801450=> SYSCLK=CPUCLK=24MHz
//      <0x8014D0=> SYSCLK=CPUCLK=22.118MHz
//      <0x801858=> SYSCLK=32MHz, CPUCLK=16MHz
//      <0x801C58=> SYSCLK=48MHz, CPUCLK=24MHz
//      <0x8014D8=> SYSCLK=29.491MHz, CPUCLK=14.736MHz
//      <0x801CD8=> SYSCLK=44.236MHz, CPUCLK=22.118MHz
    #define DRV_CLK_Easy_Config     0x801010
//  </e>

//  <e0> Advanced Mode
//  <i> The setting only change the parameter of "__DRV_CLK_SystemClock_Wizard_Init ();"
    #define DRV_CLK_Wizard_Advanced_Check       0
//      <O0> Basic Clock Source Select
//      <i> Select IHRCO by "__DRV_CLK_IHRCO_Select(__SELECT__);"
//      <i> Select OSCin by "__DRV_CLK_OSCin_Select(__SELECT__);"
//          <0x0100=> IHRCO 12MHz (Default)
//          <0x0200=> IHRCO 11.059MHz
//          <0x0302=> ILRCO32KHz
//          <0x0303=> ECKI, External clock input (P6.0) as OSCin.
    #define DRV_CLK_Wizard_OSCin_Select     0x0100
    #define DRV_CLK_Wizard_OSCin_Mode       LOBYTE(DRV_CLK_Wizard_OSCin_Select)  //CKCON2.4=IHRCOE, CKCON2[1:0]=OSC[1:0]
    #define DRV_CLK_Wizard_IHRCO_Mode       HIBYTE(DRV_CLK_Wizard_OSCin_Select)  //1:12MHz, 2:11.0592MHz, 3:Disable IHRCO

//      <e0> Enable Clock Multiplier (PLL)
//      <i> Enable/Disable by "__DRV_CLK_PLL_Cmd(__STATE__);"
    #define DRV_CLK_Wizard_PLL_Enable       0x00        //CKCON0.6=ENCKM
//          <o0.4..5> Multiplier Clock Input (5~6.5MHZ)
//          <i> Config PLL by call "__DRV_CLK_PLL_Config(__SELECT__, __MODE__);"
//              <0=> OSCin=5~6.5MHz
//              <1=> OSCin=10~13MHz (Default)
//              <2=> OSCin=20~26MHz
    #define DRV_CLK_Wizard_PLL_Input        0x10        //CKMIS=CKCON0[5:4]
//          <o0.0> Clock Multiplier Mode
//          <i> Config PLL by call "__DRV_CLK_PLL_Config(__SELECT__, __MODE__);"
//              <0=> Select CKM operating for 16X mode. (96MHz)(Default)
//              <1=> Select CKM operating for 24X mode. (144MHz)
    #define DRV_CLK_Wizard_PLL_Mode         0x00        //CKCON5.0=CKMS0
//      </e>

//      <o0.2..3> Multiplier Clock Output Select. (MCK)
//      <i> Select MCK by "__DRV_CLK_MCK_Select(__SELECT__);"
//          <0=> MCK=OSCin (Default)
//          <1=> MCK=24MHz, To PCA=96MHz
//          <2=> MCK=32MHz, To PCA=96MHz
//          <3=> MCK=48MHz, To PCA=96MHz
//          <1=> MCK=36MHz, To PCA=144MHz
//          <2=> MCK=48MHz, To PCA=144MHz
//          <3=> MCK=72MHz, To PCA=144MHz
//          <1=> MCK=22.118MHz, To PCA=88.4736MHz
//          <2=> MCK=29.491MHz, To PCA=88.4736MHz
//          <3=> MCK=44.236MHz, To PCA=88.4736MHz
//          <1=> MCK=33.177MHz, To PCA=132.7104MHz
//          <2=> MCK=44.236MHz, To PCA=132.7104MHz
//          <3=> MCK=66.354MHz, To PCA=132.7104MHz
    #define DRV_CLK_Wizard_MCK_Select       0x00        //CKCON2[3:2]=MCKS1,MCKS0

//      <o0.2..3> MCK Divider Output Select. (MCKDO)
//      <i> Select MCKDO by "__DRV_CLK_MCKDO_Select(__SELECT__);"
//          <0=> MCKDO = MCK/1 (Default)
//          <1=> MCKDO = MCK/2
//          <2=> MCKDO = MCK/4
//          <3=> MCKDO = MCK/8
    #define DRV_CLK_Wizard_MCKDO_Select     0x00        //CKCON3[1:0]=MCKD1,MCKD0

//      <o0.0..2> System Clock Select. (SYSCLK)(50MHz Max.)
//      <i> Select SYSCLK by "__DRV_CLK_SYSCLK_Select(__SELECT__);"
//          <0=> SYSCLK = MCKDO/1 (Default)
//          <1=> SYSCLK = MCKDO/2
//          <2=> SYSCLK = MCKDO/4
//          <3=> SYSCLK = MCKDO/8
//          <4=> SYSCLK = MCKDO/16
//          <5=> SYSCLK = MCKDO/32
//          <6=> SYSCLK = MCKDO/64
//          <7=> SYSCLK = MCKDO/128
    #define DRV_CLK_Wizard_SYSCLK_Select    0x00        //CKCON0[2:0]=SCKS[2:0]

//      <o0.3> CPU Clock Select. (CPUCLK)(36MHz Max.)
//      <i> Select CPUCLK by "__DRV_CLK_CPUCLK_Select(__SELECT__);"
//          <0=> CPUCLK = SYSCLK / 1 (Default)
//          <1=> CPUCLK = SYSCLK / 2
    #define DRV_CLK_Wizard_CPUCLK_Select    0x00        //CKCON0.3=CCKS

//      <o0> CPU Clock Range Select (0~36MHz)
//      <i> Select CPUCLK range "__DRV_CLK_CPUCLK_Range_Select(__SELECT__);"
//          <0xA0=> CPUCLK is faster than 25MHz
//          <0x80=> CPUCLK is between 25MHz~6MHz (Default)
//          <0x00=> CPUCLK equal or slower than 6MHz
    #define DRV_CLK_Wizard_HSEx_Select      0x80

//      <o0.5> MCU Power Down Wakeup Select. (FWKP)
//      <i> Select CPUCLK range "__DRV_CLK_Wakeup_Select(__SELECT__);"
//          <0=> Power down normal wakeup. (120us)(Default)
//          <1=> Power down fast wakeup. (30us)
    #define DRV_CLK_Wizard_FWKP_Select      0x00
//  </e>    Advanced Mode End
//</h>  Initialize System Clock End

//<o0.6..7> Initialize P60 Mux Function Select
//<i> Only change the parameter of "__DRV_CLK_P60Mux_Wizard_Init();"
//<i> Select P60 Function by "__DRV_CLK_P60Mux_Select(__SELECT__);"
//<i> Enable P60 Fast Driving by "__DRV_CLK_P60FastDrive_Cmd(__STATE__);""
//  <0=> P60 is normal GPIO (Default)
//  <1=> P60 = MCK/1 output
//  <2=> P60 = MCK/2 output
//  <3=> P60 = MCK/4 output
    #define DRV_CLK_Wizard_P60_Select       0x00

//*** <<< end of configuration section >>> ***
/// @endcond



/**
 *******************************************************************************
 * @brief       Select IHRCO 12MHz
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_IHRCO_12MHz();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_IHRCO_12MHz()\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        IFD |= IHRCOE_P;\
        DRV_PageP_Write(CKCON2_P, IFD);\
        CKCON0 &= ~AFS;\
    )



/**
 *******************************************************************************
 * @brief       Select IHRCO 11.059MHz
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_IHRCO_11M059KHz();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_IHRCO_11M059KHz()\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        IFD |= IHRCOE_P;\
        DRV_PageP_Write(CKCON2_P, IFD);\
        CKCON0 |= AFS;\
    )



/**
 *******************************************************************************
 * @brief       Disable IHRCO
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_IHRCO_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_IHRCO_Disable()\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        IFD &= ~IHRCOE_P;\
        DRV_PageP_Write(CKCON2_P, IFD);\
    )



/// @cond __DRV_CLK_IHRCO_Select
#define IHRCO_12MHz         1   /*!< Select IHECO clock select 12MHz */
#define IHRCO_11M059KHz     2   /*!< Select IHECO clock select 11.0952MHz */
#define IHRCO_DISABLE       3   /*!< Disable IHECO */
/// @endcond
/**
 *******************************************************************************
 * @brief       Select IHRCO 12MHz / 11.059MHz / Disable
 * @details
 * @param[in]   \_\_SELECT\_\_ : Select IHRCO 12MHz / 11.059MHz / Disable
 *  @arg\b      IHRCO_12MHz : Internal 12MHz input. (Default)
 *  @arg\b      IHRCO_11M059KHz : Internal 11.0592MHz input.
 *  @arg\b      IHRCO_DISABLE : Disable internal high frequency.
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_IHRCO_Select(IHRCO_12MHz);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_IHRCO_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        (__SELECT__ == IHRCO_DISABLE ? (IFD &= ~IHRCOE_P) : (IFD |= IHRCOE_P));\
        DRV_PageP_Write(CKCON2_P, IFD);\
        (__SELECT__ == IHRCO_11M059KHz ? (CKCON0 |= AFS) : (CKCON0 &= ~AFS));\
    )



/// @cond __DRV_CLK_OSCin_Select
#define OSCin_IHRCO                         0x00
#define OSCin_ILRCO                         OSCS1_P
#define OSCin_ECKI_P60                      (OSCS1_P | OSCS0_P)
/// @endcond
/**
 *******************************************************************************
 * @brief       OSCin source selection
 * @details
 * @param[in]   \_\_SELECT\_\_ : OSCin source selection.
 *  @arg\b      OSCin_IHRCO : Internal high frequency input. (12MHz/11.0592MHz) (Default)
 *  @arg\b      OSCin_ILRCO : Internal Low frequency input.
 *  @arg\b      OSCin_ECKI_P60 : External OSC from P6.0 (0~25MHz).
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_OSCin_Select(OSCin_IHRCO);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_OSCin_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        IFD &= ~OSCin_ECKI_P60;\
        IFD |= __SELECT__;\
        DRV_PageP_Write(CKCON2_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       Multiplier (PLL) Enable
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CKM_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_PLL_Enable()              CKCON0 |= ENCKM



/**
 *******************************************************************************
 * @brief       Multiplier (PLL) Disable
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CKM_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_PLL_Disable()             CKCON0 &= ~ENCKM



/**
 *******************************************************************************
 * @brief       Multiplier (PLL) Enable / Disable
 * @details
 * @param[in]   \_\_STATE\_\_ : Multiplier Enable / Disable
 *  @arg\b      ENABLE : Multiplier (PLL) Enable
 *  @arg\b      DISALBE : Multiplier (PLL) Disable (Defulat)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_PLL_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_PLL_Cmd(__STATE__)\
    MWT(\
        __STATE__ == ENABLE ? (CKCON0 |= ENCKM) : (CKCON0 &= ~ENCKM);\
    )



/// @cond __DRV_CLK_PLL_Config
#define CKM_OSCin_DIV_1                     0x00        /*!< OSCin=5~7MHz */
#define CKM_OSCin_DIV_2                     CKMIS0      /*!< OSCin=10~14MHz (Default) */
#define CKM_OSCin_DIV_4                     CKMIS1      /*!< OSCin=20~28MHz */
#define PLLI_X4X5X8                         0x00        /*!< Multiplier Mode Select X4 / X5.33 / X8 */
#define PLLI_X6X8X12                        CKMS0_P     /*!< Multiplier Mode Select X6 / X8 / X12 */
/// @endcond
/**
 *******************************************************************************
 * @brief       Multiplier (PLL) Config
 * @details
 * @param[in]   \_\_SELECT\_\_ : Clock multiplier input selection.
 *  @arg\b      CKM_OSCin_DIV_1 : OSCin=5~7MHz
 *  @arg\b      CKM_OSCin_DIV_2 : OSCin=10~14MHz (Default)
 *  @arg\b      CKM_OSCin_DIV_4 : OSCin=20~28MHz
 * @param[in]   \_\_MODE\_\_ : CKM mode selection.
 *  @arg\b      PLLI_X4X5X8 : Multiplier Mode Select X4/X5.33/X8 (Default)
 *  @arg\b      PLLI_X6X8X12 : Multiplier Mode Select X6/X8/X12
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_PLL_Config(CKM_OSCin_DIV_2, PLLI_X4X5X8);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_PLL_Config(__SELECT__, __MODE__)\
    MWT(\
        IFD = CKCON0;\
        IFD &= ~(CKMIS1|CKMIS0);\
        IFD |= __SELECT__;\
        CKCON0 = IFD;\
        DRV_PageP_Read(CKCON5_P);\
        __MODE__ == PLLI_X6X8X12 ? (IFD |= CKMS0_P ) : (IFD &= ~CKMS0_P);\
        DRV_PageP_Write(CKCON5_P, IFD);\
    )



/// @cond __DRV_CLK_MCK_Select
#define MCK_OSCin                           0x00
#define MCK_CKMI_X4X6                       MCKS0_P
#define MCK_CKMI_X5X8                       MCKS1_P     //X5 is X5.33
#define MCK_CKMI_X8X12                      (MCKS1_P | MCKS0_P)
/// @endcond
/**
 *******************************************************************************
 * @brief       Multiplier clock select (MCK)
 * @details
 * @param[in]   \_\_SELECT\_\_ : MCK source selection.
 *  @arg\b      MCK_OSCin : OSCin (Default)
 *  @arg\b      MCK_CKMI_X4X6 : 24MHz/36MHz/22.118MHz/33.177MHz
 *  @arg\b      MCK_CKMI_X5X8 : 32MHz/48MHz/29.491MHz/44.236MHz
 *  @arg\b      MCK_CKMI_X8X12 : 48MHz/72MHz/44.236MHz/66.354MHz
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_MCK_Select(MCK_OSCin);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_MCK_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read(CKCON2_P);\
        IFD &= ~MCK_CKMI_X8X12;\
        IFD |= __SELECT__;\
        DRV_PageP_Write(CKCON2_P, IFD);\
    )



/// @cond __DRV_CLK_MCKDO_Select
#define MCKDO_MCK_DIV_1                     0x00
#define MCKDO_MCK_DIV_2                     MCKD0_P
#define MCKDO_MCK_DIV_4                     MCKD1_P
#define MCKDO_MCK_DIV_8                     (MCKD1_P | MCKD0_P)
/// @endcond
/**
 *******************************************************************************
 * @brief       Select multi-clock divide output select (MCKDO)
 * @details
 * @param[in]   \_\_SELECT\_\_ : MCK divider output selection.
 *  @arg\b      MCKDO_MCK_DIV_1 : MCKDO = MCK / 1 (Default)
 *  @arg\b      MCKDO_MCK_DIV_2 : MCKDO = MCK / 2
 *  @arg\b      MCKDO_MCK_DIV_4 : MCKDO = MCK / 4
 *  @arg\b      MCKDO_MCK_DIV_8 : MCKDO = MCK / 8
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_MCKDO_Select(MCKDO_MCK_DIV_1);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_MCKDO_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read(CKCON3_P);\
        IFD &= ~MCKDO_MCK_DIV_8;\
        IFD |= __SELECT__;\
        DRV_PageP_Write(CKCON3_P, IFD);\
    )



/// @cond __DRV_CLK_SYSCLK_Select
#define SYSCLK_MCKDO_DIV_1          0x00                        //SYSCLK = MCKDO / 1 (Default)
#define SYSCLK_MCKDO_DIV_2          SCKS0                       //SYSCLK = MCKDO / 2
#define SYSCLK_MCKDO_DIV_4          SCKS1                       //SYSCLK = MCKDO / 4
#define SYSCLK_MCKDO_DIV_8          (SCKS1 | SCKS0)             //SYSCLK = MCKDO / 8
#define SYSCLK_MCKDO_DIV_16         SCKS2                       //SYSCLK = MCKDO / 16
#define SYSCLK_MCKDO_DIV_32         (SCKS2 | SCKS0)             //SYSCLK = MCKDO / 32
#define SYSCLK_MCKDO_DIV_64         (SCKS2 | SCKS1)             //SYSCLK = MCKDO / 64
#define SYSCLK_MCKDO_DIV_128        (SCKS2 | SCKS1 | SCKS0)     //SYSCLK = MCKDO / 128
/// @endcond
/**
 *******************************************************************************
 * @brief       Select system clock divide from MCKDO (SYSCLK)
 * @details
 * @param[in]   \_\_SELECT\_\_ : Programmable system clock selection.
 *  @arg\b      SYSCLK_MCKDO_DIV_1 : SYSCLK = MCKDO / 1 (Default)
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 2
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 4
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 8
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 16
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 32
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 64
 *  @arg\b      SYSCLK_MCKDO_DIV_2 : SYSCLK = MCKDO / 128
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_SYSCLK_Select(SYSCLK_MCKDO_DIV_1);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_SYSCLK_Select(__SELECT__)\
    MWT(\
        CKCON0 |= SYSCLK_MCKDO_DIV_128;\
        CKCON0 &= (~SYSCLK_MCKDO_DIV_128 | __SELECT__);\
    )



/// @cond __DRV_CLK_CPUCLK_Select
#define CPUCLK_SYSCLK_DIV_1                 0x00
#define CPUCLK_SYSCLK_DIV_2                 CCKS
/// @endcond
/**
 *******************************************************************************
 * @brief       Select CPU clock divide from system clock (CPUCLK)
 * @details
 * @param[in]   \_\_SELECT\_\_ : CPU clock select.
 *  @arg\b      CPUCLK_SYSCLK_DIV_1 : CPUCLK = SYSCLK = MCKDO / 1 (Default)
 *  @arg\b      CPUCLK_SYSCLK_DIV_2 : CPUCLK = SYSCLK = MCKDO / 2
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_Select(CPUCLK_SYSCLK_DIV_1);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_Select(__SELECT__)\
    MWT(\
        (__SELECT__ == CPUCLK_SYSCLK_DIV_2 ? (CKCON0 |= CCKS) : (CKCON0 &= ~CCKS));\
    )



/**
 *******************************************************************************
 * @brief       Select CPU clock = system clock / 1
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_SYSCLK_DIV_1();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_SYSCLK_DIV_1()     CKCON0 = CKCON0 & (~CCKS)



/**
 *******************************************************************************
 * @brief       Select CPU clock = system clock / 2
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_SYSCLK_DIV_2();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_SYSCLK_DIV_2()     CKCON0 = CKCON0 | CCKS



/// @cond __DRV_CLK_CPUCLK_Range_Select
#define SLOWER_CPUCLK                       0x00
#define MIDDLE_CPUCLK                       HSE_P
#define FASTER_CPUCLK                       (HSE_P | HSE1_P)
/// @endcond
/**
 *******************************************************************************
 * @brief       MCU CPUCLK range config
 * @details
 * @param[in]   \_\_SELECT\_\_ : CPUCLK range config.
 *  @arg\b      FASTER_CPUCLK : CPUCLK > 25MHz
 *  @arg\b      MIDDLE_CPUCLK : 25MHz > CPUCLK > 6MHz
 *  @arg\b      SLOWER_CPUCLK : CPUCLK < 6MHz or CPUCLK = 6MHz
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_Range_Select(MIDDLE_CPUCLK);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_Range_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read (DCON0_P);\
        IFD &= ~FASTER_CPUCLK;\
        IFD |= __SELECT__;\
        DRV_PageP_Write(DCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       MCU for ultra-high speed operation (CPUCLK > 25MHz)
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_FASTER_25MHz();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_FASTER_25MHz()\
    MWT(\
        DRV_PageP_Read (DCON0_P);\
        IFD |= (HSE_P | HSE1_P);\
        DRV_PageP_Write(DCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       MCU full speed operation (25MHz > CPUCLK > 6MHz)
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_6MHz_to_24MHz();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_6MHz_to_24MHz()\
    MWT(\
        DRV_PageP_Read (DCON0_P);\
        IFD |= HSE_P;\
        IFD &= ~HSE1_P;\
        DRV_PageP_Write(DCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       CPU running in lower speed mode (6MHz > CPUCLK)
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CPUCLK_SLOWER_6MHz();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CPUCLK_SLOWER_6MHz()\
    MWT(\
        DRV_PageP_Read (DCON0_P);\
        IFD &= ~(HSE_P | HSE1_P);\
        DRV_PageP_Write(DCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       MCU normal wakeup from power down.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_NormalWakeup120us();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_NormalWakeup120us()\
    MWT(\
        DRV_PageP_Read(CKCON3_P);\
        IFD &= ~FWKP_P;\
        DRV_PageP_Write(CKCON3_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       MCU fast wakeup from power down.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_FastWakeup30us();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_FastWakeup30us()\
    MWT(\
        DRV_PageP_Read(CKCON3_P);\
        IFD |= FWKP_P;\
        DRV_PageP_Write(CKCON3_P, IFD);\
    )



/// @cond __DRV_CLK_Wakeup_Select
#define NORMAL_WAKEUP_120us                 0x00
#define FAST_WAKEUP_30us                    FWKP_P
/// @endcond
/**
 *******************************************************************************
 * @brief       MCU wakeup select from power down.
 * @details
 * @param[in]   \_\_SELECT\_\_ : Power down wakeup select
 *  @arg\b      NORMAL_WAKEUP_120us : Power down normal wakeup. (120us)(Default)
 *  @arg\b      FAST_WAKEUP_30us : Power down fast wakeup. (30us)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_Wakeup_Select(NORMAL_WAKEUP_120us);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_Wakeup_Select(__SELECT__)\
    MWT(\
        DRV_PageP_Read (CKCON3_P);\
        __SELECT__ == FAST_WAKEUP_30us ? (IFD |= FWKP_P ):(IFD &= ~FWKP_P);\
        DRV_PageP_Write(CKCON3_P, IFD);\
    )



/// @cond __DRV_CLK_P60Mux_Select
#define P60_GPIO                                0x00
#define P60_MCK_DIV_1                           P60OC0
#define P60_MCK_DIV_2                           P60OC1
#define P60_MCK_DIV_4                           (P60OC0 | P60OC1)
/// @endcond
/**
 *******************************************************************************
 * @brief       P6.0 multi-function select
 * @param[in]   \_\_SELECT\_\_ : P6.0 multi-function
 *  @arg\b      P60_GPIO : P6.0 is GPIO function (Default)
 *  @arg\b      P60_MCK_DIV_1 : P6.0 output MCK/1
 *  @arg\b      P60_MCK_DIV_2 : P6.0 output MCK/2
 *  @arg\b      P60_MCK_DIV_4 : P6.0 output MCK/4
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_P60_Select(P60_MCK_DIV_1);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_P60Mux_Select(__SELECT__)\
    MWT(\
        IFD = AUXR0;\
        IFD &= ~P60_MCK_DIV_4;\
        IFD |= __SELECT__;\
        AUXR0 = IFD;\
    )



/**
 *******************************************************************************
 * @brief       Enable P60 fast driving.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_P60FastDrive_Enable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_P60FastDrive_Enable()         AUXR0 |= P60FD



/**
 *******************************************************************************
 * @brief       Disable P60 fast driving.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_P60FastDrive_Disable();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_P60FastDrive_Disable()        AUXR0 &= ~P60FD



/**
 *******************************************************************************
 * @brief       P60 fast drive Enable / Disalbe.
 * @details
 * @param[in]   \_\_STATE\_\_ : Enable / Disable
 *  @arg\b      ENABLE : P6.0 fast drive enable.
 *  @arg\b      DISALBE : P6.0 fast drive disable. (Defulat)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_P60FastDrive_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_P60FastDrive_Cmd(__STATE__)\
    MWT(\
        __STATE__ == ENABLE ? (AUXR0 |= P60FD ):(AUXR0 &= ~P60FD);\
    )



/**
 *******************************************************************************
 * @brief       CKCON0 unProtected (Defulat)
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CKCON0_UnProtected();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CKCON0_UnProtected()\
    MWT(\
        DRV_PageP_Read (SPCON0_P);\
        IFD &= ~CKCTL0_P;\
        DRV_PageP_Write(SPCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       CKCON0 Protected
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CKCON0_Protected();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CKCON0_Protected()\
    MWT(\
        DRV_PageP_Read (SPCON0_P);\
        IFD |= CKCTL0_P;\
        DRV_PageP_Write(SPCON0_P, IFD);\
    )



/**
 *******************************************************************************
 * @brief       CKCON0 access control
 * @details
 * @param[in]   \_\_STATE\_\_ : Enable / Disable
 *  @arg\b      ENABLE : CKCON0 Protected
 *  @arg\b      DISALBE : CKCON0 unProtected (Defulat)
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_CKCON_Protection_Cmd(ENABLE);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_CKCON_Protection_Cmd(__STATE__)\
    MWT(\
        DRV_PageP_Read (SPCON0_P);\
        __STATE__== ENABLE ? (IFD |= CKCTL0_P):(IFD &= ~CKCTL0_P);\
        DRV_PageP_Write(SPCON0_P, IFD);\
    )



/// @cond __DRV_CLK_Easy_Select
#define SYS_12M_CPU_12M             0x801010
#define SYS_11M0592_CPU_11M0592     0x801090
#define SYS_CPU_ECKI                0x800310
#define SYS_32K_CPU_32K             0x000210
#define SYS_24M_CPU_24M             0x801450
#define SYS_22M118_CPU_22M118       0x8014D0
#define SYS_32M_CPU_16M             0x801858
#define SYS_48M_CPU_24M             0x801C58
#define SYS_29M491_CPU_14M736       0x8014D8
#define SYS_44M236_CPU_22M118       0x801CD8
/// @endcond
/**
 *******************************************************************************
 * @brief       Easy select system clock and cpu clock.
 * @details
 * @param[in]   \_\_SELECT\_\_ : System Clock Selection.
 *  @arg\b      SYS_12M_CPU_12M : SYSCLK=CPUCLK=12MHz (Default)
 *  @arg\b      SYS_11M0592_CPU_11M0592 : SYSCLK=CPUCLK=11.059MHz
 *  @arg\b      SYS_CPU_ECKI : SYSCLK=CPUCLK=ECKI (External clock input (P6.0))
 *  @arg\b      SYS_32K_CPU_32K : SYSCLK=CPUCLK=32KHz
 *  @arg\b      SYS_24M_CPU_24M : SYSCLK=CPUCLK=24MHz
 *  @arg\b      SYS_22M118_CPU_22M118 : SYSCLK=CPUCLK=22.118MHz
 *  @arg\b      SYS_32M_CPU_16M : SYSCLK=32MHz, CPUCLK=16MHz
 *  @arg\b      SYS_48M_CPU_24M : SYSCLK=48MHz, CPUCLK=24MHz
 *  @arg\b      SYS_29M491_CPU_14M736 : SYSCLK=29.491MHz, CPUCLK=14.736MHz
 *  @arg\b      SYS_44M236_CPU_22M118 : SYSCLK=44.236MHz, CPUCLK=22.118MHz
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_EasySelect(SYS_12M_CPU_12M);
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_Easy_Select(__SELECT__)\
    MWT(\
        /* === Select CPU Range === */\
        __DRV_CLK_CPUCLK_Range_Select(((BYTE)((__SELECT__ & 0xA00000) >> 16)));\
        /* --------------------------------------- */\
        /* === Enable IHRCO 12MHz/11.0592MHz === */\
        DRV_PageP_Read(CKCON2_P);\
        IFD |= IHRCOE_P;\
        DRV_PageP_Write(CKCON2_P, IFD);\
        DRV_PageP_Read(CKCON0_P);\
        IFD &= ~AFS_P;\
        IFD |= (((BYTE)((__SELECT__ & 0x0000FF) & 0xFF)) & AFS_P);\
        DRV_PageP_Write(CKCON0_P, IFD);\
        /* --------------------------------------- */\
        /* === delay 32us time for stable === */\
        IFD=255;\
        do{IFD--;}while(IFD!=0);\
        /* --------------------------------------- */\
        /* === Setup OSCin === */\
        /* Note!! Switch clock source first!! */\
        /* --- CKCON2: Config OSCin by OSCS[1:0] --- */\
        DRV_PageP_Read(CKCON2_P);\
        IFD &= ~(OSCS1_P | OSCS0_P);\
        IFD |= (((BYTE)((__SELECT__ & 0x00FF00) >> 8 )) & (OSCS1_P | OSCS0_P));\
        DRV_PageP_Write(CKCON2_P, IFD);\
        /* --------------------------------------- */\
        /* === Setup PLL, SYSCLK, CPUCLK === */\
        /* --- CKCON0 : ENCKM, CKMIS, CCKS, SCKS --- */\
        DRV_PageP_Write(CKCON0_P, ((BYTE)((__SELECT__ & 0x0000FF) & 0xFF)));\
        /* --- CKCON5 : CKMS0 --- */\
        DRV_PageP_Write(CKCON5_P, ((BYTE)((__SELECT__ & 0x010000) >> 16)));\
        /* --------------------------------------- */\
        /* === delay 100us for stable === */\
        IFD=255;\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        /* --------------------------------------- */\
        /* === Multi-clock Select === */\
        /* === Final IHRCO Enable/Disable === */\
        /* --- CKCON2: MCKS --- */\
        DRV_PageP_Write(CKCON2_P, ((BYTE)((__SELECT__ & 0x00FF00) >> 8 )));\
        /* --------------------------------------- */;\
    )



/**
 *******************************************************************************
 * @brief       Wizard easy config system clock and cpu clock.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_SystemClock_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
/* from Wizard Easy Mode Selection
                            |< DCON0>|CKCON5|<    CKCON2    >|<        CKCON0         >|  (Hex) |
                            |HSE HSE1| CKMS0|IHRCOE MCKS OSCS|AFS ENCKM CKMIS CCKS SCKS|        |
SYS=CPU=12MHz               | 1   0  |   0  |   1    00   00 | 0    0    01    0   000 |80 10 10|
SYS=CPU=11.059MHz           | 1   0  |   0  |   1    00   00 | 1    0    01    0   000 |80 10 90|
SYS=CPU=ECKI=P60            | 1   0  |   0  |   0    00   11 | 0    0    01    0   000 |80 03 10|
SYS=CPU=32KHz               | 0   0  |   0  |   0    00   10 | 0    0    01    0   000 |A0 02 10|
SYS=CPU=24MHz               | 1   0  |   0  |   1    01   00 | 0    1    01    0   000 |80 14 50|
SYS=CPU=22.118MHz           | 1   0  |   0  |   1    01   00 | 1    1    01    0   000 |80 14 D0|
SYS=32MHz     CPU=16MHz     | 1   0  |   0  |   1    10   00 | 0    1    01    1   000 |80 18 58|
SYS=48MHz     CPU=24MHz     | 1   0  |   0  |   1    11   00 | 0    1    01    1   000 |80 1C 58|
SYS=22.491MHz CPU=14.736MHz | 1   0  |   0  |   1    01   00 | 1    1    01    1   000 |80 14 D8|
SYS=44.236MHz CPU=22.118MHz | 1   0  |   0  |   1    11   00 | 1    1    01    1   000 |80 1C D8|
*/

/// @cond __DRV_CLK_SystemClock_Wizard_Init
#if DRV_CLK_Wizard_Mode==1              //Mode Select Advanced
#if DRV_CLK_Wizard_Easy_Check==1        //Advanced Mode Check Box
/// @endcond
#define __DRV_CLK_SystemClock_Wizard_Init()\
    MWT(\
        __DRV_CLK_Easy_Select(DRV_CLK_Easy_Config);\
    )
/// @cond __DRV_CLK_SystemClock_Wizard_Init
#endif
#endif


/* from Wizard Advance Mode Selection
DRV_CLK_Wizard_OSCin_Select >
    DRV_CLK_Wizard_OSCin_Mode = LOBYTE(DRV_CLK_Wizard_OSCin_Select)  //CKCON2.4=IHRCOE, CKCON2[1:0]=OSC[1:0]
    DRV_CLK_Wizard_IHRCO_Mode = HIBYTE(DRV_CLK_Wizard_OSCin_Select)  //1:12MHz, 2:11.0592MHz, 3:Disable IHRCO
DRV_CLK_Wizard_PLL_Enable : Enable Clock Multiplier (PLL)
DRV_CLK_Wizard_PLL_Input : Multiplier Clock Input (5~6.5MHZ)
DRV_CLK_Wizard_PLL_Mode : Clock Multiplier Mode 96/144
DRV_CLK_Wizard_MCK_Select : Multiplier Clock output select. (MCK)
DRV_CLK_Wizard_MCKDO_Select : MCK divider output selection. (MCKDO)
DRV_CLK_Wizard_SYSCLK_Select : System clock select. (SYSCLK)(50MHz Max.)
DRV_CLK_Wizard_CPUCLK_Select : CPU clock select. (CPUCLK)(32MHz Max.)
DRV_CLK_Wizard_HSEx_Select : CPU clock range select (0~32MHz)
DRV_CLK_Wizard_FWKP_Select : MCU Power Down Wakeup Select. (FWKP)
*/
#if DRV_CLK_Wizard_Mode==2              //Mode Select Advanced
#if DRV_CLK_Wizard_Advanced_Check==1    //Advanced Mode Check Box
#define __DRV_CLK_SystemClock_Wizard_Init()\
    MWT(\
        /* === Select CPU Range === */\
        __DRV_CLK_CPUCLK_Range_Select(DRV_CLK_Wizard_HSEx_Select);\
        /* --------------------------------------- */\
        /* === Enable IHRCO 12MHz/11.0592MHz === */\
        DRV_PageP_Read(CKCON2_P);\
        IFD |= IHRCOE_P;\
        DRV_PageP_Write(CKCON2_P, IFD);\
        /* === delay 32us time for stable === */\
        IFD=255;\
        do{IFD--;}while(IFD!=0);\
        /* === Config OSCin by OSCS === */\
        /* Note!! Switch clock source first!! */\
        __DRV_CLK_OSCin_Select(DRV_CLK_Wizard_OSCin_Mode);\
        __DRV_CLK_IHRCO_Select(DRV_CLK_Wizard_IHRCO_Mode);\
        /* --------------------------------------- */\
        /* === PLL Enable/Mode === */\
        __DRV_CLK_PLL_Cmd(DRV_CLK_Wizard_PLL_Enable);\
        __DRV_CLK_PLL_Config(DRV_CLK_Wizard_PLL_Input, DRV_CLK_Wizard_PLL_Mode);\
        /* --------------------------------------- */\
        /* === Config MCKDO/SYSCLK/CPUCLK === */\
        __DRV_CLK_MCKDO_Select(DRV_CLK_Wizard_MCKDO_Select);\
        __DRV_CLK_SYSCLK_Select(DRV_CLK_Wizard_SYSCLK_Select);\
        __DRV_CLK_CPUCLK_Select(DRV_CLK_Wizard_CPUCLK_Select);\
        /* --------------------------------------- */\
        /* === delay 100us for stable === */\
        IFD=255;\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        do{IFD--;}while(IFD!=0);\
        /* --------------------------------------- */\
        /* === Multi-clock Select (MCK) === */\
        __DRV_CLK_MCK_Select(DRV_CLK_Wizard_MCK_Select);\
        /* --------------------------------------- */;\
        /* === MCU Power Down Wakeup Select. (FWKP) === */\
        __DRV_CLK_Wakeup_Select(DRV_CLK_Wizard_FWKP_Select);\
        /* --------------------------------------- */;\
    )
#endif
#endif
/// @endcond



/**
 *******************************************************************************
 * @brief       Wizard easy config P60 function.
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_CLK_P60Mux_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_CLK_P60Mux_Wizard_Init()\
    MWT(\
        (DRV_CLK_Wizard_P60_Select == 0x00 ? (AUXR0 &= ~P60FD) : (AUXR0 |= P60FD));\
        __DRV_CLK_P60Mux_Select(DRV_CLK_Wizard_P60_Select);\
    )


#endif  //_MG82F6D17_CLK_DRV_H


