/**
 ******************************************************************************
 *
 * @file        MG82F6D17_INTERRUPT.C
 *
 * @brief       This is the C code format driver source file.
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


#include "MG82F6D17_CONFIG.h"

/**
 *******************************************************************************
 * 
 * 
 * 
 * Interrupts ISR
 * 
 * 
 * 
 *******************************************************************************
 */
/**
 *******************************************************************************
 * @brief       External Interrupt 0 Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    ExINT0_IE0_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_INT0_EN
void ExINT0_IE0_ISR(void)  interrupt INT0_ISR_VECTOR
{
    _push_(SFRPI);
    __DRV_INT0_ClearFlag();
    _pop_(SFRPI);
}
#endif

/**
 *******************************************************************************
 * @brief       Timer 0 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    TIMER0_TF0_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_TIMER0_IT_EN
void TIMER0_TF0_ISR(void)   interrupt TIMER0_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif

/**
 *******************************************************************************
 * @brief       External Interrupt 1 Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    ExINT1_IE1_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_INT1_EN
void ExINT1_IE1_ISR(void)   interrupt INT1_ISR_VECTOR
{
    _push_(SFRPI);
    __DRV_INT1_ClearFlag();
    _pop_(SFRPI);
}
#endif

/**
 *******************************************************************************
 * @brief       Timer 1 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    TIMER1_TF1_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_TIMER1_IT_EN
void TIMER1_TF1_ISR(void)   interrupt TIMER1_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif

/**
 *******************************************************************************
 * @brief       UART0 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    UART0_S0RI_S0TI_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_S0_IT_EN
void UART0_S0RI_S0TI_ISR(void)   interrupt S0_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       Timer 2 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    TIMER2_TF2_EXF2_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_TIMER2_IT_EN
void TIMER2_TF2_EXF2_ISR(void)   interrupt TIMER2_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       External Interrupt 2 Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    ExINT2_IE2_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_INT2_EN
void ExINT2_IE2_ISR(void)   interrupt INT2_ISR_VECTOR
{
    _push_(SFRPI);
    __DRV_INT2_ClearFlag();
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       SPI Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    SPI_SPIF_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_SPI_IT_EN
void SPI_SPIF_ISR(void)   interrupt SPI_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       ADC Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    ADC_ADCI_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_ADC_IT_EN
void ADC_ADCI_ISR(void)   interrupt ADC_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       PCA 0 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    PCA0_CF_CCFn_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_PCA0_IT_EN
void PCA0_CF_CCFn_ISR(void)   interrupt PCA0_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       System Flag Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    SYSFlag_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_SYSFLAG_EN
void SYSFlag_ISR()  interrupt SYSFLAG_ISR_VECTOR
{
  _push_(SFRPI);
  _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       KBI Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    KBI_KBIF_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_KBI_EN
void KBI_KBIF_ISR()  interrupt KBI_ISR_VECTOR
{
    _push_(SFRPI);
    __DRV_KBI_ClearFlag();
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       TWI0 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    TWI0_SI_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_TWI0_IT_EN
void TWI0_SI_ISR(void)   interrupt TWI0_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       UART1 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    UART1_S1RI_S1TI_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_S1_IT_EN
void UART1_S1RI_S1TI_ISR(void)   interrupt S1_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       Timer 3 Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    TIMER3_TF3_EXF3_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_TIMER3_IT_EN
void TIMER3_TF3_EXF3_ISR(void)   interrupt TIMER3_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


/**
 *******************************************************************************
 * @brief       DMA Interrupt Vector Service Routine
 * @details
 * @return      None
 * @note
 * @par         Example
 * @code
 *    DMA_DCF0_ISR();
 * @endcode
 *******************************************************************************
 */
#if MG82F6D17_DMA_IT_EN
void DMA_DCF0_ISR(void)   interrupt DMA_ISR_VECTOR 
{
    _push_(SFRPI);
    
    _pop_(SFRPI);
}
#endif


















