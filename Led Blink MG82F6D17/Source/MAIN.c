/*********************************************************************
    Project:MG82F6D17-DEMO
    Author:Debashis
			MG82F6D17 SSOP20
			CpuCLK=12MHz, SysCLK=12MHz
		Description:
				IO Mode 
		Note:

    Creat time::
    Modify::
    
*********************************************************************/
#include "MG82F6D17_CONFIG.h" // Add in the config header otherwise the code will not compile

#define MCU_SYSCLK		12000000  //we define the internal clock frequency
#define MCU_CPUCLK		(MCU_SYSCLK) // this stateent is internally excuted inside the library and sets the clock to 12MHz
#define LED_PIN		P34 // We define the P3.4 pin as Led Pin (We have connected an LED on this pin)


/**
 an workaround for delay in the system as its provided by megawin themself 
 this statement takes in one 8-bit unsifgend number and depending upon the clock frequency 
 executes a certain number of NOP's to make an jely bean delay
 
Function:     	void DelayXms(u16 xMs)
Description:    dealy£¬unit:ms
Input:     			u16 xMs -> *1ms  (1~65535)
Output: 
 
**/
void DelayXus(u8 xUs) //
{
	while(xUs!=0)
	{
#if (MCU_CPUCLK>=11059200)
		_nop_();
#endif
#if (MCU_CPUCLK>=14745600)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=16000000)
		_nop_();
#endif

#if (MCU_CPUCLK>=22118400)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=24000000)
		_nop_();
		_nop_();
#endif		
#if (MCU_CPUCLK>=29491200)
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
		_nop_();
#endif
#if (MCU_CPUCLK>=32000000)
		_nop_();
		_nop_();
#endif

		xUs--;
	}
}

/*************************************************

this DelayXms call the previous DelayXus a certin number of time in order to virtully
make that amout of dely.

Function:     	void DelayXms(u16 xMs)
Description:    dealy£¬unit:ms
Input:     			u16 xMs -> *1ms  (1~65535)
Output:     
*************************************************/
void DelayXms(u16 xMs)
{
	while(xMs!=0)
	{
		DelayXus(200);//  when this function is called the first function in the DelayXus gets executed. 
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		DelayXus(200);
		xMs--; // run this loop until this function reaches zero
	}
}


void main ()
{
		
    System_Init(); // Initilize the sysem that is required by internal process

    while(1)
    {
			LED_PIN = 0; // make the LEDpin low 
			DelayXms(1000); // Delay for 1S and 
			LED_PIN = 1; // Make the Led pin High
			DelayXms(1000); // Delay for 1S
		}
}
