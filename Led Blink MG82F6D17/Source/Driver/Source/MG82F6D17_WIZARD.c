/**
 ******************************************************************************
 *
 * @file        MG82F6D17_WIZARD.c
 *
 * @brief       This is a C code for Wizard interface.
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

/// @cond __DRV_Wizard_Without_Doxygen
//*** <<< Use Configuration Wizard in Context Menu >>> ***

//<h> Initialize MG82F6D17 Drivers
//<i> The checked terms in this wizard will be initialized.
//      <q>System Clock
//      <i>  Check this term, then macros __DRV_CLK_SystemClock_Wizard_Init() and __DRV_CLK_P60Mux_Wizard_Init()  will initialize system clock.
        #define MG82F6D17_CLK_WIZARD      0


//      <q>Watch Dog Timer(WDT)
//      <i> Check this term, then macro __DRV_WDT_Wizard_Init() will initialize WDT.
        #define MG82F6D17_WDT_WIZARD      0


//      <q>Real Time Clock(RTC)
//      <i> Check this term, then macro __DRV_Wizard_RTC_Init() will initialize RTC.
        #define MG82F6D17_RTC_WIZARD      0


//      <q>Brown-Out Detector(BODx)
//      <i> Check this term, then macro __DRV_BODx_Wizard_Init() will initialize BODx.
        #define MG82F6D17_BODx_WIZARD      0


//      <q> Global Interrupts
//      <i> Check this term if you want to enable interrupts.
//      <i> Then, please go to MG82F6D17_INTERRUPT.h to pick the interrupts you need. 
//      <i> Now __DRV_INTERRUPT_Wizard_Init() will help you initialize them.
        #define MG82F6D17_INT_ALL_WIZARD      0


//      <q>General Purpose Input/Output(GPIO)
//      <i> Check this term, then macro __DRV_GPIO_Wizard_Init() will initialize GPIO.
        #define MG82F6D17_GPIO_WIZARD      1


//      <q> Timers/Counters
//      <i> Initialize Timers/Counters.
        #define MG82F6D17_TIMER_COUNTER_WIZARD      0
//      

//      <q>Serial Port 0 (UART0)
//      <i> Check this term, then DRV_UART0_Wizard_Init() will initialize UART0.
        #define MG82F6D17_UART0_WIZARD      0



//      <q>Serial Port 1 (UART1)
//      <i> Check this term, then DRV_UART1_Wizard_Init() will initialize UART1.
        #define MG82F6D17_UART1_WIZARD      0


//      <q>ADC
//      <i>  Check this term, then macros __DRV_ADC_Wizard_Init() will initialize ADC.
        #define MG82F6D17_ADC_WIZARD      0

//</h>
// <<< end of configuration section >>>


#include "MG82F6D17_CONFIG.h"


/**
 *******************************************************************************
 *
 *
 *
 * System Initialization Function
 *
 *
 *
 *******************************************************************************
 */

void System_Init(void)
{
    #if MG82F6D17_CLK_WIZARD
        __DRV_CLK_SystemClock_Wizard_Init();
        __DRV_CLK_P60Mux_Wizard_Init();
    #endif

    #if MG82F6D17_WDT_WIZARD
        __DRV_WDT_Wizard_Init();
    #endif

    #if MG82F6D17_RTC_WIZARD
        __DRV_RTC_Wizard_Init();
    #endif

    #if MG82F6D17_BODx_WIZARD
        __DRV_BODx_Wizard_Init();
    #endif

    #if MG82F6D17_GPIO_WIZARD
        __DRV_GPIO_Wizard_Init();
    #endif

    #if MG82F6D17_UART0_WIZARD
        DRV_UART0_Wizard_Init();
    #endif
    #if MG82F6D17_UART1_WIZARD
        DRV_UART1_Wizard_Init();
    #endif

    #if MG82F6D17_ADC_WIZARD
        __DRV_ADC_Wizard_Init();
    #endif

    #if MG82F6D17_INT_ALL_WIZARD
        __DRV_INTERRUPT_Wizard_Init();
    #endif
}

/// @endcond
/**
 *******************************************************************************
 *
 *
 *
 * UART Initialization Function
 *
 *
 *
 *******************************************************************************
 */


#if MG82F6D17_UART0_WIZARD
/**
*******************************************************************************
* @brief       UART0 Initial.
* @details    Wizard Option
* @param[in]   ::
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
* @return      NO
* @exception   NO
* @note
* @par         Example
* @code
DRV_UART0_Wizard_Init();
* @endcode
*******************************************************************************
*/
void DRV_UART0_Wizard_Init(void)
{
    #if(URT0_Advance_Mode&&URT0_Option)
        #if(URT0_Advance)
            #if(URT0_Mode==0x01)
                #if(URT0_Mode1_8Bit)
                    #if(URT0_Mode1_8Bit_Baud_Rate_Config)
                        __DRV_URT0_Mode1_Wizard_Init();
                    #endif
                #endif
            #elif(URT0_Mode==0x02)
                #if(URT0_Mode2_9Bit)
                    #if(URT0_Mode2_9Bit_Baud_Rate_Config)
                        __DRV_URT0_Mode2_Wizard_Init();
                    #endif
                #endif
            #endif
        #endif
    #endif
    #if(URT0_Easy_Mode&&(!URT0_Option))
        #if(URT0_Easy)
            __DRV_URT0_Easy_Wizard_Init();
        #endif
    #endif
	TI0=1;//for printf application;
}
#endif
#if MG82F6D17_UART1_WIZARD
/**
*******************************************************************************
* @brief       UART1 Initial.
* @details    Wizard Option
* @param[in]   ::
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
*  @arg\b
* @return      NO
* @exception   NO
* @note
* @par         Example
* @code
DRV_UART1_Wizard_Init();
* @endcode
*******************************************************************************
*/
void DRV_UART1_Wizard_Init(void)
{
    #if(URT1_Advance_Mode&&URT1_Option)
        #if(URT1_Advance)
            #if(URT1_Mode==0x01)
                #if(URT1_Mode1_8Bit)
                    #if(URT1_Mode1_8Bit_Baud_Rate_Config)
                        __DRV_URT1_Mode1_Wizard_Init();
                    #endif
                #endif
            #elif(URT1_Mode==0x02)
                #if(URT1_Mode2_9Bit)
                    #if(URT1_Mode2_9Bit_Baud_Rate_Config)
                        __DRV_URT1_Mode2_Wizard_Init();
                    #endif
                #endif
            #endif
        #endif
    #endif
    #if(URT1_Easy_Mode&&(!URT1_Option))
        #if(URT1_Easy)
            __DRV_URT1_Easy_Wizard_Init();
        #endif
    #endif
}
#endif






