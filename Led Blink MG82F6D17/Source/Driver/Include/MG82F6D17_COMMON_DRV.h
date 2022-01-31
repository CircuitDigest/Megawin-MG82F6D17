
/**
 ******************************************************************************
 *
 * @file        MG82F6D17_COMMON_DRV.h
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
 #ifndef _MG82F6D17_COMMON_DRV_H
#define _MG82F6D17_COMMON_DRV_H



 
/// @cond __DRV_COMMON_Without_Doxygen
//*** <<< Use Configuration Wizard in Context Menu >>> ***
//      <e0> PageP Function without Interrupts
//      <i>  Disable interrupts while using PageP functions.
//      <i>  Especially for those who want to guarantee PageP functions won't be affected by interrupt subroutines.
            #define MG82F6D17_PageP_WITHOUT_IT_WIZARD      0
//      </e>
// <<< end of configuration section >>>



//IFMT Commands
#define IFMT_STANDBY                        0x00
#define IFMT_PAGE_P_WRITE                   0x04
#define IFMT_PAGE_P_READ                    0x05
/// @endcond

/**
 *******************************************************************************
 * @brief       Switch the SFR page.
 * @details
 * @param[in]   \_\_Page\_\_ : specifies the page index.
 * @return     None
 * @note
 * @par Example
 * @code
 *  __DRV_SFR_PageIndex(0);
 * @endcode
 *******************************************************************************
 */
#define __DRV_SFR_PageIndex(__Page__)		SFRPI=(__Page__)

/**
 *******************************************************************************
 * @brief       Writing data into SFRs using PageP access without interrupts.
 * @details
 * @param[in]   ADDR : specifies the SFR data using PageP_ Write.
 * @param[in]   DATA : the data to be written into the SFR.
 * @return     None
 * @note
 * @par Example
 * @code
 *  DRV_PageP_WriteWithoutIT(IAPLB_P, 0x36);
 * @endcode
 *******************************************************************************
 */
void DRV_PageP_WriteWithoutIT(uint8_t ADDR, uint8_t DATA);

/**
 *******************************************************************************
 * @brief       Writing data into SFRs using PageP access.
 * @details
 * @param[in]   ADDR : specifies the SFR data using PageP_ Write.
 * @param[in]   DATA : the data to be written into the SFR.
 * @return     None
 * @note
 * @par Example
 * @code
 *  DRV_PageP_Write(IAPLB_P, 0x36);
 * @endcode
 *******************************************************************************
 */
void DRV_PageP_Write(uint8_t ADDR, uint8_t DATA);

/**
 *******************************************************************************
 * @brief       Reading data from SFRs using PageP access without interrupts.
 * @details
 * @param[in]   ADDR : specifies the SFR data using PageP_ read.
 * @return     DATA : the data stored in ADDR.
 * @note
 * @par Example
 * @code
 *  DRV_PageP_ReadWithoutIT(IAPLB_P);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_PageP_ReadWithoutIT(uint8_t ADDR);

/**
 *******************************************************************************
 * @brief       Reading data from SFRs using PageP_ access.
 * @details
 * @param[in]   ADDR : specifies the SFR data using PageP_ read.
 * @return     DATA : the data stored in ADDR.
 * @note
 * @par Example
 * @code
 *  DRV_PageP_ReadWithoutIT(IAPLB_P);
 * @endcode
 *******************************************************************************
 */
uint8_t DRV_PageP_Read(uint8_t ADDR);



#endif  //_MG82F6D17_COMMON_DRV_H
