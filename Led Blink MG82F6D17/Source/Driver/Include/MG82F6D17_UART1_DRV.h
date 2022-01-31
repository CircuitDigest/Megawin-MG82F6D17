#ifndef MG82F6D17_UART1_DRV_H
#define MG82F6D17_UART1_DRV_H

/**
 ******************************************************************************
 *
 * @file        MG82F6D17_UART1_DRV.h
 *
 * @brief       This is the C code format driver file.
 *
 * @par         Project
 *              MG82F6D17
 * @version     V0.02
 * @date        2020/01/21
 * @author      Megawin Software Center
 * @copyright   Copyright (c) 2020 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par 		Disclaimer
 *		The Demo software is provided "AS IS"  without any warranty, either
 *		expressed or implied, including, but not limited to, the implied warranties
 *		of merchantability and fitness for a particular purpose.  The author will
 *		not be liable for any special, incidental, consequential or indirect
 *		damages due to loss of data or any other reason.
 *		These statements agree with the world wide and local dictated laws about
 *		authorship and violence against these laws.
 ******************************************************************************
 ******************************************************************************
 */

#include "MG82F6D17_CONFIG.h"

//*** <<< Use Configuration Wizard in Context Menu >>> ***
///@cond Wizard
//<h>Initialize Serial Port 1 (UART1)
//<i>UART1 wizard option.
//<o>UART1
//<0=>Easy Mode
//<1=> Advanced Mode
//<i>UART1 option select.
#define URT1_Option 0
//<e>Easy Mode
//<i>Easy mode enable.
#define URT1_Easy_Mode 0
//<e>UART1 Enable
//<i>Ready.
#define URT1_Easy 0
//<o>Easy Select
//<0x000003=>Select0
//<0x010003=>Select1
//<0x000103=>Select2
//<0x010103=>Select3
//<0x000203=>Select4
//<0x010203=>Select5
//<0x020303=>Select6
//<0x030303=>Select7
//<0x000303=>Select8
//<0x010303=>Select9
//<0x020903=>Select10
//<0x030903=>Select11
//<0x000403=>Select12
//<0x010403=>Select13
//<0x020a03=>Select14
//<0x030a03=>Select15
//<0x000a03=>Select16
//<0x010a03=>Select17
//<0x000603=>Select18
//<0x010603=>Select19
//<0x000703=>Select20
//<0x010703=>Select21
//<0x000803=>Select22
//<0x010803=>Select23

#define URT1_Easy_Select 0x000003
//<i>Note:Please confirm clock source before you select parameter.

//<i>Select0 :	4800	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select1 :	4800	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select2 :	9600	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select3 :	9600	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select4 :	19200	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select5 :	19200	8BIt	S1BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz

//<i>Select6 :	38400	8Bit	S1BRG	SYSCLK/1  	Default Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select7 :	38400	8Bit	S1BRG	SYSCLK/1  	Default Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select8 :	38400	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select9 :	38400	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select10:	57600	8Bit	S1BRG	SYSCLK/1  	Default Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 11.0592Mhz

//<i>Select11:	57600	8Bit	S1BRG	SYSCLK/1  	Default Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 11.0592Mhz
//<i>Select12:	57600	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select13:	57600	8Bit	S1BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both  	IHRCO 12Mhz
//<i>Select14:	115200	8Bit	S1BRG	SYSCLK/1	Default Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select15:	115200	8Bit	S1BRG	SYSCLK/1	Default Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select16:	115200	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select17:	115200	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz

//<i>Select18:	230400	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select19:	230400	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select20:	250000	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 12Mhz
//<i>Select21:	250000	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 12Mhz
//<i>Select22:	750000	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 12Mhz
//<i>Select23:	750000	8Bit	S1BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	Rx=P34 Tx=P35	Tx Rx Both	IHRCO 12Mhz



//</e>






//</e>

//<e>Advanced Mode
//<i>Advanced mode enable .

#define URT1_Advance_Mode 0
//<e>UART1 Enable
//<i>Mode1 8bit ready.
//<i>Mode2 9bit ready.
//<i>Mode3 9bit preparing.
//<i>Mode4 SPI master preparing.

#define URT1_Advance 0
//<o>Mode
//<0x01=>Mode 1 8Bit
//<0x02=>Mode 2 9Bit
//<0x03=>
//<0x04=>
//<0x00=>
//<i> Mode1~mode2 select 8 bit,9 bit.
#define URT1_Mode  0x01
//<o>PinMux Select
//<0x00=>Rx P10 Tx P11
//<0x01=>Rx P60 Tx P61
//<0x02=>Rx P44 Tx P45
//<0x03=>Rx P34 Tx P35
//<i>Initial I/O mode for P60P61 P44P45 UART1 application.
#define URT1_PinMux_Select 0x03
//<e>Mode 1 8Bit Enable
//<i>Mode 1 8bit enable.
//<i>Ready.
#define URT1_Mode1_8Bit 0
//<e>Baud rate config enable
//<i>.
#define URT1_Mode1_8Bit_Baud_Rate_Config 0
//<o0>Rx Clock
//<0=> S1BRG
//<i>Clock source select S1BRG .
#define URT1_Mode1_8Bit_Receive_Clock 0x00
//<o0.2>Tx Clock
//<0=> S1BRG
//<i>Clock source select S1BRG .
#define URT1_Mode1_8Bit_Transmit_Clock 0x00
//<o0.3>Data Order <0=> MSB <1=> LSB
//<i> Data order select MSB or LSB.
#define URT1_Mode1_8Bit_Data_Order 0x08
//<o0.4>Enhance Baud Rate	<0=>Default Baud Rate (S1MOD1=0)  <1=>Double Baud Rate (S1MOD1=1)
//<i> Default baud rate S1MOD1=0.
//<i> Double  baud rate S1MOD1=1.
#define URT1_Mode1_8Bit_Baud_Rate 16
//<o0.6>Source <0=>SYSCLK/12 (S1TX12=0)  <1=>SYSCLK/1 (S1TX12=1)
//<i>S1BRG clock source SYSCLK/12 S1TX12=0 .
//<i>S1BRG clock source SYSCLK/1  S1TX12=1 .
#define URT1_Mode1_8Bit_Clock_Source 64
//<o>Baud rate reload (0~255) <0-255>
#define URT1_Baud_Rate_Reload_Count 230
//<i>**********     	  2^S1MOD1      	     	    Fsysclk
//<i>Baud Rate =    	-----------    	X    	----------------    	;S1TX12=0.
//<i>**********     	    32         	     	  12x(256-S1BRT)
//<i>**********     	  2^S1MOD1      	     	    Fsysclk
//<i>Baud Rate =    	-----------    	X    	----------------    	;S1TX12=1.
//<i>**********     	    32         	     	  1x(256-S1BRT)
//</e>
//</e>
//<e> Mode 2 9Bit Enable
//<i>Mode 2 9bit enable.
//<i>Ready.
#define URT1_Mode2_9Bit 0
//<e> Baud Rate Config Enable
//<i>.
#define URT1_Mode2_9Bit_Baud_Rate_Config 0
//<i>BaudRate    	RxClock     	TxClock     	EnhanceBaudRate     	Source      	SYSCLK/n

//<i>172800      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/1    	SYSCLK/64     	IHRCO 11.0592MHZ
//<i>345600      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate    	SYSCLK/1    	SYSCLK/32     	IHRCO 11.0592MHZ
//<i>57600      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/3    	SYSCLK/192    	IHRCO 11.0592MHZ
//<i>115200     	SYSCLK/2    	SYSCLK/2    	Double Baud Rate    	SYSCLK/3    	SYSCLK/96     	IHRCO 11.0592MHZ


//<i>187500      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/1    	SYSCLK/64     	IHRCO 12MHZ
//<i>375000      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate    	SYSCLK/1    	SYSCLK/32     	IHRCO 12MHZ
//<i>62500      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/3    	SYSCLK/192    	IHRCO 12MHZ
//<i>125000     	SYSCLK/2    	SYSCLK/2    	Double Baud Rate    	SYSCLK/3    	SYSCLK/92     	IHRCO 12MHZ

//<o0>Rx Clock
//<0x01=>SYSCLK/2
//<i>Clock source select SYSCLK/2.
#define URT1_Mode2_9Bit_Receive_Clock 0x01
//<o0>Tx Clock
//<0x00=>SYSCLK/2
//<i>Clock source select SYSCLK/2.
#define URT1_Mode2_9Bit_Transmit_Clock 0x00
//<o0.3>Data Order <0=> MSB <1=> LSB
//<i> Data order select MSB or LSB.
#define URT1_Mode2_9Bit_Data_Order 0x08
//<o0.4..5>Enhance Baud Rate
//<0=>Default Baud Rate (S1MOD1=0)
//<1=>Double Baud Rate (S1MOD1=1)
//<i>Default baud rate S1MOD1=0.
//<i>Default baud rate S1MOD1=1.
#define URT1_Mode2_9Bit_Baud_Rate 0
//<o0.6>Source <0=>SYSCLK/1 (S1M0X3=0) <1=>SYSCLK/3 (S1M0X3=1)
//<i>SYSCLK/1 S1M0X3=0.
//<i>SYSCLK/1 S1M0X3=1.
#define URT1_Mode2_9Bit_Clock_Source 64


//</e>
//</e>



//</e>




//</e>


//</h>
///@endcond
//<<< end of configuration section >>>


/**
*******************************************************************************
* @brief        UART1 Interrupt
* @details      Enable Disable UART1 Interrupt
* @param[in]    \_\_STATE\_\_ :
*  @arg\b       Disable_URT1_Interrupt
*  @arg\b       Enable_URT1_Interrupt
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Interrupt_Cmd(ENABLE_SERIAL_PORT1_INTERRUPT)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_IT_Cmd
#define ENABLE_SERIAL_PORT1_INTERRUPT 1
#define DISABLE_SERIAL_PORT1_INTERRUPT 0
///@endcond


#define __DRV_URT1_IT_Cmd(__STATE__)\
    MWT(\
    ((__STATE__)==0?(EIE1=EIE1&(~ES1)):(EIE1=EIE1|(ES1)));\
    ;)

/**
*******************************************************************************
* @brief        UART1 Mode1 Init from Wizard
* @details     Initial (SerialReception) (MODE) (Data Order) (Baud Rate) (Clock Source) (PinMux)
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Mode1_Wizard_Init()
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_Mode1_Wizard_Init()\
    MWT(\
        __DRV_URT1_SerialReception_Cmd(UART1_DISABLE_RECEPTION);\
        __DRV_URT1_Mode_Select(URT1_Mode);\
        __DRV_URT1_DataOrder_Select(URT1_Mode1_8Bit_Data_Order);\
        __DRV_URT1_BaudRateX2_Select(URT1_Mode1_8Bit_Baud_Rate);\
        __DRV_URT1_BaudRateGenerator_Cmd(S1BRG_OPERATION_STOP);\
        __DRV_URT1_BaudRateReloadReg_Write(URT1_Baud_Rate_Reload_Count);\
        __DRV_URT1_BaudRateGeneratorClock_Select(URT1_Mode1_8Bit_Clock_Source);\
        __DRV_URT1_BaudRateGenerator_Cmd(S1BRG_OPERATION_START);\
        __DRV_URT1_SerialReception_Cmd(UART1_ENABLE_RECEPTION);\
        __DRV_URT1_PinMux_Select(URT1_PinMux_Select);\
    ;)

/**
*******************************************************************************
* @brief        UART1 Mode2 Init from Wizard.
* @details     Initial (SerialReception) (MODE) (Data Order) (Baud Rate) (Clock Source) (PinMux)
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Mode2_Wizard_Init()
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_Mode2_Wizard_Init()\
    MWT(\
        __DRV_URT1_SerialReception_Cmd(UART1_DISABLE_RECEPTION);\
        __DRV_URT1_Mode_Select(URT1_Mode);\
        __DRV_URT1_DataOrder_Select(URT1_Mode2_9Bit_Data_Order);\
        __DRV_URT1_BaudRateX2_Select(URT1_Mode2_9Bit_Baud_Rate);\
        __DRV_URT1_BaudRateDiv3_Cmd(URT1_Mode2_9Bit_Clock_Source);\
        __DRV_URT1_SerialReception_Cmd(UART1_ENABLE_RECEPTION);\
        __DRV_URT1_PinMux_Select(URT1_PinMux_Select);\
    ;)

/**
*******************************************************************************
* @brief        UART1 Mode Select
* @details     Set SM31 SM01 SM11
* @param[in]   \_\_MODE\_\_ :
*  @arg\b      URT1_MODE0_SHIFT_REG
*  @arg\b      URT1_MODE1_8BIT
*  @arg\b      URT1_MODE2_9BIT
*  @arg\b      URT1_MODE3_9BIT
*  @arg\b      URT1_MODE4_SPI_MASTER
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Mode_Select(URT1_Mode0_SHIFT_REG)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT1_Mode_Select
#define UART1_MODE0_SHIFT_REG 0x00
#define UART1_MODE1_8BIT 0x01
#define UART1_MODE2_9BIT 0x02
#define UART1_MODE3_9BIT 0x03
#define UART1_MODE4_SPI_MASTER 0x04
///@endcond



#define __DRV_URT1_Mode_Select(__MODE__)\
    MWT(\
        __DRV_URT1_SetSM31(__MODE__);\
        __DRV_URT1_SetSM01(__MODE__);\
        __DRV_URT1_SetSM11(__MODE__);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Pin Config
* @details     Set S1PS1 S1PS0
* @param[in]   \_\_RXTX\_\_ :
*  @arg\b      UART1_RX_P10_TX_P11
*  @arg\b      UART1_RX_P60_TX_P61
*  @arg\b      UART1_RX_P44_TX_P45
*  @arg\b      UART1_RX_P34_TX_P35
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_PinMux_Select(UART1_RX_P10_TX_P11)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT1_PinMux_Select
#define UART1_RX_P10_TX_P11 0x00
#define UART1_RX_P60_TX_P61 0x01
#define UART1_RX_P44_TX_P45 0x02
#define UART1_RX_P34_TX_P35 0x03
///@endcond

#define __DRV_URT1_PinMux_Select(__RXTX__)\
    MWT(\
        __DRV_URT1_SetS1PS1(__RXTX__);\
        __DRV_URT1_SetS1PS0(__RXTX__);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Easy Wizard
* @details     Config UART1 (Mode) (Baud Rate) (PinMux) (SerialReception)
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Easy_Wizard_Init()
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_Easy_Wizard_Init()\
    MWT(\
        __DRV_URT1_EasyDisableSerialReception(URT1_Easy_Select);\
        __DRV_URT1_Mode_Easy_Select(URT1_Easy_Select);\
        __DRV_URT1_BaudRate_Easy_Select(URT1_Easy_Select);\
        __DRV_URT1_PinMux_Easy_Select(URT1_Easy_Select);\
        __DRV_URT1_EasyEnableSerialReception(URT1_Easy_Select);\
    ;)


///@cond __DRV_URT1_Easy_Wizard_Init
//Macro for wizard constant option
#define UART1_SELECT0 UART1_8BIT_CONFIG0
#define UART1_SELECT1 UART1_8BIT_CONFIG1
#define UART1_SELECT2 UART1_8BIT_CONFIG2
#define UART1_SELECT3 UART1_8BIT_CONFIG3
#define UART1_SELECT4 UART1_8BIT_CONFIG4
#define UART1_SELECT5 UART1_8BIT_CONFIG5
#define UART1_SELECT6 UART1_8BIT_CONFIG6
#define UART1_SELECT7 UART1_8BIT_CONFIG7
#define UART1_SELECT8 UART1_8BIT_CONFIG8
#define UART1_SELECT9 UART1_8BIT_CONFIG9
#define UART1_SELECT10 UART1_8BIT_CONFIG10
#define UART1_SELECT11 UART1_8BIT_CONFIG11
#define UART1_SELECT12 UART1_8BIT_CONFIG12
#define UART1_SELECT13 UART1_8BIT_CONFIG13
#define UART1_SELECT14 UART1_8BIT_CONFIG14
#define UART1_SELECT15 UART1_8BIT_CONFIG15
#define UART1_SELECT16 UART1_8BIT_CONFIG16
#define UART1_SELECT17 UART1_8BIT_CONFIG17
#define UART1_SELECT18 UART1_8BIT_CONFIG18
#define UART1_SELECT19 UART1_8BIT_CONFIG19
#define UART1_SELECT20 UART1_8BIT_CONFIG20
#define UART1_SELECT21 UART1_8BIT_CONFIG21
#define UART1_SELECT22 UART1_8BIT_CONFIG22
#define UART1_SELECT23 UART1_8BIT_CONFIG23
#define UART1_8BIT_CONFIG0 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_4800|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG1 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_4800|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG2 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG3 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG4 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG5 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG6 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_38400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG7 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_38400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG8 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_38400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG9 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_38400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG10 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_57600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG11 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_57600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG12 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG13 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG14 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG15 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG16 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG17 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG18 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_230400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG19 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_230400|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG20 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_250000|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG21 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_250000|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG22 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_750000|UART1_PIN_CONFIG_RX_P34_TX_P35)
#define UART1_8BIT_CONFIG23 (UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_750000|UART1_PIN_CONFIG_RX_P34_TX_P35)
//constant URT1 mode (0~255) option
#define UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX    (0x000000+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX    (0x010000+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_LSB_TX_RX    (0x020000+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_SYSCLK_DIV_1_BAUD_RATE_1X_MSB_TX_RX    (0x030000+OPTION_ADDRESS_BASE)
//constant URT1 baud rate(0~255) option
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_4800    (0x000000+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_9600    (0x000100+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_19200    (0x000200+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_38400    (0x000300+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_57600    (0x000400+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_115200    (0x000500+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_230400    (0x000600+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_250000    (0x000700+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_12MHZ_BAUD_RATE_750000    (0x000800+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_57600    (0x000900+OPTION_ADDRESS_BASE)
#define UART1_8BIT_S1BRG_IHRCO_110592MHZ_BAUD_RATE_115200    (0x000a00+OPTION_ADDRESS_BASE)
//constant URT1 pin config (0~15) option
#define UART1_PIN_CONFIG_RX_P10_TX_P11    (0x000000+OPTION_ADDRESS_BASE)
#define UART1_PIN_CONFIG_RX_P60_TX_P61    (0x000001+OPTION_ADDRESS_BASE)
#define UART1_PIN_CONFIG_RX_P44_TX_P45    (0x000002+OPTION_ADDRESS_BASE)
#define UART1_PIN_CONFIG_RX_P34_TX_P35    (0x000003+OPTION_ADDRESS_BASE)
///@endcond


/**
*******************************************************************************
* @brief       UART1 Easy Wizard
* @details     Set SM31 SM01 SM11 S1DOR S1MOD1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Mode_Easy_Select(URT1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_Mode_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_URT1_EasySetSM31(__SELECT__);\
        __DRV_URT1_EasySetSM01(__SELECT__);\
        __DRV_URT1_EasySetSM11(__SELECT__);\
        __DRV_URT1_EasySetS1DOR(__SELECT__);\
        __DRV_URT1_EasySetS1MOD1(__SELECT__);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Easy Wizard
* @details     Set S1TR S1BRT S1BRC
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_BaudRate_Easy_Select(URT1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_BaudRate_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_URT1_EasySetS1TR_Stop(__SELECT__);\
        __DRV_URT1_EasySetS1TX12(__SELECT__);\
        __DRV_URT1_EasySetS1BRT(__SELECT__);\
        __DRV_URT1_EasySetS1BRC(__SELECT__);\
        __DRV_URT1_EasySetS1TR_Start(__SELECT__);\
     ;)

/**
*******************************************************************************
* @brief       UART1 PinMux Easy Wizard
* @details     Set S1PS0 S1PS1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_PinMux_Easy_Select(URT1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_PinMux_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_URT1_EasySetS1PS1(__SELECT__);\
        __DRV_URT1_EasySetS1PS0(__SELECT__);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Enhance Baud Rate
* @details     Set S1MOD1
* @param[in]   \_\_TIME\_\_ :
*  @arg\b      UART1_DEFAULT_BAUD_RATE
*  @arg\b      UART1_DOUBLE_BAUD_RATE_X1
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_BaudRateX2_Select(Default_Baud_Rate)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_BaudRateX2_Select
#define UART1_DEFAULT_BAUD_RATE 0
#define UART1_DOUBLE_BAUD_RATE_X1 16
///@endcond

#define __DRV_URT1_BaudRateX2_Select(__TIME__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__TIME__^16)==0?(S1CFG=S1CFG|(S1MOD1)):(S1CFG=S1CFG&(~S1MOD1)));\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       Set SFR
* @details     Set SM31
* @param[in]   \_\_MODE\_\_ :
*  @arg\b      URT1_MODE0_SHIFT_REG
*  @arg\b      URT1_MODE1_8BIT
*  @arg\b      URT1_MODE2_9BIT
*  @arg\b      URT1_MODE3_9BIT
*  @arg\b      URT1_MODE4_SPI_MASTER
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SetSM31(URT1_MODE1_8BIT)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_SetSM31(__MODE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__MODE__^0x00)==0?(S1CFG=S1CFG&(~SM31)):\
        (__MODE__^0x01)==0?(S1CFG=S1CFG&(~SM31)):\
        (__MODE__^0x02)==0?(S1CFG=S1CFG&(~SM31)):\
        (__MODE__^0x03)==0?(S1CFG=S1CFG&(~SM31)):\
        (__MODE__^0x04)==0?(S1CFG=S1CFG|(SM31)):\
        (__MODE__^0x05)==0?(S1CFG=S1CFG|(SM31)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       Set SFR
* @details     Set SM01
* @param[in]   \_\_MODE\_\_ :
*  @arg\b      URT1_MODE0_SHIFT_REG
*  @arg\b      URT1_MODE1_8BIT
*  @arg\b      URT1_MODE2_9BIT
*  @arg\b      URT1_MODE3_9BIT
*  @arg\b      URT1_MODE4_SPI_MASTER
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SetSM01(URT1_MODE2_9BIT)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_SetSM01(__MODE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__MODE__^0x00)==0?(SM01=0):\
        (__MODE__^0x01)==0?(SM01=0):\
        (__MODE__^0x02)==0?(SM01=1):\
        (__MODE__^0x03)==0?(SM01=1):\
        (__MODE__^0x04)==0?(SM01=0):\
        (__MODE__^0x05)==0?(SM01=0):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       Set SFR
* @details     Set SM11
* @param[in]   \_\_MODE\_\_ :
*  @arg\b      URT1_MODE0_SHIFT_REG
*  @arg\b      URT1_MODE1_8BIT
*  @arg\b      URT1_MODE2_9BIT
*  @arg\b      URT1_MODE3_9BIT
*  @arg\b      URT1_MODE4_SPI_MASTER
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SetSM11(URT1_MODE3_9BIT)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_SetSM11(__MODE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__MODE__^0x00)==0?(SM11=0):\
        (__MODE__^0x01)==0?(SM11=1):\
        (__MODE__^0x02)==0?(SM11=0):\
        (__MODE__^0x03)==0?(SM11=1):\
        (__MODE__^0x04)==0?(SM11=0):\
        (__MODE__^0x05)==0?(SM11=1):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief        UART1 Pin MUX
* @details     Set S1PS1
* @param[in]   \_\_RXTX\_\_ :
*  @arg\b      UART1_RX_P10_TX_P11
*  @arg\b      UART1_RX_P60_TX_P61
*  @arg\b      UART1_RX_P44_TX_P45
*  @arg\b      UART1_RX_P34_TX_P35
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SetS1PS1(UART1_RX_P10_TX_P11)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_SetS1PS1(__RXTX__)\
    MWT(\
        __DRV_SFR_PageIndex(6);\
        ((__RXTX__^0x00)==0?AUXR9=AUXR9&(~S1PS1):\
        (__RXTX__^0x01)==0?AUXR9=AUXR9&(~S1PS1):\
        (__RXTX__^0x02)==0?AUXR9=AUXR9|(S1PS1):\
        (__RXTX__^0x03)==0?AUXR9=AUXR9|(S1PS1):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 Pin Config
* @details     Set S1PS0
* @param[in]   \_\_RXTX\_\_ :
*  @arg\b      UART1_RX_P10_TX_P11
*  @arg\b      UART1_RX_P60_TX_P61
*  @arg\b      UART1_RX_P44_TX_P45
*  @arg\b      UART1_RX_P34_TX_P35
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SetS1PS0(UART1_RX_P10_TX_P11)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_SetS1PS0(__RXTX__)\
    MWT(\
        __DRV_SFR_PageIndex(6);\
        ((__RXTX__^0x00)==0?AUXR9=AUXR9&(~S1PS0):\
        (__RXTX__^0x01)==0?AUXR9=AUXR9|(S1PS0):\
        (__RXTX__^0x02)==0?AUXR9=AUXR9&(~S1PS0):\
        (__RXTX__^0x03)==0?AUXR9=AUXR9|(S1PS0):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Data Order
* @details     Set S1DOR
* @param[in]   \_\_ORDER\_\_ :
*  @arg\b      UART1_DATA_ORDER_LSB
*  @arg\b      UART1_DATA_ORDER_MSB
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_DataOrder_Select(UART1_DATA_ORDER_LSB)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_DataOrder_Select
#define UART1_DATA_ORDER_LSB 1
#define UART1_DATA_ORDER_MSB 0
///@endcond

#define __DRV_URT1_DataOrder_Select(__ORDER__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (__ORDER__==0x08)?(S1CFG=S1CFG|(S1DOR)):(S1CFG=S1CFG&(~S1DOR));\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 S1BRG Timer Mode
* @details     Set S1DOR
* @param[in]   \_\_MODE\_\_ :
*  @arg\b      S1BRG_8BIT_TIMER_MODE
*  @arg\b      S1BRG_16BIT_TIMER_MODE
* @return      None
* @note        S1DOR=1 S1TME=1 8bit timer mode
* @par         Example
* @code
__DRV_URT1_TimerMode_Select(TIMER_MODE_8BIT)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_TimerMode_Select
#define S1BRG_8BIT_TIMER_MODE 1
#define S1BRG_16BIT_TIMER_MODE 0
///@endcond

#define __DRV_URT1_TimerMode_Select(__MODE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (__MODE__==0x20)?(S1CFG=S1CFG|(S1DOR)):(S1CFG=S1CFG&(~S1DOR));\
        __DRV_SFR_PageIndex(0);\
    ;)



/**
*******************************************************************************
* @brief       UART1 S1BRG Clock Source
* @details     Set S1TX12
* @param[in]   \_\_SOURCE\_\_ :
*  @arg\b      S1BRG_CLOCK_SOURCE_SYSCLK_DIV_1
*  @arg\b      S1BRG_CLOCK_SOURCE_SYSCLK_DIV_12
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_BaudRateGeneratorClock_Select(S1BRG_CLOCK_SOURCE_SYSCLK_DIV_1)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_BaudRateGeneratorClock_Select
#define S1BRG_CLOCK_SOURCE_SYSCLK_DIV_1 64
#define S1BRG_CLOCK_SOURCE_SYSCLK_DIV_12 0
///@endcond

#define __DRV_URT1_BaudRateGeneratorClock_Select(__SOURCE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (__SOURCE__)==0?(S1CFG=S1CFG&(~S1TX12)):(S1CFG=S1CFG|(S1TX12));\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 S1BRG Operation Enable/Disable
* @details     Set S1TR
* @param[in]   \_\_STATE\_\_ :
*  @arg\b      S1BRG_OPERATION_START
*  @arg\b      S1BRG_OPERATION_STOP
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_BaudRateGenerator_Cmd(S1BRG_OPERATION_STOP)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_BaudRateGenerator_Cmd
#define S1BRG_OPERATION_START 1
#define S1BRG_OPERATION_STOP 0
///@endcond


#define __DRV_URT1_BaudRateGenerator_Cmd(__STATE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (__STATE__==1)?(S1CFG=S1CFG|(S1TR)):(S1CFG=S1CFG&(~S1TR));\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief      UART1  Baud Rate Generator Reload Register
* @details    Write S1BRT S1BRC
* @param[in] \_\_RELOAD\_\_ :
*  @arg\b    S1BRG_BRGRL_2400_1X_12000000_12T
*  @arg\b    S1BRG_BRGRL_2400_1X_12000000_1T
*  @arg\b    S1BRG_BRGRL_4800_1X_12000000_1T
*  @arg\b    S1BRG_BRGRL_9600_1X_12000000_1T
*  @arg\b    S1BRG_BRGRL_19200_1X_12000000_1T
*  @arg\b    S1BRG_BRGRL_38400_1X_12000000_1T
*  @arg\b    S1BRG_BRGRL_2400_2X_12000000_12T
*  @arg\b    S1BRG_BRGRL_4800_2X_12000000_12T
*  @arg\b    S1BRG_BRGRL_4800_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_9600_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_19200_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_38400_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_57600_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_115200_2X_11059200_1T
*  @arg\b    S1BRG_BRGRL_115200_1X_11059200_1T
*  @arg\b    S1BRG_BRGRL_57600_1X_11059200_1T
*  @arg\b    S1BRG_BRGRL_230400_2X_11059200_1T
*  @arg\b    S1BRG_BRGRL_250000_2X_12000000_1T
*  @arg\b    S1BRG_BRGRL_750000_2X_12000000_1T
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_Baud_Rate_Reload_Reg_Write(S1BRG_BRGRL_9600_2X_12000000_1T)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_BaudRateReloadReg_Write(__RELOAD__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (S1BRT=S1BRC=__RELOAD__);\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Reception
* @details     Enable REN1
* @param[in]   \_\_STATE\_\_ :
*  @arg\b      UART1_ENABLE_RECEPTION
*  @arg\b      UART1_DISABLE_RECEPTION
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_SerialReception_Cmd(UART1_ENABLE_RECEPTION)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT1_SerialReception_Cmd
#define UART1_ENABLE_RECEPTION 1
#define UART1_DISABLE_RECEPTION 0
///@endcond


#define __DRV_URT1_SerialReception_Cmd(__STATE__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        (__STATE__==1)?(REN1=1):(REN1=0);\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 In Mode 2 SYSCLK/32 or SYSCLK/64,SYSCLK/96 or SYSCLK/192
* @details     Enable URM0X3
* @param[in] \_\_STATE\_\_ :
*  @arg\b    UART1_ELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64
*  @arg\b    UART1_ELECT_BAUD_RATE_SYSCLK_DIV_96_SYSCLK_DIV_192
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_BaudRateDiv3_Cmd(UART1_ELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT1_BaudRateDiv3_Cmd
#define UART1_ELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64 0
#define UART1_ELECT_BAUD_RATE_SYSCLK_DIV_96_SYSCLK_DIV_192 64
///@endcond


#define __DRV_URT1_BaudRateDiv3_Cmd(__STATE__)\
        MWT(\
            __DRV_SFR_PageIndex(1);\
            __STATE__==64?(S1CFG=S1CFG|(S1M0X3)):(S1CFG=S1CFG&(~S1M0X3));\
            __DRV_SFR_PageIndex(0);\
        ;)

/**
*******************************************************************************
* @brief       UART1 Serial Reception
* @details     Set REN1
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasyEnableSerialReception(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_EasyEnableSerialReception(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(REN1=1):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(REN1=1):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 Serial Reception
* @details     Clear REN1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasyDisableSerialReception(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasyDisableSerialReception(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(REN1=0):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(REN1=0):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 Mode Select
* @details     Set SM31
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetSM31(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetSM31(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG&(~SM31)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 Mode Select
* @details     Set SM01
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetSM01(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetSM01(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(SM01=0):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(SM01=0):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief       UART1 Mode Select
* @details     Set SM11
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetSM11(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_EasySetSM11(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(SM11=1):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(SM11=1):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 S1BRG Clock Source
* @details     Set S1TX12
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1TX12(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1TX12(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG|(S1TX12)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Data Order
* @details     Set S1DOR
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1DOR(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_EasySetS1DOR(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG|(S1DOR)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG&(~S1DOR)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 Enhance Baud Rate
* @details     Set S1MOD1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1MOD1(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1MOD1(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG&(~S1MOD1)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG|(S1MOD1)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)



/**
*******************************************************************************
* @brief      UART1  Baud Rate Generator Reload Register
* @details    Write S1BRT
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1BRT(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT1_EasySetS1BRT
#define S1BRG_BRGRL_2400_1X_12000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_2400_1X_12000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_4800_1X_12000000_1T             0xB2        // 0.16%
#define S1BRG_BRGRL_9600_1X_12000000_1T             0xD9        // 0.16%
#define S1BRG_BRGRL_19200_1X_12000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_38400_1X_12000000_1T            0xF6        // -2.34%
#define S1BRG_BRGRL_2400_2X_12000000_12T            0xE6        // 0.16%
#define S1BRG_BRGRL_4800_2X_12000000_12T            0xF3        // 0.16%
#define S1BRG_BRGRL_4800_2X_12000000_1T             0x64        // 0.16%
#define S1BRG_BRGRL_9600_2X_12000000_1T             0xB2        // 0.16%
#define S1BRG_BRGRL_19200_2X_12000000_1T            0xD9        // 0.16%
#define S1BRG_BRGRL_38400_2X_12000000_1T            0xEC        // -2.34%
#define S1BRG_BRGRL_57600_2X_12000000_1T            0xF3        // 0.16%
#define S1BRG_BRGRL_115200_2X_11059200_1T           0xFA        // 0%
#define S1BRG_BRGRL_115200_1X_11059200_1T           0xFD        // 0%
#define S1BRG_BRGRL_57600_1X_11059200_1T            0xFA        // 0%
#define S1BRG_BRGRL_230400_2X_11059200_1T           0xFD        // 0%
#define S1BRG_BRGRL_250000_2X_12000000_1T           0xFD        // 0%
#define S1BRG_BRGRL_750000_2X_12000000_1T           0xFF        // 0%
///@endcond

#define __DRV_URT1_EasySetS1BRT(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_4800_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_4800_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_38400_1X_12000000_1T):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_38400_1X_12000000_1T):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_38400_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_38400_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_57600_1X_11059200_1T):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_57600_1X_11059200_1T):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_115200_1X_11059200_1T):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_115200_1X_11059200_1T):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_230400_2X_11059200_1T):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_230400_2X_11059200_1T):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_250000_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_250000_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_750000_2X_12000000_1T):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1BRT=S1BRG_BRGRL_750000_2X_12000000_1T):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief      UART1  Baud Rate Generator Reload Register
* @details    Write S1BRC
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1BRC(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1BRC(__SELECT__)\
    MWT(\
         __DRV_SFR_PageIndex(1);\
         ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_4800_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_4800_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_9600_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_9600_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_19200_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_19200_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_38400_1X_12000000_1T):\
         (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_38400_1X_12000000_1T):\
         (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_38400_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_38400_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_57600_1X_11059200_1T):\
         (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_57600_1X_11059200_1T):\
         (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_57600_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_57600_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_115200_1X_11059200_1T):\
         (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_115200_1X_11059200_1T):\
         (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_115200_2X_11059200_1T):\
         (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_115200_2X_11059200_1T):\
         (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_230400_2X_11059200_1T):\
         (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_230400_2X_11059200_1T):\
         (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_250000_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_250000_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_750000_2X_12000000_1T):\
         (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1BRC=S1BRG_BRGRL_750000_2X_12000000_1T):_nop_());\
         __DRV_SFR_PageIndex(0);\
     ;)



/**
*******************************************************************************
* @brief       UART1 S1BRG Operation Enable
* @details     Set S1TR
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1TR_Start(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1TR_Start(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG|(S1TR)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief       UART1 S1BRG Operation Disable
* @details     Set S1TR
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1TR_Stop(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1TR_Stop(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(1);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(S1CFG=S1CFG&(~S1TR)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)


/**
*******************************************************************************
* @brief        UART1 Pin Config
* @details     Set S1PS1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1PS0(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT1_EasySetS1PS0(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(6);\
        ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):\
        (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS0)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)

/**
*******************************************************************************
* @brief        UART1 Pin Config
* @details     Set S1PS1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART1_8BIT_CONFIG0 : 4800 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG1 : 4800 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG4 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG5 : 19200 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG6 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG7 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG8 : 38400 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG9 : 38400 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG10 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG11 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG13 : 57600 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG14 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG15 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 default baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG16 : 115200 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG17 : 115200 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG18 : 230400 11.0592MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG19 : 230400 11.0592MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG20 : 250000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG21 : 250000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG22 : 750000 12MHz 8bit LSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
*  @arg\b       UART1_8BIT_CONFIG23 : 750000 12MHz 8bit MSB Rx p34 Tx p35 Tx Rx both SYSCLK/1 double baud rate S1BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT1_EasySetS1PS1(UART1_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT1_EasySetS1PS1(__SELECT__)\
    MWT(\
         __DRV_SFR_PageIndex(6);\
         ((__SELECT__^UART1_SELECT0)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT1)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT2)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT3)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT4)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT5)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT6)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT7)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT8)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT9)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT10)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT11)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT12)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT13)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT14)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT15)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT16)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT17)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT18)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT19)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT20)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT21)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT22)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):\
         (__SELECT__^UART1_SELECT23)==OPTION_MATCH?(AUXR9=AUXR9|(S1PS1)):_nop_());\
         __DRV_SFR_PageIndex(0);\
     ;)















#endif



