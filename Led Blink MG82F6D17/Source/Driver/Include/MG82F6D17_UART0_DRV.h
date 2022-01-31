#ifndef MG82F6D17_UART0_DRV_H
#define MG82F6D17_UART0_DRV_H

/**
 ******************************************************************************
 *
 * @file        MG82F6D17_UART0_DRV.h
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
//<h>Initialize Serial Port 0 (UART0)
//<i>UART0 wizard option.
//<i>Note: TI0 bit will be set in Serial Port 0 (UART0) Initializtion.
//<o>UART0
//<0=>Easy Mode
//<1=> Advanced Mode
//<i>UART0 option select.
#define URT0_Option 0
//<e>Easy Mode
//<i>Easy mode enable.
#define URT0_Easy_Mode 0
//<e>UART0 Enable
//<i>Ready.
#define URT0_Easy 1
//<o>Easy Select
//<0x000000=>Select0
//<0x010000=>Select1
//<0x020000=>Select2
//<0x030000=>Select3
//<0x040000=>Select4
//<0x050000=>Select5
//<0x000100=>Select6
//<0x010100=>Select7
//<0x020100=>Select8
//<0x030100=>Select9
//<0x040100=>Select10
//<0x050100=>Select11
//<0x000200=>Select12
//<0x010200=>Select13
//<0x020200=>Select14
//<0x030200=>Select15
//<0x040200=>Select16
//<0x050200=>Select17
//<0x000400=>Select18
//<0x010400=>Select19
//<0x020400=>Select20
//<0x030400=>Select21
//<0x040400=>Select22
//<0x050400=>Select23
#define URT0_Easy_Select 0x050200
//<i>Note:Please confirm clock source before you select parameter.

//<i>Select0 :	9600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select1 :	9600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Rx Only     	IHRCO 12Mhz
//<i>Select2 :	9600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz
//<i>Select3 :	9600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select4 :	9600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	RX Only     	IHRCO 12Mhz
//<i>Select5 :	9600	8BIt	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz

//<i>Select6 :	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select7 :	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Rx Only     	IHRCO 12Mhz
//<i>Select8 :	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz
//<i>Select9 :	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select10:	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Rx Only     	IHRCO 12Mhz

//<i>Select11:	19200	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz
//<i>Select12:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select13:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Rx Only     	IHRCO 12Mhz
//<i>Select14:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	LSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz
//<i>Select15:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Only     	IHRCO 12Mhz
//<i>Select16:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Rx Only     	IHRCO 12Mhz
//<i>Select17:	57600	8Bit	S0BRG	SYSCLK/1  	Double Baud Rate 	MSB	Pin Select	Rx=P30 Tx=P31	Tx Rx Both  	IHRCO 12Mhz

//<i>Select18:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	RX=P30 TX=P31	Tx Only   	IHRCO 11.0592Mhz
//<i>Select19:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	RX=P30 TX=P31	Rx Only   	IHRCO 11.0592Mhz
//<i>Select20:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	LSB	Pin Select	RX=P30 TX=P31	Tx Rx Both	IHRCO 11.0592Mhz
//<i>Select21:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	RX=P30 TX=P31	Tx Only   	IHRCO 11.0592Mhz
//<i>Select22:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	RX=P30 TX=P31	Rx Only   	IHRCO 11.0592Mhz
//<i>Select23:	115200	8Bit	S0BRG	SYSCLK/1	Double Baud Rate 	MSB	Pin Select	RX=P30 TX=P31	Tx Rx Both	IHRCO 11.0592Mhz

//</e>

//</e>

//<e>Advanced Mode
//<i>Advanced mode enable .
#define URT0_Advance_Mode 0
//<e>UART0 Enable
//<i>Mode1 8bit ready.
//<i>Mode2 9bit ready.
//<i>Mode3 9bit preparing.
//<i>Mode4 SPI master preparing.
//<i>Mode5 LIN preparing.

#define URT0_Advance 0
//<o>Mode
//<0x01=>Mode 1 8Bit
//<0x02=>Mode 2 9Bit
//<i> Mode1~mode2 select 8 bit,9 bit .
#define URT0_Mode  0x01
//<o>PinMux Select
//<0x00=>Rx P30 Tx P31
//<0x01=>Rx P44 Tx P45
//<0x02=>Rx P31 Tx P30
//<0x03=>Rx P17 Tx P22
//<i>Initial I/O mode for P44P45 P17P22 UART0 application.
#define URT0_PinMux_Select 0x00
//<e>Mode 1 8Bit Enable
//<i>Mode 1 8bit enable .
//<i>Ready.
#define URT0_Mode1_8Bit 0
//<e>Baud Rate Config Enable
//<i>Baud rate config enable.
#define URT0_Mode1_8Bit_Baud_Rate_Config 0
//<o0>Rx Clock
//<0=> S0BRG
//<i>Clock source select S0BRG .
#define URT0_Mode1_8Bit_Receive_Clock 0x00
//<o0.2>Tx Clock
//<0=> S0BRG
//<i>Clock source select S0BRG .
#define URT0_Mode1_8Bit_Transmit_Clock 0x00
//<o0.3>Data Order <0=> MSB <1=> LSB
//<i> Data order select MSB or LSB.
#define URT0_Mode1_8Bit_Data_Order 0x08
//<o0.4>Enhance Baud Rate	<0=>Defaule Baud Rate(SMOD2=0)  <1=>Double Baud Rate(SMOD2=1)
//<i> Defaule baud date SMOD2=0.
//<i> Baud rate SMOD2=1.
#define URT0_Mode1_8Bit_Baud_Rate 16
//<o0.6>Source <0=> SYSCLK/12(S0TX12=0) <1=> SYSCLK/1(S0TX12=1)
//<i>SYSCLK/12 S0TX12=0.
//<i>SYSCLK/1  S0TX12=1.
#define URT0_Mode1_8Bit_Clock_Source 64
//<o>Baud Rate Reload (0~255) <0-255>
#define URT0_Baud_Rate_Reload_Count 184
//<i>**********     	  2^SMOD2      	     	     Fsysclk
//<i>Baud Rate =    	-----------    	X    	----------------    	;S0TX12=0.
//<i>**********     	    32         	     	  12x(256-S0BRT)
//<i>**********     	  2^SMOD2      	     	     Fsysclk
//<i>Baud Rate =    	-----------    	X    	----------------    	;S0TX12=1.
//<i>**********     	    32         	     	  1x(256-S0BRT)

//</e>
//</e>
//<e> Mode 2 9Bit Enable
//<i>Mode 2 9bit enable.
//<i>Ready.
#define URT0_Mode2_9Bit 0
//<e> Baud Rate Config Enable
//<i>.
#define URT0_Mode2_9Bit_Baud_Rate_Config 0
//<i>BaudRate    	RxClock     	TxClock     	EnhanceBaudRate     	Source      	SYSCLK/n

//<i>172800      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/1    	SYSCLK/64     	IHRCO 11.0592MHZ
//<i>345600      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X1   	SYSCLK/1    	SYSCLK/32     	IHRCO 11.0592MHZ
//<i>691200      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X2   	SYSCLK/1    	SYSCLK/16     	IHRCO 11.0592MHZ
//<i>1382400     	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X4   	SYSCLK/1    	SYSCLK/8      	IHRCO 11.0592MHZ


//<i>187500      	SYSCLK/2    	SYSCLK/2    	Default Baud Rate     	SYSCLK/1    	SYSCLK/64     	IHRCO 12MHZ
//<i>375000      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X1    	SYSCLK/1    	SYSCLK/32     	IHRCO 12MHZ
//<i>750000      	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X2    	SYSCLK/1    	SYSCLK/16     	IHRCO 12MHZ
//<i>1500000     	SYSCLK/2    	SYSCLK/2    	Double Baud Rate X4    	SYSCLK/1    	SYSCLK/8      	IHRCO 12MHZ

//<o0>Rx Clock
//<0x01=>SYSCLK/2
//<i>Clock source select SYSCLK/2.
#define URT0_Mode2_9Bit_Receive_Clock 0x01
//<o0>Tx Clock
//<0x01=>SYSCLK/2
//<i>Clock source select SYSCLK/2.
#define URT0_Mode2_9Bit_Transmit_Clock 0x01
//<o0.3>Data Order <0=> MSB <1=> LSB
//<i> Data order select MSB or LSB.
#define URT0_Mode2_9Bit_Data_Order 0x08
//<o0.4..5>Enhance Baud Rate
//<0=>Default Baud Rate (SMOD2=0,SMOD1=0)
//<1=>Double Baud Rate X1 (SMOD2=0,SMOD1=1)
//<2=>Double Baud Rate X2 (SMOD2=1,SMOD1=0)
//<3=>Double Baud Rate X4 (SMOD2=1,SMOD1=1)
//<i>Enhance baud rate select default,double x1,x2 and x4.
#define URT0_Mode2_9Bit_Baud_Rate 16
//<o0.6>Source <0=>SYSCLK/1 (URM0X3=0)
//<i>SYSCLK/1 (URM0X3=0).
#define URT0_Mode2_9Bit_Clock_Source 0

//</e>
//</e>

//</e>

//</e>
///@endcond

//<<< end of configuration section >>>



/**
*****************************************************************************
* @brief        UART0 Interrupt
* @details      Enable Disable UART0 Interrupt
* @param[in]    \_\_STATE\_\_ :
*  @arg\b       DISABLE_SERIAL_PORT0_INTERRUPT
*  @arg\b       ENABLE_SERIAL_PORT0_INTERRUPT
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_IT_Cmd(ENABLE_SERIAL_PORT0_INTERRUPT)
* @endcode
*******************************************************************************
*/





///@cond __DRV_URT0_IT_Cmd
#define ENABLE_SERIAL_PORT0_INTERRUPT 1
#define DISABLE_SERIAL_PORT0_INTERRUPT 0
///@endcond

#define __DRV_URT0_IT_Cmd(__STATE__)\
    ((__STATE__==0)?(ES0=0):(ES0=1))




/**
*****************************************************************************
* @brief        UART0 Mode1 Init from Wizard
* @details      Initial (SerialReception) (MODE) (Data Order) (Baud Rate) (Clock Source) (PinMux)
* @return       None
* @note         None
* @par          Example
* @code
                 __DRV_URT0_Mode1_Wizard_Init()
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_Mode1_Wizard_Init()\
    MWT(\
        __DRV_URT0_SerialReception_Cmd(UART0_DISABLE_RECEPTION);\
        __DRV_URT0_Mode_Select(URT0_Mode);\
        __DRV_URT0_DataOrder_Select(URT0_Mode1_8Bit_Data_Order);\
        __DRV_URT0_BaudRateX2_Select(URT0_Mode1_8Bit_Baud_Rate);\
        __DRV_URT0_S0Control_Cmd(ENABLE_S0CR1_ACCESS);\
        __DRV_URT0_BaudRateGenerator_Cmd(S0BRG_OPERATION_STOP);\
        __DRV_URT0_BaudRateReloadReg_Write(URT0_Baud_Rate_Reload_Count);\
        __DRV_URT0_RXClockSource_Select(URT0_Mode1_8Bit_Receive_Clock);\
        __DRV_URT0_TXClockSource_Select(URT0_Mode1_8Bit_Transmit_Clock);\
        __DRV_URT0_BaudRateGeneratorClock_Select(URT0_Mode1_8Bit_Clock_Source);\
        __DRV_URT0_BaudRateGenerator_Cmd(S0BRG_OPERATION_START);\
        __DRV_URT0_SerialReception_Cmd(UART0_ENABLE_RECEPTION);\
        __DRV_URT0_PinMux_Select(URT0_PinMux_Select);\
    ;)

/**
*******************************************************************************
* @brief        UART0 Mode2 Init from Wizard
* @details      Initial (SerialReception) (MODE) (Data Order) (Baud Rate) (Clock Source) (PinMux)
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_Mode2_Wizard_Init()
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_Mode2_Wizard_Init()\
    MWT(\
        __DRV_URT0_SerialReception_Cmd(UART0_DISABLE_RECEPTION);\
        __DRV_URT0_Mode_Select(URT0_Mode);\
        __DRV_URT0_DataOrder_Select(URT0_Mode2_9Bit_Data_Order);\
        __DRV_URT0_BaudRateX2X4_Select(URT0_Mode2_9Bit_Baud_Rate);\
        __DRV_URT0_S0Control_Cmd(ENABLE_S0CR1_ACCESS);\
        __DRV_URT0_RXClockSource_Select(URT0_Mode2_9Bit_Receive_Clock);\
        __DRV_URT0_TXClockSource_Select(URT0_Mode2_9Bit_Transmit_Clock);\
        __DRV_URT0_BaudRateDiv3_Cmd(URT0_Mode2_9Bit_Clock_Source);\
        __DRV_URT0_SerialReception_Cmd(UART0_ENABLE_RECEPTION);\
        __DRV_URT0_PinMux_Select(URT0_PinMux_Select);\
    ;)
/**
*******************************************************************************
* @brief        UART0 mode
* @details      Set SM30 SM00 SM10
* @param[in]    \_\_MODE\_\_ :
*  @arg\b       UART0_MODE0_SHIFT_REG
*  @arg\b       UART0_MODE1_8BIT
*  @arg\b       UART0_MODE2_9BIT
*  @arg\b       UART0_MODE3_9BIT
*  @arg\b       UART0_MODE4_SPI_MASTER
*  @arg\b       UART0_MODE5_LIN
* @return       None
* @note         None
* @par         Example
* @code
               __DRV_URT0_Mode_Select(UART0_Mode0_SHIFT_REG)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT0_Mode_Select
#define UART0_MODE0_SHIFT_REG 0x00
#define UART0_MODE1_8BIT 0x01
#define UART0_MODE2_9BIT 0x02
#define UART0_MODE3_9BIT 0x03
#define UART0_MODE4_SPI_MASTER 0x04
#define UART0_MODE5_LIN 0x05
///@endcond

#define __DRV_URT0_Mode_Select(__MODE__)\
    MWT(__DRV_URT0_SetSM30(__MODE__);\
        __DRV_URT0_SetSM00(__MODE__);\
        __DRV_URT0_SetSM10(__MODE__);\
    ;)

/**
*******************************************************************************
* @brief        UART0 Pin MUX
* @details      Set S0PS1 S0PS0
* @param[in]    \_\_RXTX\_\_ :
*  @arg\b       UART0_RX_P30_TX_P31
*  @arg\b       UART0_RX_P44_TX_P45
*  @arg\b       UART0_RX_P31_TX_P30
*  @arg\b       UART0_RX_P17_TX_P22
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_PinMux_Select(UART0_RX_P30_TX_P31)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT0_PinMux_Select
#define UART0_RX_P30_TX_P31 0x00
#define UART0_RX_P44_TX_P45 0x01
#define UART0_RX_P31_TX_P30 0x02
#define UART0_RX_P17_TX_P22 0x03
///@endcond



#define __DRV_URT0_PinMux_Select(__RXTX__)\
    MWT(\
        __DRV_URT0_SetS0PS1(__RXTX__);\
        __DRV_URT0_SetS0PS0(__RXTX__);\
    ;)

/**
*******************************************************************************
* @brief        UART0 Baud Rate Generator
* @details      Set SMOD2 SMOD1
* @param[in]    \_\_TIME\_\_ :
*  @arg\b       UART0_DEFAULT_BAUD_RATE
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X1
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X2
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X4
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_BaudRateX2X4_Select(UART0_Default_Baud_Rate)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT0_BaudRateX2X4_Select
#define UART0_DEFAULT_BAUD_RATE 0
#define UART0_DOUBLE_BAUD_RATE_X1 16
#define UART0_DOUBLE_BAUD_RATE_X2 32
#define UART0_DOUBLE_BAUD_RATE_X4 48
///@endcond

#define __DRV_URT0_BaudRateX2X4_Select(__TIME__)\
    MWT(\
        __DRV_URT0_SetSMOD2(__TIME__);\
        __DRV_URT0_SetSMOD1(__TIME__);\
    ;)


///@cond __DRV_URT0_Easy_Wizard_Init
//Macro for wizard constant option
#define UART0_SELECT0 UART0_8BIT_CONFIG0
#define UART0_SELECT1 UART0_8BIT_CONFIG1
#define UART0_SELECT2 UART0_8BIT_CONFIG2
#define UART0_SELECT3 UART0_8BIT_CONFIG3
#define UART0_SELECT4 UART0_8BIT_CONFIG4
#define UART0_SELECT5 UART0_8BIT_CONFIG5
#define UART0_SELECT6 UART0_8BIT_CONFIG6
#define UART0_SELECT7 UART0_8BIT_CONFIG7
#define UART0_SELECT8 UART0_8BIT_CONFIG8
#define UART0_SELECT9 UART0_8BIT_CONFIG9
#define UART0_SELECT10 UART0_8BIT_CONFIG10
#define UART0_SELECT11 UART0_8BIT_CONFIG11
#define UART0_SELECT12 UART0_8BIT_CONFIG12
#define UART0_SELECT13 UART0_8BIT_CONFIG13
#define UART0_SELECT14 UART0_8BIT_CONFIG14
#define UART0_SELECT15 UART0_8BIT_CONFIG15
#define UART0_SELECT16 UART0_8BIT_CONFIG16
#define UART0_SELECT17 UART0_8BIT_CONFIG17
#define UART0_SELECT18 UART0_8BIT_CONFIG18
#define UART0_SELECT19 UART0_8BIT_CONFIG19
#define UART0_SELECT20 UART0_8BIT_CONFIG20
#define UART0_SELECT21 UART0_8BIT_CONFIG21
#define UART0_SELECT22 UART0_8BIT_CONFIG22
#define UART0_SELECT23 UART0_8BIT_CONFIG23




#define OPTION_ADDRESS_BASE 0x000000
#define OPTION_MATCH 0

#define UART0_8BIT_CONFIG0 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG1 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG2 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG3 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG4 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG5 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG6 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG7 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG8 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG9 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG10 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG11 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG12 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG13 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG14 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG15 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG16 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG17 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG18 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG19 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_RX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG20 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG21 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG22 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_RX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
#define UART0_8BIT_CONFIG23 (UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX|UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200|UART0_PIN_CONFIG_RX_P30_TX_P31)
//constant URT0 mode (0~255) option
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX    (0x000000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_RX    (0x010000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_LSB_TX_RX (0x020000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX    (0x030000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_RX    (0x040000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_SYSCLK_DIV_1_BAUD_RATE_2X_MSB_TX_RX (0x050000+OPTION_ADDRESS_BASE)
//constant URT0 baud rate(0~255) option
#define UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_9600   (0x000000+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_19200  (0x000100+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_57600  (0x000200+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_IHRCO_12MHZ_BAUD_RATE_115200 (0x000300+OPTION_ADDRESS_BASE)
#define UART0_8BIT_S0BRG_IHRCO_110592MHZ_BAUD_RATE_115200 (0x000400+OPTION_ADDRESS_BASE)
//constant URT0 pin config (0~15) option
#define UART0_PIN_CONFIG_RX_P30_TX_P31 (0x000000+OPTION_ADDRESS_BASE)
#define UART0_PIN_CONFIG_RX_P44_TX_P45 (0x000001+OPTION_ADDRESS_BASE)
#define UART0_PIN_CONFIG_RX_P31_TX_P30 (0x000002+OPTION_ADDRESS_BASE)
#define UART0_PIN_CONFIG_RX_P17_TX_P22 (0x000003+OPTION_ADDRESS_BASE)
///@endcond

/**
*******************************************************************************
* @brief        UART0 Easy Wizard
* @details      Config UART0 Mode Baud Rate PinMux SerialReception
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_Easy_Wizard_Init()
* @endcode
*******************************************************************************
*/
#define __DRV_URT0_Easy_Wizard_Init()\
    MWT(\
        __DRV_URT0_EasyDisableSerialReception(URT0_Easy_Select);\
        __DRV_URT0_Mode_Easy_Select(URT0_Easy_Select);\
        __DRV_URT0_BaudRate_Easy_Select(URT0_Easy_Select);\
        __DRV_URT0_PinMux_Easy_Select(URT0_Easy_Select);\
        __DRV_URT0_EasyEnableSerialReception(URT0_Easy_Select);\
    ;)



/**
*******************************************************************************
* @brief        UART0 Easy Wizard
* @details      Set SM30 SM00 SM10 S0DOR SMOD2 SMOD1 SMOD3 S0TX12 S0RCK S0TCK
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_Mode_Easy_Select(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_Mode_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(0);\
        __DRV_URT0_EasySetSM30(__SELECT__);\
        __DRV_URT0_EasySetSM00(__SELECT__);\
        __DRV_URT0_EasySetSM10(__SELECT__);\
        __DRV_URT0_EasySetS0DOR(__SELECT__);\
        __DRV_URT0_EasySetSMOD2(__SELECT__);\
        __DRV_URT0_EasySetSMOD1(__SELECT__);\
        __DRV_URT0_EasySetSMOD3(__SELECT__);\
        __DRV_URT0_EasySetS0TX12(__SELECT__);\
        __DRV_URT0_EasySetS0RCK(__SELECT__);\
        __DRV_URT0_EasySetS0TCK(__SELECT__);\
    ;)


/**
*******************************************************************************
* @brief        UART0 Easy Wizard
* @details      Set S0TR S0BRT S0BRC
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_BaudRate_Easy_Select(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_BaudRate_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_URT0_EasySetS0TR_Stop(__SELECT__);\
        __DRV_URT0_EasySetS0BRT(__SELECT__);\
        __DRV_URT0_EasySetS0BRC(__SELECT__);\
        __DRV_URT0_EasySetS0TR_Start(__SELECT__);\
    ;)

/**
*******************************************************************************
* @brief        UART0 PinMux Easy Wizard
* @details      Set S0PS0 S0PS1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_PinMux_Easy_Select(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_PinMux_Easy_Select(__SELECT__)\
    MWT(\
        __DRV_URT0_EasySetS0PS0(__SELECT__);\
        __DRV_URT0_EasySetS0PS1(__SELECT__);\
    ;)


/**
*******************************************************************************
* @brief        Set SFR
* @details      Set SM30
* @param[in]    \_\_MODE\_\_ :
*  @arg\b       UART0_MODE0_SHIFT_REG
*  @arg\b       UART0_MODE1_8BIT
*  @arg\b       UART0_MODE2_9BIT
*  @arg\b       UART0_MODE3_9BIT
*  @arg\b       UART0_MODE4_SPI_MASTER
*  @arg\b       UART0_MODE5_LIN
* @return       None
* @note         None
* @par         Example
* @code
               __DRV_URT0_SetSM30(UART0_MODE1_8BIT)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_SetSM30(__MODE__)\
    MWT(\
        (__MODE__^0x00)==0?(S0CFG=S0CFG&(~SM30)):\
        (__MODE__^0x01)==0?(S0CFG=S0CFG&(~SM30)):\
        (__MODE__^0x02)==0?(S0CFG=S0CFG&(~SM30)):\
        (__MODE__^0x03)==0?(S0CFG=S0CFG&(~SM30)):\
        (__MODE__^0x04)==0?(S0CFG=S0CFG|(SM30)):\
        (__MODE__^0x05)==0?(S0CFG=S0CFG|(SM30)):_nop_();\
    ;)

/**
*******************************************************************************
* @brief        Set SFR
* @details      Set SM00
* @param[in]    \_\_MODE\_\_ :
*  @arg\b       UART0_MODE0_SHIFT_REG
*  @arg\b       UART0_MODE1_8BIT
*  @arg\b       UART0_MODE2_9BIT
*  @arg\b       UART0_MODE3_9BIT
*  @arg\b       UART0_MODE4_SPI_MASTER
*  @arg\b       UART0_MODE5_LIN :
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_SetSM00(UART0_MODE2_9BIT)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_SetSM00(__MODE__)\
    MWT(\
        (__MODE__^0x00)==0?(SM00_FE=0):\
        (__MODE__^0x01)==0?(SM00_FE=0):\
        (__MODE__^0x02)==0?(SM00_FE=1):\
        (__MODE__^0x03)==0?(SM00_FE=1):\
        (__MODE__^0x04)==0?(SM00_FE=0):\
        (__MODE__^0x05)==0?(SM00_FE=0):_nop_();\
    ;)

/**
*******************************************************************************
* @brief        Set SFR
* @details      Set SM10
* @param[in]    \_\_MODE\_\_ :
*  @arg\b       UART0_MODE0_SHIFT_REG
*  @arg\b       UART0_MODE1_8BIT
*  @arg\b       UART0_MODE2_9BIT
*  @arg\b       UART0_MODE3_9BIT
*  @arg\b       UART0_MODE4_SPI_MASTER
*  @arg\b       UART0_MODE5_LIN
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_SetSM10(UART0_MODE3_9BIT)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_SetSM10(__MODE__)\
    MWT(\
        (__MODE__^0x00)==0?(SM10=0):\
        (__MODE__^0x01)==0?(SM10=1):\
        (__MODE__^0x02)==0?(SM10=0):\
        (__MODE__^0x03)==0?(SM10=1):\
        (__MODE__^0x04)==0?(SM10=0):\
        (__MODE__^0x05)==0?(SM10=1):_nop_();\
    ;)

/**
*******************************************************************************
* @brief        UART0 Pin MUX
* @details      Set S0PS1
* @param[in]    \_\_RXTX\_\_ :
*  @arg\b       UART0_RX_P30_TX_P31
*  @arg\b       UART0_RX_P44_TX_P45
*  @arg\b       UART0_RX_P31_TX_P30
*  @arg\b       UART0_RX_P17_TX_P22
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_SetS0PS1(UART0_RX_P30_TX_P31)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_SetS0PS1(__RXTX__)\
    MWT(\
        __DRV_SFR_PageIndex(7);\
        (__RXTX__^0x00)==0?AUXR10=AUXR10&(~S0PS1):\
        (__RXTX__^0x01)==0?AUXR10=AUXR10&(~S0PS1):\
        (__RXTX__^0x02)==0?AUXR10=AUXR10|(S0PS1):\
        (__RXTX__^0x03)==0?AUXR10=AUXR10|(S0PS1):_nop_();\
    ;)


/**
*******************************************************************************
* @brief        UART0 Pin MUX
* @details      Set S0PS0
* @param[in]    \_\_RXTX\_\_ :
*  @arg\b       UART0_RX_P30_TX_P31
*  @arg\b       UART0_RX_P44_TX_P45
*  @arg\b       UART0_RX_P31_TX_P30
*  @arg\b       UART0_RX_P17_TX_P22
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_SetS0PS0(UART0_RX_P30_TX_P31)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_SetS0PS0(__RXTX__)\
    MWT(\
        __DRV_SFR_PageIndex(0);\
        (__RXTX__^0x00)==0?AUXR3=AUXR3&(~S0PS0):\
        (__RXTX__^0x01)==0?AUXR3=AUXR3|(S0PS0):\
        (__RXTX__^0x02)==0?AUXR3=AUXR3&(~S0PS0):\
        (__RXTX__^0x03)==0?AUXR3=AUXR3|(S0PS0):_nop_();\
    ;)

/**
*******************************************************************************
* @brief        UART0 Data Order
* @details      Set S0DOR
* @param[in]    \_\_ORDER\_\_ :
*  @arg\b       UART0_DATA_ORDER_LSB
*  @arg\b       UART0_DATA_ORDER_MSB
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_DataOrder_Select(UART0_DATA_ORDER_LSB)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT0_DataOrder_Select
#define UART0_DATA_ORDER_LSB 0x08
#define UART0_DATA_ORDER_MSB 0
///@endcond

#define __DRV_URT0_DataOrder_Select(__ORDER__)\
    ((__ORDER__==0x08)?(S0CFG=S0CFG|(S0DOR)):(S0CFG=S0CFG&(~S0DOR)))
/**
*******************************************************************************
* @brief        UART0 S0BRG Timer Mode.
* @details      Set S0DOR
* @param[in]    \_\_MODE\_\_ :
*  @arg\b       S0BRG_8BIT_TIMER_MODE
*  @arg\b       S0BRG_16BIT_TIMER_MODE
* @return       None
* @note         S0DOR=1 S0TCK=1 S0RCK=1 SM30=0 SM00=1 SM00=0 8BIT TIMER MODE
* @par          Example
* @code
                __DRV_URT0_TimerMode_Select(S0BRG_8BIT_TIMER_MODE)
* @endcode
*******************************************************************************
*/
///@cond __DRV_URT0_TimerMode_Select
#define S0BRG_8BIT_TIMER_MODE 1
#define S0BRG_16BIT_TIMER_MODE 0
///@endcond

#define __DRV_URT0_TimerMode_Select(__MODE__)\
    ((__MODE__==1)?(S0CFG=S0CFG|(S0DOR)):(S0CFG=S0CFG&(~S0DOR)))

/**
*******************************************************************************
* @brief        UART0 Enhance Baud Rate
* @details      Set SMOD2
* @param[in]   \_\_TIME\_\_ :
*  @arg\b       UART0_DEFAULT_BAUD_RATE
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X1
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X2
*  @arg\b       UART0_DOUBLE_BAUD_RATE_X4
* @return       None
* @note         None
* @par          Example
* @code
                __DRV_URT0_SetSMOD2(UART0_Double_Baud_Rate_X1)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_SetSMOD2(__TIME__)\
    MWT(\
        (__TIME__^0)==0?S0CFG=S0CFG&(~SMOD2):\
        (__TIME__^16)==0?S0CFG=S0CFG&(~SMOD2):\
        (__TIME__^32)==0?S0CFG=S0CFG|(SMOD2):\
        (__TIME__^48)==0?S0CFG=S0CFG|(SMOD2):_nop_();\
    ;)

/**
*******************************************************************************
* @brief       UART0 Enhance Baud Rate
* @details     Set SMOD1
* @param[in]   \_\_TIME\_\_ :
*  @arg\b      UART0_DEFAULT_BAUD_RATE
*  @arg\b      UART0_DOUBLE_BAUD_RATE_X1
*  @arg\b      UART0_DOUBLE_BAUD_RATE_X2
*  @arg\b      UART0_DOUBLE_BAUD_RATE_X4
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_SetSMOD1(UART0_DOUBLE_BAUD_RATE_X2)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_SetSMOD1(__TIME__)\
    MWT(\
        (__TIME__^0)==0?PCON0=PCON0&(~SMOD1):\
        (__TIME__^16)==0?PCON0=PCON0|(SMOD1):\
        (__TIME__^32)==0?PCON0=PCON0&(~SMOD1):\
        (__TIME__^48)==0?PCON0=PCON0|(SMOD1):_nop_();\
    ;)

/**
*******************************************************************************
* @brief       UART0 Baud Rate Generator
* @details     Set SMOD2
* @param[in]   \_\_TIME\_\_ :
*  @arg\b      UART0_DEFAULT_BAUD_RATE
*  @arg\b      UART0_DOUBLE_BAUD_RATE_X1
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_BaudRateX2_Select(UART0_DEFAULT_BAUD_RATE)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_BaudRateX2_Select(__TIME__)\
    ((__TIME__^16)==0?(S0CFG=S0CFG|(SMOD2)):(S0CFG=S0CFG&(~SMOD2)))



/**
*******************************************************************************
* @brief       UART0 S0BRG Clock Source
* @details     Set S0TX12
* @param[in]   \_\_SOURCE\_\_ :
*  @arg\b      S0BRG_CLOCK_SOURCE_SYSCLK_DIV_1
*  @arg\b      S0BRG_CLOCK_SOURCE_SYSCLK_DIV_12
* @return      None
* @note        Before set S0TX12  Set SMOD3=1 first
* @par         Example
* @code
__DRV_URT0_BaudRateGeneratorClock_Select(S0BRG_CLOCK_SOURCE_SYSCLK_DIV_1)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_BaudRateGeneratorClock_Select
#define S0BRG_CLOCK_SOURCE_SYSCLK_DIV_1 64
#define S0BRG_CLOCK_SOURCE_SYSCLK_DIV_12 0
///@endcond


#define __DRV_URT0_BaudRateGeneratorClock_Select(__SOURCE__)\
    ((__SOURCE__==0)?(S0CR1=S0CR1&(~S0TX12)):(S0CR1=S0CR1|(S0TX12)))

/**
*******************************************************************************
* @brief       UART0 S0CR1
* @details     Set SMOD3
* @param[in]   \_\_STATE\_\_ :
*  @arg\b      ENABLE_S0CR1_ACCESS
*  @arg\b      DISABLE_S0CR1_ACCESS
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_S0Control_Select(ENABLE_S0CR1_ACCESS)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_S0Control_Cmd
#define ENABLE_S0CR1_ACCESS 1
#define DISABLE_S0CR1_ACCESS 0
///@endcond


#define __DRV_URT0_S0Control_Cmd(__STATE__)\
    ((__STATE__==1)?(S0CFG=S0CFG|(SMOD3)):(S0CFG=S0CFG&(~SMOD3)))
/**
*******************************************************************************
* @brief       UART0 Receive Clock
* @details     Set S0RCK
* @param[in]   \_\_SOURCE\_\_ :
*  @arg\b      RECEIVE_CLOCK_S0BRG
*  @arg\b      RECEIVE_CLOCK_TIMER1_TIMER2
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_RXClockSource_Select(RECEIVE_CLOCK_S0BRG)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_RXClockSource_Select
#define RECEIVE_CLOCK_S0BRG 1
#define RECEIVE_CLOCK_TIMER1_TIMER2 0
///@endcond




#define __DRV_URT0_RXClockSource_Select(__SOURCE__)\
    ((__SOURCE__==0x01)?(S0CR1=S0CR1&(~S0RCK)):(S0CR1=S0CR1|(S0RCK)))
/**
*******************************************************************************
* @brief       UART0 Transmit Clock
* @details     Set S0TCK
* @param[in]   \_\_SOURCE\_\_ :
*  @arg\b      TRANSMIT_CLOCK_S0BRG
*  @arg\b      TRANSMIT_CLOCK_TIMER1_TIMER2
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_TXClockSource_Select(TRANSMIT_CLOCK_S0BRG)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_TXClockSource_Select
#define TRANSMIT_CLOCK_S0BRG 1
#define TRANSMIT_CLOCK_TIMER1_TIMER2 0
///@endcond


#define __DRV_URT0_TXClockSource_Select(__SOURCE__)\
    ((__SOURCE__)==0x01?(S0CR1=S0CR1&(~S0TCK)):(S0CR1=S0CR1|(S0TCK)))
/**
*******************************************************************************
* @brief       UART0 S0BRG Operation Enable/Disable
* @details     Set S0TR
* @param[in]   \_\_STATE\_\_ :
*  @arg\b      S0BRG_OPERATION_START
*  @arg\b      S0BRG_OPERATION_STOP
* @return      None
* @note        Before write S0BRT and S0BRC,S0BRG operation stop first
* @par         Example
* @code
__DRV_URT0_BaudRateGenerator_Cmd(S0BRG_OPERATION_STOP)
* @endcode
*******************************************************************************
*/


///@cond __DRV_URT0_BaudRateGenerator_Cmd
#define S0BRG_OPERATION_START 1
#define S0BRG_OPERATION_STOP 0
///@endcond

#define __DRV_URT0_BaudRateGenerator_Cmd(__STATE__)\
    ((__STATE__)==1?(S0CR1=S0CR1|(S0TR)):(S0CR1=S0CR1&(~S0TR)))
/**
*******************************************************************************
* @brief        UART0  Baud Rate Generator Reload Register
* @details      Write S0BRT S0BRC
* @param[in]    \_\_RELOAD\_\_ :
*  @arg\b S0BRG_BRGRL_2400_1X_12000000_12T
*  @arg\b S0BRG_BRGRL_4800_1X_11059200_12T
*  @arg\b S0BRG_BRGRL_9600_1X_11059200_12T
*  @arg\b S0BRG_BRGRL_2400_1X_12000000_1T
*  @arg\b S0BRG_BRGRL_4800_1X_12000000_1T
*  @arg\b S0BRG_BRGRL_9600_1X_12000000_1T
*  @arg\b S0BRG_BRGRL_19200_1X_12000000_1T
*  @arg\b S0BRG_BRGRL_38400_1X_12000000_1T
*  @arg\b S0BRG_BRGRL_57600_1X_11059200_1T
*  @arg\b S0BRG_BRGRL_115200_1X_11059200_1T
*  @arg\b S0BRG_BRGRL_2400_2X_12000000_12T
*  @arg\b S0BRG_BRGRL_4800_2X_12000000_12T
*  @arg\b S0BRG_BRGRL_9600_2X_11059200_12T
*  @arg\b S0BRG_BRGRL_19200_2X_11059200_12T
*  @arg\b S0BRG_BRGRL_57600_2X_11059200_12T
*  @arg\b S0BRG_BRGRL_4800_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_9600_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_19200_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_38400_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_57600_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_115200_2X_11059200_1T
*  @arg\b S0BRG_BRGRL_230400_2X_11059200_1T
*  @arg\b S0BRG_BRGRL_250000_2X_12000000_1T
*  @arg\b S0BRG_BRGRL_750000_2X_12000000_1T
* @return       None
* @note         Before write S0BRT and S0BRC,S0BRG operation stop first
* @par          Example
* @code
__DRV_URT0_Baud_Rate_Reload_Reg_Write(S0BRG_BRGRL_9600_2X_12000000_1T)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_BaudRateReloadReg_Write(__RELOAD__)\
    (S0BRT=S0BRC=__RELOAD__)


/**
*******************************************************************************
* @brief       UART0 Reception
* @details     Enable REN0
* @param[in]   \_\_STATE\_\_ :
*  @arg\b      UART0_ENABLE_RECEPTION
*  @arg\b      UART0_DISABLE_RECEPTION
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_SerialReception_Cmd(UART0_ENABLE_RECEPTION)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_SerialReception_Cmd
#define UART0_ENABLE_RECEPTION 1
#define UART0_DISABLE_RECEPTION 0
///@endcond



#define __DRV_URT0_SerialReception_Cmd(__STATE__)\
    ((__STATE__)==1?(REN0=1):(REN0=0))

/**
*******************************************************************************
* @brief     UART0 In Mode 2 SYSCLK/32 or SYSCLK/64,SYSCLK/96 or SYSCLK/192
* @details   Enable URM0X3
* @param[in] \_\_STATE\_\_ :
*  @arg\b    UART0_SELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_BaudRateDiv3_Cmd(SELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_BaudRateDiv3_Cmd
#define UART0_SELECT_BAUD_RATE_SYSCLK_DIV_32_SYSCLK_DIV_64 0
///@endcond


#define __DRV_URT0_BaudRateDiv3_Cmd(__STATE__)\
    ((__STATE__)==64?(S0CFG=S0CFG|(URM0X3)):(S0CFG=S0CFG&(~URM0X3)))


/**
*******************************************************************************
* @brief       UART0 Serial Reception
* @details     Set REN0
* @param[in]  \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasyEnableSerialReception(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasyEnableSerialReception(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(REN0=1):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(REN0=1):_nop_());\
    ;)



/**
*******************************************************************************
* @brief       UART0 Serial Reception
* @details     Clear REN0
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasyDisableSerialReception(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasyDisableSerialReception(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(REN0=0):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(REN0=0):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Mode Select
* @details     Set SM30
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return       None
* @note         None
* @par         Example
* @code
__DRV_URT0_EasySetSM30(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetSM30(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CFG=S0CFG&(~SM30)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Mode Select
* @details     Set SM00
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetSM00(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasySetSM00(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(SM00_FE=0):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(SM00_FE=0):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Mode Select
* @details     Set SM10
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetSM10(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasySetSM10(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(SM10=1):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(SM10=1):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 S0CR1 Access Enable.
* @details     Set SMOD3
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetSMOD3(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasySetSMOD3(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD3)):_nop_());\
    ;)

/**
*******************************************************************************
* @brief       UART0 S0BRG Clock Source
* @details     Set S0TX12
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        Before set S0TX12 , set SMOD3=1 first
* @par         Example
* @code
__DRV_URT0_EasySetS0TX12(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0TX12(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CR1=S0CR1|(S0TX12)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Receive Clock
* @details     Set S0RCK
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetS0RCK(URT0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0RCK(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CR1=S0CR1&(~S0RCK)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CR1=S0CR1|(S0RCK)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Transmit Clock
* @details     Set S0TCK
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
___DRV_URT0_EasySetS0TCK(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0TCK(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TCK)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CR1=S0CR1|(S0TCK)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Data Order
* @details     Set S0DOR
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetS0DOR(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0DOR(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CFG=S0CFG|(S0DOR)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CFG=S0CFG&(~S0DOR)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Enhance Baud Rate
* @details     Set SMOD1
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetSMOD1(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetSMOD1(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(PCON0=PCON0&(~SMOD1)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Enhance Baud Rate.
* @details     Set SMOD2
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetSMOD2(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetSMOD2(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CFG=S0CFG|(SMOD2)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief      UART0  Baud Rate Generator Reload Register
* @details    Write S0BRT
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        Before write S0BRT and S0BRC,S0BRG operation stop first
* @par         Example
* @code
__DRV_URT0_EasySetS0BRT(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

///@cond __DRV_URT0_EasySetS0BRT
//                                                              //error
#define S0BRG_BRGRL_2400_1X_12000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_4800_1X_11059200_12T            0xFA        // 0%
#define S0BRG_BRGRL_9600_1X_11059200_12T            0xFD        // 0%
#define S0BRG_BRGRL_2400_1X_12000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_4800_1X_12000000_1T             0xB2        // 0.16%
#define S0BRG_BRGRL_9600_1X_12000000_1T             0xD9        // 0.16%
#define S0BRG_BRGRL_19200_1X_12000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_38400_1X_12000000_1T            0xF6        // -2.34%
#define S0BRG_BRGRL_57600_1X_11059200_1T            0xFA        // 0%
#define S0BRG_BRGRL_115200_1X_11059200_1T           0xFD        // 0%
#define S0BRG_BRGRL_2400_2X_12000000_12T            0xE6        // 0.16%
#define S0BRG_BRGRL_4800_2X_12000000_12T            0xF3        // 0.16%
#define S0BRG_BRGRL_9600_2X_11059200_12T            0xFA        // 0%
#define S0BRG_BRGRL_19200_2X_11059200_12T           0xFD        // 0%
#define S0BRG_BRGRL_57600_2X_11059200_12T           0xFF        // 0%
#define S0BRG_BRGRL_4800_2X_12000000_1T             0x64        // 0.16%
#define S0BRG_BRGRL_9600_2X_12000000_1T             0xB2        // 0.16%
#define S0BRG_BRGRL_19200_2X_12000000_1T            0xD9        // 0.16%
#define S0BRG_BRGRL_38400_2X_12000000_1T            0xEC        // -2.34%
#define S0BRG_BRGRL_57600_2X_12000000_1T            0xF3        // 0.16%
#define S0BRG_BRGRL_115200_2X_11059200_1T           0xFA        // 0%
#define S0BRG_BRGRL_230400_2X_11059200_1T           0xFD        // 0%
#define S0BRG_BRGRL_250000_2X_12000000_1T           0xFD        // 0%
#define S0BRG_BRGRL_750000_2X_12000000_1T           0xFF        // 0%
///@endcond

#define __DRV_URT0_EasySetS0BRT(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0BRT=S0BRG_BRGRL_115200_2X_11059200_1T):_nop_());\
    ;)


/**
*******************************************************************************
* @brief      UART0  Baud Rate Generator Reload Register
* @details    Write S0BRC
* @param[in]  \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        Before write S0BRT and S0BRC,S0BRG operation stop first
* @par         Example
* @code
__DRV_URT0_EasySetS0BRC(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0BRC(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_9600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_19200_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_57600_2X_12000000_1T):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0BRC=S0BRG_BRGRL_115200_2X_11059200_1T):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 S0BRG Operation Enable
* @details     Set S0TR
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        Before write S0BRT and S0BRC,S0BRG operation stop first
* @par         Example
* @code
__DRV_URT0_EasySetS0TR_Start(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0TR_Start(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CR1=S0CR1|(S0TR)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 S0BRG Operation Disable
* @details     Set S0TR
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        Before write S0BRT and S0BRC,S0BRG operation stop first
* @par         Example
* @code
__DRV_URT0_EasySetS0TR_Stop(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0TR_Stop(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(S0CR1=S0CR1&(~S0TR)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Pin Config
* @details     Set S0PS0
* @param[in]    \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetS0PS0(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/


#define __DRV_URT0_EasySetS0PS0(__SELECT__)\
    MWT(\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(AUXR3=AUXR3&(~S0PS0)):_nop_());\
    ;)


/**
*******************************************************************************
* @brief       UART0 Pin Config
* @details     Set S0PS1
* @param[in]   \_\_SELECT\_\_ :
*  @arg\b       UART0_8BIT_CONFIG0 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG1 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG2 : 9600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG3 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG4 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG5 : 9600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG6 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG7 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG8 : 19200 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG9 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG10 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG11 : 19200 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG12 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG13 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG14 : 57600 12MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG15 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG16 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG17 : 57600 12MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG18 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG19 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG20 : 115200 11.0592MHz 8bit LSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG21 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG22 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Rx only SYSCLK/1 double baud rate S0BRG
*  @arg\b       UART0_8BIT_CONFIG23 : 115200 11.0592MHz 8bit MSB Rx p30 Tx p31 Tx/Rx both SYSCLK/1 double baud rate S0BRG
* @return      None
* @note        None
* @par         Example
* @code
__DRV_URT0_EasySetS0PS1(UART0_8BIT_CONFIG0)
* @endcode
*******************************************************************************
*/

#define __DRV_URT0_EasySetS0PS1(__SELECT__)\
    MWT(\
        __DRV_SFR_PageIndex(7);\
        ((__SELECT__^UART0_SELECT0)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT1)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT2)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT3)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT4)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT5)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT6)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT7)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT8)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT9)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT10)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT11)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT12)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT13)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT14)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT15)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT16)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT17)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT18)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT19)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT20)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT21)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT22)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):\
        (__SELECT__^UART0_SELECT23)==OPTION_MATCH?(AUXR10=AUXR10&(~S0PS1)):_nop_());\
        __DRV_SFR_PageIndex(0);\
    ;)



#endif










