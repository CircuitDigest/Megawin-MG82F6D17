/**
 ******************************************************************************
 *
 * @file        MG82F6D17_IAP_DRV.h
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
#ifndef _MG82F6D17_IAP_DRV_H
#define _MG82F6D17_IAP_DRV_H




/// @cond __DRV_IAP_Without_Doxygen
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//      <e0> In-Application-Programming(IAP)
//      <i> Activate IAP functions.
//          <i> We provide two types of IAP functions, normal and interrutps disabled. These two types functions are always available while being checked.
                #define MG82F6D17_IAP_WIZARD      0
//        <o> IAP Boundary
//          <i> Set up IAP boundary which must be an even unsigned character(uint8_t).
//          <i> Further, a legal IAP boundary msut not be higher than ISP start address.
                #define IAP_BOUNDARY      0x20
//      </e>

// <<< end of configuration section >>>




//__IFMT Commands
#define IFMT_STANDBY                        0x00
#define IFMT_IAP_READ                       0x01
#define IFMT_IAP_PROGRAM                    0x02
#define IFMT_IAP_PAGE_ERASE                 0x03
#define IFMT_FLASH_READ_CRC                 0x80
#define IFMT_FLASH_READ_INC_IFADR           0x81
#define IFMT_FLASH_PROGRAM_INC_IFADR        0x82
/// @endcond


/**
 *******************************************************************************
 * @brief       IAP boundary set-up.
 * @details
 * @return      None
 * @note
 * @par Example
 * @code
 *  __DRV_IAP_BoundarySetUp();
 * @endcode
 *******************************************************************************
 */
#define __DRV_IAP_BoundarySetUp()\
    MWT(\
        DRV_PageP_Write(IAPLB_P, IAP_BOUNDARY);\
    )
 
/**
 *******************************************************************************
 * @brief       Checking if ISP/IAP operations fail.
 * @details
 * @return      If it fails, it returns 1; otherwise, it returns 0 if it successes.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_GetStatus();
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_GetStatus();

/**
 *******************************************************************************
 * @brief       Erasing a full page of flash data without interrupts, a full page stands for 512 bytes.
 * @details
 * @param[in]   ADDR : specifies the page start address which should be even.
 * @return      If it fails, it returns 1; otherwise, it returns 0 if it successes.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_PageEraseWithoutIT(0x36);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_PageEraseWithoutIT(uint8_t ADDR);

/**
 *******************************************************************************
 * @brief       Erasing a full page of flash data, a full page stands for 512 bytes.
 * @details
 * @param[in]   ADDR : specifies the page start address which should be even.
 * @return      If it fails, it returns 1; otherwise, it returns 0 if it successes.
 * @note
 * @par Example 
 * @code
 *  DRV_IAP_PageErase(0x36);
 * @endcode
 * @note
 * @par Example
 *******************************************************************************
 */
uint8_t DRV_IAP_PageErase(uint8_t ADDR);

/**
 *******************************************************************************
 * @brief       Writing one byte data to flash without interrupts.
 * @details
 * @param[in]   MODE : supports byte program with/without  increasing address.
 *  @arg\b      IFMT_IAP_PROGRAM : writes one byte without increasing address.
 *  @arg\b      IFMT_FLASH_PROGRAM_INC_IFADR : writes one byte with increasing address.
 * @param[in]   ADDR : specifies the flash address, 16-bit, to be written.
 * @param[in]   DATA : the data which will be written onto the specified flash address.
 * @return      If it fails, it returns 1; otherwise, it returns 0 if it successes.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_ByteProgramWithoutIT(IFMT_FLASH_PROGRAM, 0x3600, 0x52);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_ByteProgramWithoutIT(uint8_t MODE, uint16_t ADDR, uint8_t DATA);

/**
 *******************************************************************************
 * @brief       Writing one byte data to flash.
 * @details
 * @param[in]   MODE : supports byte program with/without increasing address.
 *  @arg\b      IFMT_IAP_PROGRAM : writes one byte without increasing address.
 *  @arg\b      IFMT_FLASH_PROGRAM_INC_IFADR : writes one byte with increasing address.
 * @param[in]   ADDR : specifies the flash address, 16-bit, to be written.
 * @param[in]   DATA : the data which will be written onto the specified flash address.
 * @return      If it fails, it returns 1; otherwise, it returns 0 if it successes.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_ByteProgram(IFMT_FLASH_PROGRAM, 0x3600, 0x52);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_ByteProgram(uint8_t MODE, uint16_t ADDR, uint8_t DATA);

/**
 *******************************************************************************
 * @brief       Reading one byte from flash without interrupts.
 * @details
 * @param[in]   MODE : supports flash read with/without increasing address.
 *  @arg\b      IFMT_IAP_READ : reads one byte without increasing address.
 *  @arg\b      IFMT_IAP_READ_INC_IFADR : reads one byte with increasing address.
 * @param[in]   ADDR : specifies the flash address, 16-bit, to be read.
 * @return      Data stored in address ADDR.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_FlashReadWithoutIT(IFMT_IAP_READ, 0x3600);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_FlashReadWithoutIT(uint8_t MODE, uint16_t ADDR);

/**
 *******************************************************************************
 * @brief       Reading one byte from flash.
 * @details
 * @param[in]   MODE : supports flash read with/without increasing address.
 *  @arg\b      IFMT_IAP_READ : reads one byte without increasing address.
 *  @arg\b      IFMT_IAP_READ_INC_IFADR : reads one byte with increasing address.
 * @param[in]   ADDR : specifies the flash address, 16-bit, to be read.
 * @return      Data stored in address ADDR.
 * @note
 * @par Example
 * @code
 *  DRV_IAP_FlashRead(IFMT_IAP_READ, 0x3600);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_IAP_FlashRead(uint8_t MODE, uint16_t ADDR);


/**
 *******************************************************************************
 * @brief       UID reading.
 * @details
 * @param[in]   \_\_UID\_\_ : a length 16 uint8_t array to store UID.
 * @return      UID.
 * @note
 * @par Example
 * @code
 *   __DRV_IAP_ReadUID(UID);
 * @endcode
 *******************************************************************************
 */
#define __DRV_IAP_ReadUID(__UID__)\
    MWT(\
        uint8_t i;\
        ISPCR |= ISPEN;\
        IFMT = 0x06;\
        IFADRH = 0x02;\
        IFADRL = 0;\
        for(i = 0;i < 16;i++){\
            SCMD = 0x46;\
            SCMD = 0xB9;\
            __UID__[i] = IFD;\
            IFADRL++;\
        }\
        ISPCR &= ~ISPEN;\
    )
        
#endif
