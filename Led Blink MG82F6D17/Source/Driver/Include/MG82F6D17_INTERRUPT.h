/**
 ******************************************************************************
 *
 * @file        MG82F6D17_INTERRUPT.H
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


#ifndef _MG82F6D17_INTERRUPT_H
#define _MG82F6D17_INTERRUPT_H

/// @cond DRV_INTERRUPT_Wizard
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//<h> Initialize All Interrupt
//      <e0> External Interrupt 0
//      <i> External interrupt 0 enable.
//      <i> We also provide further setting details for External Interrupt 0, please go to MG82F6D17_INV_DRV.h.
        #define MG82F6D17_INT0_EN      0
//      <o0> INT0 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0001=> 1
//      <0x0100=> 2
//      <0x0101=> 3 (Highest)
        #define MG82F6D17_INT0_PRIORITY      0x0000
//  </e>

//      <e0> Timer 0 Interrupt
//      <i> Timer 0 interrupt enable.
        #define MG82F6D17_TIMER0_IT_EN      0
//      <o0> TIMER0 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0002=> 1
//      <0x0200=> 2
//      <0x0202=> 3 (Highest)
        #define MG82F6D17_TIMER0_PRIORITY      0x0000
//  </e>

//  <e0> External Interrupt 1
//      <i> External interrupt 1 enable.
//      <i> We also provide further setting details for External Interrupt 1, please go to MG82F6D17_INV_DRV.h.
        #define MG82F6D17_INT1_EN      0
//      <o0> INT1 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0004=> 1
//      <0x0400=> 2
//      <0x0404=> 3 (Highest)
        #define MG82F6D17_INT1_PRIORITY      0x0000
//  </e>

//  <e0> Timer 1 Interrupt
//      <i> Timer 1 interrupt enable.
        #define MG82F6D17_TIMER1_IT_EN      0
//      <o0> TIMER1 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0008=> 1
//      <0x0800=> 2
//      <0x0808=> 3 (Highest)
        #define MG82F6D17_TIMER1_PRIORITY      0x0000
//  </e>

//  <e0> Serial Port 0
//      <i> Serial Port 0 enable.
        #define MG82F6D17_S0_IT_EN      0
//      <o0> Serial Port 0 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0010=> 1
//      <0x1000=> 2
//      <0x1010=> 3 (Highest)
        #define MG82F6D17_S0_PRIORITY      0x0000
//  </e>

//  <e0> Timer 2 Interrupt
//      <i> Timer 2 interrupt enable.
        #define MG82F6D17_TIMER2_IT_EN      0
//      <o0> TIMER2 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0020=> 1
//      <0x2000=> 2
//      <0x2020=> 3 (Highest)
        #define MG82F6D17_TIMER2_PRIORITY      0x0000
//  </e>

//  <e0> External Interrupt 2
//      <i> External interrupt 2 enable.
//      <i> We also provide further setting details for External Interrupt 2, please go to MG82F6D17_INV_DRV.h.
        #define MG82F6D17_INT2_EN      0
//      <o0> INT2 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0040=> 1
//      <0x4000=> 2
//      <0x4040=> 3 (Highest)
        #define MG82F6D17_INT2_PRIORITY      0x0000
//  </e>

//  <e0> SPI Interrupt
//      <i> SPI interrupt enable.
        #define MG82F6D17_SPI_IT_EN      0
//      <o0> INT2 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0001=> 1
//      <0x0100=> 2
//      <0x0101=> 3 (Highest)
        #define MG82F6D17_SPI_PRIORITY      0x0000
//  </e>

//  <e0> ADC Interrupt
//      <i> ADC interrupt enable.
        #define MG82F6D17_ADC_IT_EN      0
//      <o0> ADC Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0002=> 1
//      <0x0200=> 2
//      <0x0202=> 3 (Highest)
        #define MG82F6D17_ADC_PRIORITY      0x0000
//      <e0> ADCI
//          <i> ADC conversion interrupt enable.
            #define MG82F6D17_INT_ADCI_EN      1
//      </e>
//      <e0> SMPF
//          <i> ADC channel sample and hold interrupt enable.
            #define MG82F6D17_INT_SMPF_EN      0
//      </e>
//      <e0> ADCWI
//          <i> ADC Window campare mode interrupt enable.
            #define MG82F6D17_INT_ADCWI_EN      0
//      </e>
//  </e>

//  <e0> PCA0 Interrupt
//      <i> PCA0 interrupt enable.
        #define MG82F6D17_PCA0_IT_EN      0
//      <o0> PCA0 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0004=> 1
//      <0x0400=> 2
//      <0x0404=> 3 (Highest)
        #define MG82F6D17_PCA0_PRIORITY      0x0000
//  </e>

//  <e0> System Flag Interrupt
//      <i> System Flag interrupt enable.
        #define MG82F6D17_SYSFLAG_EN      0
//      <o0> System Flag Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0008=> 1
//      <0x0800=> 2
//      <0x0808=> 3 (Highest)
        #define MG82F6D17_PSF_PRIORITY      0x0000
//      <e0> WDT Interrupt
//          <i> WDT interrupt enable.
            #define MG82F6D17_WDT_IT_EN      0
//      </e>
//      <e0> RTC Interrupt
//          <i> RTC interrupt enable.
            #define MG82F6D17_RTC_IT_EN      0
//      </e>
//      <e0> BOD0 Interrupt
//          <i> BOD0 interrupt enable.
            #define MG82F6D17_BOD0_IT_EN      0
//      </e>
//          <e0> BOD1 Interrupt
//          <i> BOD1 interrupt enable.
            #define MG82F6D17_BOD1_IT_EN      1
//      </e>
//  </e>

//  <e0> Keypad Interrupt
//  <i> Keypad interrupt enable.
    #define MG82F6D17_KBI_EN      0
//      <o0> KBI Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0020=> 1
//      <0x2000=> 2
//      <0x2020=> 3 (Highest)
        #define MG82F6D17_KBI_PRIORITY      0x0000
//  </e>

//  <e0> TWI0 Interrupt
//      <i> TWI0 interrupt enable.
        #define MG82F6D17_TWI0_IT_EN      0
//      <o0> TWI0 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0040=> 1
//      <0x4000=> 2
//      <0x4040=> 3 (Highest)
        #define MG82F6D17_TWI0_PRIORITY      0x0000
//  </e>

//  <e0> Serial Port 1
//      <i> Serial Port 1 enable.
        #define MG82F6D17_S1_IT_EN      0
//      <o0> Serial Port 1 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0010=> 1
//      <0x1000=> 2
//      <0x1010=> 3 (Highest)
        #define MG82F6D17_S1_PRIORITY      0x0000
//  </e>

//  <e0> Timer 3 Interrupt
//      <i> Timer 3 interrupt enable.
        #define MG82F6D17_TIMER3_IT_EN      0
//      <o0> TIMER3 Priority
//      <0x0000=> 0 (Lowest) (Default)
//      <0x0001=> 1
//      <0x0100=> 2
//      <0x0101=> 3 (Highest)
        #define MG82F6D17_TIMER3_PRIORITY      0x0000
//  </e>

//  <e0> DMA Interrupt
//      <i> DMA interrupt enable.
        #define MG82F6D17_DMA_IT_EN      0
//      <o0> DMA Priority
//      <0x00=> 0 (Lowest) (Default)
//      <0x40=> 1
//      <0x80=> 2
//      <0xC0=> 3 (Highest)
        #define MG82F6D17_DMA_PRIORITY      0x00
//  </e>
//</h>
// <<< end of configuration section >>>
/// @endcond





/**
 *******************************************************************************
 * @brief       All Interrupts Priority Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_Priority_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_Priority_Wizard_Init()\
    MWT(\
        IP0L = LOBYTE(MG82F6D17_INT2_PRIORITY) | LOBYTE(MG82F6D17_TIMER2_PRIORITY) | LOBYTE(MG82F6D17_S0_PRIORITY) | LOBYTE(MG82F6D17_TIMER1_PRIORITY) | LOBYTE(MG82F6D17_INT1_PRIORITY) | LOBYTE(MG82F6D17_TIMER0_PRIORITY) |  LOBYTE(MG82F6D17_INT0_PRIORITY);\
        IP0H = HIBYTE(MG82F6D17_INT2_PRIORITY) | HIBYTE(MG82F6D17_TIMER2_PRIORITY) | HIBYTE(MG82F6D17_S0_PRIORITY) | HIBYTE(MG82F6D17_TIMER1_PRIORITY) | HIBYTE(MG82F6D17_INT1_PRIORITY) | HIBYTE(MG82F6D17_TIMER0_PRIORITY) |  HIBYTE(MG82F6D17_INT0_PRIORITY);\
        EIP1L = LOBYTE(MG82F6D17_TWI0_PRIORITY) |LOBYTE(MG82F6D17_KBI_PRIORITY) | LOBYTE(MG82F6D17_S1_PRIORITY) | LOBYTE(MG82F6D17_PSF_PRIORITY) | LOBYTE(MG82F6D17_PCA0_PRIORITY) | LOBYTE(MG82F6D17_ADC_PRIORITY) | LOBYTE(MG82F6D17_SPI_PRIORITY);\
        EIP1H = HIBYTE(MG82F6D17_TWI0_PRIORITY) |HIBYTE(MG82F6D17_KBI_PRIORITY) | HIBYTE(MG82F6D17_S1_PRIORITY) | HIBYTE(MG82F6D17_PSF_PRIORITY) | HIBYTE(MG82F6D17_PCA0_PRIORITY) | HIBYTE(MG82F6D17_ADC_PRIORITY) | HIBYTE(MG82F6D17_SPI_PRIORITY);\
        EIP2L = LOBYTE(MG82F6D17_TIMER3_PRIORITY);\
        EIP2H = HIBYTE(MG82F6D17_TIMER3_PRIORITY);\
        __DRV_SFR_PageIndex(8);\
        DMACG0 = MG82F6D17_DMA_PRIORITY;\
        __DRV_SFR_PageIndex(0);\
    )



/**
 *******************************************************************************
 * @brief       All Interrupts On/Off Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INT_Switch_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INT_Switch_Wizard_Init()\
    MWT(\
        if (MG82F6D17_INT0_EN)\
        {\
            __DRV_INT0_Wizard_Init();\
            __DRV_INT0_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_TIMER0_IT_EN)\
        {\
            ET0 = MG82F6D17_TIMER0_IT_EN;\
        }\
        if (MG82F6D17_INT1_EN)\
        {\
            __DRV_INT1_Wizard_Init();\
            __DRV_INT1_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_TIMER1_IT_EN)\
        {\
            ET1 = MG82F6D17_TIMER1_IT_EN;\
        }\
        if (MG82F6D17_S0_IT_EN)\
        {\
            __DRV_URT0_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_TIMER2_IT_EN)\
        {\
            ET2 = MG82F6D17_TIMER2_IT_EN;\
        }\
        if (MG82F6D17_INT2_EN)\
        {\
            __DRV_INT2_Wizard_Init();\
            __DRV_INT2_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_SPI_IT_EN)\
        {\
            EIE1 |= ESPI;\
        }\
        if (MG82F6D17_ADC_IT_EN)\
        {\
            if (MG82F6D17_INT_ADCI_EN == DISABLE)\
            {\
                __DRV_ADC_IgnoreADCI_Cmd(ENABLE);\
            }\
            if (MG82F6D17_INT_SMPF_EN)\
            {\
                __DRV_ADC_SampleFlag_IT(ENABLE);\
            }\
            if (MG82F6D17_INT_ADCWI_EN)\
            {\
                __DRV_ADC_WindowDetect_IT(ENABLE);\
            }\
            __DRV_ADC_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_SYSFLAG_EN)\
        {\
            if (MG82F6D17_WDT_IT_EN)\
            {\
                __DRV_WDT_IT_Cmd(ENABLE);\
            }\
            if (MG82F6D17_RTC_IT_EN)\
            {\
                __DRV_RTC_IT_Cmd(ENABLE);\
            }\
            if (MG82F6D17_BOD0_IT_EN)\
            {\
                __DRV_BODx_BOD0_IT_Cmd(ENABLE);\
            }\
            if (MG82F6D17_BOD1_IT_EN)\
            {\
                __DRV_BODx_BOD1_IT_Cmd(ENABLE);\
            }\
            __DRV_INT_SystemFlag_Enable();\
        }\
        if (MG82F6D17_KBI_EN)\
        {\
            __DRV_KBI_Wizard_Init();\
            __DRV_KBI_IT_Enable();\
        }\
        if (MG82F6D17_TWI0_IT_EN)\
        {\
            EIE1 |= ETWI0;\
        }\
        if (MG82F6D17_S1_IT_EN)\
        {\
            __DRV_URT1_IT_Cmd(ENABLE);\
        }\
        if (MG82F6D17_TIMER3_IT_EN)\
        {\
            EIE2 |= ET3;\
        }\
        if (MG82F6D17_DMA_IT_EN)\
        {\
            EDMA = MG82F6D17_DMA_IT_EN;\
        }\
    )



/**
 *******************************************************************************
 * @brief       All Interrupts Wizard Initial
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    __DRV_INTERRUPT_Wizard_Init();
 * @endcode
 *******************************************************************************
 */
#define __DRV_INTERRUPT_Wizard_Init()\
    MWT(\
        __DRV_INT_Priority_Wizard_Init();\
        __DRV_INT_Switch_Wizard_Init();\
        __DRV_INT_ITEA_Enable();\
    )


#endif  //_MG82F6D17_INTERRUPT_H













