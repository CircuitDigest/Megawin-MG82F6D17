/**
 ******************************************************************************
 *
 * @file        MG82F6D17_IAP_DRV.c
 *
 * @brief       This is the C code format driver file.
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
 * @par 		Disclaimer
 *		The Demo software is provided "AS IS" without any warranty, either
 *		expressed or implied, including, but not limited to, the implied warranties
 *		of merchantability and fitness for a particular purpose.  The author will
 *		not be liable for any special, incidental, consequential or indirect
 *		damages due to loss of data or any other reason.
 *		These statements agree with the worldwide and local dictated laws about
 *		authorship and violence against these laws.
 ******************************************************************************
 ******************************************************************************
 */

/// @cond __DRV_IAP_C_Without_Doxygen
#include "MG82F6D17_CONFIG.h"
/// @endcond

#if MG82F6D17_IAP_WIZARD

uint8_t DRV_IAP_GetStatus()
{
    uint8_t ISPCR_Buf;
    ISPCR_Buf = ISPCR & CFAIL;
    ISPCR &= ~CFAIL;
    return ISPCR_Buf;
}

uint8_t DRV_IAP_PageErase(uint8_t ADDR)
{
    uint8_t Status;
    ISPCR |= ISPEN;
    IFMT = IFMT_IAP_PAGE_ERASE;
    IFADRH = ADDR & 0xFE;
    IFADRL = 0x00;
    SCMD   = 0x46;
    SCMD   = 0xB9;
    IFMT = IFMT_STANDBY;
    ISPCR  &= ~ISPEN;
    Status = DRV_IAP_GetStatus();
    return Status;
}

uint8_t DRV_IAP_PageEraseWithoutIT(uint8_t ADDR)
{
    uint8_t Status;
    _push_(IE);
    EA = 0;
    DRV_IAP_PageErase(ADDR);
    _pop_(IE);
    return Status;

}

#define IFMT_IAP_PROGRAM                    0x02
#define IFMT_FLASH_PROGRAM_INC_IFADR        0x82
uint8_t DRV_IAP_ByteProgram(uint8_t MODE, uint16_t ADDR, uint8_t DATA)
{
    uint8_t Status;
    ISPCR |= ISPEN;
    IFMT = MODE;
    IFADRH = ADDR>>8;
    IFADRL = ADDR;
    IFD = DATA;
    SCMD = 0x46;
    SCMD = 0xB9;
    IFMT = IFMT_STANDBY;
    ISPCR &= ~ISPEN;
    IFD = 0;
    return Status;
}

#define IFMT_IAP_PROGRAM                    0x02
#define IFMT_FLASH_PROGRAM_INC_IFADR        0x82
uint8_t DRV_IAP_ByteProgramWithoutIT(uint8_t MODE, uint16_t ADDR, uint8_t DATA)
{
    uint8_t Status;
    _push_(IE);
    EA = 0;
    DRV_IAP_ByteProgram(MODE, ADDR, DATA);
    _pop_(IE);
    return Status;
}


#define IFMT_IAP_READ                       0x01
#define IFMT_FLASH_READ_INC_IFADR           0x81

uint8_t DRV_IAP_FlashRead(uint8_t MODE, uint16_t ADDR)
{
    ISPCR |= ISPEN;
    IFMT = MODE;
    IFADRH   = ADDR>>8;
    IFADRL   = ADDR;

    SCMD     = 0x46;
    SCMD     = 0xB9;
    IFMT = IFMT_STANDBY;
    ISPCR  &= ~ISPEN;
    return IFD;
}

#define IFMT_IAP_READ                       0x01
#define IFMT_FLASH_READ_INC_IFADR           0x81
uint8_t DRV_IAP_FlashReadWithoutIT(uint8_t MODE, uint16_t ADDR)
{
    uint8_t  IFD_BUF;
    _push_(IE);
    EA = 0;
    IFD_BUF = DRV_IAP_FlashRead(MODE, ADDR);
    _pop_(IE);
    return  IFD_BUF;
}
#endif
