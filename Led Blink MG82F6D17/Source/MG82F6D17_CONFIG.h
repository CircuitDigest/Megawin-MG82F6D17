/**
 ******************************************************************************
 *
 * @file        MG82F6D17_CONFIG.h
 *
 * @brief       This is the C code format driver head file.
 *
 * @par         Project
 *              MA82F6D17
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
#ifndef _MG82F6D17_CONFIG_H
#define _MG82F6D17_CONFIG_H


#include <intrins.h>
#include "REG_MG82F6D17.h"
#include "TYPEDEF.h"
#include "stdio.h"

/**
 ******************************************************************************
 * do-while template
 ******************************************************************************
 */
#define MWT( __stuff__ )  do { __stuff__ } while (0)


/**
 ******************************************************************************
 * Driver Headers
 ******************************************************************************
 */
#include "MG82F6D17_COMMON_DRV.h"       //COMMON
//#include "MG82F6D17_xxxxx_DRV.h"      //Ch8. DMA
#include "MG82F6D17_CLK_DRV.h"          //Ch9. System Clock
#include "MG82F6D17_WDT_DRV.h"          //Ch10. WDT
#include "MG82F6D17_RTC_DRV.h"          //Ch11. RTC
//#include "MG82F6D17_xxxxx_DRV.h"      //Ch12. System Reset
#include "MG82F6D17_BODx_DRV.h"         //Ch13. Power Management
#include "MG82F6D17_GPIO_DRV.h"         //Ch14. GPIO
//#include "MG82F6D17_xxxxx_DRV.h"      //Ch16. Timers/Counters
#include "MG82F6D17_INT_DRV.h"          //Ch15. Interrupt
#include "MG82F6D17_INT_VECTOR.h"       //      Interrupt Vectors
//#include "MG82F6D17_PCA_DRV.h"        //Ch17. PCA0
//#include "MG82F6D17_PCA_DRV.h"        //Ch17. PCA0
#include "MG82F6D17_UART0_DRV.h"        //Ch18. UART0
#include "MG82F6D17_UART1_DRV.h"        //Ch19. UART1
//#include "MG82F6D17_xxxxx_DRV.h"      //Ch20. SPI
//#include "MG82F6D17_I2C0_DRV.h"       //Ch21. TWI0/I2C0
//#include "MG82F6D17_SI2C0_DRV.h"      //Ch22. STWI0/SI2C0
//#include "MG82F6D17_xxxxx_DRV.h"      //Ch23. Beeper
#include "MG82F6D17_KBI_DRV.h"          //Ch24. KBI
//#include "MG82F6D17_GPL_DRV.h"        //Ch25. GPL
#include "MG82F6D17_ADC_DRV.h"          //Ch26. ADC
#include "MG82F6D17_IAP_DRV.h"          //Ch28. IAP
#include "MG82F6D17_INTERRUPT.h"        //Ch15. Interrupt
#include "MG82F6D17_WIZARD.h"           //WIZARD

/**
 ******************************************************************************
 * Wizard Initial Function Table
 ******************************************************************************
 */

//Ch8. DMA

//Ch9. System Clock

//Ch10. WDT

//Ch11. RTC

//Ch12. System Reset

//Ch13. Power Management

//Ch14. GPIO

//Ch15. Interrupt

//Ch16. Timers/Counters

//Ch17. PCA0

//Ch18. UART0
void DRV_UART0_Wizard_Init(void);

//Ch19. UART1
void DRV_UART1_Wizard_Init(void);

//Ch20. SPI

//Ch21. TWI0/I2C0

//Ch22. STWI0/SI2C0

//Ch23. Beeper

//Ch24. KBI

//Ch25. GPL

//Ch26. ADC

//Ch28. IAP

//Others


#endif


