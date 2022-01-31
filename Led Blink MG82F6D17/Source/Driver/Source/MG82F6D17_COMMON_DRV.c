/**
 ******************************************************************************
 *
 * @file        MG82F6D17_COMMON_DRV.c
 *
 * @brief       This is the C code format driver file.
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
 
/// @cond __DRV_COMMON_C_Without_Doxygen
#include "MG82F6D17_CONFIG.h"

void DRV_PageP_Write(uint8_t ADDR, uint8_t DATA)
{
    ISPCR |= ISPEN;
    IFMT = IFMT_PAGE_P_WRITE;
    IFADRH = 0;
    IFADRL = ADDR;
    IFD = DATA;
    SCMD = 0x46;
    SCMD = 0xB9;
    IFMT = IFMT_STANDBY;
    ISPCR &= ~ISPEN;
}

uint8_t DRV_PageP_Read(uint8_t ADDR)
{
    ISPCR |= ISPEN;
    IFMT   = IFMT_PAGE_P_READ;
    IFADRH = 0;
    IFADRL = ADDR;
    SCMD   = 0x46;
    SCMD   = 0xB9;
    IFMT   = IFMT_STANDBY;
    ISPCR  &= ~ISPEN;
    return IFD;
}

#if MG82F6D17_PageP_WITHOUT_IT_WIZARD
void DRV_PageP_WriteWithoutIT(uint8_t ADDR, uint8_t DATA)
{
    _push_(IE);
    EA = 0;
    DRV_PageP_Write(ADDR, DATA);
    _pop_(IE);
}

uint8_t DRV_PageP_ReadWithoutIT(uint8_t ADDR)
{
    _push_(IE);
    EA = 0;
    DRV_PageP_Read(ADDR);
//    IFD_BUF = IFD;
    _pop_(IE);
    return IFD;
}
#endif
/// @endcond
