/**
 ******************************************************************************
 *
 * @file        MG82F6D17_INT_VECTOR.H
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


#ifndef _MG82F6D17_INT_VECTOR_H
#define _MG82F6D17_INT_VECTOR_H

////!@{
////! defgroup interrupt service routine source Define
#define INT0_ISR_VECTOR           0
#define TIMER0_ISR_VECTOR         1
#define INT1_ISR_VECTOR           2
#define TIMER1_ISR_VECTOR         3
#define S0_ISR_VECTOR             4
#define TIMER2_ISR_VECTOR         5
#define INT2_ISR_VECTOR           6
#define SPI_ISR_VECTOR            7
#define ADC_ISR_VECTOR            8
#define PCA0_ISR_VECTOR           9
#define SYSFLAG_ISR_VECTOR        10
#define KBI_ISR_VECTOR            11
#define TWI0_ISR_VECTOR           12
#define S1_ISR_VECTOR             14
#define TIMER3_ISR_VECTOR         16
#define DMA_ISR_VECTOR            18

#endif
